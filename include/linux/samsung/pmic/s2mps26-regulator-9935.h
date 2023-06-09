/*
 * s2mps26-private.h - Voltage regulator driver for the s2mps26
 *
 *  Copyright (C) 2021 Samsung Electrnoics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __LINUX_MFD_S2MPS26_REGULATOR_H
#define __LINUX_MFD_S2MPS26_REGULATOR_H
#include <linux/i2c.h>

#define MASK(width, shift)		(((0x1 << (width)) - 1) << shift)
#define SetBit(no)			(0x1 << (no))

#define S2MPS26_REG_INVALID		(0xFF)

/* VGPIO ADDRESS (0x00) */
#define S2MPS26_REG_REG0		0x00
#define S2MPS26_REG_PSI			0x01
#define S2MPS26_REG_VGI0		0x02
#define S2MPS26_REG_VGI1		0x03
#define S2MPS26_REG_VGI2		0x04
#define S2MPS26_REG_VGI3		0x05
#define S2MPS26_REG_VGI4		0x06
#define S2MPS26_REG_VGI5		0x07
#define S2MPS26_REG_VGI6		0x08
#define S2MPS26_REG_VGI7		0x09
#define S2MPS26_REG_VGI8		0x0A
#define S2MPS26_REG_VGI9		0x0B
#define S2MPS26_REG_VGI10		0x0C
#define S2MPS26_REG_VGI11		0x0D
#define S2MPS26_REG_VGI12		0x0E
#define S2MPS26_REG_VGI13		0x0F
#define S2MPS26_REG_VGI14		0x10
#define S2MPS26_REG_VGI15		0x11
#define S2MPS26_REG_VGI16		0x12
#define S2MPS26_REG_VGI17		0x13
#define S2MPS26_REG_VGI18		0x14

/* VGPIO TX (PMIC -> AP) table check*/
#define S2MPS26_VGI0_IRQ_S		(1 << 3)

/* COMMON ADDRESS (0x03) */
#define S2MPS26_REG_VGPIO_REG0_1	0x00
#define S2MPS26_REG_VGPIO_REG0_2	0x01
#define S2MPS26_REG_CHIP_ID		0x0E
#define S2MPS26_REG_SPMI_CFG1		0x0F
#define S2MPS26_REG_SPMI_CFG2		0x10
#define S2MPS26_REG_SPMI_CFG3		0x11
#define S2MPS26_REG_COM_CTRL1		0x12
#define S2MPS26_REG_COM_CTRL2		0x13
#define S2MPS26_REG_COM_CTRL3		0x14
#define S2MPS26_REG_DUMP_CTRL		0x15
#define S2MPS26_REG_TX_MASK		0x16
#define S2MPS26_REG_IRQ			0x17
#define S2MPS26_REG_COM_CTRL4		0x18
#define S2MPS26_REG_COM_CLK_ON		0x19
#define S2MPS26_REG_COM_CLK_OFF		0x1A
#define S2MPS26_REG_COM_OM		0x1B
#define S2MPS26_REG_COM_OTP_TEST	0x1C
#define S2MPS26_REG_COM_OTP_ADRL	0x1D
#define S2MPS26_REG_COM_OTP_ADRH	0x1E
#define S2MPS26_REG_COM_OTP_DATA	0x1F
#define S2MPS26_REG_COM_MONSEL1		0x20
#define S2MPS26_REG_COM_MONSEL2		0x21
#define S2MPS26_REG_COM_MONRD1		0x22
#define S2MPS26_REG_COM_MONRD2		0x23
#define S2MPS26_REG_COM_CCD		0x24
#define S2MPS26_REG_CHECKSUM_DATA	0x25
#define S2MPS26_REG_CHECKSUM_REF	0x26
#define S2MPS26_REG_CHECKSUM_RESULT	0x27
#define S2MPS26_REG_OM			0x28
#define S2MPS26_REG_MON_SEL		0x29
#define S2MPS26_REG_MON_EN1		0x2A
#define S2MPS26_REG_MON_EN2		0x2B

/* CHIP ID MASK */
#define S2MPS26_CHIP_ID_MASK			(0xFF)
#define S2MPS26_CHIP_ID_HW_MASK			(0x0F)
#define S2MPS26_CHIP_ID_SW_MASK			(0xF0)

/* TX_MASK MASK */
#define S2MPS26_GPIO_IRQM_MASK			(1 << 2)
#define S2MPS26_ADC_IRQM_MASK			(1 << 1)
#define S2MPS26_PM_IRQM_MASK			(1 << 0)

/* PMIC 1 ADDRESS (0x05) */
#define S2MPS26_REG_INT1		0x00
#define S2MPS26_REG_INT2		0x01
#define S2MPS26_REG_INT3		0x02
#define S2MPS26_REG_INT4		0x03
#define S2MPS26_REG_INT5		0x04
#define S2MPS26_REG_INT6		0x05
#define S2MPS26_REG_INT7		0x06

#define S2MPS26_REG_INT1M_EVT0          0x06
#define S2MPS26_REG_INT2M_EVT0          0x07
#define S2MPS26_REG_INT3M_EVT0          0x08
#define S2MPS26_REG_INT4M_EVT0          0x09
#define S2MPS26_REG_INT5M_EVT0          0x0A
#define S2MPS26_REG_INT6M_EVT0          0x0B
#define S2MPS26_REG_STATUS1_EVT0        0x0C
#define S2MPS26_REG_STATUS2_EVT0        0x0D
#define S2MPS26_REG_STATUS3_EVT0        0x0E
#define S2MPS26_REG_OFFSRC1_CUR_EVT0	0x0F
#define S2MPS26_REG_OFFSRC2_CUR_EVT0    0x10
#define S2MPS26_REG_OFFSRC1_OLD1_EVT0   0x11
#define S2MPS26_REG_OFFSRC2_OLD1_EVT0   0x12
#define S2MPS26_REG_OFFSRC1_OLD2_EVT0   0x13
#define S2MPS26_REG_OFFSRC2_OLD2_EVT0   0x14

