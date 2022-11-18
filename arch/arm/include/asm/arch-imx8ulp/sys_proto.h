/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright 2021 NXP
 */

#ifndef __ARCH_IMX8ULP_SYS_PROTO_H
#define __ARCH_NMX8ULP_SYS_PROTO_H

#include <asm/mach-imx/sys_proto.h>

extern unsigned long rom_pointer[];

enum boot_device get_boot_device(void);
enum bt_mode get_boot_mode(void);
void set_lpav_qos(void);
void load_lposc_fuse(void);
bool m33_image_booted(void);
int m33_image_handshake(ulong timeout_ms);
#endif
