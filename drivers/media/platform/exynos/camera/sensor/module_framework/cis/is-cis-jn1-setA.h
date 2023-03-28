/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2021 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_JN1_SET_A_H
#define IS_CIS_JN1_SET_A_H

#include "is-cis.h"
#include "is-cis-jn1.h"

/*
 * Reference File : JN1_EVT0.0_Setfile_20211108_ver0.12.xlsx
 * EXT_MCLK : 26MHz
 */

const u32 sensor_jn1_setfile_A_Global[] = {
	/*Init and TnP*/
	0xFCFC, 0x4000, 0x02,
	0x6010, 0x0001, 0x02,
	IXC_MODE_DELAY, 5000, 0x00,
	0x6226, 0x0001, 0x02,
	0x6028, 0x2400, 0x02,
	0x602A, 0x801C, 0x02,
	0x6F12, 0x1743, 0x02,
	0x6F12, 0x01FC, 0x02,
	0x6F12, 0xE702, 0x02,
	0x6F12, 0xA3F3, 0x02,
	0x6F12, 0xB787, 0x02,
	0x6F12, 0x0024, 0x02,
	0x6F12, 0x1307, 0x02,
	0x6F12, 0xC00E, 0x02,
	0x6F12, 0x9387, 0x02,
	0x6F12, 0xC701, 0x02,
	0x6F12, 0xB785, 0x02,
	0x6F12, 0x0024, 0x02,
	0x6F12, 0x3755, 0x02,
	0x6F12, 0x0020, 0x02,
	0x6F12, 0xBA97, 0x02,
	0x6F12, 0x0146, 0x02,
	0x6F12, 0x3777, 0x02,
	0x6F12, 0x0024, 0x02,
	0x6F12, 0x9385, 0x02,
	0x6F12, 0x4507, 0x02,
	0x6F12, 0x1305, 0x02,
	0x6F12, 0xC504, 0x02,
	0x6F12, 0x2320, 0x02,
	0x6F12, 0xF73C, 0x02,
	0x6F12, 0x9710, 0x02,
	0x6F12, 0x00FC, 0x02,
	0x6F12, 0xE780, 0x02,
	0x6F12, 0x603C, 0x02,
	0x6F12, 0xB787, 0x02,
	0x6F12, 0x0024, 0x02,
	0x6F12, 0x23A0, 0x02,
	0x6F12, 0xA710, 0x02,
	0x6F12, 0x4928, 0x02,
	0x6F12, 0xE177, 0x02,
	0x6F12, 0x3747, 0x02,
	0x6F12, 0x0024, 0x02,
	0x6F12, 0x9387, 0x02,
	0x6F12, 0x5776, 0x02,
	0x6F12, 0x2317, 0x02,
	0x6F12, 0xF782, 0x02,
	0x6F12, 0x1743, 0x02,
	0x6F12, 0x01FC, 0x02,
	0x6F12, 0x6700, 0x02,
	0x6F12, 0xE3F0, 0x02,
	0x6F12, 0x1743, 0x02,
	0x6F12, 0x01FC, 0x02,
	0x6F12, 0xE702, 0x02,
	0x6F12, 0x83EC, 0x02,
	0x6F12, 0xB787, 0x02,
	0x6F12, 0x0024, 0x02,
	0x6F12, 0x83A4, 0x02,
	0x6F12, 0x0710, 0x02,
	0x6F12, 0xAA89, 0x02,
	0x6F12, 0x2E8A, 0x02,
	0x6F12, 0x0146, 0x02,
	0x6F12, 0xA685, 0x02,
	0x6F12, 0x1145, 0x02,
	0x6F12, 0x9780, 0x02,
	0x6F12, 0xFFFB, 0x02,
	0x6F12, 0xE780, 0x02,
	0x6F12, 0xA031, 0x02,
	0x6F12, 0xB787, 0x02,
	0x6F12, 0x0024, 0x02,
	0x6F12, 0x03C7, 0x02,
	0x6F12, 0x4710, 0x02,
	0x6F12, 0x3E84, 0x02,
	0x6F12, 0x0149, 0x02,
	0x6F12, 0x11CF, 0x02,
	0x6F12, 0x3767, 0x02,
	0x6F12, 0x0024, 0x02,
	0x6F12, 0x0357, 0x02,
	0x6F12, 0x2777, 0x02,
	0x6F12, 0xB777, 0x02,
	0x6F12, 0x0024, 0x02,
	0x6F12, 0x9387, 0x02,
	0x6F12, 0x07C7, 0x02,
	0x6F12, 0x0E07, 0x02,
	0x6F12, 0x03D9, 0x02,
	0x6F12, 0x871C, 0x02,
	0x6F12, 0x2394, 0x02,
	0x6F12, 0xE71C, 0x02,
	0x6F12, 0xD285, 0x02,
	0x6F12, 0x4E85, 0x02,
	0x6F12, 0x97D0, 0x02,
	0x6F12, 0xFFFB, 0x02,
	0x6F12, 0xE780, 0x02,
	0x6F12, 0xA0F8, 0x02,
	0x6F12, 0x8347, 0x02,
	0x6F12, 0x4410, 0x02,
	0x6F12, 0x89C7, 0x02,
	0x6F12, 0xB777, 0x02,
	0x6F12, 0x0024, 0x02,
	0x6F12, 0x239C, 0x02,
	0x6F12, 0x27E3, 0x02,
	0x6F12, 0x0546, 0x02,
	0x6F12, 0xA685, 0x02,
	0x6F12, 0x1145, 0x02,
	0x6F12, 0x9780, 0x02,
	0x6F12, 0xFFFB, 0x02,
	0x6F12, 0xE780, 0x02,
	0x6F12, 0xA02C, 0x02,
	0x6F12, 0x1743, 0x02,
	0x6F12, 0x01FC, 0x02,
	0x6F12, 0x6700, 0x02,
	0x6F12, 0xA3E8, 0x02,
	0x6F12, 0xE177, 0x02,
	0x6F12, 0x3747, 0x02,
	0x6F12, 0x0024, 0x02,
	0x6F12, 0x9387, 0x02,
	0x6F12, 0x5776, 0x02,
	0x6F12, 0x2318, 0x02,
	0x6F12, 0xF782, 0x02,
	0x6F12, 0x8280, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x35CC, 0x02,
	0x6F12, 0x1C80, 0x02,
	0x6F12, 0x0024, 0x02,
	/* Global setting*/
	0x6000, 0x0005, 0x02,
	0xFCFC, 0x2400, 0x02,
	0x0650, 0x0006, 0x02,
	0x0654, 0x0000, 0x02,
	0x065A, 0x0000, 0x02,
	0x0674, 0x0005, 0x02,
	0x0676, 0x0005, 0x02,
	0x0678, 0x0005, 0x02,
	0x067A, 0x0005, 0x02,
	0x0684, 0x0140, 0x02,
	0x0688, 0x0140, 0x02,
	0x06BC, 0x0110, 0x02,
	0x0A76, 0x0010, 0x02,
	0x0AEE, 0x0010, 0x02,
	0x0B66, 0x0010, 0x02,
	0x0BDE, 0x0010, 0x02,
	0x0C56, 0x0010, 0x02,
	0x0CF2, 0x0100, 0x02,
	0x120E, 0x0010, 0x02,
	0x1236, 0x0000, 0x02,
	0x1354, 0x0001, 0x02,
	0x1356, 0x1770, 0x02,
	0x1378, 0x3860, 0x02,
	0x137A, 0x3870, 0x02,
	0x137C, 0x3880, 0x02,
	0x1386, 0x000B, 0x02,
	0x13B2, 0x0000, 0x02,
	0x1A0A, 0x0A4C, 0x02,
	0x1A0E, 0x0096, 0x02,
	0x1A28, 0x004C, 0x02,
	0x1B26, 0x806F, 0x02,
	0x2042, 0x001A, 0x02,
	0x2148, 0x0001, 0x02,
	0x21E4, 0x0004, 0x02,
	0x2210, 0x0134, 0x02,
	0x222E, 0x0100, 0x02,
	0x3570, 0x0000, 0x02,
	0x7F6C, 0x0001, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0136, 0x001A, 0x02,
	0x013E, 0x0000, 0x02,
	0xF44E, 0x0011, 0x02,
	0xF44C, 0x0B0B, 0x02,
	0xF44A, 0x0006, 0x02,
	0x0118, 0x0200, 0x02,
	0x011A, 0x0100, 0x02,
	0x6000, 0x0085, 0x02,
};