#define S2MPS26_REG_INT1M		0x07
#define S2MPS26_REG_INT2M		0x08
#define S2MPS26_REG_INT3M		0x09
#define S2MPS26_REG_INT4M		0x0A
#define S2MPS26_REG_INT5M		0x0B
#define S2MPS26_REG_INT6M		0x0C
#define S2MPS26_REG_INT7M		0x0D
#define S2MPS26_REG_STATUS1		0x0E
#define S2MPS26_REG_STATUS2		0x0F
#define S2MPS26_REG_STATUS3		0x10
#define S2MPS26_REG_OFFSRC1_CUR		0x11
#define S2MPS26_REG_OFFSRC2_CUR		0x12
#define S2MPS26_REG_OFFSRC1_OLD1	0x13
#define S2MPS26_REG_OFFSRC2_OLD1	0x14
#define S2MPS26_REG_OFFSRC1_OLD2	0x15
#define S2MPS26_REG_OFFSRC2_OLD2	0x16

#define S2MPS26_REG_CTRL1		0x17
#define S2MPS26_REG_CTRL2		0x18
#define S2MPS26_REG_CTRL3		0x19
#define S2MPS26_REG_ETC_OTP1		0x1A
#define S2MPS26_REG_ETC_OTP2		0x1B
#define S2MPS26_REG_UVLO_OTP		0x1C
#define S2MPS26_REG_CFG_PM		0x1D
#define S2MPS26_REG_TIME_CTRL		0x1E
#define S2MPS26_REG_BUCK1S_CTRL		0x1F
#define S2MPS26_REG_BUCK1S_OUT1		0x20
#define S2MPS26_REG_BUCK1S_OUT2		0x21
#define S2MPS26_REG_BUCK1S_OUT3		0x22
#define S2MPS26_REG_BUCK1S_OUT4		0x23
#define S2MPS26_REG_BUCK1S_DVS		0x24
#define S2MPS26_REG_BUCK1S_AFM		0x25
#define S2MPS26_REG_BUCK1S_AFMX		0x26
#define S2MPS26_REG_BUCK1S_AFMY		0x27
#define S2MPS26_REG_BUCK1S_AFMZ		0x28
#define S2MPS26_REG_BUCK1S_OCP		0x29
#define S2MPS26_REG_BUCK1S_AVP		0x2A
#define S2MPS26_REG_BUCK2S_CTRL		0x2B
#define S2MPS26_REG_BUCK2S_OUT1		0x2C
#define S2MPS26_REG_BUCK2S_OUT2		0x2D
#define S2MPS26_REG_BUCK2S_OUT3		0x2E
#define S2MPS26_REG_BUCK2S_OUT4		0x2F
#define S2MPS26_REG_BUCK2S_DVS		0x30
#define S2MPS26_REG_BUCK2S_AFM		0x31
#define S2MPS26_REG_BUCK2S_AFMX		0x32
#define S2MPS26_REG_BUCK2S_AFMY		0x33
#define S2MPS26_REG_BUCK2S_AFMZ		0x34
#define S2MPS26_REG_BUCK2S_OCP		0x35
#define S2MPS26_REG_BUCK2S_AVP		0x36
#define S2MPS26_REG_BUCK3S_CTRL		0x37
#define S2MPS26_REG_BUCK3S_OUT1		0x38
#define S2MPS26_REG_BUCK3S_OUT2		0x39
#define S2MPS26_REG_BUCK3S_OUT3		0x3A
#define S2MPS26_REG_BUCK3S_OUT4		0x3B
#define S2MPS26_REG_BUCK3S_DVS		0x3C
#define S2MPS26_REG_BUCK3S_AFM		0x3D
#define S2MPS26_REG_BUCK3S_AFMX		0x3E
#define S2MPS26_REG_BUCK3S_AFMY		0x3F
#define S2MPS26_REG_BUCK3S_AFMZ		0x40
#define S2MPS26_REG_BUCK3S_OCP		0x41
#define S2MPS26_REG_BUCK3S_AVP		0x42
#define S2MPS26_REG_BUCK4S_CTRL		0x43
#define S2MPS26_REG_BUCK4S_OUT1		0x44
#define S2MPS26_REG_BUCK4S_OUT2		0x45
#define S2MPS26_REG_BUCK4S_OUT3		0x46
#define S2MPS26_REG_BUCK4S_OUT4		0x47
#define S2MPS26_REG_BUCK4S_DVS		0x48
#define S2MPS26_REG_BUCK4S_AFM		0x49
#define S2MPS26_REG_BUCK4S_AFMX		0x4A
#define S2MPS26_REG_BUCK4S_AFMY		0x4B
#define S2MPS26_REG_BUCK4S_AFMZ		0x4C
#define S2MPS26_REG_BUCK4S_OCP		0x4D
#define S2MPS26_REG_BUCK4S_AVP		0x4E
#define S2MPS26_REG_BUCK5S_CTRL		0x4F
#define S2MPS26_REG_BUCK5S_OUT1		0x50
#define S2MPS26_REG_BUCK5S_OUT2		0x51
#define S2MPS26_REG_BUCK5S_OUT3		0x52
#define S2MPS26_REG_BUCK5S_OUT4		0x53
#define S2MPS26_REG_BUCK5S_DVS		0x54
#define S2MPS26_REG_BUCK5S_AFM		0x55
#define S2MPS26_REG_BUCK5S_AFMX		0x56
#define S2MPS26_REG_BUCK5S_AFMY		0x57
#define S2MPS26_REG_BUCK5S_AFMZ		0x58
#define S2MPS26_REG_BUCK5S_OCP		0x59
#define S2MPS26_REG_BUCK5S_AVP		0x5A
#define S2MPS26_REG_BUCK6S_CTRL		0x5B
#define S2MPS26_REG_BUCK6S_OUT1		0x5C
#define S2MPS26_REG_BUCK6S_OUT2		0x5D
#define S2MPS26_REG_BUCK6S_OUT3		0x5E
#define S2MPS26_REG_BUCK6S_OUT4		0x5F
#define S2MPS26_REG_BUCK6S_DVS		0x60
#define S2MPS26_REG_BUCK6S_AFM		0x61
#define S2MPS26_REG_BUCK6S_AFMX		0x62
#define S2MPS26_REG_BUCK6S_AFMY		0x63
#define S2MPS26_REG_BUCK6S_AFMZ		0x64
#define S2MPS26_REG_BUCK6S_OCP		0x65
#define S2MPS26_REG_BUCK6S_AVP		0x66
#define S2MPS26_REG_BUCK7S_CTRL		0x67
#define S2MPS26_REG_BUCK7S_OUT1		0x68
#define S2MPS26_REG_BUCK7S_OUT2		0x69
#define S2MPS26_REG_BUCK7S_OUT3		0x6A
#define S2MPS26_REG_BUCK7S_OUT4		0x6B
#define S2MPS26_REG_BUCK7S_DVS		0x6C
#define S2MPS26_REG_BUCK7S_AFM		0x6D
#define S2MPS26_REG_BUCK7S_AFMX		0x6E
#define S2MPS26_REG_BUCK7S_AFMY		0x6F
#define S2MPS26_REG_BUCK7S_AFMZ		0x70
#define S2MPS26_REG_BUCK7S_OCP		0x71
#define S2MPS26_REG_BUCK7S_AVP		0x72
#define S2MPS26_REG_BUCK8S_CTRL		0x73
#define S2MPS26_REG_BUCK8S_OUT1		0x74
#define S2MPS26_REG_BUCK8S_OUT2		0x75
#define S2MPS26_REG_BUCK8S_OUT3		0x76
#define S2MPS26_REG_BUCK8S_OUT4		0x77
#define S2MPS26_REG_BUCK8S_DVS		0x78
#define S2MPS26_REG_BUCK8S_AFM		0x79
#define S2MPS26_REG_BUCK8S_AFMX		0x7A
#define S2MPS26_REG_BUCK8S_AFMY		0x7B
#define S2MPS26_REG_BUCK8S_AFMZ		0x7C
#define S2MPS26_REG_BUCK8S_OCP		0x7D
#define S2MPS26_REG_BUCK8S_AVP		0x7E
#define S2MPS26_REG_BUCK9S_CTRL		0x7F
#define S2MPS26_REG_BUCK9S_OUT1		0x80
#define S2MPS26_REG_BUCK9S_OUT2		0x81
#define S2MPS26_REG_BUCK9S_OUT3		0x82
#define S2MPS26_REG_BUCK9S_OUT4		0x83
#define S2MPS26_REG_BUCK9S_DVS		0x84
#define S2MPS26_REG_BUCK9S_AFM		0x85
#define S2MPS26_REG_BUCK9S_AFMX		0x86
#define S2MPS26_REG_BUCK9S_AFMY		0x87
#define S2MPS26_REG_BUCK9S_AFMZ		0x88
#define S2MPS26_REG_BUCK9S_OCP		0x89
#define S2MPS26_REG_BUCK9S_AVP		0x8A
#define S2MPS26_REG_BUCK10S_CTRL	0x8B
#define S2MPS26_REG_BUCK10S_OUT1	0x8C
#define S2MPS26_REG_BUCK10S_OUT2	0x8D
#define S2MPS26_REG_BUCK10S_OUT3	0x8E
#define S2MPS26_REG_BUCK10S_OUT4	0x8F
#define S2MPS26_REG_BUCK10S_DVS		0x90
#define S2MPS26_REG_BUCK10S_AFM		0x91
#define S2MPS26_REG_BUCK10S_AFMX	0x92
#define S2MPS26_REG_BUCK10S_AFMY	0x93
#define S2MPS26_REG_BUCK10S_AFMZ	0x94
#define S2MPS26_REG_BUCK10S_OCP		0x95
#define S2MPS26_REG_BUCK10S_AVP		0x96
#define S2MPS26_REG_BUCK11S_CTRL	0x97
#define S2MPS26_REG_BUCK11S_OUT1	0x98
#define S2MPS26_REG_BUCK11S_OUT2	0x99
#define S2MPS26_REG_BUCK11S_OUT3	0x9A
#define S2MPS26_REG_BUCK11S_OUT4	0x9B
#define S2MPS26_REG_BUCK11S_DVS		0x9C
#define S2MPS26_REG_BUCK11S_AFM		0x9D
#define S2MPS26_REG_BUCK11S_AFMX	0x9E
#define S2MPS26_REG_BUCK11S_AFMY	0x9F
#define S2MPS26_REG_BUCK11S_AFMZ	0xA0
#define S2MPS26_REG_BUCK11S_OCP		0xA1
#define S2MPS26_REG_BUCK11S_AVP		0xA2
#define S2MPS26_REG_BUCK12S_CTRL	0xA3
#define S2MPS26_REG_BUCK12S_OUT1	0xA4
#define S2MPS26_REG_BUCK12S_OUT2	0xA5
#define S2MPS26_REG_BUCK12S_OUT3	0xA6
#define S2MPS26_REG_BUCK12S_OUT4	0xA7
#define S2MPS26_REG_BUCK12S_DVS		0xA8
#define S2MPS26_REG_BUCK12S_AFM		0xA9
#define S2MPS26_REG_BUCK12S_AFMX	0xAA
#define S2MPS26_REG_BUCK12S_AFMY	0xAB
#define S2MPS26_REG_BUCK12S_AFMZ	0xAC
#define S2MPS26_REG_BUCK12S_OCP		0xAD
#define S2MPS26_REG_BUCK12S_AVP		0xAE
#define S2MPS26_REG_SR1S_CTRL		0xAF
#define S2MPS26_REG_SR1S_OUT1		0xB0
#define S2MPS26_REG_SR1S_OUT2		0xB1
#define S2MPS26_REG_SR1S_DVS		0xB2
#define S2MPS26_REG_SR1S_OCP		0xB3
#define S2MPS26_REG_BB_CTRL		0xB4
#define S2MPS26_REG_BB_OUT1		0xB5
#define S2MPS26_REG_BB_OUT2		0xB6
#define S2MPS26_REG_BB_DVS1		0xB7
#define S2MPS26_REG_BB_DVS2		0xB8
#define S2MPS26_REG_BB_OCP		0xB9
#define S2MPS26_REG_DVS_LDO3_CTRL	0xBA
#define S2MPS26_REG_DVS_LDO9_CTRL	0xBB
#define S2MPS26_REG_DVS_LDO10_CTRL	0xBC
#define S2MPS26_REG_DVS_LDO11_CTRL	0xBD
#define S2MPS26_REG_DVS_LDO12_CTRL	0xBE
#define S2MPS26_REG_DVS_LDO13_CTRL	0xBF
#define S2MPS26_REG_DVS_LDO_OFFSET1	0xC0
#define S2MPS26_REG_DVS_LDO_OFFSET2	0xC1
#define S2MPS26_REG_DVS_LDO_RAMP1	0xC2
#define S2MPS26_REG_DVS_LDO_RAMP2	0xC3
#define S2MPS26_REG_DVS_LDO_RAMP3	0xC4
#define S2MPS26_REG_DVS_LDO_RAMP4	0xC5
#define S2MPS26_REG_LDO1S_CTRL		0xC6
#define S2MPS26_REG_LDO1S_OUT		0xC7
#define S2MPS26_REG_LDO2S_CTRL		0xC8
#define S2MPS26_REG_LDO2S_OUT1		0xC9
#define S2MPS26_REG_LDO2S_OUT2		0xCA
#define S2MPS26_REG_LDO2S_OUT3		0xCB
#define S2MPS26_REG_LDO2S_OUT4		0xCC
#define S2MPS26_REG_LDO3S_CTRL		0xCD
#define S2MPS26_REG_LDO3S_OUT		0xCE
#define S2MPS26_REG_LDO4S_CTRL		0xCF
#define S2MPS26_REG_LDO4S_OUT		0xD0
#define S2MPS26_REG_LDO5S_CTRL		0xD1
#define S2MPS26_REG_LDO5S_OUT		0xD2
#define S2MPS26_REG_LDO6S_CTRL		0xD3
#define S2MPS26_REG_LDO6S_OUT1		0xD4
#define S2MPS26_REG_LDO6S_OUT2		0xD5
#define S2MPS26_REG_LDO6S_OUT3		0xD6
#define S2MPS26_REG_LDO6S_OUT4		0xD7
#define S2MPS26_REG_LDO7S_CTRL		0xD8
#define S2MPS26_REG_LDO7S_OUT		0xD9
#define S2MPS26_REG_LDO8S_CTRL		0xDA
#define S2MPS26_REG_LDO8S_OUT		0xDB
#define S2MPS26_REG_LDO9S_CTRL		0xDC
#define S2MPS26_REG_LDO9S_OUT1		0xDD
#define S2MPS26_REG_LDO9S_OUT2		0xDE
#define S2MPS26_REG_LDO9S_OUT3		0xDF
#define S2MPS26_REG_LDO9S_OUT4		0xE0
#define S2MPS26_REG_LDO10S_CTRL		0xE1
#define S2MPS26_REG_LDO10S_OUT		0xE2
#define S2MPS26_REG_LDO11S_CTRL		0xE3
#define S2MPS26_REG_LDO11S_OUT		0xE4
#define S2MPS26_REG_LDO12S_CTRL		0xE5
#define S2MPS26_REG_LDO12S_OUT		0xE6
#define S2MPS26_REG_LDO13S_CTRL		0xE7
#define S2MPS26_REG_LDO13S_OUT		0xE8
#define S2MPS26_REG_LDO14S_CTRL		0xE9
#define S2MPS26_REG_LDO15S_CTRL		0xEA
#define S2MPS26_REG_LDO16S_CTRL		0xEB
#define S2MPS26_REG_LDO17S_CTRL		0xEC
#define S2MPS26_REG_LDO18S_CTRL		0xED
#define S2MPS26_REG_LDO19S_CTRL		0xEE
#define S2MPS26_REG_LDO20S_CTRL		0xEF
#define S2MPS26_REG_LDO_DSCH1		0xF0
#define S2MPS26_REG_EXT_CTRL5		0xFA
#define S2MPS26_REG_EXT_PWRHOLD		0xFB
#define S2MPS26_REG_EXT_CTRL4		0xFC
#define S2MPS26_REG_EXT_CTRL3		0xFD
#define S2MPS26_REG_EXT_CTRL2		0xFE
#define S2MPS26_REG_EXT_CTRL1		0xFF

