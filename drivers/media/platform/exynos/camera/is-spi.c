/*
 * driver for FIMC-IS SPI
 *
 * Copyright (c) 2011, Samsung Electronics. All rights reserved
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/spi/spi.h>
#include <linux/gpio.h>

#include "is-config.h"
#include "is-core.h"
#include "is-dt.h"

#define STREAM_TO_U16(var16, p)	{(var16) = ((u16)(*((u8 *)p+1)) + \
				((u8)(*((u8 *)p) << 8))); }

int is_spi_s_pin(struct is_spi *spi, int state)
{
	struct pinctrl_state *ssn_pin;
	struct pinctrl_state *parent_pin;
	int ret = 0, ret2 = 0;

	if (!spi->use_spi_pinctrl)
		return 0;

	switch (state) {
	case SPI_PIN_STATE_HOST:
		parent_pin = spi->parent_pin_fn;
		ssn_pin = spi->pin_ssn_out;
		break;
	case SPI_PIN_STATE_ISP_FW:
		parent_pin = spi->parent_pin_fn;
		ssn_pin = spi->pin_ssn_fn;
		break;
	case SPI_PIN_STATE_IDLE_INPD:
		parent_pin = spi->parent_pin_out;
		ssn_pin = spi->pin_ssn_inpd;
		break;
	case SPI_PIN_STATE_IDLE_INPU:
		parent_pin = spi->parent_pin_out;
		ssn_pin = spi->pin_ssn_inpu;
		break;
	case SPI_PIN_STATE_IDLE:
	default:
		parent_pin = spi->parent_pin_out;
		ssn_pin = spi->pin_ssn_out;
		break;
	}

	ret = pinctrl_select_state(spi->parent_pinctrl, parent_pin);
	if (ret < 0) {
		pr_err("pinctrl_select_state is fail(%d)\n", ret);
	}

	if (ssn_pin != NULL) {
		ret2 = pinctrl_select_state(spi->pinctrl, ssn_pin);
		if (ret2 < 0) {
			pr_err("pinctrl_select_state is fail(%d)\n", ret2);
			ret |= ret2;
		}
	} else {
		info("pinctrl_select_state(%d) is not found", state);
		ret = 0;
	}

	return ret;
}

#ifdef CONFIG_SPI
int is_spi_reset(struct is_spi *spi)
{
	int ret = 0;
	unsigned char req_rst[1] = { 0x99 };
	struct spi_transfer t_c;
	struct spi_transfer t_r;
	struct spi_message m;

	FIMC_BUG(!spi->device);

	memset(&t_c, 0x00, sizeof(t_c));
	memset(&t_r, 0x00, sizeof(t_r));

	t_c.tx_buf = req_rst;
	t_c.len = 1;
	t_c.cs_change = 0;

	spi_message_init(&m);
	spi_message_add_tail(&t_c, &m);

	ret = spi_sync(spi->device, &m);
	if (ret) {
		err("spi sync error - can't get device information");
		ret = -EIO;
		goto p_err;
	}

p_err:
	return ret;
}

int is_spi_read(struct is_spi *spi, void *buf, u32 addr, size_t size)
{
	int ret = 0;
	unsigned char req_data[4];
	struct spi_transfer t_c;
	struct spi_transfer t_r;
	struct spi_message m;

	FIMC_BUG(!spi->device);

	memset(&t_c, 0x00, sizeof(t_c));
	memset(&t_r, 0x00, sizeof(t_r));

	req_data[0] = 0x3;
	req_data[1] = (addr & 0xFF0000) >> 16;
	req_data[2] = (addr & 0xFF00) >> 8;
	req_data[3] = (addr & 0xFF);

	t_c.tx_buf = req_data;
	t_c.len = 4;
	t_c.cs_change = 1;
	t_c.bits_per_word = 32;

	t_r.rx_buf = buf;
	t_r.len = (u32)size;
	t_r.cs_change = 0;

	switch (size % 4) {
	case 0:
		t_r.bits_per_word = 32;
		break;
	case 2:
		t_r.bits_per_word = 16;
		break;
	default:
		t_r.bits_per_word = 8;
		break;
	}

	spi_message_init(&m);
	spi_message_add_tail(&t_c, &m);
	spi_message_add_tail(&t_r, &m);

	ret = spi_sync(spi->device, &m);
	if (ret) {
		err("spi sync error - can't read data");
		ret = -EIO;
		goto p_err;
	}

p_err:
	return ret;
}

static int is_spi_dev_parse_dt(struct is_spi *spi)
{
	int ret = 0;
	struct device_node *np;
	struct device *dev;
	struct pinctrl_state *s;

	FIMC_BUG(!spi);

	dev = &spi->device->dev;

	np = of_find_compatible_node(NULL,NULL, spi->node);
	if(np == NULL) {
		probe_err("compatible: fail to read, spi_parse_dt");
		ret = -ENODEV;
		goto p_err;
	}

	spi->use_spi_pinctrl = of_property_read_bool(np, "use_spi_pinctrl");
	if (!spi->use_spi_pinctrl) {
		probe_info("%s: spi dt parsing skipped\n", __func__);
		goto p_err;
	}

	spi->pinctrl = devm_pinctrl_get(dev);
	if (IS_ERR(spi->pinctrl)) {
		probe_err("devm_pinctrl_get is fail");
		goto p_err;
	}

	s = pinctrl_lookup_state(spi->pinctrl, "ssn_out");
	if (IS_ERR_OR_NULL(s)) {
		probe_info("pinctrl_lookup_state(%s) is not found", "ssn_out");
		spi->pin_ssn_out = NULL;
	} else {
		spi->pin_ssn_out = s;
	}

	s = pinctrl_lookup_state(spi->pinctrl, "ssn_fn");
	if (IS_ERR_OR_NULL(s)) {
		probe_info("pinctrl_lookup_state(%s) is not found", "ssn_fn");
		spi->pin_ssn_fn = NULL;
	} else {
		spi->pin_ssn_fn = s;
	}

	s = pinctrl_lookup_state(spi->pinctrl, "ssn_inpd");
	if (IS_ERR_OR_NULL(s)) {
		probe_info("pinctrl_lookup_state(%s) is not found", "ssn_inpd");
		spi->pin_ssn_inpd = NULL;
	} else {
		spi->pin_ssn_inpd = s;
	}

	s = pinctrl_lookup_state(spi->pinctrl, "ssn_inpu");
	if (IS_ERR_OR_NULL(s)) {
		probe_info("pinctrl_lookup_state(%s) is not found", "ssn_inpu");
		spi->pin_ssn_inpu = NULL;
	} else {
		spi->pin_ssn_inpu = s;
	}

	spi->parent_pinctrl = devm_pinctrl_get(spi->device->dev.parent->parent);

	s = pinctrl_lookup_state(spi->parent_pinctrl, "spi_out");
	if (IS_ERR_OR_NULL(s)) {
		err("pinctrl_lookup_state(%s) is failed", "spi_out");
		ret = -EINVAL;
		goto p_err;
	}

	spi->parent_pin_out = s;

	s = pinctrl_lookup_state(spi->parent_pinctrl, "spi_fn");
	if (IS_ERR_OR_NULL(s)) {
		err("pinctrl_lookup_state(%s) is failed", "spi_fn");
		ret = -EINVAL;
		goto p_err;
	}

	spi->parent_pin_fn = s;

p_err:
	return ret;
}

static int is_spi_probe(struct spi_device *device)
{
	int ret = 0;
	struct is_core *core;
	struct is_spi *spi;

	core = pablo_get_core_async();
	if (!core) {
		probe_err("core is NULL");
		ret = -EINVAL;
		goto p_err;
	}

	/* spi->bits_per_word = 16; */
	if (spi_setup(device)) {
		probe_err("failed to setup spi for is_spi\n");
		ret = -EINVAL;
		goto p_err;
	}

	if (!strncmp(device->modalias, "is_spi0", 12)) {
		spi = &core->spi0;
		spi->node = "samsung,is_spi0";
		spi->device = device;
		ret = is_spi_dev_parse_dt(spi);
		if (ret) {
			probe_err("[%s] of_is_spi_dt parse dt failed\n", __func__);
			return ret;
		}
	}

	if (!strncmp(device->modalias, "is_spi1", 12)) {
		spi = &core->spi1;
		spi->node = "samsung,is_spi1";
		spi->device = device;
		ret = is_spi_dev_parse_dt(spi);
		if (ret) {
			probe_err("[%s] of_is_spi_dt parse dt failed\n", __func__);
			return ret;
		}
	}