const u32 sensor_jn1_setfile_4SUM_4080x3060_30FPS[] = {
	0x6000, 0x0005, 0x02,
	0xFCFC, 0x2400, 0x02,
	0x06FA, 0x0010, 0x02,
	0x0710, 0x0200, 0x02,
	0x0712, 0x0408, 0x02,
	0x0714, 0x0001, 0x02,
	0x0718, 0x0100, 0x02,
	0x0786, 0x0177, 0x02,
	0x0812, 0x1000, 0x02,
	0x0874, 0x0001, 0x02,
	0x09C0, 0x0820, 0x02,
	0x09C4, 0x0020, 0x02,
	0x0A72, 0x0046, 0x02,
	0x0AEA, 0x0046, 0x02,
	0x0B62, 0x0046, 0x02,
	0x0BDA, 0x0046, 0x02,
	0x0BE8, 0x0030, 0x02,
	0x0BEA, 0x0030, 0x02,
	0x0C52, 0x0046, 0x02,
	0x0C60, 0x0030, 0x02,
	0x0C62, 0x0030, 0x02,
	0x0CB6, 0x0001, 0x02,
	0x11B8, 0x0001, 0x02,
	0x11F6, 0x2000, 0x02,
	0x1360, 0x0001, 0x02,
	0x1376, 0x0001, 0x02,
	0x139C, 0x0000, 0x02,
	0x139E, 0x0001, 0x02,
	0x13A0, 0x000A, 0x02,
	0x13A2, 0x2001, 0x02,
	0x13AE, 0x0101, 0x02,
	0x1444, 0x0020, 0x02,
	0x1446, 0x0020, 0x02,
	0x144C, 0x003F, 0x02,
	0x144E, 0x003F, 0x02,
	0x147C, 0x0010, 0x02,
	0x1480, 0x0010, 0x02,
	0x19E6, 0x0002, 0x02,
	0x19F4, 0x0606, 0x02,
	0x19F6, 0x0409, 0x02,
	0x19F8, 0x1010, 0x02,
	0x19FC, 0x000B, 0x02,
	0x19FE, 0x1C14, 0x02,
	0x1A02, 0x0018, 0x02,
	0x1A30, 0x0134, 0x02,
	0x1A3C, 0x0762, 0x02,
	0x1A46, 0x00B0, 0x02,
	0x1A48, 0x0262, 0x02,
	0x1A52, 0x00BF, 0x02,
	0x1A64, 0x0103, 0x02,
	0x1A66, 0x00FF, 0x02,
	0x1B28, 0x60A0, 0x02,
	0x1B5C, 0x0000, 0x02,
	0x2022, 0x0005, 0x02,
	0x2024, 0x0005, 0x02,
	0x2072, 0x0000, 0x02,
	0x2080, 0x0101, 0x02,
	0x2082, 0x00FF, 0x02,
	0x2084, 0x017F, 0x02,
	0x2086, 0x0100, 0x02,
	0x2088, 0x0180, 0x02,
	0x208A, 0x44D2, 0x02,
	0x208C, 0x44D2, 0x02,
	0x208E, 0xF414, 0x02,
	0x2090, 0x0000, 0x02,
	0x2092, 0x0000, 0x02,
	0x2094, 0x0000, 0x02,
	0x20BA, 0x1C12, 0x02,
	0x20BC, 0x1C11, 0x02,
	0x20BE, 0xF454, 0x02,
	0x212E, 0x0002, 0x02,
	0x21EC, 0x0000, 0x02,
	0x3574, 0x0060, 0x02,
	0x4A74, 0x0028, 0x02,
	0x4A78, 0x0000, 0x02,
	0x4A7A, 0x0000, 0x02,
	0x4A80, 0x0000, 0x02,
	0x4A82, 0x0000, 0x02,
	0x4A84, 0x0000, 0x02,
	0x4A86, 0x0000, 0x02,
	0x4A88, 0x0028, 0x02,
	0x4A8C, 0x0000, 0x02,
	0x4A8E, 0x0000, 0x02,
	0x4A94, 0x0006, 0x02,
	0x4A96, 0x0006, 0x02,
	0x4A98, 0x0006, 0x02,
	0x4A9A, 0x0006, 0x02,
	0x4A9C, 0x0006, 0x02,
	0x4A9E, 0x0006, 0x02,
	0x4AA0, 0x0006, 0x02,
	0x4AA2, 0x0006, 0x02,
	0x4AA4, 0x0006, 0x02,
	0x4AA6, 0x0006, 0x02,
	0x4AA8, 0x0006, 0x02,
	0x4AAA, 0x0006, 0x02,
	0x4AAC, 0x0006, 0x02,
	0x4AAE, 0x0006, 0x02,
	0x4AB0, 0x0006, 0x02,
	0x4AB2, 0x0006, 0x02,
	0x4D92, 0x0001, 0x02,
	0x4D94, 0x0100, 0x02,
	0x4D96, 0x03FF, 0x02,
	0x4D98, 0x100D, 0x02,
	0x4D9A, 0x100D, 0x02,
	0x4D9C, 0x0000, 0x02,
	0x4D9E, 0x0000, 0x02,
	0x4DA0, 0x0000, 0x02,
	0x4DA2, 0x0000, 0x02,
	0x7F6E, 0x002F, 0x02,
	0x7F70, 0x00FA, 0x02,
	0x7F72, 0x0024, 0x02,
	0x7F74, 0x00E5, 0x02,
	0x8104, 0x0001, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0114, 0x0103, 0x02,
	0x0116, 0x002B, 0x02,
	0x0300, 0x0600, 0x02,
	0x0302, 0x0100, 0x02,
	0x0304, 0x0400, 0x02,
	0x0306, 0x8200, 0x02,
	0x0308, 0x0800, 0x02,
	0x030A, 0x0100, 0x02,
	0x030C, 0x0000, 0x02,
	0x030E, 0x0400, 0x02,
	0x0310, 0x6F00, 0x02,
	0x0312, 0x0000, 0x02,
	0x0340, 0xED0D, 0x02,
	0x0342, 0x5014, 0x02,
	0x0344, 0x0000, 0x02,
	0x0346, 0x0C00, 0x02,
	0x0348, 0xFF1F, 0x02,
	0x034A, 0x1318, 0x02,
	0x034C, 0xF00F, 0x02,
	0x034E, 0xF40B, 0x02,
	0x0350, 0x0800, 0x02,
	0x0352, 0x0800, 0x02,
	0x0380, 0x0200, 0x02,
	0x0382, 0x0200, 0x02,
	0x0384, 0x0200, 0x02,
	0x0386, 0x0200, 0x02,
	0x080E, 0x0000, 0x02,
	0x0900, 0x2201, 0x02,
	0x0D00, 0x0101, 0x02,
	0x0D02, 0x0101, 0x02,
	0x0D04, 0x0201, 0x02,
	0x6226, 0x0000, 0x02,
	0xF46A, 0xAE80, 0x02,
	0x6000, 0x0085, 0x02,
};

