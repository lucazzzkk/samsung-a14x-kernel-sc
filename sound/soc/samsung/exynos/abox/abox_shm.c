// SPDX-License-Identifier: GPL-2.0-or-later
/*
 * ALSA SoC - Samsung Abox Shared Memory module
 *
 * Copyright (c) 2019 Samsung Electronics Co. Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/compiler.h>
#include <linux/device.h>
#include "abox_shm.h"

static void *shm_base;
static size_t shm_size;

void abox_shm_init(void *base, size_t size)
{
	shm_base = base;
	shm_size = size;
}

void abox_shm_alloc(struct device *dev)
{
	shm_base = devm_kzalloc(dev, SZ_4K, GFP_KERNEL);
	shm_size = SZ_4K;
}

u8 abox_shm_readb(unsigned int offset)
{
	return READ_ONCE(*(u8 *)(shm_base + offset));
}

u16 abox_shm_readw(unsigned int offset)
{
	return READ_ONCE(*(u16 *)(shm_base + offset));
}

u32 abox_shm_readl(unsigned int offset)
{
	return READ_ONCE(*(u32 *)(shm_base + offset));
}

u64 abox_shm_readq(unsigned int offset)
{
	return READ_ONCE(*(u64 *)(shm_base + offset));
}

void abox_shm_writeb(u8 value, unsigned int offset)
{
	WRITE_ONCE(*(u8 *)(shm_base + offset), value);
}

void abox_shm_writew(u16 value, unsigned int offset)
{
	WRITE_ONCE(*(u16 *)(shm_base + offset), value);
}

void abox_shm_writel(u32 value, unsigned int offset)
{
	WRITE_ONCE(*(u32 *)(shm_base + offset), value);
}

void abox_shm_writeq(u64 value, unsigned int offset)
{
	WRITE_ONCE(*(u64 *)(shm_base + offset), value);
}
