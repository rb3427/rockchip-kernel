/* Keytable for RC-k24 IR Remote Controller
 *
 * Copyright (c) 2017 Nagrace
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#include <media/rc-map.h>
#include <linux/module.h>

static struct rc_map_table k24[] = {
	{ 0x404000, KEY_NUMERIC_0 },
	{ 0x404001, KEY_NUMERIC_1 },
	{ 0x404002, KEY_NUMERIC_2 },
	{ 0x404003, KEY_NUMERIC_3 },
	{ 0x404004, KEY_NUMERIC_4 },
	{ 0x404005, KEY_NUMERIC_5 },
	{ 0x404006, KEY_NUMERIC_6 },
	{ 0x404007, KEY_NUMERIC_7 },
	{ 0x404008, KEY_NUMERIC_8 },
	{ 0x404009, KEY_NUMERIC_9 },
	{ 0x404043, KEY_MUTE },
	{ 0x40400b, KEY_UP },
	{ 0x40400c, KEY_BACKSPACE },
	{ 0x40400d, KEY_OK },
	{ 0x40400e, KEY_DOWN },
	{ 0x404010, KEY_LEFT },
	{ 0x404011, KEY_RIGHT },
	{ 0x404017, KEY_VOLUMEDOWN },
	{ 0x404018, KEY_VOLUMEUP },
	{ 0x40401a, KEY_HOME },
	{ 0x404045, KEY_MENU },
	{ 0x404042, KEY_BACK },
	{ 0x404047, KEY_INFO },
	{ 0x40404d, KEY_POWER },
};

static struct rc_map_list k24_map = {
	.map = {
		.scan    = k24,
		.size    = ARRAY_SIZE(k24),
		.rc_type = RC_TYPE_NEC,
		.name    = RC_MAP_k24,
	}
};

static int __init init_rc_map_k24(void)
{
	return rc_map_register(&k24_map);
}

static void __exit exit_rc_map_k24(void)
{
	rc_map_unregister(&k24_map);
}

module_init(init_rc_map_k24)
module_exit(exit_rc_map_k24)

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Nagrace");