const u32 sensor_jn1_setfile_4SUM_4080x2296_30FPS[] = {
	0x6000, 0x0005, 0x02,
	0xFCFC, 0x2400, 0x02,
	0x06FA, 0x0000, 0x02,
	0x0710, 0x0200, 0x02,
	0x0712, 0x0408, 0x02,
	0x0714, 0x0001, 0x02,
	0x0718, 0x0100, 0x02,
	0x0786, 0x0177, 0x02,
	0x0812, 0x1000, 0x02,
	0x0874, 0x0001, 0x02,
	0x09C0, 0x0820, 0x02,
	0x09C4, 0x0020, 0x02,
	0x0A72, 0x0046, 0x02,
	0x0AEA, 0x0046, 0x02,
	0x0B62, 0x0046, 0x02,
	0x0BDA, 0x0046, 0x02,
	0x0BE8, 0x0030, 0x02,
	0x0BEA, 0x0030, 0x02,
	0x0C52, 0x0046, 0x02,
	0x0C60, 0x0030, 0x02,
	0x0C62, 0x0030, 0x02,
	0x0CB6, 0x0001, 0x02,
	0x11B8, 0x0001, 0x02,
	0x11F6, 0x2000, 0x02,
	0x1360, 0x0001, 0x02,
	0x1376, 0x0001, 0x02,
	0x139C, 0x0000, 0x02,
	0x139E, 0x0001, 0x02,
	0x13A0, 0x000A, 0x02,
	0x13A2, 0x2001, 0x02,
	0x13AE, 0x0101, 0x02,
	0x1444, 0x0020, 0x02,
	0x1446, 0x0020, 0x02,
	0x144C, 0x003F, 0x02,
	0x144E, 0x003F, 0x02,
	0x147C, 0x0010, 0x02,
	0x1480, 0x0010, 0x02,
	0x19E6, 0x0002, 0x02,
	0x19F4, 0x0606, 0x02,
	0x19F6, 0x0409, 0x02,
	0x19F8, 0x1010, 0x02,
	0x19FC, 0x000B, 0x02,
	0x19FE, 0x1C14, 0x02,
	0x1A02, 0x0018, 0x02,
	0x1A30, 0x0134, 0x02,
	0x1A3C, 0x0762, 0x02,
	0x1A46, 0x00B0, 0x02,
	0x1A48, 0x0262, 0x02,
	0x1A52, 0x00BF, 0x02,
	0x1A64, 0x0103, 0x02,
	0x1A66, 0x00FF, 0x02,
	0x1B28, 0x60A0, 0x02,
	0x1B5C, 0x0000, 0x02,
	0x2022, 0x0005, 0x02,
	0x2024, 0x0005, 0x02,
	0x2072, 0x0000, 0x02,
	0x2080, 0x0101, 0x02,
	0x2082, 0x00FF, 0x02,
	0x2084, 0x017F, 0x02,
	0x2086, 0x0100, 0x02,
	0x2088, 0x0180, 0x02,
	0x208A, 0x44D2, 0x02,
	0x208C, 0x44D2, 0x02,
	0x208E, 0xF414, 0x02,
	0x2090, 0x0000, 0x02,
	0x2092, 0x0000, 0x02,
	0x2094, 0x0000, 0x02,
	0x20BA, 0x1C12, 0x02,
	0x20BC, 0x1C11, 0x02,
	0x20BE, 0xF454, 0x02,
	0x212E, 0x0002, 0x02,
	0x21EC, 0x0000, 0x02,
	0x3574, 0x0060, 0x02,
	0x4A74, 0x0028, 0x02,
	0x4A78, 0x0000, 0x02,
	0x4A7A, 0x0000, 0x02,
	0x4A80, 0x0000, 0x02,
	0x4A82, 0x0000, 0x02,
	0x4A84, 0x0000, 0x02,
	0x4A86, 0x0000, 0x02,
	0x4A88, 0x0028, 0x02,
	0x4A8C, 0x0000, 0x02,
	0x4A8E, 0x0000, 0x02,
	0x4A94, 0x0006, 0x02,
	0x4A96, 0x0006, 0x02,
	0x4A98, 0x0006, 0x02,
	0x4A9A, 0x0006, 0x02,
	0x4A9C, 0x0006, 0x02,
	0x4A9E, 0x0006, 0x02,
	0x4AA0, 0x0006, 0x02,
	0x4AA2, 0x0006, 0x02,
	0x4AA4, 0x0006, 0x02,
	0x4AA6, 0x0006, 0x02,
	0x4AA8, 0x0006, 0x02,
	0x4AAA, 0x0006, 0x02,
	0x4AAC, 0x0006, 0x02,
	0x4AAE, 0x0006, 0x02,
	0x4AB0, 0x0006, 0x02,
	0x4AB2, 0x0006, 0x02,
	0x4D92, 0x0001, 0x02,
	0x4D94, 0x0100, 0x02,
	0x4D96, 0x03FF, 0x02,
	0x4D98, 0x100D, 0x02,
	0x4D9A, 0x100D, 0x02,
	0x4D9C, 0x0000, 0x02,
	0x4D9E, 0x0000, 0x02,
	0x4DA0, 0x0000, 0x02,
	0x4DA2, 0x0000, 0x02,
	0x7F6E, 0x002F, 0x02,
	0x7F70, 0x00FA, 0x02,
	0x7F72, 0x0024, 0x02,
	0x7F74, 0x00E5, 0x02,
	0x8104, 0x0001, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0114, 0x0103, 0x02,
	0x0116, 0x002B, 0x02,
	0x0300, 0x0600, 0x02,
	0x0302, 0x0100, 0x02,
	0x0304, 0x0400, 0x02,
	0x0306, 0x8200, 0x02,
	0x0308, 0x0800, 0x02,
	0x030A, 0x0100, 0x02,
	0x030C, 0x0000, 0x02,
	0x030E, 0x0400, 0x02,
	0x0310, 0x6F00, 0x02,
	0x0312, 0x0000, 0x02,
	0x0340, 0xED0D, 0x02,
	0x0342, 0x5014, 0x02,
	0x0344, 0x0000, 0x02,
	0x0346, 0x0803, 0x02,
	0x0348, 0xFF1F, 0x02,
	0x034A, 0x1715, 0x02,
	0x034C, 0xF00F, 0x02,
	0x034E, 0xF808, 0x02,
	0x0350, 0x0800, 0x02,
	0x0352, 0x0800, 0x02,
	0x0380, 0x0200, 0x02,
	0x0382, 0x0200, 0x02,
	0x0384, 0x0200, 0x02,
	0x0386, 0x0200, 0x02,
	0x080E, 0x0000, 0x02,
	0x0900, 0x2201, 0x02,
	0x0D00, 0x0101, 0x02,
	0x0D02, 0x0101, 0x02,
	0x0D04, 0x0201, 0x02,
	0x6226, 0x0000, 0x02,
	0xF46A, 0xAE80, 0x02,
	0x6000, 0x0085, 0x02,
};

