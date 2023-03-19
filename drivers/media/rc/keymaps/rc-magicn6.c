/* Keytable for Magicsee N6 MAX IR Remote Controller
 *
 * Copyright (c) 2019 LibreELEC 
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#include <media/rc-map.h>
#include <linux/module.h>

static struct rc_map_table magicn6[] = {
	{ 0x140, KEY_POWER },
	{ 0x14c, KEY_MENU },
	{ 0x116, KEY_UP },
	{ 0x11a, KEY_DOWN },
	{ 0x151, KEY_LEFT },
	{ 0x150, KEY_RIGHT },
	{ 0x113, KEY_OK },
	{ 0x110, KEY_VOLUMEDOWN },
	{ 0x141, KEY_MUTE },
	{ 0x118, KEY_VOLUMEUP },
	{ 0x119, KEY_BACK },
	{ 0x111, KEY_HOME },
	{ 0x14e, KEY_NUMERIC_1 },
	{ 0x10d, KEY_NUMERIC_2 },
	{ 0x10c, KEY_NUMERIC_3 },
	{ 0x14a, KEY_NUMERIC_4 },
	{ 0x109, KEY_NUMERIC_5 },
	{ 0x108, KEY_NUMERIC_6 },
	{ 0x146, KEY_NUMERIC_7 },
	{ 0x105, KEY_NUMERIC_8 },
	{ 0x104, KEY_NUMERIC_9 },
	{ 0x101, KEY_NUMERIC_0 },
	{ 0x142, KEY_BACKSPACE },
	{ 0x106, KEY_WWW },
	{ 0x100, KEY_INFO },
	{ 0x143, KEY_RED },
	{ 0x10f, KEY_GREEN },
	{ 0x156, KEY_YELLOW },
	{ 0x157, KEY_BLUE },
};

static struct rc_map_list magicn6_map = {
	.map = {
		.scan    = magicn6,
		.size    = ARRAY_SIZE(magicn6),
		.rc_type = RC_TYPE_NEC,
		.name    = RC_MAP_MAGICN6,
	}
};

static int __init init_rc_map_magicn6(void)
{
	return rc_map_register(&magicn6_map);
}

static void __exit exit_rc_map_magicn6(void)
{
	rc_map_unregister(&magicn6_map);
}

module_init(init_rc_map_magicn6)
module_exit(exit_rc_map_magicn6)

MODULE_LICENSE("GPL");
MODULE_AUTHOR("LibreELEC");