#define S2MPS26_AFM_WARN_EN_SHIFT	7
#define S2MPS26_AFM_WARN_CNT_SHIFT	6
#define S2MPS26_AFM_WARN_DVS_MASK_SHIFT	5
#define S2MPS26_AFM_WARN_LV_SHIFT	0

/* PMIC 2 ADDRESS */
#define S2MPS26_REG_S_SEL_VGPIO1	0x33
#define S2MPS26_REG_S_SEL_VGPIO2	0x34
#define S2MPS26_REG_S_SEL_VGPIO3	0x35
#define S2MPS26_REG_S_SEL_VGPIO4	0x36
#define S2MPS26_REG_S_SEL_VGPIO5	0x37
#define S2MPS26_REG_S_SEL_VGPIO6	0x38
#define S2MPS26_REG_S_SEL_VGPIO7	0x39
#define S2MPS26_REG_S_SEL_VGPIO8	0x3A
#define S2MPS26_REG_S_SEL_VGPIO9	0x3B
#define S2MPS26_REG_S_SEL_VGPIO10	0x3C
#define S2MPS26_REG_S_SEL_VGPIO11	0x3D
#define S2MPS26_REG_S_SEL_VGPIO12	0x3E
#define S2MPS26_REG_S_SEL_VGPIO13	0x3F
#define S2MPS26_REG_S_SEL_VGPIO14	0x40
#define S2MPS26_REG_S_SEL_VGPIO15	0x41
#define S2MPS26_REG_S_SEL_VGPIO16	0x42
#define S2MPS26_REG_S_SEL_VGPIO17	0x43
#define S2MPS26_REG_S_SEL_VGPIO18	0x44
#define S2MPS26_REG_S_SEL_VGPIO19	0x45
#define S2MPS26_REG_S_SEL_VGPIO20	0x46
#define S2MPS26_REG_S_SEL_VGPIO21	0x47
#define S2MPS26_REG_S_SEL_VGPIO22	0x48
#define S2MPS26_REG_S_SEL_VGPIO23	0x49
#define S2MPS26_REG_S_SEL_VGPIO24	0x4A
#define S2MPS26_REG_S_SEL_VGPIO25	0x4B
#define S2MPS26_REG_S_SEL_VGPIO26	0x4C
#define S2MPS26_REG_S_SEL_VGPIO27	0x4D
#define S2MPS26_REG_S_SEL_VGPIO28	0x4E
#define S2MPS26_REG_S_SEL_VGPIO29	0x4F
#define S2MPS26_REG_S_SEL_VGPIO30	0x50
#define S2MPS26_REG_S_SEL_VGPIO31	0x51
#define S2MPS26_REG_S_SEL_VGPIO32	0x52
#define S2MPS26_REG_S_SEL_VGPIO33	0x53
#define S2MPS26_REG_S_SEL_VGPIO34	0x54
#define S2MPS26_REG_S_SEL_DVS_EN1	0x55
#define S2MPS26_REG_S_SEL_DVS_EN2	0x56
#define S2MPS26_REG_S_SEL_DVS_EN3	0x57
#define S2MPS26_REG_S_SEL_DVS_EN4	0x58
#define S2MPS26_REG_S_SEL_DVS_EN5	0x59
#define S2MPS26_REG_S_SEL_DVS_EN6	0x5A
#define S2MPS26_REG_S_SEL_DVS_EN7	0x5B
#define S2MPS26_REG_S_SEL_DVS_EN8	0x5C
#define S2MPS26_REG_SR_SEL_DVS_EN1	0x5D
#define S2MPS26_REG_OFF_CTRL1		0x5E
#define S2MPS26_REG_OFF_CTRL2		0x5F
#define S2MPS26_REG_OFF_CTRL3		0x60
#define S2MPS26_REG_OFF_CTRL4		0x61
#define S2MPS26_REG_OFF_CTRL5		0x62
#define S2MPS26_REG_SEQ_CTRL1		0x63
#define S2MPS26_REG_SEQ_CTRL2		0x64
#define S2MPS26_REG_CFG_PM2		0x65
#define S2MPS26_REG_CFG_PM3		0x66
#define S2MPS26_REG_SUB_CTRL		0x67
#define S2MPS26_REG_PSI_CTRL1		0x68
#define S2MPS26_REG_PSI_CTRL2		0x69
#define S2MPS26_REG_SEL_HW_GPIO		0x6A
#define S2MPS26_REG_LDO_OI_CTRL1	0x6B
#define S2MPS26_REG_LDO_OI_CTRL2	0x6C
#define S2MPS26_REG_OI_OVP_CTRL		0x6D
#define S2MPS26_REG_OVP_CTRL2		0x6E
#define S2MPS26_REG_IPTAT		0x6F
#define S2MPS26_REG_AFM_CH_SEL1		0x70
#define S2MPS26_REG_AFM_CH_SEL2		0x71
#define S2MPS26_REG_EXT_EN		0x72
#define S2MPS26_REG_PROT_CTRL		0x73