const u32 sensor_jn1_setfile_A2A2_2032x1524_120FPS[] = {
	0x6000, 0x0005, 0x02,
	0xFCFC, 0x2400, 0x02,
	0x06FA, 0x0010, 0x02,
	0x0710, 0x0400, 0x02,
	0x0712, 0x0104, 0x02,
	0x0714, 0x0001, 0x02,
	0x0718, 0x0500, 0x02,
	0x0786, 0x0177, 0x02,
	0x0812, 0x1000, 0x02,
	0x0874, 0x0011, 0x02,
	0x09C0, 0x0098, 0x02,
	0x09C4, 0x0098, 0x02,
	0x0A72, 0x004E, 0x02,
	0x0AEA, 0x004E, 0x02,
	0x0B62, 0x004E, 0x02,
	0x0BDA, 0x004E, 0x02,
	0x0BE8, 0x0030, 0x02,
	0x0BEA, 0x0030, 0x02,
	0x0C52, 0x004E, 0x02,
	0x0C60, 0x0030, 0x02,
	0x0C62, 0x0030, 0x02,
	0x0CB6, 0x0000, 0x02,
	0x11B8, 0x0000, 0x02,
	0x11F6, 0x1000, 0x02,
	0x1360, 0x0000, 0x02,
	0x1376, 0x0001, 0x02,
	0x139C, 0x0000, 0x02,
	0x139E, 0x0003, 0x02,
	0x13A0, 0x000A, 0x02,
	0x13A2, 0x2000, 0x02,
	0x13AE, 0x0201, 0x02,
	0x1444, 0x0021, 0x02,
	0x1446, 0x0021, 0x02,
	0x144C, 0x0042, 0x02,
	0x144E, 0x0042, 0x02,
	0x147C, 0x0010, 0x02,
	0x1480, 0x0010, 0x02,
	0x19E6, 0x0102, 0x02,
	0x19F4, 0x0606, 0x02,
	0x19F6, 0x0409, 0x02,
	0x19F8, 0x1010, 0x02,
	0x19FC, 0x000B, 0x02,
	0x19FE, 0x1C0E, 0x02,
	0x1A02, 0x0008, 0x02,
	0x1A30, 0x0134, 0x02,
	0x1A3C, 0x0752, 0x02,
	0x1A46, 0x0086, 0x02,
	0x1A48, 0x0752, 0x02,
	0x1A52, 0x00BF, 0x02,
	0x1A64, 0x0103, 0x02,
	0x1A66, 0x003F, 0x02,
	0x1B28, 0x20A0, 0x02,
	0x1B5C, 0x0003, 0x02,
	0x2022, 0x0101, 0x02,
	0x2024, 0x0101, 0x02,
	0x2072, 0x0000, 0x02,
	0x2080, 0x0001, 0x02,
	0x2082, 0x007F, 0x02,
	0x2084, 0x0200, 0x02,
	0x2086, 0x0080, 0x02,
	0x2088, 0x0200, 0x02,
	0x208A, 0x44C2, 0x02,
	0x208C, 0x44D2, 0x02,
	0x208E, 0xF414, 0x02,
	0x2090, 0x1C14, 0x02,
	0x2092, 0x1C11, 0x02,
	0x2094, 0xF454, 0x02,
	0x20BA, 0x0000, 0x02,
	0x20BC, 0x0000, 0x02,
	0x20BE, 0x0000, 0x02,
	0x212E, 0x000A, 0x02,
	0x21EC, 0x0000, 0x02,
	0x3574, 0x0220, 0x02,
	0x4A74, 0x0000, 0x02,
	0x4A78, 0xFFD8, 0x02,
	0x4A7A, 0x0000, 0x02,
	0x4A80, 0x0000, 0x02,
	0x4A82, 0x0000, 0x02,
	0x4A84, 0xFFD8, 0x02,
	0x4A86, 0x0000, 0x02,
	0x4A88, 0x0000, 0x02,
	0x4A8C, 0x0000, 0x02,
	0x4A8E, 0x0000, 0x02,
	0x4A94, 0x000C, 0x02,
	0x4A96, 0x0009, 0x02,
	0x4A98, 0x0006, 0x02,
	0x4A9A, 0x0009, 0x02,
	0x4A9C, 0x0009, 0x02,
	0x4A9E, 0x0009, 0x02,
	0x4AA0, 0x0009, 0x02,
	0x4AA2, 0x0009, 0x02,
	0x4AA4, 0x0006, 0x02,
	0x4AA6, 0x0009, 0x02,
	0x4AA8, 0x000C, 0x02,
	0x4AAA, 0x0009, 0x02,
	0x4AAC, 0x0009, 0x02,
	0x4AAE, 0x0009, 0x02,
	0x4AB0, 0x0009, 0x02,
	0x4AB2, 0x0009, 0x02,
	0x4D92, 0x0001, 0x02,
	0x4D94, 0x0140, 0x02,
	0x4D96, 0x0400, 0x02,
	0x4D98, 0x1000, 0x02,
	0x4D9A, 0x1008, 0x02,
	0x4D9C, 0x0400, 0x02,
	0x4D9E, 0x1000, 0x02,
	0x4DA0, 0x1008, 0x02,
	0x4DA2, 0x1008, 0x02,
	0x7F6E, 0x0031, 0x02,
	0x7F70, 0x00F7, 0x02,
	0x7F72, 0x0026, 0x02,
	0x7F74, 0x00E1, 0x02,
	0x8104, 0x0001, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0114, 0x0003, 0x02,
	0x0116, 0x002B, 0x02,
	0x0300, 0x0600, 0x02,
	0x0302, 0x0100, 0x02,
	0x0304, 0x0400, 0x02,
	0x0306, 0x8A00, 0x02,
	0x0308, 0x0800, 0x02,
	0x030A, 0x0100, 0x02,
	0x030C, 0x0000, 0x02,
	0x030E, 0x0400, 0x02,
	0x0310, 0x6F00, 0x02,
	0x0312, 0x0000, 0x02,
	0x0340, 0xEA06, 0x02,
	0x0342, 0xF00A, 0x02,
	0x0344, 0x1000, 0x02,
	0x0346, 0x1000, 0x02,
	0x0348, 0xEF1F, 0x02,
	0x034A, 0x0F18, 0x02,
	0x034C, 0xF007, 0x02,
	0x034E, 0xF405, 0x02,
	0x0350, 0x0400, 0x02,
	0x0352, 0x0600, 0x02,
	0x0380, 0x0200, 0x02,
	0x0382, 0x0600, 0x02,
	0x0384, 0x0200, 0x02,
	0x0386, 0x0600, 0x02,
	0x080E, 0x0000, 0x02,
	0x0900, 0x4401, 0x02,
	0x0D00, 0x0101, 0x02,
	0x0D02, 0x0100, 0x02,
	0x0D04, 0x0200, 0x02,
	0x6226, 0x0000, 0x02,
	0xF46A, 0xAE80, 0x02,
	0x6000, 0x0085, 0x02,
};

