/*
 * Copyright (c) 2020 Samsung Electronics Co., Ltd All Rights Reserved
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include "core/cred.h"
#include "core/deploy_tzar.h"
#include "core/kthread_pool.h"
#include "core/ree_time.h"
#include "core/subsystem.h"
#include "core/uiwshmem.h"
#include "core/uiwsock.h"
#include "debug/kmemleak.h"
#include "debug/pmf.h"
#include "debug/profiler.h"
#include "extensions/boost.h"
#include "extensions/cpufreq_trans.h"
#include "extensions/hotplug.h"
#include "extensions/ion_fd2phys.h"
#include "extensions/irs.h"
#include "extensions/scma.h"

struct tzdev_init_exit_table {
	initcall_t init;
	exitcall_t exit;
};

#define DECLARE_INIT_CALL(init_fn) \
	{ .init = init_fn, .exit = NULL }

#define DECLARE_INIT_EXIT_CALL(init_fn, exit_fn) \
	{ .init = init_fn, .exit = exit_fn }

static const struct tzdev_init_exit_table table[] = {
	DECLARE_INIT_CALL(tz_kthread_pool_init),
#ifdef CONFIG_TZDEV_DEPLOY_TZAR
	DECLARE_INIT_CALL(tz_deploy_tzar_init),
#endif
	DECLARE_INIT_CALL(tz_uiwsock_init),
	DECLARE_INIT_CALL(tz_uiwshmem_init_call),
#ifdef CONFIG_TZDEV_HOTPLUG
	DECLARE_INIT_CALL(tz_hotplug_init),
#endif
#ifdef CONFIG_TZDEV_BOOST
	DECLARE_INIT_CALL(tz_boost_init),
#endif
#ifdef CONFIG_TZ_SCMA
	DECLARE_INIT_CALL(tz_scma_init),
#endif
#ifdef CONFIG_TZPROFILER
	DECLARE_INIT_CALL(tzprofiler_init),
#endif
#ifdef CONFIG_TZ_PMF
	DECLARE_INIT_CALL(tz_pmf_init),
#endif
	DECLARE_INIT_EXIT_CALL(tz_ree_time_init, tz_ree_time_fini),
#ifdef CONFIG_ION_FD2PHYS
	DECLARE_INIT_EXIT_CALL(ionfd2phys_init, ionfd2phys_exit),
#endif
#ifdef CONFIG_TZIRS
	DECLARE_INIT_EXIT_CALL(tzirs_init, tzirs_exit),
#endif
#ifdef CONFIG_TZDEV_CPUFREQ_TRANSITION
	DECLARE_INIT_CALL(cpufreq_trans_init),
#endif
#ifdef CONFIG_TZDEV_DEBUG
	DECLARE_INIT_CALL(tz_kmemleak_init),
#endif
};

int __init tzdev_call_init_array(void)
{
	unsigned int i, j;
	int ret;

	for (i = 0; i < ARRAY_SIZE(table); i++) {
		ret = table[i].init();
		if (ret)
			goto err;
	}

	return 0;

err:
	for (j = 0; j < i; j++) {
		if (table[j].exit)
			table[j].exit();
	}

	return ret;
}