/* PMIC 1 mask */
#define BUCK_RAMP_MASK			(0x03)
#define BUCK_RAMP_UP_SHIFT		6
/* SEL_VPGIO (CONTROL_SEL) */
#define S2MPS26_SEL_VGPIO_NUM		34
#define S2MPS26_SEL_VGPIO_MAX_VAL	0x3F

/* CFG_PM reg WTSR_EN Mask */
#define S2MPS26_WTSREN_MASK		MASK(1,2)

/* S2MPS26 Regulator ids */
enum s2mps26_regulators {
	S2MPS26_LDO1,
	//S2MPS26_LDO2,
	S2MPS26_LDO3,
	S2MPS26_LDO4,
	//S2MPS26_LDO5,
	S2MPS26_LDO6,
	S2MPS26_LDO7,
	S2MPS26_LDO8,
	S2MPS26_LDO9,
	//S2MPS26_LDO10,
	S2MPS26_LDO11,
	//S2MPS26_LDO12,
	//S2MPS26_LDO13,
	S2MPS26_LDO14,
	S2MPS26_LDO15,
	S2MPS26_LDO16,
	S2MPS26_LDO17,
	S2MPS26_LDO18,
	S2MPS26_LDO19,
	S2MPS26_LDO20,
	S2MPS26_BUCK1,
	S2MPS26_BUCK2,
	S2MPS26_BUCK3,
	S2MPS26_BUCK4,
	S2MPS26_BUCK5,
	S2MPS26_BUCK6,
	S2MPS26_BUCK7,
	//S2MPS26_BUCK8,
	//S2MPS26_BUCK9,
	//S2MPS26_BUCK10,
	//S2MPS26_BUCK11,
	S2MPS26_BUCK12,
	S2MPS26_BUCK_SR1,
	S2MPS26_BB,
	S2MPS26_REG_MAX,
};