const u32 sensor_jn1_setfile_FULL_8160x6120_10FPS[] = {
	0x6000, 0x0005, 0x02,
	0xFCFC, 0x2400, 0x02,
	0x06FA, 0x0010, 0x02,
	0x0710, 0x1000, 0x02,
	0x0712, 0x0102, 0x02,
	0x0714, 0x0008, 0x02,
	0x0718, 0x0000, 0x02,
	0x0786, 0x0114, 0x02,
	0x0812, 0x0000, 0x02,
	0x0874, 0x0601, 0x02,
	0x09C0, 0x0040, 0x02,
	0x09C4, 0x0040, 0x02,
	0x0A72, 0x004E, 0x02,
	0x0AEA, 0x004E, 0x02,
	0x0B62, 0x004E, 0x02,
	0x0BDA, 0x004E, 0x02,
	0x0BE8, 0x0050, 0x02,
	0x0BEA, 0x0050, 0x02,
	0x0C52, 0x004E, 0x02,
	0x0C60, 0x0050, 0x02,
	0x0C62, 0x0050, 0x02,
	0x0CB6, 0x0000, 0x02,
	0x11B8, 0x0000, 0x02,
	0x11F6, 0x1000, 0x02,
	0x1360, 0x0000, 0x02,
	0x1376, 0x0000, 0x02,
	0x139C, 0x0001, 0x02,
	0x139E, 0x0004, 0x02,
	0x13A0, 0x0005, 0x02,
	0x13A2, 0x2001, 0x02,
	0x13AE, 0x0001, 0x02,
	0x1444, 0x0020, 0x02,
	0x1446, 0x0020, 0x02,
	0x144C, 0x003F, 0x02,
	0x144E, 0x003F, 0x02,
	0x147C, 0x0004, 0x02,
	0x1480, 0x0004, 0x02,
	0x19E6, 0x0002, 0x02,
	0x19F4, 0x0707, 0x02,
	0x19F6, 0x0404, 0x02,
	0x19F8, 0x0B0B, 0x02,
	0x19FC, 0x0007, 0x02,
	0x19FE, 0x1C12, 0x02,
	0x1A02, 0x0018, 0x02,
	0x1A30, 0x0334, 0x02,
	0x1A3C, 0x0782, 0x02,
	0x1A46, 0x0098, 0x02,
	0x1A48, 0x0782, 0x02,
	0x1A52, 0x0098, 0x02,
	0x1A64, 0x0100, 0x02,
	0x1A66, 0x0000, 0x02,
	0x1B28, 0x60A0, 0x02,
	0x1B5C, 0x0000, 0x02,
	0x2022, 0x0005, 0x02,
	0x2024, 0x0005, 0x02,
	0x2072, 0x0101, 0x02,
	0x2080, 0x0001, 0x02,
	0x2082, 0x00FF, 0x02,
	0x2084, 0x0200, 0x02,
	0x2086, 0x0100, 0x02,
	0x2088, 0x0200, 0x02,
	0x208A, 0x44D2, 0x02,
	0x208C, 0x44D2, 0x02,
	0x208E, 0xF414, 0x02,
	0x2090, 0x1C10, 0x02,
	0x2092, 0x1C0D, 0x02,
	0x2094, 0xF454, 0x02,
	0x20BA, 0x0000, 0x02,
	0x20BC, 0x0000, 0x02,
	0x20BE, 0x0000, 0x02,
	0x212E, 0x0002, 0x02,
	0x21EC, 0x0000, 0x02,
	0x3574, 0x0020, 0x02,
	0x4A74, 0x0000, 0x02,
	0x4A78, 0xFFE2, 0x02,
	0x4A7A, 0xFFE2, 0x02,
	0x4A80, 0xFFE2, 0x02,
	0x4A82, 0xFFE2, 0x02,
	0x4A84, 0xFFE2, 0x02,
	0x4A86, 0xFFE2, 0x02,
	0x4A88, 0x0000, 0x02,
	0x4A8C, 0xFFE2, 0x02,
	0x4A8E, 0xFFE2, 0x02,
	0x4A94, 0x0006, 0x02,
	0x4A96, 0x0006, 0x02,
	0x4A98, 0x0006, 0x02,
	0x4A9A, 0x0006, 0x02,
	0x4A9C, 0x0006, 0x02,
	0x4A9E, 0x0006, 0x02,
	0x4AA0, 0x0006, 0x02,
	0x4AA2, 0x0006, 0x02,
	0x4AA4, 0x0006, 0x02,
	0x4AA6, 0x0006, 0x02,
	0x4AA8, 0x0006, 0x02,
	0x4AAA, 0x0006, 0x02,
	0x4AAC, 0x0006, 0x02,
	0x4AAE, 0x0006, 0x02,
	0x4AB0, 0x0006, 0x02,
	0x4AB2, 0x0006, 0x02,
	0x4D92, 0x0000, 0x02,
	0x4D94, 0x0000, 0x02,
	0x4D96, 0x0000, 0x02,
	0x4D98, 0x0000, 0x02,
	0x4D9A, 0x0000, 0x02,
	0x4D9C, 0x0000, 0x02,
	0x4D9E, 0x0000, 0x02,
	0x4DA0, 0x0000, 0x02,
	0x4DA2, 0x0000, 0x02,
	0x7F6E, 0x002F, 0x02,
	0x7F70, 0x00FA, 0x02,
	0x7F72, 0x0024, 0x02,
	0x7F74, 0x00E5, 0x02,
	0x8104, 0x0000, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0114, 0x0003, 0x02,
	0x0116, 0x002B, 0x02,
	0x0300, 0x0600, 0x02,
	0x0302, 0x0100, 0x02,
	0x0304, 0x0400, 0x02,
	0x0306, 0x8200, 0x02,
	0x0308, 0x0800, 0x02,
	0x030A, 0x0100, 0x02,
	0x030C, 0x0000, 0x02,
	0x030E, 0x0400, 0x02,
	0x0310, 0x6F00, 0x02,
	0x0312, 0x0000, 0x02,
	0x0340, 0x8C18, 0x02,
	0x0342, 0xF021, 0x02,
	0x0344, 0x0000, 0x02,
	0x0346, 0x0C00, 0x02,
	0x0348, 0xFF1F, 0x02,
	0x034A, 0x1318, 0x02,
	0x034C, 0xE01F, 0x02,
	0x034E, 0xE817, 0x02,
	0x0350, 0x1000, 0x02,
	0x0352, 0x1000, 0x02,
	0x0380, 0x0100, 0x02,
	0x0382, 0x0100, 0x02,
	0x0384, 0x0100, 0x02,
	0x0386, 0x0100, 0x02,
	0x080E, 0x0000, 0x02,
	0x0900, 0x1101, 0x02,
	0x0D00, 0x0001, 0x02,
	0x0D02, 0x0100, 0x02,
	0x0D04, 0x0200, 0x02,
	0x6226, 0x0000, 0x02,
	0xF46A, 0xAE80, 0x02,
	0x6000, 0x0085, 0x02,
};

