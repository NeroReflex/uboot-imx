// SPDX-License-Identifier: GPL-2.0+
/*
 * Copyright (C) 2016 Freescale Semiconductor, Inc.
 * Copyright 2018 NXP
 * Copyright 2020-2025 Variscite Ltd.
 */

#include <env.h>
#include <common.h>
#include <splash.h>
#include <mmc.h>

#ifdef CONFIG_SPLASH_SCREEN
static int check_env(char *var, char *val)
{
	char *env_val = env_get(var);

	if (env_val && !strcmp(env_val, val))
		return 1;

	return 0;
}

static void splash_set_source(void)
{
	if (!check_env("splashsourceauto", "yes"))
		return;

	if (mmc_get_env_dev() == env_get_ulong("emmc_dev", 10, 0))
		env_set("splashsource", "emmc");
	else if (mmc_get_env_dev() == env_get_ulong("sd_dev", 10, 0))
		env_set("splashsource", "sd");
}

int splash_screen_prepare(void)
{
	char sd_devpart[5];
	char emmc_devpart[5];
	u32 sd_part, emmc_part;

	sd_part = emmc_part = env_get_ulong("mmcpart", 10, 0);

	sprintf(sd_devpart, "%ld:%d", env_get_ulong("sd_dev", 10, 0), sd_part);
	sprintf(emmc_devpart, "%ld:%d", env_get_ulong("emmc_dev", 10, 0), emmc_part);

	struct splash_location splash_locations[] = {
		{
			.name = "sd",
			.storage = SPLASH_STORAGE_MMC,
			.flags = SPLASH_STORAGE_FS,
			.devpart = sd_devpart,
		},
		{
			.name = "emmc",
			.storage = SPLASH_STORAGE_MMC,
			.flags = SPLASH_STORAGE_FS,
			.devpart = emmc_devpart,
		}
	};

	splash_set_source();

	return splash_source_load(splash_locations, ARRAY_SIZE(splash_locations));
}
#endif