/* BUCKs 1S ~ 8S, 10S ~ 12S  */
#define S2MPS26_BUCK_MIN1		300000
#define S2MPS26_BUCK_STEP1		6250
/* BUCK 9S */
#define S2MPS26_BUCK_MIN2		300000
#define S2MPS26_BUCK_STEP2		6250
/* BUCK SR1S */
#define S2MPS26_BUCK_MIN3		300000
#define S2MPS26_BUCK_STEP3		6250
/* BUCK Boost1S  */
#define S2MPS26_BB_MIN1			2600000
#define S2MPS26_BB_STEP1		12500
/* (LV) LDOs 1S ~ 13S */
#define S2MPS26_LDO_MIN1		300000
#define S2MPS26_LDO_STEP1		6250
/* (MV) LDOs 14S ~ 20S */
#define S2MPS26_LDO_MIN2		1800000
#define S2MPS26_LDO_STEP2		25000

/* LDO/BUCK output voltage control */
#define S2MPS26_LDO_VSEL_MASK1		0xFF	/* LDO_OUT */
#define S2MPS26_LDO_VSEL_MASK2		0x3F	/* LDO_CTRL */
#define S2MPS26_BUCK_VSEL_MASK		0xFF
#define S2MPS26_BB_VSEL_MASK		0x7F
#define S2MPS26_BUCK_N_VOLTAGES 	(S2MPS26_BUCK_VSEL_MASK + 1)
#define S2MPS26_BB_N_VOLTAGES		(S2MPS26_BB_VSEL_MASK +1)