const u32 sensor_jn1_setfile_A2A2_1920x1080_240FPS[] = {
	0x6000, 0x0005, 0x02,
	0xFCFC, 0x2400, 0x02,
	0x06FA, 0x0010, 0x02,
	0x0710, 0x0400, 0x02,
	0x0712, 0x0104, 0x02,
	0x0714, 0x0001, 0x02,
	0x0718, 0x0500, 0x02,
	0x0786, 0x0177, 0x02,
	0x0812, 0x1000, 0x02,
	0x0874, 0x0011, 0x02,
	0x09C0, 0x0098, 0x02,
	0x09C4, 0x0098, 0x02,
	0x0A72, 0x004E, 0x02,
	0x0AEA, 0x004E, 0x02,
	0x0B62, 0x004E, 0x02,
	0x0BDA, 0x004E, 0x02,
	0x0BE8, 0x0030, 0x02,
	0x0BEA, 0x0030, 0x02,
	0x0C52, 0x004E, 0x02,
	0x0C60, 0x0030, 0x02,
	0x0C62, 0x0030, 0x02,
	0x0CB6, 0x0000, 0x02,
	0x11B8, 0x0000, 0x02,
	0x11F6, 0x1000, 0x02,
	0x1360, 0x0000, 0x02,
	0x1376, 0x0001, 0x02,
	0x139C, 0x0000, 0x02,
	0x139E, 0x0003, 0x02,
	0x13A0, 0x000A, 0x02,
	0x13A2, 0x2000, 0x02,
	0x13AE, 0x0201, 0x02,
	0x1444, 0x0021, 0x02,
	0x1446, 0x0021, 0x02,
	0x144C, 0x0042, 0x02,
	0x144E, 0x0042, 0x02,
	0x147C, 0x0010, 0x02,
	0x1480, 0x0010, 0x02,
	0x19E6, 0x0102, 0x02,
	0x19F4, 0x0606, 0x02,
	0x19F6, 0x0409, 0x02,
	0x19F8, 0x1010, 0x02,
	0x19FC, 0x000B, 0x02,
	0x19FE, 0x1C0E, 0x02,
	0x1A02, 0x0008, 0x02,
	0x1A30, 0x0134, 0x02,
	0x1A3C, 0x0752, 0x02,
	0x1A46, 0x0086, 0x02,
	0x1A48, 0x0752, 0x02,
	0x1A52, 0x00BF, 0x02,
	0x1A64, 0x0103, 0x02,
	0x1A66, 0x003F, 0x02,
	0x1B28, 0x20A0, 0x02,
	0x1B5C, 0x0003, 0x02,
	0x2022, 0x0101, 0x02,
	0x2024, 0x0101, 0x02,
	0x2072, 0x0000, 0x02,
	0x2080, 0x0001, 0x02,
	0x2082, 0x007F, 0x02,
	0x2084, 0x0200, 0x02,
	0x2086, 0x0080, 0x02,
	0x2088, 0x0200, 0x02,
	0x208A, 0x44C2, 0x02,
	0x208C, 0x44D2, 0x02,
	0x208E, 0xF414, 0x02,
	0x2090, 0x1C14, 0x02,
	0x2092, 0x1C11, 0x02,
	0x2094, 0xF454, 0x02,
	0x20BA, 0x0000, 0x02,
	0x20BC, 0x0000, 0x02,
	0x20BE, 0x0000, 0x02,
	0x212E, 0x000A, 0x02,
	0x21EC, 0x014F, 0x02,
	0x3574, 0x0094, 0x02,
	0x4A74, 0x0000, 0x02,
	0x4A78, 0xFFD8, 0x02,
	0x4A7A, 0x0000, 0x02,
	0x4A80, 0x0000, 0x02,
	0x4A82, 0x0000, 0x02,
	0x4A84, 0xFFD8, 0x02,
	0x4A86, 0x0000, 0x02,
	0x4A88, 0x0000, 0x02,
	0x4A8C, 0x0000, 0x02,
	0x4A8E, 0x0000, 0x02,
	0x4A94, 0x000C, 0x02,
	0x4A96, 0x0009, 0x02,
	0x4A98, 0x0006, 0x02,
	0x4A9A, 0x0009, 0x02,
	0x4A9C, 0x0009, 0x02,
	0x4A9E, 0x0009, 0x02,
	0x4AA0, 0x0009, 0x02,
	0x4AA2, 0x0009, 0x02,
	0x4AA4, 0x0006, 0x02,
	0x4AA6, 0x0009, 0x02,
	0x4AA8, 0x000C, 0x02,
	0x4AAA, 0x0009, 0x02,
	0x4AAC, 0x0009, 0x02,
	0x4AAE, 0x0009, 0x02,
	0x4AB0, 0x0009, 0x02,
	0x4AB2, 0x0009, 0x02,
	0x4D92, 0x0001, 0x02,
	0x4D94, 0x0140, 0x02,
	0x4D96, 0x0400, 0x02,
	0x4D98, 0x1000, 0x02,
	0x4D9A, 0x1008, 0x02,
	0x4D9C, 0x0400, 0x02,
	0x4D9E, 0x1000, 0x02,
	0x4DA0, 0x1008, 0x02,
	0x4DA2, 0x1008, 0x02,
	0x7F6E, 0x0031, 0x02,
	0x7F70, 0x00F7, 0x02,
	0x7F72, 0x0026, 0x02,
	0x7F74, 0x00E1, 0x02,
	0x8104, 0x0001, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0114, 0x0003, 0x02,
	0x0116, 0x002B, 0x02,
	0x0300, 0x0600, 0x02,
	0x0302, 0x0100, 0x02,
	0x0304, 0x0400, 0x02,
	0x0306, 0x8A00, 0x02,
	0x0308, 0x0800, 0x02,
	0x030A, 0x0100, 0x02,
	0x030C, 0x0000, 0x02,
	0x030E, 0x0400, 0x02,
	0x0310, 0x7F00, 0x02,
	0x0312, 0x0000, 0x02,
	0x0340, 0xB404, 0x02,
	0x0342, 0x1008, 0x02,
	0x0344, 0xF000, 0x02,
	0x0346, 0x9003, 0x02,
	0x0348, 0x0F1F, 0x02,
	0x034A, 0x8F14, 0x02,
	0x034C, 0x8007, 0x02,
	0x034E, 0x3804, 0x02,
	0x0350, 0x0400, 0x02,
	0x0352, 0x0400, 0x02,
	0x0380, 0x0200, 0x02,
	0x0382, 0x0600, 0x02,
	0x0384, 0x0200, 0x02,
	0x0386, 0x0600, 0x02,
	0x080E, 0x0000, 0x02,
	0x0900, 0x4401, 0x02,
	0x0D00, 0x0101, 0x02,
	0x0D02, 0x0100, 0x02,
	0x0D04, 0x0201, 0x02,
	0x6226, 0x0000, 0x02,
	0xF46A, 0xAE80, 0x02,
	0x6000, 0x0085, 0x02,
};

