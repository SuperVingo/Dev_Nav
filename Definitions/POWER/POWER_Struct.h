#ifndef __POWER_POWER_STRUCTURE_H__     
#define __POWER_POWER_STRUCTURE_H__    

#include "ustdint.h"

/*
 * CLK_SRC_LEFTBUS
 * 
 * Address = CLOCK Base Address 1 + 0x4200
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |      Description     | Reset Value | 
 * --------------------------------------------------------------------------|
 *                     |         |      | Controls MUXGDL      |             |
 * MUX_GDL_SEL         |   [0]   |  RW  | 0 : SCLKMPLL         |     0x0     |
 *                     |         |      | 1 : SCLKAPLL         |             |
 * --------------------------------------------------------------------------|
 * RSVD                |  [3:1]  |  -   | Reserved             |     0x0     |
 * --------------------------------------------------------------------------|
 *                     |         |      | Controls MUXMPLL     |             |
 * MUX_MPLL_USER_SEL_L |   [4]   |  RW  | 0 : FINPLL           |     0x0     |
 *                     |         |      | 1 : FOUTMPLL         |             |
 * --------------------------------------------------------------------------|
 * RSVD                |  [31:5] |  -   | Reserved             |     0x0     |
 * --------------------------------------------------------------------------|
 */

typedef union CLK_SRC_LEFTBUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MUX_GDL_SEL:1;             //0
        uint32_t Reserved0:3;                //3:1
        uint32_t MUX_MPLL_USER_SEL_L:1;     //4
        uint32_t Reserved1:27;    //31:5
    } bits;
} CLK_SRC_LEFTBUS;

#endif