/* BUCK/LDO Enable control[7:6] */
#define S2MPS26_ENABLE_SHIFT		0x06
#define S2MPS26_ENABLE_MASK		(0x03 << S2MPS26_ENABLE_SHIFT)
#define SEL_VGPIO_ON			(0x01 << S2MPS26_ENABLE_SHIFT)

#define S2MPS26_REGULATOR_MAX		(S2MPS26_REG_MAX)

/* Set LDO/BUCK soft time */
#define S2MPS26_ENABLE_TIME_LDO		128
#define S2MPS26_ENABLE_TIME_BUCK	130
#define S2MPS26_ENABLE_TIME_BUCK_SR	130
#define S2MPS26_ENABLE_TIME_BB		160

/* OI mask */
#define S2MPS26_PMIC_IRQ_OI_B1_MASK	(1 << 0)
#define S2MPS26_PMIC_IRQ_OI_B2_MASK	(1 << 1)
#define S2MPS26_PMIC_IRQ_OI_B3_MASK	(1 << 2)
#define S2MPS26_PMIC_IRQ_OI_B4_MASK	(1 << 3)
#define S2MPS26_PMIC_IRQ_OI_B5_MASK	(1 << 4)
#define S2MPS26_PMIC_IRQ_OI_B6_MASK	(1 << 5)
#define S2MPS26_PMIC_IRQ_OI_B7_MASK	(1 << 6)
#define S2MPS26_PMIC_IRQ_OI_B8_MASK	(1 << 7)
#define S2MPS26_PMIC_IRQ_OI_B9_MASK	(1 << 0)
#define S2MPS26_PMIC_IRQ_OI_B10_MASK	(1 << 1)
#define S2MPS26_PMIC_IRQ_OI_B11_MASK	(1 << 2)
#define S2MPS26_PMIC_IRQ_OI_B12_MASK	(1 << 3)
#define S2MPS26_PMIC_IRQ_OI_SR1S_MASK	(1 << 4)
#define S2MPS26_PMIC_IRQ_OI_BB_MASK	(1 << 5)