const u32 sensor_jn1_setfile_4SUM_3200x1800_60FPS[] = {
	0x6000, 0x0005, 0x02,
	0xFCFC, 0x2400, 0x02,
	0x06FA, 0x0000, 0x02,
	0x0710, 0x0200, 0x02,
	0x0712, 0x0408, 0x02,
	0x0714, 0x0001, 0x02,
	0x0718, 0x0100, 0x02,
	0x0786, 0x0177, 0x02,
	0x0812, 0x1000, 0x02,
	0x0874, 0x0001, 0x02,
	0x09C0, 0x0820, 0x02,
	0x09C4, 0x0020, 0x02,
	0x0A72, 0x0046, 0x02,
	0x0AEA, 0x0046, 0x02,
	0x0B62, 0x0046, 0x02,
	0x0BDA, 0x0046, 0x02,
	0x0BE8, 0x0030, 0x02,
	0x0BEA, 0x0030, 0x02,
	0x0C52, 0x0046, 0x02,
	0x0C60, 0x0030, 0x02,
	0x0C62, 0x0030, 0x02,
	0x0CB6, 0x0001, 0x02,
	0x11B8, 0x0001, 0x02,
	0x11F6, 0x2000, 0x02,
	0x1360, 0x0001, 0x02,
	0x1376, 0x0001, 0x02,
	0x139C, 0x0000, 0x02,
	0x139E, 0x0001, 0x02,
	0x13A0, 0x000A, 0x02,
	0x13A2, 0x2001, 0x02,
	0x13AE, 0x0101, 0x02,
	0x1444, 0x0020, 0x02,
	0x1446, 0x0020, 0x02,
	0x144C, 0x003F, 0x02,
	0x144E, 0x003F, 0x02,
	0x147C, 0x0010, 0x02,
	0x1480, 0x0010, 0x02,
	0x19E6, 0x0002, 0x02,
	0x19F4, 0x0606, 0x02,
	0x19F6, 0x0409, 0x02,
	0x19F8, 0x1010, 0x02,
	0x19FC, 0x000B, 0x02,
	0x19FE, 0x1C14, 0x02,
	0x1A02, 0x0018, 0x02,
	0x1A30, 0x0134, 0x02,
	0x1A3C, 0x0762, 0x02,
	0x1A46, 0x00B0, 0x02,
	0x1A48, 0x0262, 0x02,
	0x1A52, 0x00BF, 0x02,
	0x1A64, 0x0103, 0x02,
	0x1A66, 0x00FF, 0x02,
	0x1B28, 0x60A0, 0x02,
	0x1B5C, 0x0000, 0x02,
	0x2022, 0x0005, 0x02,
	0x2024, 0x0005, 0x02,
	0x2072, 0x0000, 0x02,
	0x2080, 0x0101, 0x02,
	0x2082, 0x00FF, 0x02,
	0x2084, 0x017F, 0x02,
	0x2086, 0x0100, 0x02,
	0x2088, 0x0180, 0x02,
	0x208A, 0x44D2, 0x02,
	0x208C, 0x44D2, 0x02,
	0x208E, 0xF414, 0x02,
	0x2090, 0x0000, 0x02,
	0x2092, 0x0000, 0x02,
	0x2094, 0x0000, 0x02,
	0x20BA, 0x1C12, 0x02,
	0x20BC, 0x1C11, 0x02,
	0x20BE, 0xF454, 0x02,
	0x212E, 0x0002, 0x02,
	0x21EC, 0x0000, 0x02,
	0x3574, 0x0060, 0x02,
	0x4A74, 0x0028, 0x02,
	0x4A78, 0x0000, 0x02,
	0x4A7A, 0x0000, 0x02,
	0x4A80, 0x0000, 0x02,
	0x4A82, 0x0000, 0x02,
	0x4A84, 0x0000, 0x02,
	0x4A86, 0x0000, 0x02,
	0x4A88, 0x0028, 0x02,
	0x4A8C, 0x0000, 0x02,
	0x4A8E, 0x0000, 0x02,
	0x4A94, 0x0006, 0x02,
	0x4A96, 0x0006, 0x02,
	0x4A98, 0x0006, 0x02,
	0x4A9A, 0x0006, 0x02,
	0x4A9C, 0x0006, 0x02,
	0x4A9E, 0x0006, 0x02,
	0x4AA0, 0x0006, 0x02,
	0x4AA2, 0x0006, 0x02,
	0x4AA4, 0x0006, 0x02,
	0x4AA6, 0x0006, 0x02,
	0x4AA8, 0x0006, 0x02,
	0x4AAA, 0x0006, 0x02,
	0x4AAC, 0x0006, 0x02,
	0x4AAE, 0x0006, 0x02,
	0x4AB0, 0x0006, 0x02,
	0x4AB2, 0x0006, 0x02,
	0x4D92, 0x0001, 0x02,
	0x4D94, 0x0100, 0x02,
	0x4D96, 0x03FF, 0x02,
	0x4D98, 0x100D, 0x02,
	0x4D9A, 0x100D, 0x02,
	0x4D9C, 0x0000, 0x02,
	0x4D9E, 0x0000, 0x02,
	0x4DA0, 0x0000, 0x02,
	0x4DA2, 0x0000, 0x02,
	0x7F6E, 0x002F, 0x02,
	0x7F70, 0x00FA, 0x02,
	0x7F72, 0x0024, 0x02,
	0x7F74, 0x00E5, 0x02,
	0x8104, 0x0001, 0x02,
	0xFCFC, 0x4000, 0x02,
	0x0114, 0x0103, 0x02,
	0x0116, 0x002B, 0x02,
	0x0300, 0x0600, 0x02,
	0x0302, 0x0100, 0x02,
	0x0304, 0x0400, 0x02,
	0x0306, 0x8200, 0x02,
	0x0308, 0x0800, 0x02,
	0x030A, 0x0100, 0x02,
	0x030C, 0x0000, 0x02,
	0x030E, 0x0400, 0x02,
	0x0310, 0x6F00, 0x02,
	0x0312, 0x0000, 0x02,
	0x0340, 0x6C07, 0x02,
	0x0342, 0x2413, 0x02,
	0x0344, 0x7003, 0x02,
	0x0346, 0xF804, 0x02,
	0x0348, 0x8F1C, 0x02,
	0x034A, 0x2713, 0x02,
	0x034C, 0x800C, 0x02,
	0x034E, 0x0807, 0x02,
	0x0350, 0x0800, 0x02,
	0x0352, 0x0800, 0x02,
	0x0380, 0x0200, 0x02,
	0x0382, 0x0200, 0x02,
	0x0384, 0x0200, 0x02,
	0x0386, 0x0200, 0x02,
	0x080E, 0x0000, 0x02,
	0x0900, 0x2201, 0x02,
	0x0D00, 0x0100, 0x02,
	0x0D02, 0x0001, 0x02,
	0x0D04, 0x0201, 0x02,
	0x6226, 0x0000, 0x02,
	0xF46A, 0xAE80, 0x02,
	0x6000, 0x0085, 0x02,
};

/* Enable vsync out, select main - previous versions, keeping for reference as of now*/
const u32 sensor_jn1_dual_sync_setfile_A[] = {
	0x6028, 0x4000, 0x02,
	0x0A70, 0x0001, 0x02,
	0x0A72, 0x0100, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x106A, 0x02,
	0x6F12, 0x0003, 0x02,
	0x602A, 0x2BC2, 0x02,
	0x6F12, 0x0003, 0x02,
};