p_err:
	probe_info("[SPI] %s(%s):%d\n", __func__, device->modalias, ret);
	return ret;
}

static int is_spi_remove(struct spi_device *spi)
{
	return 0;
}

static const struct of_device_id exynos_is_spi_match[] = {
	{
		.compatible = "samsung,is_spi0",
	},
	{
		.compatible = "samsung,is_spi1",
	},
	{},
};
MODULE_DEVICE_TABLE(of, exynos_is_spi_match);

static struct spi_driver pablo_spi_driver = {
	.driver = {
		.name = "is_spi",
		.bus = &spi_bus_type,
		.owner = THIS_MODULE,
		.of_match_table = exynos_is_spi_match,
	},
	.probe	= is_spi_probe,
	.remove	= is_spi_remove,
};
#ifdef MODULE
static int pablo_spi_init(void)
{
	int ret;

	ret = spi_register_driver(&pablo_spi_driver);
	if (ret)
		err("pablo_spi_driver register failed(%d)", ret);

	return ret;
}
module_init(pablo_spi_init);

void pablo_spi_exit(void)
{
	spi_unregister_driver(&pablo_spi_driver);
}
module_exit(pablo_spi_exit);
#else
module_spi_driver(pablo_spi_driver);
#endif

#endif
MODULE_DESCRIPTION("FIMC-IS SPI driver");
MODULE_LICENSE("GPL");