/* OCP mask */
#define S2MPS26_PMIC_IRQ_OCP_B1_MASK	(1 << 0)
#define S2MPS26_PMIC_IRQ_OCP_B2_MASK	(1 << 1)
#define S2MPS26_PMIC_IRQ_OCP_B3_MASK	(1 << 2)
#define S2MPS26_PMIC_IRQ_OCP_B4_MASK	(1 << 3)
#define S2MPS26_PMIC_IRQ_OCP_B5_MASK	(1 << 4)
#define S2MPS26_PMIC_IRQ_OCP_B6_MASK	(1 << 5)
#define S2MPS26_PMIC_IRQ_OCP_B7_MASK	(1 << 6)
#define S2MPS26_PMIC_IRQ_OCP_B8_MASK	(1 << 7)
#define S2MPS26_PMIC_IRQ_OCP_B9_MASK	(1 << 0)
#define S2MPS26_PMIC_IRQ_OCP_B10_MASK	(1 << 1)
#define S2MPS26_PMIC_IRQ_OCP_B11_MASK	(1 << 2)
#define S2MPS26_PMIC_IRQ_OCP_B12_MASK	(1 << 3)
#define S2MPS26_PMIC_IRQ_OCP_SR1S_MASK	(1 << 4)
#define S2MPS26_PMIC_IRQ_OCP_BB_MASK	(1 << 5)

/* Temp mask */
#define S2MPS26_IRQ_INT120C_MASK	(1 << 2)
#define S2MPS26_IRQ_INT140C_MASK	(1 << 3)

/*
 * sec_opmode_data - regulator operation mode data
 * @id: regulator id
 * @mode: regulator operation mode
 */

enum s2mps26_temperature_source {
	S2MPS26_TEMP_120 = 0,	/* 120 degree */
	S2MPS26_TEMP_140,	/* 140 degree */

	S2MPS26_TEMP_NR,
};

enum s2mps26_irq_source {
	S2MPS26_PMIC_INT1 = 0,
	S2MPS26_PMIC_INT2,
	S2MPS26_PMIC_INT3,
	S2MPS26_PMIC_INT4,
	S2MPS26_PMIC_INT5,
	S2MPS26_PMIC_INT6,
	S2MPS26_PMIC_INT7,
	S2MPS26_IRQ_GROUP_NR,
};

#define S2MPS26_NUM_IRQ_PMIC_REGS_EVT0	6 /* INT1 ~ INT6 */
#define S2MPS26_NUM_IRQ_PMIC_REGS	7 /* INT1 ~ INT7 */
#define S2MPS26_BUCK_MAX		13
#define S2MPS26_TEMP_MAX		2
#define S2MPS26_LDO_OI_MAX		3

enum s2mps26_irq {
	/* PMIC */
	S2MPS26_PMIC_IRQ_PWRONF_INT1,
	S2MPS26_PMIC_IRQ_PWRONR_INT1,
	S2MPS26_PMIC_IRQ_INT120C_INT1,
	S2MPS26_PMIC_IRQ_INT140C_INT1,
	S2MPS26_PMIC_IRQ_TSD_INT1,
	S2MPS26_PMIC_IRQ_WTSR_INT1,
	S2MPS26_PMIC_IRQ_WRSTB_INT1,
	S2MPS26_PMIC_IRQ_TX_TRAN_FAIL_INT1,

	S2MPS26_PMIC_IRQ_OCP_B1S_INT2,
	S2MPS26_PMIC_IRQ_OCP_B2S_INT2,
	S2MPS26_PMIC_IRQ_OCP_B3S_INT2,
	S2MPS26_PMIC_IRQ_OCP_B4S_INT2,
	S2MPS26_PMIC_IRQ_OCP_B5S_INT2,
	S2MPS26_PMIC_IRQ_OCP_B6S_INT2,
	S2MPS26_PMIC_IRQ_OCP_B7S_INT2,
	S2MPS26_PMIC_IRQ_OCP_B8S_INT2,

	S2MPS26_PMIC_IRQ_OCP_B9S_INT2,
	S2MPS26_PMIC_IRQ_OCP_B10S_INT2,
	S2MPS26_PMIC_IRQ_OCP_B11S_INT2,
	S2MPS26_PMIC_IRQ_OCP_B12S_INT2,
	S2MPS26_PMIC_IRQ_OCP_SR1S_INT2,
	S2MPS26_PMIC_IRQ_OCP_BB_INT3,
	S2MPS26_PMIC_IRQ_UV_BB_INT3,
	S2MPS26_PMIC_IRQ_BB_NTR_DET_INT3,

	S2MPS26_PMIC_IRQ_OI_B1S_INT4,
	S2MPS26_PMIC_IRQ_OI_B2S_INT4,
	S2MPS26_PMIC_IRQ_OI_B3S_INT4,
	S2MPS26_PMIC_IRQ_OI_B4S_INT4,
	S2MPS26_PMIC_IRQ_OI_B5S_INT4,
	S2MPS26_PMIC_IRQ_OI_B6S_INT4,
	S2MPS26_PMIC_IRQ_OI_B7S_INT4,
	S2MPS26_PMIC_IRQ_OI_B8S_INT4,

	S2MPS26_PMIC_IRQ_OI_B9S_INT5,
	S2MPS26_PMIC_IRQ_OI_B10S_INT5,
	S2MPS26_PMIC_IRQ_OI_B11S_INT5,
	S2MPS26_PMIC_IRQ_OI_B12S_INT5,
	S2MPS26_PMIC_IRQ_OI_SR1S_INT5,
	S2MPS26_PMIC_IRQ_OI_BB_INT5,
	S2MPS26_PMIC_IRQ_OVP_INT5,
	S2MPS26_PMIC_IRQ_BUCK_AUTO_EXIT_INT5,