const u32 sensor_jn1_pdaf_off_setfile_A[] = {
	/* Tail Mode off : Nomal Mode Operation (AF implant) */ 
	0x0D00, 0x0100, 0x02,
	0x0D02, 0x0001, 0x02,
};

const u32 sensor_jn1_pdaf_on_setfile_A[] = {
	/* Tail Mode on : Tail Mode Operation */ 
	0x0D00, 0x0101, 0x02,
	0x0D02, 0x0101, 0x02,
};

const u32 sensor_jn1_pd_correction_setfile_A[] = {
	/* SPD Correction */
	0x6028, 0x2000, 0x02,
	0x602A, 0x39BA, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x39BE, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x39C0, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x39C4, 0x02,
	0x6F12, 0x0001, 0x02,
	0x6028, 0x4000, 0x02,
	0x0D00, 0x0101, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x2A02, 0x02,
	0x6F12, 0x0100, 0x02,
};

/* sensor_jn1_mode_info_A_4080x3060_30FPS : 4 Binning Mode */
const struct sensor_cis_mode_info sensor_jn1_mode_info_A_4080x3060_30FPS = {
	.setfile_index = SENSOR_JN1_4SUM_4080x3060_30FPS,
	.setfile = sensor_jn1_setfile_4SUM_4080x3060_30FPS,
	.setfile_size = ARRAY_SIZE(sensor_jn1_setfile_4SUM_4080x3060_30FPS),

	.pclk = 563330000ULL, /* pclk = VTPXCK of Clock Information */
	.frame_length_lines = 0x0DED,
	.line_length_pck = 0x1450,

	.max_analog_gain = 0x800,
	.max_digital_gain = 0x8000,
	.min_cit = 0x3,
	.max_cit_margin = 0x5,
	.align_cit = 1,
	.remosaic_mode = false,
};

/* sensor_jn1_mode_info_A_4080x2296_30FPS : 4 Binning Mode */
const struct sensor_cis_mode_info sensor_jn1_mode_info_A_4080x2296_30FPS = {
	.setfile_index = SENSOR_JN1_4SUM_4080x2296_30FPS,
	.setfile = sensor_jn1_setfile_4SUM_4080x2296_30FPS,
	.setfile_size = ARRAY_SIZE(sensor_jn1_setfile_4SUM_4080x2296_30FPS),

	.pclk = 563330000ULL, /* pclk = VTPXCK of Clock Information */
	.frame_length_lines = 0x0DED,
	.line_length_pck = 0x1450,

	.max_analog_gain = 0x800,
	.max_digital_gain = 0x8000,
	.min_cit = 0x3,
	.max_cit_margin = 0x5,
	.align_cit = 1,
	.remosaic_mode = false,
};

/* sensor_jn1_mode_info_A_2032x1524_120FPS : 4 Binning Mode + A2A2 */
const struct sensor_cis_mode_info sensor_jn1_mode_info_A_2032x1524_120FPS = {
	.setfile_index = SENSOR_JN1_A2A2_2032x1524_120FPS,
	.setfile = sensor_jn1_setfile_A2A2_2032x1524_120FPS,
	.setfile_size = ARRAY_SIZE(sensor_jn1_setfile_A2A2_2032x1524_120FPS),

	.pclk = 598000000ULL, /* pclk = VTPXCK of Clock Information */
	.frame_length_lines = 0x06EA,
	.line_length_pck = 0x0AF0,

	.max_analog_gain = 0x800,
	.max_digital_gain = 0x8000,
	.min_cit = 0x4,
	.max_cit_margin = 0x5,
	.align_cit = 1,
	.remosaic_mode = false,
};

/* sensor_jn1_mode_info_A_8160x6120_10FPS : FULL Mode */
const struct sensor_cis_mode_info sensor_jn1_mode_info_A_8160x6120_10FPS = {
	.setfile_index = SENSOR_JN1_FULL_8160x6120_10FPS,
	.setfile = sensor_jn1_setfile_FULL_8160x6120_10FPS,
	.setfile_size = ARRAY_SIZE(sensor_jn1_setfile_FULL_8160x6120_10FPS),

	.pclk = 563330000ULL, /* pclk = VTPXCK of Clock Information */
	.frame_length_lines = 0x188C,
	.line_length_pck = 0x21F0,

	.max_analog_gain = 0x200, /* not support x32,x64 again in full resolution */
	.max_digital_gain = 0x8000,
	.min_cit = 0x5,
	.max_cit_margin = 0x5,
	.align_cit = 1,
	.remosaic_mode = true,
};

/* sensor_jn1_mode_info_A_1920x1080_240FPS */
const struct sensor_cis_mode_info sensor_jn1_mode_info_A_1920x1080_240FPS = {
	.setfile_index = SENSOR_JN1_A2A2_1920x1080_240FPS,
	.setfile = sensor_jn1_setfile_A2A2_1920x1080_240FPS,
	.setfile_size = ARRAY_SIZE(sensor_jn1_setfile_A2A2_1920x1080_240FPS),

	.pclk = 598000000ULL, /* pclk = VTPXCK of Clock Information */
	.frame_length_lines = 0x04B4,
	.line_length_pck = 0x0810,

	.max_analog_gain = 0x800,
	.max_digital_gain = 0x8000,
	.min_cit = 0x03,
	.max_cit_margin = 0x05,
	.align_cit = 1,
	.remosaic_mode = false,
};

/* sensor_jn1_mode_info_A_3200x1800_60FPS */
const struct sensor_cis_mode_info sensor_jn1_mode_info_A_3200x1800_60FPS = {
	.setfile_index = SENSOR_JN1_4SUM_3200x1800_60FPS,
	.setfile = sensor_jn1_setfile_4SUM_3200x1800_60FPS,
	.setfile_size = ARRAY_SIZE(sensor_jn1_setfile_4SUM_3200x1800_60FPS),

	.pclk = 563330000ULL, /* pclk = VTPXCK of Clock Information */
	.frame_length_lines = 0x076C,
	.line_length_pck = 0x1324,

	.max_analog_gain = 0x800,
	.max_digital_gain = 0x8000,
	.min_cit = 0x03,
	.max_cit_margin = 0x05,
	.align_cit = 1,
	.remosaic_mode = false,
};

static const struct sensor_cis_mode_info *sensor_jn1_mode_infos_A[] = {
	&sensor_jn1_mode_info_A_4080x3060_30FPS,
	&sensor_jn1_mode_info_A_4080x2296_30FPS,
	&sensor_jn1_mode_info_A_2032x1524_120FPS,
	&sensor_jn1_mode_info_A_8160x6120_10FPS,
	&sensor_jn1_mode_info_A_1920x1080_240FPS,
	&sensor_jn1_mode_info_A_3200x1800_60FPS,
};

static const struct sensor_cis_info sensor_jn1_info_A = {
	.name = "JN1",
	.version = "EVT0.0_Setfile_20211108_ver0.12",
	.max_width = 8160,
	.max_height = 6120,
	.min_analog_gain = 0x20,
	.min_digital_gain = 0x100,
	.fine_integration_time = 0x100,
	.cit_compensation_threshold = 15,
	.mode_infos = sensor_jn1_mode_infos_A,
	.mode_count = ARRAY_SIZE(sensor_jn1_mode_infos_A),
};
#endif