	S2MPS26_PMIC_IRQ_LDO14_SCP_INT6,
	S2MPS26_PMIC_IRQ_LDO15_SCP_INT6,
	S2MPS26_PMIC_IRQ_LDO16_SCP_INT6,
	S2MPS26_PMIC_IRQ_CHECKSUM_INT6,
	S2MPS26_PMIC_IRQ_PARITY_ERR_DATA_INT6,
	S2MPS26_PMIC_IRQ_PARITY_ERR_ADDR_L_INT6,
	S2MPS26_PMIC_IRQ_PARITY_ERR_ADDR_R_INT6,
	S2MPS26_PMIC_IRQ_PARITY_ERR_CMD_INT6,

	S2MPS26_PMIC_IRQ_SPMI_LDO_OK_F_INT7,

	S2MPS26_IRQ_NR,
};

enum s2mps26_irq_type {
	/* OI */
	S2MPS26_IRQ_OI_B1S = 1,
	S2MPS26_IRQ_OI_B2S,
	S2MPS26_IRQ_OI_B3S,
	S2MPS26_IRQ_OI_B4S,
	S2MPS26_IRQ_OI_B5S,
	S2MPS26_IRQ_OI_B6S,
	S2MPS26_IRQ_OI_B7S,
	S2MPS26_IRQ_OI_B8S,
	S2MPS26_IRQ_OI_B9S,
	S2MPS26_IRQ_OI_B10S,
	S2MPS26_IRQ_OI_B11S,
	S2MPS26_IRQ_OI_B12S,
	S2MPS26_IRQ_OI_SR1S,
	S2MPS26_IRQ_OI_BBS,
	/* OCP */
	S2MPS26_IRQ_OCP_B1S,
	S2MPS26_IRQ_OCP_B2S,
	S2MPS26_IRQ_OCP_B3S,
	S2MPS26_IRQ_OCP_B4S,
	S2MPS26_IRQ_OCP_B5S,
	S2MPS26_IRQ_OCP_B6S,
	S2MPS26_IRQ_OCP_B7S,
	S2MPS26_IRQ_OCP_B8S,
	S2MPS26_IRQ_OCP_B9S,
	S2MPS26_IRQ_OCP_B10S,
	S2MPS26_IRQ_OCP_B11S,
	S2MPS26_IRQ_OCP_B12S,
	S2MPS26_IRQ_OCP_SR1S,
	S2MPS26_IRQ_OCP_BBS,
	/* Temp */
	S2MPS26_IRQ_INT120C,
	S2MPS26_IRQ_INT140C,
};

enum sec_device_type {
	S2MPS26X,
};

struct s2mps26_dev {
	struct device *dev;
	struct s2mps26_platform_data *pdata;
	struct i2c_client *i2c;
	struct i2c_client *vgpio;
	struct i2c_client *pmic1;
	struct i2c_client *pmic2;
	struct i2c_client *close1;
	struct i2c_client *close2;
	struct i2c_client *adc_i2c;
	struct i2c_client *gpio;
	struct mutex i2c_lock;
	struct mutex irqlock;
	struct apm_ops *ops;

	bool wakeup;
	int type;
	int device_type;

	/* IRQ */
	int irq;
	int irq_base;
	int irq_masks_cur[S2MPS26_IRQ_GROUP_NR];
	int irq_masks_cache[S2MPS26_IRQ_GROUP_NR];

	/* pmic VER/REV register */
	uint8_t pmic_rev;	/* pmic Rev */

	/* power meter */
#if IS_ENABLED(CONFIG_DRV_SAMSUNG_PMIC)
	struct device *powermeter_dev;
	struct device *irq_dev;
#endif
	struct adc_info *adc_meter;
	int adc_mode;

	/* VGPIO_RX_MONITOR */
	void __iomem *mem_base;

	/* Work queue */
	struct workqueue_struct *irq_wqueue;
	struct delayed_work irq_work;
};

enum s2mps26_types {
	TYPE_S2MPS26,
};

extern int s2mps26_adc_set_enable(struct adc_info *adc_meter, int en);
extern int s2mps26_notifier_init(struct s2mps26_dev *s2mps26);
extern void s2mps26_notifier_deinit(struct s2mps26_dev *s2mps26);

extern void s2mps26_powermeter_init(struct s2mps26_dev *s2mps26);
extern void s2mps26_powermeter_deinit(struct s2mps26_dev *s2mps26);

/* S2MPS26 shared i2c API function */
extern int s2mps26_read_reg(struct i2c_client *i2c, uint8_t reg, uint8_t *dest);
extern int s2mps26_bulk_read(struct i2c_client *i2c, uint8_t reg, int count,
			     uint8_t *buf);
extern int s2mps26_write_reg(struct i2c_client *i2c, uint8_t reg, uint8_t value);
extern int s2mps26_bulk_write(struct i2c_client *i2c, uint8_t reg, int count,
			      uint8_t *buf);
extern int s2mps26_write_word(struct i2c_client *i2c, uint8_t reg, uint16_t value);
extern int s2mps26_read_word(struct i2c_client *i2c, uint8_t reg);
extern int s2mps26_update_reg(struct i2c_client *i2c, uint8_t reg, uint8_t val, uint8_t mask);
#if IS_ENABLED(CONFIG_EXYNOS_AFM)
extern void get_s2mps26_i2c(struct i2c_client **i2c);
#endif

#endif /* __LINUX_MFD_S2MPS26_REGULATOR_H */
