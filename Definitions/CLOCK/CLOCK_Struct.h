#ifndef __GPIO_GPIO_STRUCTURE_H__     
#define __GPIO_GPIO_STRUCTURE_H__    

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

/*
 * CLK_MUX_STAT_LEFTBUS
 * 
 * Address = CLOCK Base Address 1 + 0x4400
 * Reset Value = 0x0000_0011
 * 
 *         Name        |   Bit   | Type |             Description                | Reset Value | 
 * --------------------------------------------------------------------------------------------|
 *                     |         |      | Selection Signal Status of MUXGDL      |             |
 * GDL_SEL             |  [2:0]  |  R   | 001 : SCLKMPLL                         |     0x1     |
 *                     |         |      | 010 : SCLKAPLL                         |             |
 *                     |         |      | 1xx : Status that the mux is changing  |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD                |   [3]   |  -   | Reserved                               |     0x0     |
 * --------------------------------------------------------------------------------------------|
 *                     |         |      | Selection Signal Status of MUXMPLL     |             |
 * MPLL_USER_SEL_L     |  [6:4]  |  R   | 001 : FINMPLL                          |     0x1     |
 *                     |         |      | 010 : FOUTMPL                          |             |
 *                     |         |      | 1xx : Status that the mux is changing  |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD                |  [31:7] |  -   | Reserved                               |     0x0     |
 * --------------------------------------------------------------------------------------------|
 */

typedef union CLK_MUX_STAT_LEFTBUS
{
    uint32_t all_val;
    struct
    {
        uint32_t GLD_SEL:3;           //2:0
        uint32_t Reserved0:3;          //3:1
        uint32_t MPLL_USER_SEL_L:3;   //6:4
        uint32_t Reserved1:25;         //31:7
    } bits;
} CLK_MUX_STAT_LEFTBUS;

/*
 * CLK_DIV_LEFTBUS
 * 
 * Address = CLOCK Base Address 1 + 0x4500
 * Reset Value = 0x0000_0000
 * 
 *      Name    |   Bit   | Type |               Description              | Reset Value | 
 * -------------------------------------------------------------------------------------|
 * GDL_RATIO    |  [2:0]  |  RW  | DIVGDL Clock Divider Ratio             |     0x0     |
 *              |         |      | ACLK_GDL = MOUTGDL / (GDL_RATIO + 1)   |             |
 * -------------------------------------------------------------------------------------|
 * RSVD         |   [3]   |  -   | Reserved                               |     0x0     |
 * -------------------------------------------------------------------------------------|
 * GPL_RATIO    |  [6:4]  |  RW  | DIVGPL Clock Divider Ratio             |             |
 *              |         |      | ACLK_GPL = MOUTGPL / (GPL_RATIO + 1)   |     0x0     |
 * -------------------------------------------------------------------------------------|
 * RSVD         |  [31:7] |  -   | Reserved                               |     0x0     |
 * -------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_LEFTBUS
{
    uint32_t all_val;
    struct
    {
        uint32_t GDL_RATIO:3;    //2:0
        uint32_t Reserved0:1;     //3
        uint32_t GPL_RATIO:3;    //6:4
        uint32_t Reserved1:25;    //31:7
    } bits;
} CLK_DIV_LEFTBUS;

/*
 * CLK_DIV_STAT_LEFTBUS
 * 
 * Address = CLOCK Base Address 1 + 0x4600
 * Reset Value = 0x0000_0000
 * 
 *      Name     |   Bit   | Type |               Description               | Reset Value | 
 * ---------------------------------------------------------------------------------------|
 *               |         |      | DIVGDL Status                           |             |
 * DIV_GDL       |   [0]   |  R   | 0 : Stable                              |     0x0     |
 *               |         |      | 1 : Status that the divider is changing |             |
 * ---------------------------------------------------------------------------------------|
 * RSVD          |  [3:1]  |  -   | Reserved                                |     0x0     |
 * ---------------------------------------------------------------------------------------|
 *               |         |      | DIVGPL Status                           |             |
 * DIV_GPL       |   [4]   |  R   | 0 : Stable                              |     0x0     |
 *               |         |      | 1 : Status that the divider is changing |             |
 * ---------------------------------------------------------------------------------------|
 * RSVD          |  [31:5] |  -   | Reserved                                |     0x0     |
 * ---------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_LEFTBUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_GDL:1;     //0
        uint32_t Reserved0:3;    //3:1
        uint32_t DIV_GPL:1;     //4
        uint32_t Reserved1:27;   //31:5
    } bits;
} CLK_DIV_STAT_LEFTBUS;

/*
 * CLK_GATE_IP_LEFTBUS
 * 
 * Address = CLOCK Base Address 1 + 0x4800
 * Reset Value = 0xFFFF_FFFF
 * 
 *      Name      |   Bit   | Type |               Description               | Reset Value | 
 * ----------------------------------------------------------------------------------------|
 *                |         |      | Gating all clocks for GPIO_LEFT         |             |
 * CLK_GPIO_LEFT  |   [0]   |  RW  | 0 : Mask                                |     0x1     |
 *                |         |      | 1 : Pass                                |             |
 * ----------------------------------------------------------------------------------------|
 *                |         |      | Gating all clocks for PPMULEFT          |             |
 * CLK_PPMULEFT   |   [1]   |  RW  | 0 : Mask                                |     0x1     |
 *                |         |      | 1 : Pass                                |             |
 * ----------------------------------------------------------------------------------------|
 * RSVD           |   [2]   |  -   | Reserved                                |     0x1     |
 * ----------------------------------------------------------------------------------------|
 *                |         |      | Gating all clocks for ASYNC_TVX         |             |
 * CLK_ASYNC_TVX  |   [3]   |  RW  | 0 : Mask                                |     0x1     |
 *                |         |      | 1 : Pass                                |             |
 * ----------------------------------------------------------------------------------------|
 *                |         |      | Gating all clocks for ASYNC_MFCL        |             |
 * CLK_ASYNC_MFCL |   [4]   |  RW  | 0 : Mask                                |     0x1     |
 *                |         |      | 1 : Pass                                |             |
 * ----------------------------------------------------------------------------------------|
 * RSVD           |   [5]   |  -   | Reserved                                |     0x1     |
 * ----------------------------------------------------------------------------------------|
 *                |         |      | Gating all clocks for ASYNC_G3D         |             |
 * CLK_ASYNC_G3D  |   [6]   |  RW  | 0 : Mask                                |     0x1     |
 *                |         |      | 1 : Pass                                |             |
 * ----------------------------------------------------------------------------------------|
 * RSVD           |  [31:7] |  -   | Reserved                                | 0x1FFF_FFFF |
 * ----------------------------------------------------------------------------------------|
 */

typedef union CLK_GATE_IP_LEFTBUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t CLK_GPIO_LEFT:1;   //0
        uint32_t CLK_PPMULEFT:1;    //1
        uint32_t Reserved0:1;        //2
        uint32_t CLK_ASYNC_TVX:1;   //3
        uint32_t CLK_ASYNC_MFCL:1;  //4
        uint32_t Reserved1:1;        //5
        uint32_t CLK_ASYNC_G3D:1;   //6
        uint32_t Reserved2:27;       //31:7
    } bits;
} CLK_GATE_IP_LEFTBUS;

/*
 * CLK_GATE_IP_IMAGE
 * 
 * Address = CLOCK Base Address 1 + 0x4930
 * Reset Value = 0xFFFF_FFFF
 * 
 *      Name      |   Bit   | Type |             Description             | Reset Value | 
 * ------------------------------------------------------------------------------------|
 * RSVD           |   [0]   |  -   | Reserved                            |     0x1     |
 * ------------------------------------------------------------------------------------|
 *                |         |      | Gating all clocks for ROTATOR       |             |
 * CLK_GPIO_LEFT  |   [1]   |  RW  | 0 : Mask                            |     0x1     |
 *                |         |      | 1 : Pass                            |             |
 * ------------------------------------------------------------------------------------|
 *                |         |      | Gating all clocks for MDMA          |             |
 * CLK_PPMULEFT   |   [2]   |  RW  | 0 : Mask                            |     0x1     |
 *                |         |      | 1 : Pass                            |             |
 * ------------------------------------------------------------------------------------|
 * RSVD           |   [3]   |  -   | Reserved                            |     0x1     |
 * ------------------------------------------------------------------------------------|
 *                |         |      | Gating all clocks for SMMUROTATOR   |             |
 * CLK_ASYNC_TVX  |   [4]   |  RW  | 0 : Mask                            |     0x1     |
 *                |         |      | 1 : Pass                            |             |
 * ------------------------------------------------------------------------------------|
 *                |         |      | Gating all clocks for SMMUMDMA      |             |
 * CLK_ASYNC_MFCL |   [5]   |  RW  | 0 : Mask                            |     0x1     |
 *                |         |      | 1 : Pass                            |             |
 * ------------------------------------------------------------------------------------|
 * RSVD           |   [6]   |  -   | Reserved                            |     0x1     |
 * ------------------------------------------------------------------------------------|
 * RSVD           |   [7]   |  -   | Reserved                            |     0x1     |
 * ------------------------------------------------------------------------------------|
 * RSVD           |   [8]   |  -   | Reserved                            |     0x1     |
 * ------------------------------------------------------------------------------------|
 *                |         |      | Gating all clocks for PPMUIMAGE     |             |
 * CLK_ASYNC_MFCL |   [9]   |  RW  | 0 : Mask                            |     0x1     |
 *                |         |      | 1 : Pass                            |             |
 * ------------------------------------------------------------------------------------|
 * RSVD           | [31:10] |  -   | Reserved                            |  0x3F_FFFF  |
 * ------------------------------------------------------------------------------------|
 */

typedef union CLK_GATE_IP_IMAGE_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:1;        //0
        uint32_t CLK_ROTATOR:1;     //1
        uint32_t CLK_MDMA:1;        //2
        uint32_t Reserved1:1;        //3
        uint32_t CLK_SMMUROTATOR:1; //4
        uint32_t CLK_SMMUMDMA:1;    //5
        uint32_t Reserved2:1;        //6
        uint32_t Reserved3:1;        //7
        uint32_t Reserved4:1;        //8
        uint32_t CLK_PPMUIMAGE:1;   //9
        uint32_t Reserved5:22;       //31:10
    } bits;
} CLK_GATE_IP_IMAGE;

/*
 * CLKOUT_CMU_LEFTBUS
 * 
 * Address = CLOCK Base Address 1 + 0x4A00
 * Reset Value = 0x0001_0000
 * 
 *      Name     |   Bit   | Type |               Description               | Reset Value | 
 * ---------------------------------------------------------------------------------------|
 *               |         |      | MUX selection                           |             |
 *               |         |      | 00000b : SCLK_MPLL / 2                  |             |
 * MUX_SEL       |  [4:0]  |  RW  | 00001b : SCLK_APLL / 2                  |     0x0     |
 *               |         |      | 00010b : ACLK_GDL                       |             |
 *               |         |      | 00011b : ACLK_GPL                       |             |
 * ---------------------------------------------------------------------------------------|
 * RSVD          |  [7:5]  |  -   | Reserved                                |     0x0     |
 * ---------------------------------------------------------------------------------------|
 * DIV_RATIO     |  [13:8] |  RW  | Divide Ratio                            |     0x0     |
 *               |         |      | Divide ratio : DIV_RATIO + 1            |             |
 * ---------------------------------------------------------------------------------------|
 * RSVD          | [15:14] |  -   | Reserved                                |     0x0     |
 * ---------------------------------------------------------------------------------------|
 *               |         |      | Enable CLKOUT                           |             |
 * ENB_CLKOUT    |   [16]  |  RW  | 0 : Disables                            |     0x0     |
 *               |         |      | 1 : Enables                             |             |
 * ---------------------------------------------------------------------------------------|
 * RSVD          | [31:17] |  -   | Reserved                                |     0x0     |
 * ---------------------------------------------------------------------------------------|
 */

typedef union CLKOUT_CMU_LEFTBUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MUX_SEL:4;     //4:0
        uint32_t Reserved0:3;    //7:5
        uint32_t DIV_RATIO:6;   //13:8
        uint32_t Reserved1:2;    //15:14
        uint32_t ENB_CLKOUT:1;  //16
        uint32_t Reserved2:15;   //31:17
    } bits;
} CLKOUT_CMU_LEFTBUS;

/*
 * CLKOUT_CMU_LEFTBUS_DIV_STAT
 * 
 * Address = CLOCK Base Address 1 + 0x4A04
 * Reset Value = 0x0000_0000
 * 
 *      Name     |   Bit   | Type |               Description               | Reset Value | 
 * ---------------------------------------------------------------------------------------|
 *               |         |      | DIVCLKOUT Status                        |             |
 * DIV_STAT      |   [0]   |  R   | 0 : Stables                             |     0x0     |
 *               |         |      | 1 : Status that the divider is changing |             |
 * ---------------------------------------------------------------------------------------|
 * RSVD          |  [31:1] |  -   | Reserved                                |     0x0     |
 * ---------------------------------------------------------------------------------------|
 */

typedef union CLKOUT_CMU_LEFTBUS_DIV_STAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_STAT:1;     //0
        uint32_t Reserved0:31;    //31:1
    } bits;
} CLKOUT_CMU_LEFTBUS_DIV_STAT;

/*
 * CLK_SRC_RIGHTBUS
 * 
 * Address = CLOCK Base Address 1 + 0x8200
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |      Description     | Reset Value | 
 * --------------------------------------------------------------------------|
 *                     |         |      | Controls MUXGDR      |             |
 * MUX_GDL_SEL         |   [0]   |  RW  | 0 : SCLKMPLL         |     0x0     |
 *                     |         |      | 1 : SCLKAPLL         |             |
 * --------------------------------------------------------------------------|
 * RSVD                |  [3:1]  |  -   | Reserved             |     0x0     |
 * --------------------------------------------------------------------------|
 *                     |         |      | Controls MUXMPLL     |             |
 * MUX_MPLL_USER_SEL_R |   [4]   |  RW  | 0 : FINPLL           |     0x0     |
 *                     |         |      | 1 : FOUTMPLL         |             |
 * --------------------------------------------------------------------------|
 * RSVD                |  [31:5] |  -   | Reserved             |     0x0     |
 * --------------------------------------------------------------------------|
 */

typedef union CLK_SRC_RIGHTBUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MUX_GDL_SEL:1;             //0
        uint32_t Reserved0:3;                //3:1
        uint32_t MUX_MPLL_USER_SEL_R:1;     //4
        uint32_t Reserved1:27;    //31:5
    } bits;
} CLK_SRC_RIGHTBUS;

/*
 * CLK_MUX_STAT_RIGHTBUS
 * 
 * Address = CLOCK Base Address 1 + 0x8400
 * Reset Value = 0x0000_0011
 * 
 *         Name        |   Bit   | Type |             Description                | Reset Value | 
 * --------------------------------------------------------------------------------------------|
 *                     |         |      | Selection Signal Status of MUXGDR      |             |
 * GDR_SEL             |  [2:0]  |  R   | 001 : SCLKMPLL                         |     0x1     |
 *                     |         |      | 010 : SCLKAPLL                         |             |
 *                     |         |      | 1xx : Status that the mux is changing  |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD                |   [3]   |  -   | Reserved                               |     0x0     |
 * --------------------------------------------------------------------------------------------|
 *                     |         |      | Selection Signal Status of MUXMPLL     |             |
 * MPLL_USER_SEL_R     |  [6:4]  |  R   | 001 : FINMPLL                          |     0x1     |
 *                     |         |      | 010 : FOUTMPL                          |             |
 *                     |         |      | 1xx : Status that the mux is changing  |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD                |  [31:7] |  -   | Reserved                               |     0x0     |
 * --------------------------------------------------------------------------------------------|
 */

typedef union CLK_MUX_STAT_RIGHTBUS
{
    uint32_t all_val;
    struct
    {
        uint32_t GLD_SEL:3;           //2:0
        uint32_t Reserved0:3;          //3:1
        uint32_t MPLL_USER_SEL_L:3;   //6:4
        uint32_t Reserved1:25;         //31:7
    } bits;
} CLK_MUX_STAT_RIGHTBUS;

/*
 * CLK_DIV_RIGHTBUS
 * 
 * Address = CLOCK Base Address 1 + 0x8500
 * Reset Value = 0x0000_0000
 * 
 *      Name    |   Bit   | Type |               Description              | Reset Value | 
 * -------------------------------------------------------------------------------------|
 * GDR_RATIO    |  [2:0]  |  RW  | DIVGDR Clock Divider Ratio             |     0x0     |
 *              |         |      | ACLK_GDR = MOUTGDR / (GDR_RATIO + 1)   |             |
 * -------------------------------------------------------------------------------------|
 * RSVD         |   [3]   |  -   | Reserved                               |     0x0     |
 * -------------------------------------------------------------------------------------|
 * GPR_RATIO    |  [6:4]  |  RW  | DIVGPR Clock Divider Ratio             |             |
 *              |         |      | ACLK_GPR = MOUTGPR / (GPR_RATIO + 1)   |     0x0     |
 * -------------------------------------------------------------------------------------|
 * RSVD         |  [31:7] |  -   | Reserved                               |     0x0     |
 * -------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_RIGHTBUS
{
    uint32_t all_val;
    struct
    {
        uint32_t GDR_RATIO:3;    //2:0
        uint32_t Reserved0:1;     //3
        uint32_t GPR_RATIO:3;    //6:4
        uint32_t Reserved1:25;    //31:7
    } bits;
} CLK_DIV_RIGHTBUS;

/*
 * CLK_DIV_STAT_RIGHTBUS
 * 
 * Address = CLOCK Base Address 1 + 0x8600
 * Reset Value = 0x0000_0000
 * 
 *      Name     |   Bit   | Type |               Description               | Reset Value | 
 * ---------------------------------------------------------------------------------------|
 *               |         |      | DIVGDR Status                           |             |
 * DIV_GDR       |   [0]   |  R   | 0 : Stable                              |     0x0     |
 *               |         |      | 1 : Status that the divider is changing |             |
 * ---------------------------------------------------------------------------------------|
 * RSVD          |  [3:1]  |  -   | Reserved                                |     0x0     |
 * ---------------------------------------------------------------------------------------|
 *               |         |      | DIVGPR Status                           |             |
 * DIV_GPR       |   [4]   |  R   | 0 : Stable                              |     0x0     |
 *               |         |      | 1 : Status that the divider is changing |             |
 * ---------------------------------------------------------------------------------------|
 * RSVD          |  [31:5] |  -   | Reserved                                |     0x0     |
 * ---------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_RIGHTBUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_GDR:1;     //0
        uint32_t Reserved0:3;    //3:1
        uint32_t DIV_GPR:1;     //4
        uint32_t Reserved1:27;   //31:5
    } bits;
} CLK_DIV_STAT_RIGHTBUS;

/*
 * CLK_GATE_IP_RIGHTBUS
 * 
 * Address = CLOCK Base Address 1 + 0x8800
 * Reset Value = 0xFFFF_FFFF
 * 
 *        Name       |   Bit   | Type |               Description               | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for GPIO_RIGHT        |             |
 * CLK_GPIO_RIGHT    |   [0]   |  RW  | 0 : Mask                                |     0x1     |
 *                   |         |      | 1 : Pass                                |             |
 * -------------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for PPMURIGHT         |             |
 * CLK_PPMURIGHT     |   [1]   |  RW  | 0 : Mask                                |     0x1     |
 *                   |         |      | 1 : Pass                                |             |
 * -------------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for ASYNC_CAMX        |             |
 * CLK_ASYNC_CAMX    |   [2]   |  RW  | 0 : Mask                                |     0x1     |
 *                   |         |      | 1 : Pass                                |             |
 * -------------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for ASYNC_LCD0X       |             |
 * CLK_ASYNC_LCD0X   |   [3]   |  RW  | 0 : Mask                                |     0x1     |
 *                   |         |      | 1 : Pass                                |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD              |   [4]   |  -   | Reserved                                |     0x1     |
 * -------------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for ASYNC_FSYSD       |             |
 * CLK_ASYNC_FSYSD   |   [5]   |  RW  | 0 : Mask                                |     0x1     |
 *                   |         |      | 1 : Pass                                |             |
 * -------------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for ASYNC_MFCR        |             |
 * CLK_ASYNC_MFCR    |   [6]   |  RW  | 0 : Mask                                |     0x1     |
 *                   |         |      | 1 : Pass                                |             |
 * -------------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for ASYNC_MAUDIOX     |             |
 * CLK_ASYNC_MAUDIOX |   [7]   |  RW  | 0 : Mask                                |     0x1     |
 *                   |         |      | 1 : Pass                                |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD              |   [8]   |  -   | Reserved                                |     0x1     |
 * -------------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for ASYNC_ISPMX       |             |
 * CLK_ASYNC_ISPMX   |   [9]   |  RW  | 0 : Mask                                |     0x1     |
 *                   |         |      | 1 : Pass                                |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD              | [31:10] |  -   | Reserved                                |  0x3F_FFFF  |
 * -------------------------------------------------------------------------------------------|
 */

typedef union CLK_GATE_IP_RIGHTBUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t CLK_GPIO_RIGHT:1;    //0
        uint32_t CLK_PPMURIGHT:1;     //1
        uint32_t CLK_ASYNC_CAMX:1;    //2
        uint32_t CLK_ASYNC_LCD0X:1;   //3
        uint32_t Reserved0:1;          //4
        uint32_t CLK_ASYNC_FSYSD:1;   //5
        uint32_t CLK_ASYNC_MFCR:1;    //6
        uint32_t CLK_ASYNC_MAUDIOX:1; //7
        uint32_t Reserved1:1;          //8
        uint32_t CLK_ASYNC_ISPMX:1;   //9
        uint32_t Reserved2:22;         //31:10
    } bits;
} CLK_GATE_IP_RIGHTBUS;

/*
 * CLK_GATE_IP_PERIR
 * 
 * Address = CLOCK Base Address 1 + 0x8960
 * Reset Value = 0xFFFF_FFFF
 * 
 *      Name         |   Bit   | Type |             Description             | Reset Value | 
 * ---------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for CHIP ID       |             |
 * CLK_CHIP_ID       |   [0]   |  RW  | 0 : Mask                            |     0x1     |
 *                   |         |      | 1 : Pass                            |             |
 * ---------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for SYSREG        |             |
 * CLK_SYSREG        |   [1]   |  RW  | 0 : Mask                            |     0x1     |
 *                   |         |      | 1 : Pass                            |             |
 * ---------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for PMU_APBIF     |             |
 * CLK_PMU_APBIF     |   [2]   |  RW  | 0 : Mask                            |     0x1     |
 *                   |         |      | 1 : Pass                            |             |
 * ---------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for CMU_TOPPART   |             |
 * CLK_CMU_TOPPART   |   [3]   |  RW  | 0 : Mask                            |     0x1     |
 *                   |         |      | 1 : Pass                            |             |
 * ---------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for CMU_COREPART  |             |
 * CLK_CMU_COREPART  |   [4]   |  RW  | 0 : Mask                            |     0x1     |
 *                   |         |      | 1 : Pass                            |             |
 * ---------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for TZPC0         |             |
 * CLK_TZPC0         |   [5]   |  RW  | 0 : Mask                            |     0x1     |
 *                   |         |      | 1 : Pass                            |             |
 * ---------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for TZPC1         |             |
 * CLK_TZPC1         |   [6]   |  RW  | 0 : Mask                            |     0x1     |
 *                   |         |      | 1 : Pass                            |             |
 * ---------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for TZPC2         |             |
 * CLK_TZPC2         |   [7]   |  RW  | 0 : Mask                            |     0x1     |
 *                   |         |      | 1 : Pass                            |             |
 * ---------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for TZPC3         |             |
 * CLK_TZPC3         |   [8]   |  RW  | 0 : Mask                            |     0x1     |
 *                   |         |      | 1 : Pass                            |             |
 * ---------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for TZPC4         |             |
 * CLK_TZPC4         |   [9]   |  RW  | 0 : Mask                            |     0x1     |
 *                   |         |      | 1 : Pass                            |             |
 * ---------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for TZPC5         |             |
 * CLK_TZPC5         |   [10]  |  RW  | 0 : Mask                            |     0x1     |
 *                   |         |      | 1 : Pass                            |             |
 * ---------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for HDMI_CEC      |             |
 * CLK_HDMI_CEC      |   [11]  |  RW  | 0 : Mask                            |     0x1     |
 *                   |         |      | 1 : Pass                            |             |
 * ---------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for SECKEY        |             |
 * CLK_SECKEY        |   [12]  |  RW  | 0 : Mask                            |     0x1     |
 *                   |         |      | 1 : Pass                            |             |
 * ---------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for System Timer  |             |
 * CLK_MCT           |   [13]  |  RW  | 0 : Mask                            |     0x1     |
 *                   |         |      | 1 : Pass                            |             |
 * ---------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for WDT           |             |
 * CLK_WDT           |   [14]  |  RW  | 0 : Mask                            |     0x1     |
 *                   |         |      | 1 : Pass                            |             |
 * ---------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for RTC           |             |
 * CLK_RTC           |   [15]  |  RW  | 0 : Mask                            |     0x1     |
 *                   |         |      | 1 : Pass                            |             |
 * ---------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for KEYIF         |             |
 * CLK_KEYIF         |   [16]  |  RW  | 0 : Mask                            |     0x1     |
 *                   |         |      | 1 : Pass                            |             |
 * ---------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for TMU_APBIF     |             |
 * CLK_TMU_APBIF     |   [17]  |  RW  | 0 : Mask                            |     0x1     |
 *                   |         |      | 1 : Pass                            |             |
 * ---------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clocks for CMU_ISPPART   |             |
 * CLK_CMU_ISPPART   |   [18]  |  RW  | 0 : Mask                            |     0x1     |
 *                   |         |      | 1 : Pass                            |             |
 * ---------------------------------------------------------------------------------------|
 * RSVD              | [31:19] |  -   | Reserved                            |    0x1FFF   |
 * ---------------------------------------------------------------------------------------|
 */

typedef union CLK_GATE_IP_PERIR_u
{
    uint32_t all_val;
    struct
    {
        uint32_t CLK_CHIP_ID:1;      //0
        uint32_t CLK_SYSREG:1;       //1
        uint32_t CLK_PMU_APBIF:1;    //2
        uint32_t CLK_CMU_TOPPART:1;  //3
        uint32_t CLK_CMU_COREPART:1; //4
        uint32_t CLK_TZPC0:1;        //5
        uint32_t CLK_TZPC1:1;        //6
        uint32_t CLK_TZPC2:1;        //7
        uint32_t CLK_TZPC3:1;        //8
        uint32_t CLK_TZPC4:1;        //9
        uint32_t CLK_TZPC5:1;        //10
        uint32_t CLK_HDMI_CEC:1;     //11
        uint32_t CLK_SECKEY:1;       //12
        uint32_t CLK_MCT:1;          //13
        uint32_t CLK_WDT:1;          //14
        uint32_t CLK_RTC:1;          //15
        uint32_t CLK_KEYIF:1;        //16
        uint32_t CLK_TMU_APBIF:1;    //17
        uint32_t CLK_CMU_ISPPART:1;  //18
        uint32_t Reserved0:12;        //31:19
    } bits;
} CLK_GATE_IP_PERIR;

/*
 * CLKOUT_CMU_RIGHTBUS
 * 
 * Address = CLOCK Base Address 1 + 0x8A00
 * Reset Value = 0x0001_0000
 * 
 *      Name     |   Bit   | Type |               Description               | Reset Value | 
 * ---------------------------------------------------------------------------------------|
 *               |         |      | MUX selection                           |             |
 *               |         |      | 00000b : SCLK_MPLL / 2                  |             |
 * MUX_SEL       |  [4:0]  |  RW  | 00001b : SCLK_APLL / 2                  |     0x0     |
 *               |         |      | 00010b : ACLK_GDR                       |             |
 *               |         |      | 00011b : ACLK_GPR                       |             |
 * ---------------------------------------------------------------------------------------|
 * RSVD          |  [7:5]  |  -   | Reserved                                |     0x0     |
 * ---------------------------------------------------------------------------------------|
 * DIV_RATIO     |  [13:8] |  RW  | Divide Ratio                            |     0x0     |
 *               |         |      | Divide ratio : DIV_RATIO + 1            |             |
 * ---------------------------------------------------------------------------------------|
 * RSVD          | [15:14] |  -   | Reserved                                |     0x0     |
 * ---------------------------------------------------------------------------------------|
 *               |         |      | Enable CLKOUT                           |             |
 * ENB_CLKOUT    |   [16]  |  RW  | 0 : Disables                            |     0x0     |
 *               |         |      | 1 : Enables                             |             |
 * ---------------------------------------------------------------------------------------|
 * RSVD          | [31:17] |  -   | Reserved                                |     0x0     |
 * ---------------------------------------------------------------------------------------|
 */

typedef union CLKOUT_CMU_RIGHTBUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MUX_SEL:4;     //4:0
        uint32_t Reserved0:3;    //7:5
        uint32_t DIV_RATIO:6;   //13:8
        uint32_t Reserved1:2;    //15:14
        uint32_t ENB_CLKOUT:1;  //16
        uint32_t Reserved2:15;   //31:17
    } bits;
} CLKOUT_CMU_RIGHTBUS;

/*
 * CLKOUT_CMU_RIGHTBUS_DIV_STAT
 * 
 * Address = CLOCK Base Address 1 + 0x8A04
 * Reset Value = 0x0000_0000
 * 
 *      Name     |   Bit   | Type |               Description               | Reset Value | 
 * ---------------------------------------------------------------------------------------|
 *               |         |      | DIVCLKOUT Status                        |             |
 * DIV_STAT      |   [0]   |  R   | 0 : Stables                             |     0x0     |
 *               |         |      | 1 : Status that the divider is changing |             |
 * ---------------------------------------------------------------------------------------|
 * RSVD          |  [31:1] |  -   | Reserved                                |     0x0     |
 * ---------------------------------------------------------------------------------------|
 */

typedef union CLKOUT_CMU_RIGHTBUS_DIV_STAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_STAT:1;     //0
        uint32_t Reserved0:31;    //31:1
    } bits;
} CLKOUT_CMU_LEFTBUS_DIV_STAT;

/*
 * EPLL_LOCK
 * 
 * Address = CLOCK Base Address 1 + 0xC010
 * Reset Value = 0x0000_0FFF
 * 
 *      Name     |   Bit   | Type |                    Description                    | Reset Value | 
 * -------------------------------------------------------------------------------------------------|
 *               |         |      | Required period to generate a stable clock output |             |
 *               |         |      | Set ( 3000 cycles x PDIV ) to PLL_LOCKTIME for    |             |
 *               |         |      | the PLL maximum lock time                         |             |
 * PLL_LOCKTIME  |  [15:0] |  RW  | 1 cycle = 1 / FREF = 1 / (FIN / PDIV)             |    0xFFF    |
 *               |         |      | The maximum PLL lock time is 250 usec where       |             |
 *               |         |      | FIN is 24MHz. PDIV is 2 and PLL_LOCKTIME is       |             |
 *               |         |      | 6000.                                             |             |
 * -------------------------------------------------------------------------------------------------|
 * RSVD          | [31:16] |  -   | Reserved                                          |     0x0     |
 * -------------------------------------------------------------------------------------------------|
 * 
 * The maximum lock time means the waiting time for locking in the worst case. Therefore, the user of this PLL must 
 * wait for more than the maximum lock time unconditionally before the PLL is locked. 
 * (Waiting time before locking >= the maximum locktime) 
 */

typedef union EPLL_LOCK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PLL_LOCKTIME:16; //15:0
        uint32_t Reserved0:16;     //31:16
    } bits;
} EPLL_LOCK;

/*
 * VPLL_LOCK
 * 
 * Address = CLOCK Base Address 1 + 0xC020
 * Reset Value = 0x0000_0FFF
 * 
 *      Name     |   Bit   | Type |                    Description                    | Reset Value | 
 * -------------------------------------------------------------------------------------------------|
 *               |         |      | Required period to generate a stable clock output |             |
 *               |         |      | Set ( 3000 cycles x PDIV ) to PLL_LOCKTIME for    |             |
 *               |         |      | the PLL maximum lock time                         |             |
 * PLL_LOCKTIME  |  [15:0] |  RW  | 1 cycle = 1 / FREF = 1 / (FIN / PDIV)             |    0xFFF    |
 *               |         |      | The maximum PLL lock time is 250 usec where       |             |
 *               |         |      | FIN is 24MHz. PDIV is 2 and PLL_LOCKTIME is       |             |
 *               |         |      | 6000.                                             |             |
 * -------------------------------------------------------------------------------------------------|
 * RSVD          | [31:16] |  -   | Reserved                                          |     0x0     |
 * -------------------------------------------------------------------------------------------------|
 * 
 * The maximum lock time means the waiting time for locking in the worst case. Therefore, the user of this PLL must 
 * wait for more than the maximum lock time unconditionally before the PLL is locked. 
 * (Waiting time before locking >= the maximum locktime) 
 */

typedef union VPLL_LOCK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PLL_LOCKTIME:16; //15:0
        uint32_t Reserved0:16;     //31:16
    } bits;
} VPLL_LOCK;

/*
 * EPLL_CON0
 * 
 * Address = CLOCK Base Address 1 + 0xC110
 * Reset Value = 0x0060_0302
 * 
 *      Name     |   Bit   | Type |                     Description                     | Reset Value | 
 * ---------------------------------------------------------------------------------------------------|
 * SDIV          |  [2:0]  |  RW  | PLL S Divide Value                                  |     0x2     |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD          |  [7:3]  |  -   | Reserved                                            |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 * PDIV          |  [13:8] |  RW  | PLL P Divide Value                                  |     0x3     |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD          | [15:14] |  -   | Reserved                                            |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 * MDIV          | [24:16] |  RW  | PLL M Divide Value                                  |     0x60    |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD          | [28:25] |  -   | Reserved                                            |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *               |         |      | PLL Locking Indication                              |             |
 *               |         |      | 0 : Unlocks                                         |             |
 * LOCKED        |  [29]   |  R   | 1 : Locks                                           |     0x0     |
 *               |         |      | This field is set after the locking time. EPLL_LOCK |             |
 *               |         |      | SFR register sets the locking time.                 |             |
 *               |         |      | It is a Read Only register                          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD          |  [30]   |  -   | Reserved                                            |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *               |         |      | PLL Enable Control                                  |             |
 * ENABLE        |  [31]   |  RW  | 0 : Disables                                        |     0x0     |
 *               |         |      | 1 : Enables                                         |             |
 * ---------------------------------------------------------------------------------------------------|
 * 
 * The reset value of EPLL_CON0 generates a 192MHz output clock for the input clock requency of 24MHz.
 * 
 * The equation to calculate the output frequency is : F(out) = (MDIV + K / 65536) * F(in) / (PDIV * 2^SDIV)
 * The conditions MDIV, PDIV, SDIV, and K
 * should meet are:
 *      PDIV    : 1  <= PDIV <= 63
 *      MDIV    : 16 <= MDIV <= 511
 *      SDIV    : 0  <= SDIV <= 5
 *      K       : 0  <=  K   <= 65535
 *      F(ref)  : F(in) / PDIV, where 4MHz <= F(ref) <= 30MHz
 *      F(VCO)  : (MDIV + K / 65535) * FIN / PDIV
 *      F(out) should fall in the range of: 22MHz >= F(out) <= 1400MHz
 *      Do not set the value PDIV or MDIV to all zeros.
 */

typedef union EPLL_CON0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SDIV:3;     //2:0
        uint32_t Reserved0:5; //7:3
        uint32_t PDIV:6;     //13:8
        uint32_t Reserved1:2; //15:14
        uint32_t MDIV:9;     //24:16
        uint32_t Reserved2:4; //28:25
        uint32_t LOCKED:1;   //29
        uint32_t Reserved3:1; //30
        uint32_t ENABLE:1;   //31
    } bits;
} EPLL_CON0;

/*
 * EPLL_CON1
 * 
 * Address = CLOCK Base Address 1 + 0xC114
 * Reset Value = 0x6601_0000
 * 
 *    Name  |   Bit   | Type |                     Description                     | Reset Value | 
 * ----------------------------------------------------------------------------------------------|
 * K        |  [15:0] |  RW  | PLL 16-bit DSM (DElta-Sigma Modulator)              |     0x0     |
 * ----------------------------------------------------------------------------------------------|
 * MFR      | [23:16] |  RW  | Modulation Frequency Control                        |     0x1     |
 * ----------------------------------------------------------------------------------------------|
 * MRR      | [28:24] |  RW  | Modulation Rate Control                             |     0x6     |
 * ----------------------------------------------------------------------------------------------|
 *          |         |      | Modulation Method Control                           |             |
 * SEL_PF   | [30:29] |  RW  | 00 : Down spread                                    |     0x3     |
 *          |         |      | 01 : Up spread                                      |             |
 *          |         |      | 1x : Center spread                                  |             |
 * ----------------------------------------------------------------------------------------------|
 * RSVD     |  [31]   |  -   | Reserved                                            |     0x0     |
 * ----------------------------------------------------------------------------------------------|
 */

typedef union EPLL_CON1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t K:16;       //15:0
        uint32_t MFR:8;      //23:16
        uint32_t MRR:5;      //28:24
        uint32_t SEL_PF:2;   //30:29
        uint32_t Reserved0:1; //31
    } bits;
} EPLL_CON1;

/*
 * EPLL_CON2
 * 
 * Address = CLOCK Base Address 1 + 0xC118
 * Reset Value = 0x0000_0080
 * 
 *      Name     |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------|
 * ICP_BOOST     |  [2:0]  |  RW  | ICP_BOOST                                            |     0x0     |
 * ----------------------------------------------------------------------------------------------------|
 *               |         |      | Pin selection for monitoring purposes.               |             |
 * FSEL          |  [7:3]  |  RW  | F(VCO_OUT) = F(ref), if FSEL is set to 0             |     0x0     |
 *               |         |      | F(VCO_OUT) = F(eed), if FSEL is set to 1             |             |
 * ----------------------------------------------------------------------------------------------------|
 * FVCO_EN       |  [13:8] |  RW  | Enable pin for F(VCO_OUT)                            |     0x0     |
 * ----------------------------------------------------------------------------------------------------|
 *               |         |      | If BYPASS = 1, then it enables bypass mode (F(OUT) = |             |
 * BYPASS        | [15:14] |  RW  | F(IN))                                               |     0x0     |
 *               |         |      | If BYPASS = 0, then PLL3600X operates normally.      |             |
 * ----------------------------------------------------------------------------------------------------|
 *               |         |      | Specifies if the dithered mode is enabled or not.    |             |
 * SSCG_EN       | [24:16] |  RW  | 0 : Disables dithered mode                           |     0x0     |
 *               |         |      | 1 : Enables dithered mode                            |             |
 * ----------------------------------------------------------------------------------------------------|
 *               |         |      | Decides wheather Adaptive Frequency Calibrator       |             |
 *               |         |      | (AFC) is enabled or not. WHen AFC is enabled, it     |             |
 * AFC_ENB       | [28:25] |  RW  | calibrates VCO automatically.                        |     0x0     |
 *               |         |      | 0 : Enables AFC                                      |             |
 *               |         |      | 1 : Disables AFC                                     |             |
 *               |         |      | It is an active low signal.                          |             |
 * ----------------------------------------------------------------------------------------------------|
 *               |         |      | Decides whether DUty Cycle Corrector (DCC) is        |             |
 *               |         |      | enabled or not.                                      |             |
 * DCC_ENB       |  [29]   |  RW  | 0 : Enables DCC                                      |     0x1     |
 *               |         |      | 1 : Disables DCC                                     |             |
 *               |         |      | It is an active low signal.                          |             |
 * ----------------------------------------------------------------------------------------------------|
 * EXTAFC        |  [30]   |  RW  | AFC value                                            |     0x0     |
 * ----------------------------------------------------------------------------------------------------|
 * RSVD          |  [31]   |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------|
 * 
 * If AFC_ENB is set to logic LOW, then it enables the AFC. If AFC_ENB is set to logic HIGH, then EXTAFC[4:0]
 * controls the VCO frequency tuning range.
 * 
 * EXTAFC speccifie4s the decimal value of EXTAFC[4:0] as:
 *      - EXTAFC = EXTAFC[4:0]
 * 
 * The hexadecimal values specified for EXTAFC[4:0] registers are:
 *      - 5`b0 0000 <= EXTAFC[4:0] <= 5`b1 1111
 */

typedef union EPLL_CON2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ICP_BOOST:2;  //1:0
        uint32_t FSEL:1;       //2
        uint32_t FVCO_EN:1;    //3
        uint32_t BYPASS:1;     //4
        uint32_t SSCG_EN:1;    //5
        uint32_t AFC_ENB:1;    //6
        uint32_t DCC_ENB:1;    //7
        uint32_t EXTAFC:5;     //12:8
        uint32_t Reserved0:18;  //31:13
    } bits;
} EPLL_CON2;

/*
 * VPLL_CON0
 * 
 * Address = CLOCK Base Address 1 + 0xC120
 * Reset Value = 0x006F_0302
 * 
 *      Name     |   Bit   | Type |                     Description                     | Reset Value | 
 * ---------------------------------------------------------------------------------------------------|
 * SDIV          |  [2:0]  |  RW  | PLL S Divide Value                                  |     0x2     |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD          |  [7:3]  |  -   | Reserved                                            |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 * PDIV          |  [13:8] |  RW  | PLL P Divide Value                                  |     0x3     |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD          | [15:14] |  -   | Reserved                                            |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 * MDIV          | [24:16] |  RW  | PLL M Divide Value                                  |     0x6F    |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD          | [28:25] |  -   | Reserved                                            |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *               |         |      | PLL Locking Indication                              |             |
 *               |         |      | 0 : Unlocks                                         |             |
 * LOCKED        |  [29]   |  R   | 1 : Locks                                           |     0x0     |
 *               |         |      | This field is set after the locking time. EPLL_LOCK |             |
 *               |         |      | SFR register sets the locking time.                 |             |
 *               |         |      | It is a Read Only register                          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD          |  [30]   |  -   | Reserved                                            |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *               |         |      | PLL Enable Control                                  |             |
 * ENABLE        |  [31]   |  RW  | 0 : Disables                                        |     0x0     |
 *               |         |      | 1 : Enables                                         |             |
 * ---------------------------------------------------------------------------------------------------|
 * 
 * The reset value of VPLL_CON0 generates a 222.75MHz output clock for the input clock requency of 24MHz.
 * Equation to calculate the output frequency is : F(OUT) = (MDIV + K / 65535) * F(IN) / (PDIV * 2^SDIV)
 *  
 * Where, MDIV, PDIV, SDIV, and K should meet the following conditions:
 *      PDIV    : 1  <= PDIV <= 63
 *      MDIV    : 16 <= MDIV <= 511
 *      SDIV    : 0  <= SDIV <= 5
 *      K       : 0  <=  K   <= 65535
 *      F(ref)  : F(in) / PDIV, Fref should fall in the range of: 4MHz <= F(ref) <= 30MHz
 *      F(VCO)  : (MDIV + K / 65535) * FIN / PDIV
 *      FOUT    : 22 MHz <= F(OUT) <= 1400MHz
 * 
 * Do not set the value PDIV or MDIV to all zeros.
 */

typedef union VPLL_CON0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SDIV:3;     //2:0
        uint32_t Reserved0:5; //7:3
        uint32_t PDIV:6;     //13:8
        uint32_t Reserved1:2; //15:14
        uint32_t MDIV:9;     //24:16
        uint32_t Reserved2:4; //28:25
        uint32_t LOCKED:1;   //29
        uint32_t Reserved3:1; //30
        uint32_t ENABLE:1;   //31
    } bits;
} VPLL_CON0;

/*
 * VPLL_CON1
 * 
 * Address = CLOCK Base Address 1 + 0xC124
 * Reset Value = 0x6601_0000
 * 
 *    Name  |   Bit   | Type |                     Description                     | Reset Value | 
 * ----------------------------------------------------------------------------------------------|
 * K        |  [15:0] |  RW  | PLL DSM                                             |    0x464    |
 * ----------------------------------------------------------------------------------------------|
 * MFR      | [23:16] |  RW  | Modulation Frequency Control                        |     0x1     |
 * ----------------------------------------------------------------------------------------------|
 * MRR      | [28:24] |  RW  | Modulation Rate Control                             |     0x6     |
 * ----------------------------------------------------------------------------------------------|
 *          |         |      | Modulation Method Control                           |             |
 * SEL_PF   | [30:29] |  RW  | 00 : Down spread                                    |     0x3     |
 *          |         |      | 01 : Up spread                                      |             |
 *          |         |      | 1x : Center spread                                  |             |
 * ----------------------------------------------------------------------------------------------|
 * RSVD     |  [31]   |  -   | Reserved                                            |     0x0     |
 * ----------------------------------------------------------------------------------------------|
 * 
 * The equation to calculate the Modulation Frequency(MF) is : MF = FFIN/PDIV/MFR/32[Hz]
 * 
 * The equation to calculate the Modulation Rate(MR) is :
 *      - MR = MFR x MRR/MDIV/64 * 100[%]
 * 
 * The conditions that MFR and MRR should meet are:
 *      - MFR should fall in the range of: 0 <= MFR <= 255
 *      - MRR should fall in the range of: 1 <= MRR <= 31
 *      - 0 <= MRR x MFR < 512
 *      - SEL_PF[1:0]: 2`b00 <= SEL_PF <= 2`b10
 */

typedef union VPLL_CON1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t K:16;       //15:0
        uint32_t MFR:8;      //23:16
        uint32_t MRR:5;      //28:24
        uint32_t SEL_PF:2;   //30:29
        uint32_t Reserved0:1; //31
    } bits;
} EPLL_CON1;

/*
 * VPLL_CON2
 * 
 * Address = CLOCK Base Address 1 + 0xC128
 * Reset Value = 0x0000_0080
 * 
 *      Name     |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------|
 * ICP_BOOST     |  [2:0]  |  RW  | ICP_BOOST                                            |     0x0     |
 * ----------------------------------------------------------------------------------------------------|
 *               |         |      | Pin selection for monitoring purposes.               |             |
 * FSEL          |  [7:3]  |  RW  | F(VCO_OUT) = F(ref), if FSEL is set to 0             |     0x0     |
 *               |         |      | F(VCO_OUT) = F(eed), if FSEL is set to 1             |             |
 * ----------------------------------------------------------------------------------------------------|
 * FVCO_EN       |  [13:8] |  RW  | Enable pin for F(VCO_OUT)                            |     0x0     |
 * ----------------------------------------------------------------------------------------------------|
 *               |         |      | If BYPASS = 1, then it enables bypass mode (F(OUT) = |             |
 * BYPASS        | [15:14] |  RW  | F(IN))                                               |     0x0     |
 *               |         |      | If BYPASS = 0, then PLL3600X operates normally.      |             |
 * ----------------------------------------------------------------------------------------------------|
 *               |         |      | Specifies if the dithered mode is enabled or not.    |             |
 * SSCG_EN       | [24:16] |  RW  | 0 : Disables dithered mode                           |     0x0     |
 *               |         |      | 1 : Enables dithered mode                            |             |
 * ----------------------------------------------------------------------------------------------------|
 *               |         |      | Decides wheather Adaptive Frequency Calibrator       |             |
 *               |         |      | (AFC) is enabled or not. WHen AFC is enabled, it     |             |
 * AFC_ENB       | [28:25] |  RW  | calibrates VCO automatically.                        |     0x0     |
 *               |         |      | 0 : Enables AFC                                      |             |
 *               |         |      | 1 : Disables AFC                                     |             |
 *               |         |      | It is an active low signal.                          |             |
 * ----------------------------------------------------------------------------------------------------|
 *               |         |      | Decides whether DUty Cycle Corrector (DCC) is        |             |
 *               |         |      | enabled or not.                                      |             |
 * DCC_ENB       |  [29]   |  RW  | 0 : Enables DCC                                      |     0x1     |
 *               |         |      | 1 : Disables DCC                                     |             |
 *               |         |      | It is an active low signal.                          |             |
 * ----------------------------------------------------------------------------------------------------|
 * EXTAFC        |  [30]   |  RW  | AFC value                                            |     0x0     |
 * ----------------------------------------------------------------------------------------------------|
 * RSVD          |  [31]   |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------|
 * 
 * If AFC_ENB is set to logic LOW, then it enables the AFC. If AFC_ENB is set to logic HIGH, then EXTAFC[4:0]
 * controls the VCO frequency tuning range.
 * 
 * EXTAFC speccifie4s the decimal value of EXTAFC[4:0] as:
 *      - EXTAFC = EXTAFC[4:0]
 * 
 * The hexadecimal values specified for EXTAFC[4:0] registers are:
 *      - 5`b0 0000 <= EXTAFC[4:0] <= 5`b1 1111
 */

typedef union VPLL_CON2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ICP_BOOST:2;  //1:0
        uint32_t FSEL:1;       //2
        uint32_t FVCO_EN:1;    //3
        uint32_t BYPASS:1;     //4
        uint32_t SSCG_EN:1;    //5
        uint32_t AFC_ENB:1;    //6
        uint32_t DCC_ENB:1;    //7
        uint32_t EXTAFC:5;     //12:8
        uint32_t Reserved0:18;  //31:13
    } bits;
} VPLL_CON2;

/*
 * CLK_SRC_TOP0
 * 
 * Address = CLOCK Base Address 1 + 0xC210
 * Reset Value = 0x0000_0000
 * 
 *        Name       |   Bit   | Type |      Description      | Reset Value | 
 * -------------------------------------------------------------------------|
 *                   |         |      | Controls MUXONENAND_1 |             |
 * MUX_ONENAND_1_SEL |   [0]   |  RW  | 0 : MOUTONENAND       |     0x0     |
 *                   |         |      | 1 : SCLKVPLL          |             |
 * -------------------------------------------------------------------------|
 * RSVD              |  [3:1]  |  -   | Reserved              |     0x0     |
 * -------------------------------------------------------------------------|
 *                   |         |      | Controls MUXEPLL      |             |
 * MUX_EPLL_SEL      |   [4]   |  RW  | 0 : FINPLL            |     0x0     |
 *                   |         |      | 1 : FOUTEPLL          |             |
 * -------------------------------------------------------------------------|
 * RSVD              |  [7:5]  |  -   | Reserved              |     0x0     |
 * -------------------------------------------------------------------------|
 *                   |         |      | Controls MUXVPLL      |             |
 * MUX_VPLL_SEL      |   [8]   |  RW  | 0 : FINPLL            |     0x0     |
 *                   |         |      | 1 : FOUTVPLL          |             |
 * -------------------------------------------------------------------------|
 * RSVD              |  [11:9] |  -   | Reserved              |     0x0     |
 * -------------------------------------------------------------------------|
 *                   |         |      | Controls MUXACLK_200  |             |
 * MUX_ACLK_200_SEL  |  [12]   |  RW  | 0 : SCLKMPLL          |     0x0     |
 *                   |         |      | 1 : SCLKAPLL          |             |
 * -------------------------------------------------------------------------|
 * RSVD              | [15:13] |  -   | Reserved              |     0x0     |
 * -------------------------------------------------------------------------|
 *                   |         |      | Controls MUXACLK_100  |             |
 * MUX_ACLK_100_SEL  |  [16]   |  RW  | 0 : SCLKMPLL          |     0x0     |
 *                   |         |      | 1 : SCLKAPLL          |             |
 * -------------------------------------------------------------------------|
 * RSVD              | [19:17] |  -   | Reserved              |     0x0     |
 * -------------------------------------------------------------------------|
 *                   |         |      | Controls MUXACLK_160  |             |
 * MUX_ACLK_160_SEL  |  [20]   |  RW  | 0 : SCLKMPLL          |     0x0     |
 *                   |         |      | 1 : SCLKAPLL          |             |
 * -------------------------------------------------------------------------|
 * RSVD              | [23:21] |  -   | Reserved              |     0x0     |
 * -------------------------------------------------------------------------|
 *                   |         |      | Controls MUXACLK_233  |             |
 * MUX_ACLK_133_SEL  |  [24]   |  RW  | 0 : SCLKMPLL          |     0x0     |
 *                   |         |      | 1 : SCLKAPLL          |             |
 * -------------------------------------------------------------------------|
 * RSVD              | [27:25] |  -   | Reserved              |     0x0     |
 * -------------------------------------------------------------------------|
 *                   |         |      | Controls MUXONENAND   |             |
 * MUX_ONENAND_SEL   |  [28]   |  RW  | 0 : ACLK_133          |     0x0     |
 *                   |         |      | 1 : ACLK_160          |             |
 * -------------------------------------------------------------------------|
 * RSVD              | [31:29] |  -   | Reserved              |     0x0     |
 * -------------------------------------------------------------------------|
 */

typedef union CLK_SRC_TOP0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MUX_ONENAND_1_SEL:1;  //1
        uint32_t Reserved0:3;           //3:1
        uint32_t MUX_ONENAND_1_SEL:1;  //4
        uint32_t Reserved1:3;           //7:5
        uint32_t MUX_ONENAND_1_SEL:1;  //8
        uint32_t Reserved2:3;           //11:9
        uint32_t MUX_ONENAND_1_SEL:1;  //12
        uint32_t Reserved3:3;           //15:13
        uint32_t MUX_ONENAND_1_SEL:1;  //16
        uint32_t Reserved4:3;           //19:17
        uint32_t MUX_ONENAND_1_SEL:1;  //20
        uint32_t Reserved5:3;           //23:21
        uint32_t MUX_ONENAND_1_SEL:1;  //24
        uint32_t Reserved6:3;           //27:25
        uint32_t MUX_ONENAND_1_SEL:1;  //28
        uint32_t Reserved7:3;           //31:29
    } bits;
} CLK_SRC_TOP0;

/*
 * CLK_SRC_TOP1
 * 
 * Address = CLOCK Base Address 1 + 0xC214
 * Reset Value = 0x0000_0000
 *  
 *        Name       |   Bit   | Type |           Description           | Reset Value | 
 * -----------------------------------------------------------------------------------|
 * RSVD              |  [3:0]  |  -   | Reserved                        |     0x0     |
 * -----------------------------------------------------------------------------------|
 * MUX_ACLK_266_     |         |      | Controls MUCACLK_266_GPS        |             |
 * GPS_SEL           |   [4]   |  RW  | 0 : SCLKMPLL_USER_T             |     0x0     |
 *                   |         |      | 1 : SCLKAPLL                    |             |
 * -----------------------------------------------------------------------------------|
 * RSVD              |  [7:5]  |  -   | Reserved                        |     0x0     |
 * -----------------------------------------------------------------------------------|
 * MUX_ACLK_400_     |         |      | Controls MUXACLK_400_MCUISP     |             |
 * MCUISP_SEL        |   [8]   |  RW  | 0 : MOUTONENAND                 |     0x0     |
 *                   |         |      | 1 : SCLKVPLL                    |             |
 * -----------------------------------------------------------------------------------|
 * RSVD              |  [11:9] |  -   | Reserved                        |     0x0     |
 * -----------------------------------------------------------------------------------|
 * MUX_MPLL_USER_    |         |      | Controls MUXMPLL                |             |
 * SEL_T             |   [12]  |  RW  | 0 : FINPLL                      |     0x0     |
 *                   |         |      | 1 : SCLKMPLL                    |             |
 * -----------------------------------------------------------------------------------|
 * RSVD              | [15:13] |  -   | Reserved                        |     0x0     |
 * -----------------------------------------------------------------------------------|
 * MUX_ACLK_266_     |         |      | Controls MUXACLK_266_GPS_SUB    |             |
 * GPS_SUB_SEL       |   [16]  |  RW  | 0 : FINPLL                      |     0x0     |
 *                   |         |      | 1 : DIVOUT_ACLK_266_GPS         |             |
 * -----------------------------------------------------------------------------------|
 * RSVD              | [19:17] |  -   | Reserved                        |     0x0     |
 * -----------------------------------------------------------------------------------|
 * MUX_ACLK_200_     |         |      | Controls MUXACLK_200_SUB        |             |
 * SUB_SEL           |   [20]  |  RW  | 0 : FINPLL                      |     0x0     |
 *                   |         |      | 1 : DIVOUT_ACLK_200             |             |
 * -----------------------------------------------------------------------------------|
 * RSVD              | [23:21] |  -   | Reserved                        |     0x0     |
 * -----------------------------------------------------------------------------------|
 * MUX_ACLK_400_     |         |      | Controls MUXACLK_400_MCUISP_SUB |             |
 * MCUISP_SUB_SEL    |   [24]  |  RW  | 0 : FINPLL                      |     0x0     |
 *                   |         |      | 1 : DIVOUT_ACLK_400_MCUISP      |             |
 * -----------------------------------------------------------------------------------|
 * RSVD              | [31:25] |  -   | Reserved                        |     0x0     |
 * -----------------------------------------------------------------------------------|
 */     

typedef union CLK_SRC_TOP1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:3;                    //3:0
        uint32_t MUX_ACLK_266_GPS_SEL:1;         //4
        uint32_t Reserved1:3;                    //7:5
        uint32_t MUX_ACLK_400_MCUISP_SEL:1;      //8
        uint32_t Reserved2:3;                    //11:9
        uint32_t MUX_MPLL_USER_SEL_T:1;          //12
        uint32_t Reserved3:3;                    //15:13
        uint32_t MUX_ACLK_266_GPS_SUB_SEL:1;     //16
        uint32_t Reserved4:3;                    //19:17
        uint32_t MUX_ACLK_200_SUB_SEL:1;         //20
        uint32_t Reserved5:3;                    //23:21
        uint32_t MUX_ACLK_400_MCUISP_SUB_SEL:1;  //24
        uint32_t Reserved6:3;                    //31:25
    } bits;
} CLK_SRC_TOP1;

/*
 * CLK_SRC_TOP1
 * 
 * Address = CLOCK Base Address 1 + 0xC220
 * Reset Value = 0x1111_1111
 *  
 *        Name       |   Bit   | Type |                   Description                    | Reset Value | 
 * ----------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXFIMC0_LCLK                           |             |
 *                   |         |      | 0000 : XXTI                                      |             |
 *                   |         |      | 0001 : XusbXTI                                   |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                              |             |
 * FIMC0_LCLK_SEL    |  [3:0]  |  RW  | 0011 : SCLK_USBPHY0                              |     0x1     |
 *                   |         |      | 0101 : SCLK_HDMIPHY                              |             |
 *                   |         |      | 0110 : SCLKMPLL                                  |             |
 *                   |         |      | 0111 : SCLKEPLL                                  |             |
 *                   |         |      | 1000 : SCLKVPLL                                  |             |
 *                   |         |      | Others : Reserved                                |             |
 *                   |         |      | MUXFIMC0_LCLK is the source clock of FIMC1 local |             |
 *                   |         |      | clock.                                           |             |
 * ----------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXFIMC1_LCLK                           |             |
 *                   |         |      | 0000 : XXIT                                      |             |
 *                   |         |      | 0001 : XusbXTI                                   |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                              |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                              |             |
 * FIMC1_LCLK_SEL    |  [7:4]  |  RW  | 0101 : SCLK_HDMIPHY                              |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL                                  |             |
 *                   |         |      | 0111 : SCLKEPLL                                  |             |
 *                   |         |      | 1000 : SCLKVPLL                                  |             |
 *                   |         |      | Others : SCLKVPLL                                |             |
 *                   |         |      | MUXFIMC1_LCLK is the source clock of FIMC1 local |             |
 *                   |         |      | clock.                                           |             |
 * ----------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXFIMC2_LCLK                           |             |
 *                   |         |      | 0000 : XXTI                                      |             |
 *                   |         |      | 0001 : XusbXTI                                   |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                              |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                              |             |
 * FIMC2_LCLK_SEL    |  [11:8] |  RW  | 0101 : SCLK_HDMIPHY                              |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL                                  |             |
 *                   |         |      | 0111 : SCLKEPLL                                  |             |
 *                   |         |      | 1000 : SCLKVPLL                                  |             |
 *                   |         |      | Others : Reserved                                |             |
 *                   |         |      | MUXFIMC2_LCLK is the source clock of FIMC2 local |             |
 *                   |         |      | clock.                                           |             |
 * ----------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXFIMC3_LCLK                           |             |
 *                   |         |      | 0000 : XXTI                                      |             |
 *                   |         |      | 0001 : XusbXTI                                   |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                              |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                              |             |
 * FIMC3_LCLK_SEL    | [15:12] |  RW  | 0101 : SCLK_HDMIPHY                              |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL                                  |             |
 *                   |         |      | 0111 : SCLKEPLL                                  |             |
 *                   |         |      | 1000 : SCLKVPLL                                  |             |
 *                   |         |      | Others : Reserved                                |             |
 *                   |         |      | MUXFIMC3_LCLK is the source clock of FIMC3 local |             |
 *                   |         |      | clock.                                           |             |
 * ----------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXCAM0                                 |             |
 *                   |         |      | 0000 : XXTI                                      |             |
 *                   |         |      | 0001 : XusbXTI                                   |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                              |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                              |             |
 * CAM0_SEL          | [19:16] |  RW  | 0101 : SCLK_HDMIPHY                              |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL                                  |             |
 *                   |         |      | 0111 : SCLKEPLL                                  |             |
 *                   |         |      | 1000 : SCLKVPLL                                  |             |
 *                   |         |      | Others : Reserved                                |             |
 *                   |         |      | MUXCAM0 is the source clock of CAM_A_CLKOUT      |             |
 * ----------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXCAM1                                 |             |
 *                   |         |      | 0000 : XXTI                                      |             |
 *                   |         |      | 0001 : XusbXTI                                   |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                              |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                              |             |
 * CAM1_SEL          | [23:20] |  RW  | 0101 : SCLK_HDMIPHY                              |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL                                  |             |
 *                   |         |      | 0111 : SCLKEPLL                                  |             |
 *                   |         |      | 1000 : SCLKVPLL                                  |             |
 *                   |         |      | Others : Reserved                                |             |
 *                   |         |      | MUXCAM1 is the source clock of CAM_B_CLKOUT      |             |
 * ----------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXCSIS0                                |             |
 *                   |         |      | 0000 : XXTI                                      |             |
 *                   |         |      | 0001 : XusbXTI                                   |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                              |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                              |             |
 * CSIS0_SEL         | [27:24] |  RW  | 0101 : SCLK_HDMIPHY                              |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL                                  |             |
 *                   |         |      | 0111 : SCLKEPLL                                  |             |
 *                   |         |      | 1000 : SCLKVPLL                                  |             |
 *                   |         |      | Others : Reserved                                |             |
 *                   |         |      | MUXCSIS0 is the source clock of CSIS0            |             |
 * ----------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXCSIS1                                |             |
 *                   |         |      | 0000 : XXTI                                      |             |
 *                   |         |      | 0001 : XusbXTI                                   |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                              |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                              |             |
 * CSIS1_SEL         | [31:28] |  RW  | 0101 : SCLK_HDMIPHY                              |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL                                  |             |
 *                   |         |      | 0111 : SCLKEPLL                                  |             |
 *                   |         |      | 1000 : SCLKVPLL                                  |             |
 *                   |         |      | Others : Reserved                                |             |
 *                   |         |      | MUXCSIS1 is the source clock of CSIS1            |             |
 * ----------------------------------------------------------------------------------------------------|
 */     

typedef union CLK_SRC_CAM0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t FIMC0_LCLK_SEL0:4;  //3:0
        uint32_t FIMC1_LCLK_SEL0:4;  //7:4
        uint32_t FIMC2_LCLK_SEL0:4;  //11:8
        uint32_t FIMC3_LCLK_SEL0:4;  //15:12
        uint32_t CAM0_SEL:4;         //19:16
        uint32_t CAM1_SEL:4;         //23:20
        uint32_t CSIS0_SEL:4;        //27:24
        uint32_t CSIS1_SEL:4;        //31:28
    } bits;
} CLK_SRC_CAM0;

/*
 * CLK_SRC_TV
 * 
 * Address = CLOCK Base Address 1 + 0xC224
 * Reset Value = 0x0000_0000
 * 
 *    Name  |   Bit   | Type |                Description                | Reset Value | 
 * ------------------------------------------------------------------------------------|
 *          |         |      | Controls MUXHDMI                          |             |
 * HDMI_SEL |   [0]   |  RW  | 0 : SCLK_PIXEL                            |     0x0     |
 *          |         |      | 1 : SCLK_HDMIPHY                          |             |
 *          |         |      | MUXHDMI is the source clock of HDMI link. |             |
 * ------------------------------------------------------------------------------------|
 * RSVD     |  [31:1] |  -   | Reserved                                  |     0x0     |
 * ------------------------------------------------------------------------------------|
 */

typedef union CLK_SRC_TV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t HDMI_SEL:1;       //0
        uint32_t Reserved0:31;      //31:1
    } bits;
} CLK_SRC_TV;

/*
 * CLK_SRC_MFC
 * 
 * Address = CLOCK Base Address 1 + 0xC228
 * Reset Value = 0x0000_0000
 * 
 *     Name   |   Bit   | Type |                Description                | Reset Value | 
 * --------------------------------------------------------------------------------------|
 *            |         |      | Controls MUXMFC_0                         |             |
 * MFC_0_SEL  |   [0]   |  RW  | 0 : SCLKMPLL                              |     0x0     |
 *            |         |      | 1 : SCLKAPLL                              |             |
 *            |         |      | MUXMFC_0 is the source clock of MFC core. |             |
 * --------------------------------------------------------------------------------------|
 * RSVD       |  [3:1]  |  -   | Reserved                                  |     0x0     |
 * --------------------------------------------------------------------------------------|
 *            |         |      | Controls MUXMFC_1                         |             |
 * MFC_1_SEL  |   [4]   |  RW  | 0 : SCLKMPLL                              |     0x0     |
 *            |         |      | 1 : SCLKAPLL                              |             |
 *            |         |      | MUXMFC_1 is the source clock of MFC core. |             |
 * --------------------------------------------------------------------------------------|
 * RSVD       |  [7:5]  |  -   | Reserved                                  |     0x0     |
 * --------------------------------------------------------------------------------------|
 *            |         |      | Controls MUXMFC                           |             |
 * MFC_2_SEL  |   [8]   |  RW  | 0 : MOUTMFC_0                             |     0x0     |
 *            |         |      | 1 : MOUTMFC_1                             |             |
 *            |         |      | MUXMFC is the source clock of MFC core.   |             |
 * --------------------------------------------------------------------------------------|
 * RSVD       |  [31:9] |  -   | Reserved                                  |     0x0     |
 * --------------------------------------------------------------------------------------|
 */

typedef union CLK_SRC_MFC_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MFC_0_SEL:1;   //0
        uint32_t Reserved0:3;   //3:1
        uint32_t MFC_1_SEL:1;   //4
        uint32_t Reserved1:3;   //7:5
        uint32_t MFC_2_SEL:1;   //8
        uint32_t Reserved2:21;  //31:9
    } bits;
} CLK_SRC_MFC;

/*
 * CLK_SRC_G3D
 * 
 * Address = CLOCK Base Address 1 + 0xC22C
 * Reset Value = 0x0000_0000
 * 
 *     Name   |   Bit   | Type |                Description                | Reset Value | 
 * --------------------------------------------------------------------------------------|
 *            |         |      | Controls MUXG3D_0                         |             |
 * G3D_0_SEL  |   [0]   |  RW  | 0 : SCLKMPLL                              |     0x0     |
 *            |         |      | 1 : SCLKAPLL                              |             |
 *            |         |      | MUXG3D_0 is the source clock of G3D core. |             |
 * --------------------------------------------------------------------------------------|
 * RSVD       |  [3:1]  |  -   | Reserved                                  |     0x0     |
 * --------------------------------------------------------------------------------------|
 *            |         |      | Controls MUXG3D_1                         |             |
 * G3D_1_SEL  |   [4]   |  RW  | 0 : SCLKMPLL                              |     0x0     |
 *            |         |      | 1 : SCLKAPLL                              |             |
 *            |         |      | MUXG3D_1 is the source clock of G3D core. |             |
 * --------------------------------------------------------------------------------------|
 * RSVD       |  [7:5]  |  -   | Reserved                                  |     0x0     |
 * --------------------------------------------------------------------------------------|
 *            |         |      | Controls MUXG3D                           |             |
 * G3D_2_SEL  |   [8]   |  RW  | 0 : MOUTG3D_0                             |     0x0     |
 *            |         |      | 1 : MOUTG3D_1                             |             |
 *            |         |      | MUXG3D is the source clock of G3D core.   |             |
 * --------------------------------------------------------------------------------------|
 * RSVD       |  [31:9] |  -   | Reserved                                  |     0x0     |
 * --------------------------------------------------------------------------------------|
 */

typedef union CLK_SRC_G3D_u
{
    uint32_t all_val;
    struct
    {
        uint32_t G3D_0_SEL:1;   //0
        uint32_t Reserved0:3;   //3:1
        uint32_t G3D_1_SEL:1;   //4
        uint32_t Reserved1:3;   //7:5
        uint32_t G3D_2_SEL:1;   //8
        uint32_t Reserved2:21;  //31:9
    } bits;
} CLK_SRC_G3D;

/*
 * CLK_SRC_LCD0
 * 
 * Address = CLOCK Base Address 1 + 0xC234
 * Reset Value = 0x0000_1111
 *  
 *        Name       |   Bit   | Type |                   Description                   | Reset Value | 
 * ---------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXFIMD0                               |             |
 *                   |         |      | 0000 : XXTI                                     |             |
 *                   |         |      | 0001 : XusbXTI                                  |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                             |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                             |             |
 * FIMD0_SEL         |  [3:0]  |  RW  | 0101 : SCLK_HDMIPHY                             |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                          |             |
 *                   |         |      | 0111 : SCLKEPLL                                 |             |
 *                   |         |      | 1000 : SCLKVPLL                                 |             |
 *                   |         |      | Others : Reserved                               |             |
 *                   |         |      | MUXFIMD0 is the source clock of FIMD0.          |             |
 * ---------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXMDNIE0                              |             |
 *                   |         |      | 0000 : XXIT                                     |             |
 *                   |         |      | 0001 : XusbXTI                                  |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                             |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                             |             |
 * MDNIE0_SEL        |  [7:4]  |  RW  | 0101 : SCLK_HDMIPHY                             |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                          |             |
 *                   |         |      | 0111 : SCLKEPLL                                 |             |
 *                   |         |      | 1000 : SCLKVPLL                                 |             |
 *                   |         |      | Others : SCLKVPLL                               |             |
 *                   |         |      | MUXMDNIE0 is the source clock of MDNIE0         |             |
 * ---------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXMDNIE_PWM0                          |             |
 *                   |         |      | 0000 : XXTI                                     |             |
 *                   |         |      | 0001 : XusbXTI                                  |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                             |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                             |             |
 * MDNIE_PWM0_SEL    |  [11:5] |  RW  | 0101 : SCLK_HDMIPHY                             |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                          |             |
 *                   |         |      | 0111 : SCLKEPLL                                 |             |
 *                   |         |      | 1000 : SCLKVPLL                                 |             |
 *                   |         |      | Others : Reserved                               |             |
 *                   |         |      | MUXMDNIE_PWM0 is the source clock of MDNIE_PWM0 |             |
 * ---------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXMIPI0                               |             |
 *                   |         |      | 0000 : XXTI                                     |             |
 *                   |         |      | 0001 : XusbXTI                                  |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                             |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                             |             |
 * MIPI0_SEL         | [15:12] |  RW  | 0101 : SCLK_HDMIPHY                             |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                          |             |
 *                   |         |      | 0111 : SCLKEPLL                                 |             |
 *                   |         |      | 1000 : SCLKVPLL                                 |             |
 *                   |         |      | Others : Reserved                               |             |
 *                   |         |      | MUXMIPI0 isthe source clock of MIPI_DSIM0.      |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD              | [31:16] |  RW  | Reserved                                        |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 */

typedef union CLK_SRC_LCD0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t FIMD0_SEL:4;       //3:0
        uint32_t MDNIE0_SEL:4;      //7:4
        uint32_t MDNIE_PWM0_SEL:4;  //11:8
        uint32_t MIPI0_SEL:4;       //15:12
        uint32_t Reserved0:16;       //31:16
    } bits;
} CLK_SRC_LCD0;

/*
 * CLK_SRC_ISP
 * 
 * Address = CLOCK Base Address 1 + 0xC238
 * Reset Value = 0x0000_1111
 *  
 *        Name       |   Bit   | Type |                   Description                   | Reset Value | 
 * ---------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXPWM_ISP                             |             |
 *                   |         |      | 0000 : XXTI                                     |             |
 *                   |         |      | 0001 : XusbXTI                                  |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                             |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                             |             |
 * PWM_ISP_SEL       |  [3:0]  |  RW  | 0101 : SCLK_HDMIPHY                             |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                          |             |
 *                   |         |      | 0111 : SCLKEPLL                                 |             |
 *                   |         |      | 1000 : SCLKVPLL                                 |             |
 *                   |         |      | Others : Reserved                               |             |
 *                   |         |      | MUXPWM_ISP is the source clock of PWM_ISP.      |             |
 * ---------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXSPI0_ISP                            |             |
 *                   |         |      | 0000 : XXIT                                     |             |
 *                   |         |      | 0001 : XusbXTI                                  |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                             |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                             |             |
 * SPI0_ISP_SEL      |  [7:4]  |  RW  | 0101 : SCLK_HDMIPHY                             |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                          |             |
 *                   |         |      | 0111 : SCLKEPLL                                 |             |
 *                   |         |      | 1000 : SCLKVPLL                                 |             |
 *                   |         |      | Others : SCLKVPLL                               |             |
 *                   |         |      | MUXSPI0_ISP is the source clock of SPI0_ISP     |             |
 * ---------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXSPI1_ISP                            |             |
 *                   |         |      | 0000 : XXIT                                     |             |
 *                   |         |      | 0001 : XusbXTI                                  |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                             |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                             |             |
 * SPI1_ISP_SEL      |  [11:5] |  RW  | 0101 : SCLK_HDMIPHY                             |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                          |             |
 *                   |         |      | 0111 : SCLKEPLL                                 |             |
 *                   |         |      | 1000 : SCLKVPLL                                 |             |
 *                   |         |      | Others : SCLKVPLL                               |             |
 *                   |         |      | MUXSPI1_ISP is the source clock of SPI1_ISP     |             |
 * ---------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXUART_ISP                            |             |
 *                   |         |      | 0000 : XXIT                                     |             |
 *                   |         |      | 0001 : XusbXTI                                  |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                             |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                             |             |
 * UART_ISP_SEL      | [15:12] |  RW  | 0101 : SCLK_HDMIPHY                             |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                          |             |
 *                   |         |      | 0111 : SCLKEPLL                                 |             |
 *                   |         |      | 1000 : SCLKVPLL                                 |             |
 *                   |         |      | Others : SCLKVPLL                               |             |
 *                   |         |      | MUXUART_ISP is the source clock of MIPI_DSIM1   |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD              | [31:16] |  RW  | Reserved                                        |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 */

typedef union CLK_SRC_ISP_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PWM_ISP_SEL:4;     //3:0
        uint32_t SPI0_ISP_SEL:4;    //7:4
        uint32_t MDNIE_PWM0_SEL:4;  //11:8
        uint32_t UART_ISP_SEL:4;    //15:12
        uint32_t Reserved0:16;       //31:16
    } bits;
} CLK_SRC_ISP;

/*
 * CLK_SRC_MAUDIO
 * 
 * Address = CLOCK Base Address 1 + 0xC23C
 * Reset Value = 0x0000_0005
 * 
 *     Name   |   Bit   | Type |                Description                | Reset Value | 
 * --------------------------------------------------------------------------------------|
 *            |         |      | Controls MUXAUDIO0                        |             |
 *            |         |      | 0000 : AUDIOCDCLK0                        |             |
 *            |         |      | 0001 : Reserved                           |             |
 *            |         |      | 0010 : SCLK_HDMI24M                       |             |
 *            |         |      | 0011 : SCLK_USBPHY0                       |             |
 * AUDIO0_SEL |  [3:0]  |  RW  | 0100 : XXTI                               |     0x5     |
 *            |         |      | 0101 : XusbXTI                            |             |
 *            |         |      | 0110 : SCLKMPLL_USER_T                    |             |
 *            |         |      | 0111 : SCLKEPLL                           |             |
 *            |         |      | 1000 : SCLKVPLL                           |             |
 *            |         |      | Others : Reserved                         |             |
 *            |         |      | MUXAUDIO0 is the source clock of AUDIO0   |             |
 * --------------------------------------------------------------------------------------|
 * RSVD       |  [31:4] |  -   | Reserved                                  |     0x0     |
 * --------------------------------------------------------------------------------------|
 */

typedef union CLK_SRC_MAUDIO_u
{
    uint32_t all_val;
    struct
    {
        uint32_t AUDIO0_SEL:4;      //3:0
        uint32_t Reserved0:28;      //31:4
    } bits;
} CLK_SRC_MAUDIO;

/*
 * CLK_SRC_FSYS
 * 
 * Address = CLOCK Base Address 1 + 0xC240
 * Reset Value = 0x0001_1111
 *  
 *        Name       |   Bit   | Type |                Description                        | Reset Value | 
 * -----------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXMMC0                                  |             |
 *                   |         |      | 0000 : XXTI                                       |             |
 *                   |         |      | 0001 : XusbXTI                                    |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                               |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                               |             |
 * MMC0_SEL          |  [3:0]  |  RW  | 0101 : SCLK_HDMIPHY                               |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                            |             |
 *                   |         |      | 0111 : SCLKEPLL                                   |             |
 *                   |         |      | 1000 : SCLKVPLL                                   |             |
 *                   |         |      | Others : Reserved                                 |             |
 *                   |         |      | MUXMMC0 is the source clock of MMC0.              |             |
 * -----------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXMMC1                                  |             |
 *                   |         |      | 0000 : XXTI                                       |             |
 *                   |         |      | 0001 : XusbXTI                                    |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                               |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                               |             |
 * MMC1_SEL          |  [7:4]  |  RW  | 0101 : SCLK_HDMIPHY                               |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                            |             |
 *                   |         |      | 0111 : SCLKEPLL                                   |             |
 *                   |         |      | 1000 : SCLKVPLL                                   |             |
 *                   |         |      | Others : Reserved                                 |             |
 *                   |         |      | MUXMMC1 is the source clock of MMC1.              |             |
 * -----------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXMMC2                                  |             |
 *                   |         |      | 0000 : XXTI                                       |             |
 *                   |         |      | 0001 : XusbXTI                                    |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                               |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                               |             |
 * MMC2_SEL          |  [11:8] |  RW  | 0101 : SCLK_HDMIPHY                               |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                            |             |
 *                   |         |      | 0111 : SCLKEPLL                                   |             |
 *                   |         |      | 1000 : SCLKVPLL                                   |             |
 *                   |         |      | Others : Reserved                                 |             |
 *                   |         |      | MUXMMC2 is the source clock of MMC2.              |             |
 * -----------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXMMC3                                  |             |
 *                   |         |      | 0000 : XXTI                                       |             |
 *                   |         |      | 0001 : XusbXTI                                    |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                               |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                               |             |
 * MMC3_SEL          | [15:12] |  RW  | 0101 : SCLK_HDMIPHY                               |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                            |             |
 *                   |         |      | 0111 : SCLKEPLL                                   |             |
 *                   |         |      | 1000 : SCLKVPLL                                   |             |
 *                   |         |      | Others : Reserved                                 |             |
 *                   |         |      | MUXMMC3 is the source clock of MMC3.              |             |
 * -----------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXMMC4                                  |             |
 *                   |         |      | 0000 : XXTI                                       |             |
 *                   |         |      | 0001 : XusbXTI                                    |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                               |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                               |             |
 * MMC4_SEL          | [19:16] |  RW  | 0101 : SCLK_HDMIPHY                               |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                            |             |
 *                   |         |      | 0111 : SCLKEPLL                                   |             |
 *                   |         |      | 1000 : SCLKVPLL                                   |             |
 *                   |         |      | Others : Reserved                                 |             |
 *                   |         |      | MUXMMC4 is the source clock of MMC4.              |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD              | [23:20] |  RW  | Reserved                                          |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXMIPIHSI, Which is the source clock of |             |
 * MIPIHSI_SEL       | [27:24] |  RW  | MIPISHI                                           |     0x0     |
 *                   |         |      | 0 : SCLKMPLL_USER_T                               |             |
 *                   |         |      | 1 : SCLKAPLL                                      |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD              | [31:28] |  RW  | Reserved                                          |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 * 
 */

typedef union CLK_SRC_FSYS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MMC0_SEL:4;    //3:0
        uint32_t MMC1_SEL:4;    //7:4
        uint32_t MMC2_SEL:4;    //11:8
        uint32_t MMC3_SEL:4;    //15:12
        uint32_t MMC4_SEL:4;    //19:16
        uint32_t Reserved0:16;  //23:20
        uint32_t MIPIHSI_SEL:4; //27:24
        uint32_t Reserved1:16;  //31:28
    } bits;
} CLK_SRC_FSYS;

/*
 * CLK_SRC_PERIL0
 * 
 * Address = CLOCK Base Address 1 + 0xC250
 * Reset Value = 0x0001_1111
 *  
 *        Name       |   Bit   | Type |                   Description                   | Reset Value | 
 * ---------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXUART0                               |             |
 *                   |         |      | 0000 : XXTI                                     |             |
 *                   |         |      | 0001 : XusbXTI                                  |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                             |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                             |             |
 * UART0_SEL         |  [3:0]  |  RW  | 0101 : SCLK_HDMIPHY                             |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                          |             |
 *                   |         |      | 0111 : SCLKEPLL                                 |             |
 *                   |         |      | 1000 : SCLKVPLL                                 |             |
 *                   |         |      | Others : Reserved                               |             |
 *                   |         |      | MUXUART0 is the source clock of UART0.          |             |
 * ---------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXUART1                               |             |
 *                   |         |      | 0000 : XXTI                                     |             |
 *                   |         |      | 0001 : XusbXTI                                  |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                             |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                             |             |
 * UART1_SEL         |  [7:4]  |  RW  | 0101 : SCLK_HDMIPHY                             |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                          |             |
 *                   |         |      | 0111 : SCLKEPLL                                 |             |
 *                   |         |      | 1000 : SCLKVPLL                                 |             |
 *                   |         |      | Others : Reserved                               |             |
 *                   |         |      | MUXUART1 is the source clock of UART1.          |             |
 * ---------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXUART2                               |             |
 *                   |         |      | 0000 : XXTI                                     |             |
 *                   |         |      | 0001 : XusbXTI                                  |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                             |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                             |             |
 * UART2_SEL         |  [11:8] |  RW  | 0101 : SCLK_HDMIPHY                             |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                          |             |
 *                   |         |      | 0111 : SCLKEPLL                                 |             |
 *                   |         |      | 1000 : SCLKVPLL                                 |             |
 *                   |         |      | Others : Reserved                               |             |
 *                   |         |      | MUXUART2 is the source clock of UART2.          |             |
 * ---------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXUART3                               |             |
 *                   |         |      | 0000 : XXTI                                     |             |
 *                   |         |      | 0001 : XusbXTI                                  |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                             |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                             |             |
 * UART3_SEL         | [15:12] |  RW  | 0101 : SCLK_HDMIPHY                             |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                          |             |
 *                   |         |      | 0111 : SCLKEPLL                                 |             |
 *                   |         |      | 1000 : SCLKVPLL                                 |             |
 *                   |         |      | Others : Reserved                               |             |
 *                   |         |      | MUXUART3 is the source clock of UART3.          |             |
 * ---------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXUART4                               |             |
 *                   |         |      | 0000 : XXTI                                     |             |
 *                   |         |      | 0001 : XusbXTI                                  |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                             |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                             |             |
 * UART4_SEL         | [19:16] |  RW  | 0101 : SCLK_HDMIPHY                             |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                          |             |
 *                   |         |      | 0111 : SCLKEPLL                                 |             |
 *                   |         |      | 1000 : SCLKVPLL                                 |             |
 *                   |         |      | Others : Reserved                               |             |
 *                   |         |      | MUXUART4 is the source clock of UART4.          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD              | [31:20] |  RW  | Reserved                                        |     0x0     |
 *                   |         |      | It should be 1`b1.                              |             |
 * ---------------------------------------------------------------------------------------------------|
 */

typedef union CLK_SRC_PERIL0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t UART0_SEL:4;     //3:0
        uint32_t UART1_SEL:4;     //7:4
        uint32_t UART2_SEL:4;     //11:8
        uint32_t UART3_SEL:4;     //15:12
        uint32_t UART4_SEL:4;     //19:16
        uint32_t Reserved0:16;    //31:16
    } bits;
} CLK_SRC_PERIL0;

/*
 * CLK_SRC_PERIL1
 * 
 * Address = CLOCK Base Address 1 + 0xC254
 * Reset Value = 0x0111_0055
 *  
 *        Name       |   Bit   | Type |                   Description                   | Reset Value | 
 * ---------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXAUDIO1                              |             |
 *                   |         |      | 0000 : AUDIOCDCLK1                              |             |
 *                   |         |      | 0001 : Reserved                                 |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                             |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                             |             |
 * AUDIO1_SEL        |  [3:0]  |  RW  | 0100 : XXTI                                     |     0x5     |
 *                   |         |      | 0101 : XusbXTI                                  |             |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                          |             |
 *                   |         |      | 0111 : SCLKEPLL                                 |             |
 *                   |         |      | 1000 : SCLKVPLL                                 |             |
 *                   |         |      | Others : Reserved                               |             |
 *                   |         |      | MUXAUDIO1 is the source clock of AUDIO1.        |             |
 * ---------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXUART1                               |             |
 *                   |         |      | 0000 : AUDIOCDCLK2                              |             |
 *                   |         |      | 0001 : Reserved                                 |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                             |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                             |             |
 * AUDIO2_SEL        |  [7:4]  |  RW  | 0101 : XXTI                                     |     0x5     |
 *                   |         |      | 0110 : XusbXTI                                  |             |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                          |             |
 *                   |         |      | 0111 : SCLKEPLL                                 |             |
 *                   |         |      | 1000 : SCLKVPLL                                 |             |
 *                   |         |      | Others : Reserved                               |             |
 *                   |         |      | MUXAUDIO2 is the source clock of AUDIO2.        |             |
 * ---------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXSPDIF                               |             |
 *                   |         |      | 00 : SCLK_AUDIO0                                |             |
 * SPDIF_SEL         |  [9:8]  |  RW  | 01 : SCLK_AUDIO1                                |     0x0     |
 *                   |         |      | 10 : SCLK_AUDIO2                                |             |
 *                   |         |      | 11 : SPDIF_EXTCLK                               |             |
 *                   |         |      | MUXSPDIF is the source clock of SPDIF.          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD              | [15:10] |  RW  | Reserved                                        |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXSPI0                                |             |
 *                   |         |      | 0000 : XXTI                                     |             |
 *                   |         |      | 0001 : XusbXTI                                  |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                             |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                             |             |
 * SPI0_SEL          | [19:16] |  RW  | 0101 : SCLK_HDMIPHY                             |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                          |             |
 *                   |         |      | 0111 : SCLKEPLL                                 |             |
 *                   |         |      | 1000 : SCLKVPLL                                 |             |
 *                   |         |      | Others : Reserved                               |             |
 *                   |         |      | MUXSPI0 is the source clock of SPI0.            |             |
 * ---------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXSPI1                                |             |
 *                   |         |      | 0000 : XXTI                                     |             |
 *                   |         |      | 0001 : XusbXTI                                  |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                             |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                             |             |
 * SPI1_SEL          | [23:20] |  RW  | 0101 : SCLK_HDMIPHY                             |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                          |             |
 *                   |         |      | 0111 : SCLKEPLL                                 |             |
 *                   |         |      | 1000 : SCLKVPLL                                 |             |
 *                   |         |      | Others : Reserved                               |             |
 *                   |         |      | MUXSPI0 is the source clock of SPI1.            |             |
 * ---------------------------------------------------------------------------------------------------|
 *                   |         |      | Controls MUXSPI2                                |             |
 *                   |         |      | 0000 : XXTI                                     |             |
 *                   |         |      | 0001 : XusbXTI                                  |             |
 *                   |         |      | 0010 : SCLK_HDMI24M                             |             |
 *                   |         |      | 0011 : SCLK_USBPHY0                             |             |
 * SPI2_SEL          | [27:24] |  RW  | 0101 : SCLK_HDMIPHY                             |     0x1     |
 *                   |         |      | 0110 : SCLKMPLL_USER_T                          |             |
 *                   |         |      | 0111 : SCLKEPLL                                 |             |
 *                   |         |      | 1000 : SCLKVPLL                                 |             |
 *                   |         |      | Others : Reserved                               |             |
 *                   |         |      | MUXSPI2 is the source clock of SPI2.            |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD              | [31:28] |  RW  | Reserved                                        |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 */

typedef union CLK_SRC_PERIL1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t AUDIO1_SEL:4;   //3:0
        uint32_t AUDIO2_SEL:4;   //7:4
        uint32_t SPDIF_SEL:2;    //9:8
        uint32_t Reserved0:6;    //15:10
        uint32_t SPI0_SEL:4;     //19:16
        uint32_t SPI1_SEL:4;     //23:20
        uint32_t SPI2_SEL:4;     //27:24
        uint32_t Reserved1:4;    //31:28
    } bits;
} CLK_SRC_PERIL1;

/*
 * CLK_SRC_CAM1
 * 
 * Address = CLOCK Base Address 1 + 0xC258
 * Reset Value = 0x0000_0000
 * 
 *     Name   |   Bit   | Type |                 Description                 | Reset Value | 
 * ----------------------------------------------------------------------------------------|
 *            |         |      | Controls MUXJPEG_0                          |             |
 * JPEG_0_SEL |   [0]   |  RW  | 0 : SCLKMPLL_USER_T                         |     0x0     |
 *            |         |      | 1 : SCLKAPLL                                |             |
 *            |         |      | MUXJPEG_0 is the source clock of JPEG core. |             |
 * ----------------------------------------------------------------------------------------|
 * RSVD       |  [3:1]  |  -   | Reserved                                    |     0x0     |
 * ----------------------------------------------------------------------------------------|
 *            |         |      | Controls MUXJPEG_1                          |             |
 * JPEG_1_SEL |   [4]   |  RW  | 0 : SCLKEPLL                                |     0x0     |
 *            |         |      | 1 : SCLKVPLL                                |             |
 *            |         |      | MUXJPEG_1 is the source clock of JPEG core. |             |
 * ----------------------------------------------------------------------------------------|
 * RSVD       |  [7:5]  |  -   | Reserved                                    |     0x0     |
 * ----------------------------------------------------------------------------------------|
 *            |         |      | Controls MUXJPEG                            |             |
 * JPEG_SEL   |   [8]   |  RW  | 0 : MOUTJPEG_0                              |     0x0     |
 *            |         |      | 1 : MOUTJPEG_1                              |             |
 *            |         |      | MUXJPEG is the source clock of JPEG core.   |             |
 * ----------------------------------------------------------------------------------------|
 * RSVD       |  [31:9] |  -   | Reserved                                    |     0x0     |
 * ----------------------------------------------------------------------------------------|
 */

typedef union CLK_SRC_CAM1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t JPEG_0_SEL:1;   //0
        uint32_t Reserved0:3;    //3:1
        uint32_t JPEG_1_SEL:1;   //4
        uint32_t Reserved1:3;    //7:5
        uint32_t JPEG_SEL:1;     //8
        uint32_t Reserved2:23;   //31:9
    } bits;
} CLK_SRC_CAM1;

/*
 * CLK_SRC_MASK_CAM0
 * 
 * Address = CLOCK Base Address 1 + 0xC320
 * Reset Value = 0x1111_1111
 * 
 *       Name      |   Bit   | Type |                 Description                 | Reset Value | 
 * ---------------------------------------------------------------------------------------------|
 *                 |         |      | Mask output clock of MUXFIMC0_LCLK          |             |
 * FIMC0_LCLK_MASK |   [0]   |  RW  | 0 : Mask                                    |     0x1     |
 *                 |         |      | 1 : Unmask                                  |             |
 * ---------------------------------------------------------------------------------------------|
 * RSVD            |  [3:1]  |  -   | Reserved                                    |     0x0     |
 * ---------------------------------------------------------------------------------------------|
 *                 |         |      | Mask output clock of MUXFIMC1_LCLK          |             |
 * FIMC1_LCLK_MASK |   [4]   |  RW  | 0 : Mask                                    |     0x1     |
 *                 |         |      | 1 : Unmask                                  |             |
 * ---------------------------------------------------------------------------------------------|
 * RSVD            |  [7:5]  |  -   | Reserved                                    |     0x0     |
 * ---------------------------------------------------------------------------------------------|
 *                 |         |      | Mask output clock of MUXFIMC2_LCLK          |             |
 * FIMC2_LCLK_MASK |   [8]   |  RW  | 0 : Mask                                    |     0x1     |
 *                 |         |      | 1 : Unmask                                  |             |
 * ---------------------------------------------------------------------------------------------|
 * RSVD            |  [11:9] |  -   | Reserved                                    |     0x0     |
 * ---------------------------------------------------------------------------------------------|
 *                 |         |      | Mask output clock of MUXFIMC3_LCLK          |             |
 * FIMC3_LCLK_MASK |   [12]  |  RW  | 0 : Mask                                    |     0x1     |
 *                 |         |      | 1 : Unmask                                  |             |
 * ---------------------------------------------------------------------------------------------|
 * RSVD            | [15:13] |  -   | Reserved                                    |     0x0     |
 * ---------------------------------------------------------------------------------------------|
 *                 |         |      | Mask output clock of MUXCAM0                |             |
 * CAM0_MASK       |   [16]  |  RW  | 0 : Mask                                    |     0x1     |
 *                 |         |      | 1 : Unmask                                  |             |
 * ---------------------------------------------------------------------------------------------|
 * RSVD            | [19:17] |  -   | Reserved                                    |     0x0     |
 * ---------------------------------------------------------------------------------------------|
 *                 |         |      | Mask output clock of MUXCAM1                |             |
 * CAM1_MASK       |   [20]  |  RW  | 0 : Mask                                    |     0x1     |
 *                 |         |      | 1 : Unmask                                  |             |
 * ---------------------------------------------------------------------------------------------|
 * RSVD            | [23:21] |  -   | Reserved                                    |     0x0     |
 * ---------------------------------------------------------------------------------------------|
 *                 |         |      | Mask output clock of MUXCAM2                |             |
 * CAM2_MASK       |   [24]  |  RW  | 0 : Mask                                    |     0x1     |
 *                 |         |      | 1 : Unmask                                  |             |
 * ---------------------------------------------------------------------------------------------|
 * RSVD            | [27:25] |  -   | Reserved                                    |     0x0     |
 * ---------------------------------------------------------------------------------------------|
 *                 |         |      | Mask output clock of MUXCAM3                |             |
 * CAM3_MASK       |   [28]  |  RW  | 0 : Mask                                    |     0x1     |
 *                 |         |      | 1 : Unmask                                  |             |
 * ---------------------------------------------------------------------------------------------|
 * RSVD            | [31:29] |  -   | Reserved                                    |     0x0     |
 * ---------------------------------------------------------------------------------------------|
 */

typedef union CLK_SRC_MASK_CAM0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t FIMC0_LCLK_MASK:1; //0
        uint32_t Reserved0:3;       //3:1
        uint32_t FIMC1_LCLK_MASK:1; //4
        uint32_t Reserved1:3;       //7:5
        uint32_t FIMC2_LCLK_MASK:1; //8
        uint32_t Reserved2:3;       //11:9
        uint32_t FIMC3_LCLK_MASK:1; //12
        uint32_t Reserved3:3;       //15:13
        uint32_t CAM0_MASK:1;       //16
        uint32_t Reserved4:3;       //19:17
        uint32_t CAM1_MASK:1;       //20
        uint32_t Reserved5:3;       //23:21
        uint32_t CAM2_MASK:1;       //24
        uint32_t Reserved6:3;       //27:25
        uint32_t CAM3_MASK:1;       //28
        uint32_t Reserved7:3;       //31:29
    } bits;
} CLK_SRC_MASK_CAM0;

/*
 * CLK_SRC_MASK_TV
 * 
 * Address = CLOCK Base Address 1 + 0xC324
 * Reset Value = 0x0000_0111
 * 
 *    Name   |   Bit   | Type |                Description                | Reset Value | 
 * -------------------------------------------------------------------------------------|
 *           |         |      | Mask output clock of MUXHDMI              |             |
 * HDMI_MASK |   [0]   |  RW  | 0 : Mask                                  |     0x1     |
 *           |         |      | 1 : Unmask                                |             |
 * -------------------------------------------------------------------------------------|
 * RSVD      |  [31:1] |  -   | Reserved                                  |     0x0     |
 * -------------------------------------------------------------------------------------|
 */

typedef union CLK_SRC_MASK_TV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t HDMI_SEL:1;       //0
        uint32_t Reserved0:31;      //31:1
    } bits;
} CLK_SRC_MASK_TV;

/*
 * CLK_SRC_MASK_LCD
 * 
 * Address = CLOCK Base Address 1 + 0xC320
 * Reset Value = 0x1111_1111
 * 
 *       Name      |   Bit   | Type |             Description             | Reset Value | 
 * -------------------------------------------------------------------------------------|
 *                 |         |      | Mask output clock of MUXFIMC0       |             |
 * FIMD0_MASK      |   [0]   |  RW  | 0 : Mask                            |     0x1     |
 *                 |         |      | 1 : Unmask                          |             |
 * -------------------------------------------------------------------------------------|
 * RSVD            |  [3:1]  |  -   | Reserved                            |     0x0     |
 * -------------------------------------------------------------------------------------|
 *                 |         |      | Mask output clock of MUXMDNIE0      |             |
 * MDNIE0_MASK     |   [4]   |  RW  | 0 : Mask                            |     0x1     |
 *                 |         |      | 1 : Unmask                          |             |
 * -------------------------------------------------------------------------------------|
 * RSVD            |  [7:5]  |  -   | Reserved                            |     0x0     |
 * -------------------------------------------------------------------------------------|
 *                 |         |      | Mask output clock of MUXMDNIE_PWM0  |             |
 * MDNIE_PWM0_MASK |   [8]   |  RW  | 0 : Mask                            |     0x1     |
 *                 |         |      | 1 : Unmask                          |             |
 * -------------------------------------------------------------------------------------|
 * RSVD            |  [11:9] |  -   | Reserved                            |     0x0     |
 * -------------------------------------------------------------------------------------|
 *                 |         |      | Mask output clock of MUXMIPI0       |             |
 * MIPI0_MASK      |   [12]  |  RW  | 0 : Mask                            |     0x1     |
 *                 |         |      | 1 : Unmask                          |             |
 * -------------------------------------------------------------------------------------|
 * RSVD            | [31:13] |  -   | Reserved                            |     0x0     |
 * -------------------------------------------------------------------------------------|
 */

typedef union CLK_SRC_MASK_LCD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t FIMD0_MASK:1;      //0
        uint32_t Reserved0:3;       //3:1
        uint32_t MDNIE0_MASK:1;     //4
        uint32_t Reserved1:3;       //7:5
        uint32_t MDNIE_PWM0_MASK:1; //8
        uint32_t Reserved2:3;       //11:9
        uint32_t MIPI0_MASK:1;      //12
        uint32_t Reserved3:19;       //31:13
    } bits;
} CLK_SRC_MASK_LCD;

/*
 * CLK_SRC_MASK_ISP
 * 
 * Address = CLOCK Base Address 1 + 0xC338
 * Reset Value = 0x0000_1111
 * 
 *       Name      |   Bit   | Type |             Description             | Reset Value | 
 * -------------------------------------------------------------------------------------|
 *                 |         |      | Mask output clock of MUXPWM_ISP     |             |
 * PWM_ISP_MASK    |   [0]   |  RW  | 0 : Mask                            |     0x1     |
 *                 |         |      | 1 : Unmask                          |             |
 * -------------------------------------------------------------------------------------|
 * RSVD            |  [3:1]  |  -   | Reserved                            |     0x0     |
 * -------------------------------------------------------------------------------------|
 *                 |         |      | Mask output clock of MUXSPI0_ISP    |             |
 * SPI0_ISP_MASK   |   [4]   |  RW  | 0 : Mask                            |     0x1     |
 *                 |         |      | 1 : Unmask                          |             |
 * -------------------------------------------------------------------------------------|
 * RSVD            |  [7:5]  |  -   | Reserved                            |     0x0     |
 * -------------------------------------------------------------------------------------|
 *                 |         |      | Mask output clock of MUXSPI1_ISP    |             |
 * SPI1_ISP_MASK   |   [8]   |  RW  | 0 : Mask                            |     0x1     |
 *                 |         |      | 1 : Unmask                          |             |
 * -------------------------------------------------------------------------------------|
 * RSVD            |  [11:9] |  -   | Reserved                            |     0x0     |
 * -------------------------------------------------------------------------------------|
 *                 |         |      | Mask output clock of MUXUART_ISP    |             |
 * UART_ISP_MASK   |   [12]  |  RW  | 0 : Mask                            |     0x1     |
 *                 |         |      | 1 : Unmask                          |             |
 * -------------------------------------------------------------------------------------|
 * RSVD            | [31:13] |  -   | Reserved                            |     0x0     |
 * -------------------------------------------------------------------------------------|
 */

typedef union CLK_SRC_MASK_ISP_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PWM_ISP_MASK:1;    //0
        uint32_t Reserved0:3;       //3:1
        uint32_t SPI0_ISP_MASK:1;   //4
        uint32_t Reserved1:3;       //7:5
        uint32_t SPI1_ISP_MASK:1;   //8
        uint32_t Reserved2:3;       //11:9
        uint32_t UART_ISP_MASK:1;   //12
        uint32_t Reserved3:19;      //31:13
    } bits;
} CLK_SRC_MASK_ISP;

/*
 * CLK_SRC_MASK_MAUDIO
 * 
 * Address = CLOCK Base Address 1 + 0xC33C
 * Reset Value = 0x0000_0001
 * 
 *     Name    |   Bit   | Type |                Description                | Reset Value | 
 * ---------------------------------------------------------------------------------------|
 *             |         |      | Mask output clock of MUXAUDIO0            |             |
 * AUDIO0_MASK |   [0]   |  RW  | 0 : Mask                                  |     0x1     |
 *             |         |      | 1 : Unmask                                |             |
 * ---------------------------------------------------------------------------------------|
 * RSVD        |  [31:1] |  -   | Reserved                                  |     0x0     |
 * ---------------------------------------------------------------------------------------|
 */

typedef union CLK_SRC_MASK_MAUDIO_u
{
    uint32_t all_val;
    struct
    {
        uint32_t AUDIO0_MASK:1;       //0
        uint32_t Reserved0:31;      //31:1
    } bits;
} CLK_SRC_MASK_MAUDIO;

/*
 * CLK_SRC_MASK_FSYS
 * 
 * Address = CLOCK Base Address 1 + 0xC340
 * Reset Value = 0x0101_1111
 * 
 *      Name     |   Bit   | Type |             Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *               |         |      | Mask output clock of MUXMMC0        |             |
 * MMC0_MASK     |   [0]   |  RW  | 0 : Mask                            |     0x1     |
 *               |         |      | 1 : Unmask                          |             |
 * -----------------------------------------------------------------------------------|
 * RSVD          |  [3:1]  |  -   | Reserved                            |     0x0     |
 * -----------------------------------------------------------------------------------|
 *               |         |      | Mask output clock of MUXMMC1        |             |
 * MMC1_MASK     |   [4]   |  RW  | 0 : Mask                            |     0x1     |
 *               |         |      | 1 : Unmask                          |             |
 * -----------------------------------------------------------------------------------|
 * RSVD          |  [7:5]  |  -   | Reserved                            |     0x0     |
 * -----------------------------------------------------------------------------------|
 *               |         |      | Mask output clock of MUXMMC2        |             |
 * MMC2_MASK     |   [8]   |  RW  | 0 : Mask                            |     0x1     |
 *               |         |      | 1 : Unmask                          |             |
 * -----------------------------------------------------------------------------------|
 * RSVD          |  [11:9] |  -   | Reserved                            |     0x0     |
 * -----------------------------------------------------------------------------------|
 *               |         |      | Mask output clock of MUXMMC3        |             |
 * MMC3_MASK     |   [12]  |  RW  | 0 : Mask                            |     0x1     |
 *               |         |      | 1 : Unmask                          |             |
 * -----------------------------------------------------------------------------------|
 * RSVD          | [15:13] |  -   | Reserved                            |     0x0     |
 * -----------------------------------------------------------------------------------|
 *               |         |      | Mask output clock of MUXMMC4        |             |
 * MMC4_MASK     |   [16]  |  RW  | 0 : Mask                            |     0x1     |
 *               |         |      | 1 : Unmask                          |             |
 * -----------------------------------------------------------------------------------|
 * RSVD          | [23:17] |  -   | Reserved                            |     0x0     |
 * -----------------------------------------------------------------------------------|
 *               |         |      | Mask output clock of MUXMIPIHSI     |             |
 * MIPIHSI_MASK  |   [24]  |  RW  | 0 : Mask                            |     0x1     |
 *               |         |      | 1 : Unmask                          |             |
 * -----------------------------------------------------------------------------------|
 * RSVD          | [31:25] |  -   | Reserved                            |     0x0     |
 * -----------------------------------------------------------------------------------|
 */

typedef union CLK_SRC_MASK_FSYS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MMC0_MASK:1;       //0
        uint32_t Reserved0:3;       //3:1
        uint32_t MMC1_MASK:1;       //4
        uint32_t Reserved1:3;       //7:5
        uint32_t MMC2_MASK:1;       //8
        uint32_t Reserved2:3;       //11:9
        uint32_t MMC3_MASK:1;       //12
        uint32_t Reserved3:3;       //15:13
        uint32_t MMC4_MASK:1;       //16
        uint32_t Reserved4:7;       //23:17
        uint32_t MIPIHSI_MASK:1;    //24
        uint32_t Reserved5:7;       //31:25
    } bits;
} CLK_SRC_MASK_FSYS;

/*
 * CLK_SRC_MASK_PERIL0
 * 
 * Address = CLOCK Base Address 1 + 0xC350
 * Reset Value = 0x0001_1111
 * 
 *      Name     |   Bit   | Type |             Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *               |         |      | Mask output clock of MUXUART0       |             |
 * UART0_MASK    |   [0]   |  RW  | 0 : Mask                            |     0x1     |
 *               |         |      | 1 : Unmask                          |             |
 * -----------------------------------------------------------------------------------|
 * RSVD          |  [3:1]  |  -   | Reserved                            |     0x0     |
 * -----------------------------------------------------------------------------------|
 *               |         |      | Mask output clock of MUXUART1       |             |
 * UART1_MASK    |   [4]   |  RW  | 0 : Mask                            |     0x1     |
 *               |         |      | 1 : Unmask                          |             |
 * -----------------------------------------------------------------------------------|
 * RSVD          |  [7:5]  |  -   | Reserved                            |     0x0     |
 * -----------------------------------------------------------------------------------|
 *               |         |      | Mask output clock of MUXUART2       |             |
 * UART2_MASK    |   [8]   |  RW  | 0 : Mask                            |     0x1     |
 *               |         |      | 1 : Unmask                          |             |
 * -----------------------------------------------------------------------------------|
 * RSVD          |  [11:9] |  -   | Reserved                            |     0x0     |
 * -----------------------------------------------------------------------------------|
 *               |         |      | Mask output clock of MUXUART3       |             |
 * UART3_MASK    |   [12]  |  RW  | 0 : Mask                            |     0x1     |
 *               |         |      | 1 : Unmask                          |             |
 * -----------------------------------------------------------------------------------|
 * RSVD          | [15:13] |  -   | Reserved                            |     0x0     |
 * -----------------------------------------------------------------------------------|
 *               |         |      | Mask output clock of MUXUART4       |             |
 * UART4_MASK    |   [16]  |  RW  | 0 : Mask                            |     0x1     |
 *               |         |      | 1 : Unmask                          |             |
 * -----------------------------------------------------------------------------------|
 * RSVD          | [31:17] |  -   | Reserved                            |     0x0     |
 * -----------------------------------------------------------------------------------|
 */

typedef union CLK_SRC_MASK_PERIL0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t UART0_MASK:1;      //0
        uint32_t Reserved0:3;       //3:1
        uint32_t UART1_MASK:1;      //4
        uint32_t Reserved1:3;       //7:5
        uint32_t UART2_MASK:1;      //8
        uint32_t Reserved2:3;       //11:9
        uint32_t UART3_MASK:1;      //12
        uint32_t Reserved3:3;       //15:13
        uint32_t UART4_MASK:1;      //16
        uint32_t Reserved4:15;      //31:17
    } bits;
} CLK_SRC_MASK_PERIL0;

/*
 * CLK_SRC_MASK_PERIL1
 * 
 * Address = CLOCK Base Address 1 + 0xC354
 * Reset Value = 0x0111_0111
 * 
 *      Name     |   Bit   | Type |             Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *               |         |      | Mask output clock of MUXAUDIO1      |             |
 * AUDIO1_MASK   |   [0]   |  RW  | 0 : Mask                            |     0x1     |
 *               |         |      | 1 : Unmask                          |             |
 * -----------------------------------------------------------------------------------|
 * RSVD          |  [3:1]  |  -   | Reserved                            |     0x0     |
 * -----------------------------------------------------------------------------------|
 *               |         |      | Mask output clock of MUXAUDIO2      |             |
 * AUDIO2_MASK   |   [4]   |  RW  | 0 : Mask                            |     0x1     |
 *               |         |      | 1 : Unmask                          |             |
 * -----------------------------------------------------------------------------------|
 * RSVD          |  [7:5]  |  -   | Reserved                            |     0x0     |
 * -----------------------------------------------------------------------------------|
 *               |         |      | Mask output clock of MUXSPDIF       |             |
 * SPDIF_MASK    |   [8]   |  RW  | 0 : Mask                            |     0x1     |
 *               |         |      | 1 : Unmask                          |             |
 * -----------------------------------------------------------------------------------|
 * RSVD          |  [15:9] |  -   | Reserved                            |     0x0     |
 * -----------------------------------------------------------------------------------|
 *               |         |      | Mask output clock of MUXSPI0        |             |
 * SPI0_MASK     |   [16]  |  RW  | 0 : Mask                            |     0x1     |
 *               |         |      | 1 : Unmask                          |             |
 * -----------------------------------------------------------------------------------|
 * RSVD          | [19:17] |  -   | Reserved                            |     0x0     |
 * -----------------------------------------------------------------------------------|
 *               |         |      | Mask output clock of MUXSPI0        |             |
 * SPI1_MASK     |   [20]  |  RW  | 0 : Mask                            |     0x1     |
 *               |         |      | 1 : Unmask                          |             |
 * -----------------------------------------------------------------------------------|
 * RSVD          | [23:21] |  -   | Reserved                            |     0x0     |
 * -----------------------------------------------------------------------------------|
 *               |         |      | Mask output clock of MUXSPI0        |             |
 * SPI2_MASK     |   [24]  |  RW  | 0 : Mask                            |     0x1     |
 *               |         |      | 1 : Unmask                          |             |
 * -----------------------------------------------------------------------------------|
 * RSVD          | [31:25] |  -   | Reserved                            |     0x0     |
 * -----------------------------------------------------------------------------------|
 */

typedef union CLK_SRC_MASK_PERIL1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t AUDIO1_MASK:1;     //0
        uint32_t Reserved0:3;       //3:1
        uint32_t AUDIO2_MASK:1;     //4
        uint32_t Reserved1:3;       //7:5
        uint32_t SPDIF_MASK:1;      //8
        uint32_t Reserved2:3;       //15:9
        uint32_t SPI0_MASK:1;       //16
        uint32_t Reserved3:3;       //19:17
        uint32_t SPI1_MASK:1;       //20
        uint32_t Reserved4:15;      //23:21
        uint32_t SPI2_MASK:1;       //24
        uint32_t Reserved4:15;      //31:25
    } bits;
} CLK_SRC_MASK_PERIL1;

/*
 * CLK_MUX_STAT_TOP
 * 
 * Address = CLOCK Base Address 1 + 0xC410
 * Reset Value = 0x1111_1111
 * 
 *       Name      |   Bit   | Type |                 Description                 | Reset Value | 
 * ---------------------------------------------------------------------------------------------|
 *                 |         |      | Selection signal status of MUXONENAND_1     |             |
 * ONENAND_1_SEL   |  [2:0]  |  R   | 001 : MOUTONENAND                           |     0x1     |
 *                 |         |      | 010 : SCLKVPLL                              |             |
 *                 |         |      | 1xx : Status that the mux is changing       |             |
 * ---------------------------------------------------------------------------------------------|
 * RSVD            |   [3]   |  -   | Reserved                                    |     0x0     |
 * ---------------------------------------------------------------------------------------------|
 *                 |         |      | Selection signal status of MUXEPLL          |             |
 * EPLL_SEL        |  [6:4]  |  R   | 001 : FINPLL                                |     0x1     |
 *                 |         |      | 010 : FOUTEPLL                              |             |
 *                 |         |      | 1xx : Status that the mux is changing       |             |
 * ---------------------------------------------------------------------------------------------|
 * RSVD            |   [7]  |  -   | Reserved                                     |     0x0     |
 * ---------------------------------------------------------------------------------------------|
 *                 |         |      | Selection signal status of MUXVPLL          |             |
 * VPLL_SEL        |  [10:8] |  R   | 001 : FINVPLL                               |     0x1     |
 *                 |         |      | 010 : FOUTVPLL                              |             |
 *                 |         |      | 1xx : Status that the mux is changing       |             |
 * ---------------------------------------------------------------------------------------------|
 * RSVD            |   [11]  |  -   | Reserved                                    |     0x0     |
 * ---------------------------------------------------------------------------------------------|
 *                 |         |      | Selection signal status of MUXACLK_200      |             |
 * ACLK_200_SEL    | [14:12] |  R   | 001 : SCLKMPLL                              |     0x1     |
 *                 |         |      | 010 : SCLKAPLL                              |             |
 *                 |         |      | 1xx : Status that the mux is changing       |             |
 * ---------------------------------------------------------------------------------------------|
 * RSVD            |   [15]  |  -   | Reserved                                    |     0x0     |
 * ---------------------------------------------------------------------------------------------|
 *                 |         |      | Selection signal status of MUXACLK_100      |             |
 * ACLK_100_SEL    | [18:16] |  R   | 001 : SCLKMPLL                              |     0x1     |
 *                 |         |      | 010 : SCLKAPLL                              |             |
 *                 |         |      | 1xx : Status that the mux is changing       |             |
 * ---------------------------------------------------------------------------------------------|
 * RSVD            |   [19]  |  -   | Reserved                                    |     0x0     |
 * ---------------------------------------------------------------------------------------------|
 *                 |         |      | Selection signal status of MUXACLK_160      |             |
 * ACLK_160_SEL    | [22:20] |  R   | 001 : SCLKMPLL                              |     0x1     |
 *                 |         |      | 010 : SCLKAPLL                              |             |
 *                 |         |      | 1xx : Status that the mux is changing       |             |
 * ---------------------------------------------------------------------------------------------|
 * RSVD            |   [23]  |  -   | Reserved                                    |     0x0     |
 * ---------------------------------------------------------------------------------------------|
 *                 |         |      | Selection signal status of MUXACLK_133      |             |
 * ACLK_133_SEL    | [26:24] |  R   | 001 : SCLKMPLL                              |     0x1     |
 *                 |         |      | 010 : SCLKAPLL                              |             |
 *                 |         |      | 1xx : Status that the mux is changing       |             |
 * ---------------------------------------------------------------------------------------------|
 * RSVD            |   [27]  |  -   | Reserved                                    |     0x0     |
 * ---------------------------------------------------------------------------------------------|
 *                 |         |      | Selection signal status of MUXONENAND       |             |
 * ONENAND_SEL     | [30:28] |  R   | 001 : DOUT133                               |     0x1     |
 *                 |         |      | 010 : DOUT166                               |             |
 *                 |         |      | 1xx : Status that the mux is changing       |             |
 * ---------------------------------------------------------------------------------------------|
 * RSVD            |   [31]  |  -   | Reserved                                    |     0x0     |
 * ---------------------------------------------------------------------------------------------|
 */

typedef union CLK_MUX_STAT_TOP_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ONENAND_1_SEL:3;   //2:0
        uint32_t Reserved0:1;       //3
        uint32_t EPLL_SEL:3;        //6:4
        uint32_t Reserved1:1;       //7
        uint32_t VPLL_SEL:3;        //10:8
        uint32_t Reserved2:1;       //11
        uint32_t ACLK_200_SEL:3;    //14:12
        uint32_t Reserved3:1;       //15
        uint32_t ACLK_100_SEL:3;    //18:14
        uint32_t Reserved4:1;       //19
        uint32_t ACLK_160_SEL:3;    //22:18
        uint32_t Reserved5:1;       //23
        uint32_t ACLK_133_SEL:3;    //26:22
        uint32_t Reserved6:1;       //27
        uint32_t ONENAND_SEL:3;     //30:28
        uint32_t Reserved7:1;       //31
    } bits;
} CLK_MUX_STAT_TOP;

/*
 * CLK_MUX_STAT_TOP1
 * 
 * Address = CLOCK Base Address 1 + 0xC414
 * Reset Value = 0x0111_1110
 * 
 *           Name          |   Bit   | Type |                 Description                       | Reset Value | 
 * -----------------------------------------------------------------------------------------------------------|
 * RSVD                    |  [3:0]  |  -   | Reserved                                          |     0x0     |
 * -----------------------------------------------------------------------------------------------------------|
 *                         |         |      | Selection signal status of MUXACLK_266_GPS        |             |
 * ACLK_266_GPS_SEL        |  [6:4]  |  R   | 001 : SCLKMPLL                                    |     0x1     |
 *                         |         |      | 010 : SCLKAPLL                                    |             |
 *                         |         |      | 1xx : Status that the mux is changing             |             |
 * -----------------------------------------------------------------------------------------------------------|
 * RSVD                    |   [7]   |  -   | Reserved                                          |     0x0     |
 * -----------------------------------------------------------------------------------------------------------|
 *                         |         |      | Selection signal status of MUXACLK_400_MCUISP     |             |
 * ACLK_400_MCUISP_SEL     |  [10:8] |  R   | 001 : SCLKMPLL                                    |     0x1     |
 *                         |         |      | 010 : SCLKAPLL                                    |             |
 *                         |         |      | 1xx : Status that the mux is changing             |             |
 * -----------------------------------------------------------------------------------------------------------|
 * RSVD                    |   [11]  |  -   | Reserved                                          |     0x0     |
 * -----------------------------------------------------------------------------------------------------------|
 *                         |         |      | Selection signal status of MUXMPLL                |             |
 * MPLL_USER_SEL_T         | [14:12] |  R   | 001 : FINVPLL                                     |     0x1     |
 *                         |         |      | 010 : FOUTVPLL                                    |             |
 *                         |         |      | 1xx : Status that the mux is changing             |             |
 * -----------------------------------------------------------------------------------------------------------|
 * RSVD                    |   [15]  |  -   | Reserved                                          |     0x0     |
 * -----------------------------------------------------------------------------------------------------------|
 *                         |         |      | Selection signal status of MUXACLK_266_GPS        |             |
 * ACLK_266_GPS_SUB_SEL    | [18:16] |  R   | 001 : FINPLL                                      |     0x1     |
 *                         |         |      | 010 : FOUTPOST_ACLK_266_GPS                       |             |
 *                         |         |      | 1xx : Status that the mux is changing             |             |
 * -----------------------------------------------------------------------------------------------------------|
 * RSVD                    |   [19]  |  -   | Reserved                                          |     0x0     |
 * -----------------------------------------------------------------------------------------------------------|
 *                         |         |      | Selection signal status of MUXACLK_200            |             |
 * ACLK_200_SUB_SEL        | [22:20] |  R   | 001 : FINPLL                                      |     0x1     |
 *                         |         |      | 010 : FOUTPOST_ACLK_200                           |             |
 *                         |         |      | 1xx : Status that the mux is changing             |             |
 * -------------------------------------------------------------------------------------------  --------------|
 * RSVD                    |   [23]  |  -   | Reserved                                          |     0x0     |
 * -----------------------------------------------------------------------------------------------------------|
 *                         |         |      | Selection signal status of MUXACLK_400_MCUISP     |             |
 * ACLK_400_MCUISP_SUB_SEL | [26:24] |  R   | 001 : FINPLL                                      |     0x1     |
 *                         |         |      | 010 : FOUTPOST_ACLK_400_MCUISP                    |             |
 *                         |         |      | 1xx : Status that the mux is changing             |             |
 * -----------------------------------------------------------------------------------------------------------|
 * RSVD                    | [31:27] |  -   | Reserved                                          |     0x0     |
 * -----------------------------------------------------------------------------------------------------------|
 */      
      
typedef union CLK_MUX_STAT_TOP1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:4;               //3:0
        uint32_t ACLK_266_GPS_SEL:3;        //6:4
        uint32_t Reserved1:1;               //7
        uint32_t ACLK_400_MCUISP_SEL:3;     //10:8
        uint32_t Reserved2:1;               //11
        uint32_t MPLL_USER_SEL_T:3;         //14:12
        uint32_t Reserved3:1;               //15
        uint32_t ACLK_266_GPS_SUB_SEL:3;    //18:16
        uint32_t Reserved4:1;               //19
        uint32_t ACLK_200_SUB_SEL:3;        //22:20
        uint32_t Reserved5:1;               //23
        uint32_t ACLK_400_MCUISP_SUB_SEL:3; //26:24
        uint32_t Reserved6:5;               //31:27
    } bits;
} CLK_MUX_STAT_TOP1;

/*
 * CLK_MUX_STAT_MFC
 * 
 * Address = CLOCK Base Address 1 + 0xC428
 * Reset Value = 0x0000_0111
 * 
 *     Name    |   Bit   | Type |                 Description                 | Reset Value | 
 * -----------------------------------------------------------------------------------------|
 *             |         |      | Selection signal status of MUXMFC_0         |             |
 * MFC_0_SEL   |  [2:0]  |  R   | 001 : SCLKMPLL                              |     0x1     |
 *             |         |      | 010 : SCLKAPLL                              |             |
 *             |         |      | 1xx : Status that the mux is changing       |             |
 * -----------------------------------------------------------------------------------------|
 * RSVD        |   [3]   |  -   | Reserved                                    |     0x0     |
 * -----------------------------------------------------------------------------------------|
 *             |         |      | Selection signal status of MUXMFC_1         |             |
 * MFC_1_SEL   |  [6:4]  |  R   | 001 : SCLKEPLL                              |     0x1     |
 *             |         |      | 010 : SCLKVPLL                              |             |
 *             |         |      | 1xx : Status that the mux is changing       |             |
 * -----------------------------------------------------------------------------------------|
 * RSVD        |   [7]  |  -   | Reserved                                     |     0x0     |
 * -----------------------------------------------------------------------------------------|
 *             |         |      | Selection signal status of MUXMFC           |             |
 * MFC_2_SEL   |  [10:8] |  R   | 001 : MOUTMFC_0                             |     0x1     |
 *             |         |      | 010 : MOUTMFC_1                             |             |
 *             |         |      | 1xx : Status that the mux is changing       |             |
 * -----------------------------------------------------------------------------------------|
 * RSVD        | [31:11] |  -   | Reserved                                    |     0x0     |
 * -----------------------------------------------------------------------------------------|
 */

typedef union CLK_MUX_STAT_MFC_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MFC_0_SEL:3;   //2:0
        uint32_t Reserved0:1;   //3
        uint32_t MFC_1_SEL:3;   //6:4
        uint32_t Reserved1:1;   //7
        uint32_t MFC_2_SEL:3;   //10:8
        uint32_t Reserved2:21;   //31:11
    } bits;
} CLK_MUX_STAT_MFC;

/*
 * CLK_MUX_STAT_G3D
 * 
 * Address = CLOCK Base Address 1 + 0xC42C
 * Reset Value = 0x0000_0111
 * 
 *     Name    |   Bit   | Type |                 Description                 | Reset Value | 
 * -----------------------------------------------------------------------------------------|
 *             |         |      | Selection signal status of MUXG3D_0         |             |
 * G3D_0_SEL   |  [2:0]  |  R   | 001 : SCLKMPLL                              |     0x1     |
 *             |         |      | 010 : SCLKAPLL                              |             |
 *             |         |      | 1xx : Status that the mux is changing       |             |
 * -----------------------------------------------------------------------------------------|
 * RSVD        |   [3]   |  -   | Reserved                                    |     0x0     |
 * -----------------------------------------------------------------------------------------|
 *             |         |      | Selection signal status of MUXG3D_1         |             |
 * G3D_1_SEL   |  [6:4]  |  R   | 001 : SCLKEPLL                              |     0x1     |
 *             |         |      | 010 : SCLKVPLL                              |             |
 *             |         |      | 1xx : Status that the mux is changing       |             |
 * -----------------------------------------------------------------------------------------|
 * RSVD        |   [7]  |  -   | Reserved                                     |     0x0     |
 * -----------------------------------------------------------------------------------------|
 *             |         |      | Selection signal status of MUXG3D           |             |
 * G3D_2_SEL   |  [10:8] |  R   | 001 : MOUTG3D_0                             |     0x1     |
 *             |         |      | 010 : MOUTG3D_1                             |             |
 *             |         |      | 1xx : Status that the mux is changing       |             |
 * -----------------------------------------------------------------------------------------|
 * RSVD        | [31:11] |  -   | Reserved                                    |     0x0     |
 * -----------------------------------------------------------------------------------------|
 */

typedef union CLK_MUX_STAT_G3D_u
{
    uint32_t all_val;
    struct
    {
        uint32_t G3D_0_SEL:3;   //2:0
        uint32_t Reserved0:1;   //3
        uint32_t G3D_1_SEL:3;   //6:4
        uint32_t Reserved1:1;   //7
        uint32_t G3D_2_SEL:3;   //10:8
        uint32_t Reserved2:21;   //31:11
    } bits;
} CLK_MUX_STAT_G3D;

/*
 * CLK_MUX_STAT_CAM1
 * 
 * Address = CLOCK Base Address 1 + 0xC458
 * Reset Value = 0x0000_0111
 * 
 *     Name    |   Bit   | Type |                 Description                 | Reset Value | 
 * -----------------------------------------------------------------------------------------|
 *             |         |      | Selection signal status of MUXJPEG_0        |             |
 * JPEG_0_SEL  |  [2:0]  |  R   | 001 : SCLKMPLL                              |     0x1     |
 *             |         |      | 010 : SCLKAPLL                              |             |
 *             |         |      | 1xx : Status that the mux is changing       |             |
 * -----------------------------------------------------------------------------------------|
 * RSVD        |   [3]   |  -   | Reserved                                    |     0x0     |
 * -----------------------------------------------------------------------------------------|
 *             |         |      | Selection signal status of MUXJPEG_1        |             |
 * JPEG_1_SEL  |  [6:4]  |  R   | 001 : SCLKEPLL                              |     0x1     |
 *             |         |      | 010 : SCLKVPLL                              |             |
 *             |         |      | 1xx : Status that the mux is changing       |             |
 * -----------------------------------------------------------------------------------------|
 * RSVD        |   [7]  |  -   | Reserved                                     |     0x0     |
 * -----------------------------------------------------------------------------------------|
 *             |         |      | Selection signal status of MUXJPEG          |             |
 * JPEG_2_SEL  |  [10:8] |  R   | 001 : MOUTJPEG_0                            |     0x1     |
 *             |         |      | 010 : MOUTJPEG_1                            |             |
 *             |         |      | 1xx : Status that the mux is changing       |             |
 * -----------------------------------------------------------------------------------------|
 * RSVD        | [31:11] |  -   | Reserved                                    |     0x0     |
 * -----------------------------------------------------------------------------------------|
 */

typedef union CLK_MUX_STAT_JPEG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t JPEG_0_SEL:3;   //2:0
        uint32_t Reserved0:1;   //3
        uint32_t JPEG_1_SEL:3;   //6:4
        uint32_t Reserved1:1;   //7
        uint32_t JPEG_2_SEL:3;   //10:8
        uint32_t Reserved2:21;   //31:11
    } bits;
} CLK_MUX_STAT_JPEG;

/*
 * CLK_DIV_TOP
 * 
 * Address = CLOCK Base Address 1 + 0xC510
 * Reset Value = 0x0000_0000
 * 
 *         Name       |   Bit   | Type |               Description              | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 *                    |         |      | DIVACLK_200 Clock Divider Ratio        |             |
 * ACLK_200_RATIO     |  [2:0]  |  RW  | ACLK_200 =                             |     0x0     |
 *                    |         |      | [MOUTACLK_200 / (ACLK_200_RATIO + 1)]  |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD               |   [3]   |  -   | Reserved                               |     0x0     |
 * -------------------------------------------------------------------------------------------|
 *                    |         |      | DIVACLK_100 Clock Divider Ratio        |             |
 * ACLK_100_RATIO     |  [7:4]  |  RW  | ACLK_100 =                             |     0x0     |
 *                    |         |      | [MOUTACLK_100 / (ACLK_100_RATIO + 1)]  |             |
 * -------------------------------------------------------------------------------------------|
 *                    |         |      | DIVACLK_160 Clock Divider Ratio        |             |
 * ACLK_160_RATIO     |  [10:8] |  RW  | ACLK_160 =                             |     0x0     |
 *                    |         |      | [MOUTACLK_160 / (ACLK_160_RATIO + 1)]  |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD               |   [11]  |  -   | Reserved                               |     0x0     |
 * -------------------------------------------------------------------------------------------|
 *                    |         |      | DIVACLK_133 Clock Divider Ratio        |             |
 * ACLK_133_RATIO     | [14:12] |  RW  | ACLK_133 =                             |     0x0     |
 *                    |         |      | [MOUTACLK_133 / (ACLK_133_RATIO + 1)]  |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD               |   [15]  |  -   | Reserved                               |     0x0     |
 * -------------------------------------------------------------------------------------------|
 *                    |         |      | DIVONENAND Clock Divider Ratio         |             |
 * ONENAND_RATIO      | [18:16] |  RW  | SCLK_ONENAND = [MOUTONENAND_1          |     0x0     |
 *                    |         |      | / (ONENAND_RATIO + 1)]                 |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD               |   [19]  |  -   | Reserved                               |     0x0     |
 * -------------------------------------------------------------------------------------------|
 *                    |         |      | DIVACLK_266 Clock Divider Ratio        |             |
 * ACLK_266_GPS_RATIO | [22:20] |  RW  | ACLK_266_GPS = [MOUTACLK_266_GPS       |     0x0     |
 *                    |         |      | / (ACLK_266_GPS_RATIO + 1)]            |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD               |   [23]  |  -   | Reserved                               |     0x0     |
 * -------------------------------------------------------------------------------------------|
 *                    |         |      | DIVACLK_266 Clock Divider Ratio        |             |
 * ACLK_400_MCUISP    | [26:24] |  RW  | ACLK_266_MCUISP =                      |     0x0     |
 * _RATIO             |         |      | [MOUTACLK_400_MCUISP / (ACLK_400_MCUI  |             |
 *                    |         |      | SP_RATIO + 1)]                         |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD               | [31:27] |  -   | Reserved                               |     0x0     |
 * -------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_TOP_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ACLK_200_RATIO:3;          //2:0
        uint32_t Reserved0:1;               //3
        uint32_t ACLK_100_RATIO:3;          //7:4
        uint32_t ACLK_160_RATIO:3;          //10:8
        uint32_t Reserved1:1;               //11
        uint32_t ACLK_133_RATIO:3;          //14:12
        uint32_t Reserved2:1;               //15
        uint32_t ONENAND_RATIO:3;           //18:16
        uint32_t Reserved3:1;               //19
        uint32_t ACLK_266_GPS_RATIO:3;      //22:20
        uint32_t Reserved4:1;               //23
        uint32_t ACLK_400_MCUISP_RATIO:3;   //26:14
        uint32_t Reserved5:5;               //31:27
    } bits;
} CLK_DIV_TOP;

/*
 * CLK_DIV_CAM0
 * 
 * Address = CLOCK Base Address 1 + 0xC520
 * Reset Value = 0x0000_0000
 * 
 *         Name       |   Bit   | Type |                Description                 | Reset Value | 
 * -----------------------------------------------------------------------------------------------|
 *                    |         |      | DIVFIMC0_LCLK Clock Divider Ratio          |             |
 * FIMC0_LCLK_RATIO   |  [3:0]  |  RW  | SCLKFIMC0_LCK = [MOUTFIMC0_LCLK            |     0x0     |
 *                    |         |      | / (FIMC0_LCLK_RATIO + 1)]                  |             |
 * -----------------------------------------------------------------------------------------------|
 *                    |         |      | DIVFIMC1_LCLK Clock Divider Ratio          |             |
 * FIMC1_LCLK_RATIO   |  [7:4]  |  RW  | SCLKFIMC1_LCK = [MOUTFIMC1_LCLK            |     0x0     |
 *                    |         |      | / (FIMC1_LCLK_RATIO + 1)]                  |             |
 * -----------------------------------------------------------------------------------------------|
 *                    |         |      | DIVFIMC2_LCLK Clock Divider Ratio          |             |
 * FIMC2_LCLK_RATIO   |  [11:8] |  RW  | SCLKFIMC2_LCK = [MOUTFIMC2_LCLK            |     0x0     |
 *                    |         |      | / (FIMC2_LCLK_RATIO + 1)]                  |             |
 * -----------------------------------------------------------------------------------------------|
 *                    |         |      | DIVFIMC3_LCLK Clock Divider Ratio          |             |
 * FIMC3_LCLK_RATIO   | [15:12] |  RW  | SCLKFIMC3_LCK = [MOUTFIMC3_LCLK            |     0x0     |
 *                    |         |      | / (FIMC3_LCLK_RATIO + 1)]                  |             |
 * -----------------------------------------------------------------------------------------------|
 * CAM0_RATIO         | [19:16] |  RW  | DIVCAM0 Clock Divider Ratio                |     0x0     |
 *                    |         |      | SCLK_CAM0 = MOUTCAM0 / (CAM0_RATIO + 1)    |             |
 * -----------------------------------------------------------------------------------------------|
 * CAM1_RATIO         | [23:20] |  RW  | DIVCAM1 Clock Divider Ratio                |     0x0     |
 *                    |         |      | SCLK_CAM1 = MOUTCAM1 / (CAM1_RATIO + 1)    |             |
 * -----------------------------------------------------------------------------------------------|
 * CSIS0_RATIO        | [27:24] |  RW  | DIVCSIS0 Clock Divider Ratio               |     0x0     |
 *                    |         |      | SCLK_CSIS0 = MOUTCSIS0 / (CSIS0_RATIO + 1) |             |
 * -----------------------------------------------------------------------------------------------|
 * CSIS1_RATIO        | [31:28] |  RW  | DIVCSIS1 Clock Divider Ratio               |     0x0     |
 *                    |         |      | SCLK_CSIS1 = MOUTCSIS1 / (CSIS0_RATI1 + 1) |             |
 * -----------------------------------------------------------------------------------------------|
 * 
 */

typedef union CLK_DIV_CAM0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t FIMC0_LCLK_RATIO:4;   //3:0
        uint32_t FIMC1_LCLK_RATIO:4;   //7:4
        uint32_t FIMC2_LCLK_RATIO:4;   //11:8
        uint32_t FIMC3_LCLK_RATIO:4;   //15:12
        uint32_t CAM0_RATIO:4;         //19:16
        uint32_t CAM1_RATIO:4;         //23:20
        uint32_t CSIS0_RATIO:4;        //27:24
        uint32_t CSIS1_RATIO:4;        //31:28
    } bits;
} CLK_DIV_CAM0;

/*
 * CLK_DIV_TV
 * 
 * Address = CLOCK Base Address 1 + 0xC524
 * Reset Value = 0x0000_0000
 * 
 *       Name     |   Bit   | Type |                Description                 | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 * TV_BLK_RATIO   |  [3:0]  |  RW  | DIVTV_BLK Clock Divider Ratio              |     0x0     |
 *                |         |      | SCLK_PIXEL = SCLKVPLL / (TV_BLK_RATIO + 1) |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           | [31:4]  |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 * 
 */

typedef union CLK_DIV_TV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t TV_BLK_RATIO:4; //3:0
        uint32_t Reserved:28;     //31:4
    } bits;
} CLK_DIV_TV;

/*
 * CLK_DIV_MFC
 * 
 * Address = CLOCK Base Address 1 + 0xC528
 * Reset Value = 0x0000_0000
 * 
 *       Name     |   Bit   | Type |                Description                 | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 * MFC_RATIO      |  [3:0]  |  RW  | DIVMFC Clock Divider Ratio                 |     0x0     |
 *                |         |      | SCLK_MFC = MOUTMFC / (MFC_RATIO + 1)       |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           | [31:4]  |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 * 
 */

typedef union CLK_DIV_MFC_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MFC_RATIO:4; //3:0
        uint32_t Reserved:28; //31:4
    } bits;
} CLK_DIV_MFC;

/*
 * CLK_DIV_G3D
 * 
 * Address = CLOCK Base Address 1 + 0xC52C
 * Reset Value = 0x0000_0000
 * 
 *       Name     |   Bit   | Type |                Description                 | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 * G3D_RATIO      |  [3:0]  |  RW  | DIVG3D Clock Divider Ratio                 |     0x0     |
 *                |         |      | SCLK_G3D = MOUTG3D / (G3D_RATIO + 1)       |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           | [31:4]  |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 * 
 */

typedef union CLK_DIV_G3D_u
{
    uint32_t all_val;
    struct
    {
        uint32_t G3D_RATIO:4; //3:0
        uint32_t Reserved:28; //31:4
    } bits;
} CLK_DIV_G3D;

/*
 * CLK_DIV_LCD
 * 
 * Address = CLOCK Base Address 1 + 0xC534
 * Reset Value = 0x0070_0000
 * 
 *          Name        |   Bit   | Type |                  Description                   | Reset Value | 
 * -----------------------------------------------------------------------------------------------------|
 * FIMD0_RATIO          |  [3:0]  |  RW  | DIVFIMD0 Clock Divider Ratio                   |     0x0     |
 *                      |         |      | SCLK_FIMD0 = MOUTFIMD0 / (FIMD0_RATIO + 1)     |             |
 * -----------------------------------------------------------------------------------------------------|
 *                      |         |      | DIVMDNIE0 Clock Divider Ratio                  |             |
 * MDNIE0_RATIO         |  [7:4]  |  RW  | SCLK_MDNIE0 = MOUTMDNIE0                       |     0x0     |
 *                      |         |      | / (MDNIE0_RATIO + 1)                           |             |
 * -----------------------------------------------------------------------------------------------------|
 *                      |         |      | DIVMDNIE_PWM0 Clock Divider Ratio              |             |
 * MDNIE_PWM0_RATIO     |  [11:8] |  RW  | DOUTMDNIE_PWM0 = MOUTMDNIE_PWM0                |     0x0     |
 *                      |         |      | / (MOUTMDNIE_PWM0_RATIO + 1)]                  |             |
 * -----------------------------------------------------------------------------------------------------|
 *                      |         |      | DIVMDNIE_PWM0_PRE Clock Divider Ratio          |             |
 * MDNIE_PWM0_PRE_RATIO | [15:12] |  RW  | SCLK_MDNIE_PWM0 = DOUTMDNIE_PWM0               |     0x0     |
 *                      |         |      | / (MDNIE_PWM0_PRE_RATIO + 1)                   |             |
 * -----------------------------------------------------------------------------------------------------|
 *                      |         |      | DIVMIPI0 Clock Divider Ratio                   |             |
 *MIPI0_RATIO           | [19:16] |  RW  | SCLK_MIPIDPHY4L = MOUTMIPI0                    |     0x0     |
 *                      |         |      | / (MIPI0_RATIO + 1)                            |             |
 * -----------------------------------------------------------------------------------------------------|
 * MIPI0_PRE_RATIO      | [23:20] |  RW  | DIVMIPI0_PRE Clock Divider Ratio               |     0x0     |
 *                      |         |      | SCLK_MIPI0 = DOUTMIPI0 / (MIPI0_PRE_RATIO + 1) |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD                 | [27:24] |  RW  | Reserved                                       |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 * 
 */

typedef union CLK_DIV_LCD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t FIMD0_RATIO:4;          //3:0
        uint32_t MDNIE0_RATIO:4;         //7:4
        uint32_t MDNIE_PWM0_RATIO:4;     //11:8
        uint32_t MDNIE_PWM0_PRE_RATIO:4; //15:12
        uint32_t MIPI0_RATIO:4;          //19:16
        uint32_t MIPI0_PRE_RATIO:4;      //23:20
        uint32_t Reserved:8;             //31:24
    } bits;
} CLK_DIV_LCD;

/*
 * CLK_DIV_ISP
 * 
 * Address = CLOCK Base Address 1 + 0xC538
 * Reset Value = 0x0000_0000
 * 
 *          Name        |   Bit   | Type |                  Description                   | Reset Value | 
 * -----------------------------------------------------------------------------------------------------|
 *                      |         |      | DIVPWM_ISP Clock Divider Ratio                 |             |
 * PWM_ISP_RATIO        |  [3:0]  |  RW  | SCLK_PWM_ISP =                                 |     0x0     |
 *                      |         |      | [MOUTPWM_ISP / (PWM_ISP_RATIO + 1)]            |             |
 * -----------------------------------------------------------------------------------------------------|
 *                      |         |      | DIVSPI0_ISP Clock Divider Ratio                |             |
 * SPI0_ISP_RATIO       |  [7:4]  |  RW  | DOUTSPI0_ISP =                                 |     0x0     |
 *                      |         |      | [MOUTSPI0_ISP / (SPI0_ISP_RATIO + 1)]          |             |
 * -----------------------------------------------------------------------------------------------------|
 *                      |         |      | DIVSPI0_ISP_PRE Clock Divider Ratio            |             |
 * SPI0_ISP_PRE_RATIO   |  [15:8] |  RW  | SCLK_SPI0_ISP =                                |     0x0     |
 *                      |         |      | [DOUTSPI0_ISP / (SPI0_ISP_PRE_RATIO + 1)]      |             |
 * -----------------------------------------------------------------------------------------------------|
 *                      |         |      | DIVSPI1_ISP Clock Divider Ratio                |             |
 * SPI1_ISP_RATIO       | [19:16] |  RW  | DOUTSPI1_ISP =                                 |     0x0     |
 *                      |         |      | [MOUTSPI1_ISP / (SPI1_ISP_RATIO + 1)]          |             |
 * -----------------------------------------------------------------------------------------------------|
 *                      |         |      | DIVSPI1_ISP_PRE Clock Divider Ratio            |             |
 * SPI1_ISP_PRE_RATIO   | [27:20] |  RW  | SCLK_SPI1_ISP = [DOUTSPI1_ISP                  |     0x0     |
 *                      |         |      | / (SPI1_ISP_PRE_RATIO + 1)]                    |             |
 * -----------------------------------------------------------------------------------------------------|
 *                      |         |      | DIVUART_ISP Clock Divider Ratio                |             |
 * UART_ISP_RATIO       | [31:28] |  RW  | SCLK_UART_ISP =                                |     0x0     |
 *                      |         |      | [DOUTUART_ISP / (UART_ISP_RATIO + 1)]          |             |
 * -----------------------------------------------------------------------------------------------------|
 * 
 */

typedef union CLK_DIV_ISP_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PWM_ISP_RATIO:4;       //3:0
        uint32_t SPI0_ISP_RATIO:4;      //7:4
        uint32_t SPI0_ISP_PRE_RATIO:8;  //15:8
        uint32_t SPI1_ISP_RATIO:4;      //19:16
        uint32_t SPI1_ISP_PRE_RATIO:8;  //27:20
        uint32_t UART_ISP_RATIO:4;      //31:28
    } bits;
} CLK_DIV_ISP;

/*
 * CLK_DIV_MAUDIO
 * 
 * Address = CLOCK Base Address 1 + 0xC53C
 * Reset Value = 0x0000_0000
 * 
 *       Name     |   Bit   | Type |                Description                 | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 *                |         |      | DIVAUDIO0 Clock Divider Ratio              |             |
 * AUDIO0_RATIO   |  [3:0]  |  RW  | SCLK_AUDIO0 = MOUTAUDIO0 / (AUDIO0_RATIO + |     0x0     |
 *                |         |      | 1)                                         |             |
 * -------------------------------------------------------------------------------------------|
 * PCM0_RATIO     |  [11:4] |  RW  | DIVPCM0 Clock Divider Ratio                |     0x0     |
 *                |         |      | SCLK_PCM0 = SCLK_AUDIO0 / (PCM0_RATIO + 1) |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           | [31:12] |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 * 
 */

typedef union CLK_DIV_MAUDIO_u
{
    uint32_t all_val;
    struct
    {
        uint32_t AUDIO0_RATIO:4; //3:0
        uint32_t PCM0_RATIO:8;   //11:4
        uint32_t Reserved:20;    //31:12
    } bits;
} CLK_DIV_MAUDIO;

/*
 * CLK_DIV_FSYS0
 * 
 * Address = CLOCK Base Address 1 + 0xC544
 * Reset Value = 0x0000_0000
 * 
 *       Name     |   Bit   | Type |                 Description                  | Reset Value | 
 * ---------------------------------------------------------------------------------------------|
 * RSVD           |  [19:0] |  -   | Reserved                                     |     0x0     |   
 * ---------------------------------------------------------------------------------------------|
 *                |         |      | DIVMIPIHSI Clock Divider Ratio               |             |
 * MIPIHSI_RATIO  | [23:20] |  RW  | SCLK_MIPIHSI = [MOUTMIPISHI / (MIPIHSI_RATIO |     0x0     |
 *                |         |      | + 1)]                                        |             |
 * ---------------------------------------------------------------------------------------------|
 * RSVD           | [31:24] |  -   | Reserved                                     |     0x0     |   
 * ---------------------------------------------------------------------------------------------|
 * 
 */

typedef union CLK_DIV_FSYS0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved:20;     //19:0
        uint32_t MIPIHSI_RATIO:4; //23:20
        uint32_t Reserved:8;      //31:24
    } bits;
} CLK_DIV_FSYS0;

/*
 * CLK_DIV_FSYS1
 * 
 * Address = CLOCK Base Address 1 + 0xC544
 * Reset Value = 0x0000_0000
 * 
 *       Name     |   Bit   | Type |                Description                 | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 * MMC0_RATIO     |  [3:0]  |  RW  | DIVMMC0 Clock Divider Ratio                |     0x0     |
 *                |         |      | DOUTMMC0 = MOUTMMC0 / (MMC0_RATIO + 1)     |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           |  [7:4]  |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 *                |         |      | DIVMMC0_PRE Clock Divider Ratio            |             |
 * MMC0_PRE_RATIO |  [15:8] |  RW  | SCLK_MMC0 = [DOUTMMC0 / (MMC0_PRE_RATIO    |     0x0     |
 *                |         |      | + 1)]                                      |             |
 * -------------------------------------------------------------------------------------------|
 * MMC1_RATIO     | [19:16] |  RW  | DIVMMC1 Clock Divider Ratio                |     0x0     |
 *                |         |      | DOUTMMC1 = MOUTMMC1 / (MMC1_RATI1 + 1)     |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           | [23:20] |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 *                |         |      | DIVMMC1_PRE Clock Divider Ratio            |             |
 * MMC1_PRE_RATIO | [31:24] |  RW  | CLK_MMC1 = DOUTMMC1 / (MMC1_PRE_RATIO +    |     0x0     |
 *                |         |      | + 1)                                       |             |
 * -------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_FSYS1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MMC0_RATIO:4;      //3:0
        uint32_t Reserved0:4;       //7:4
        uint32_t MMC0_PRE_RATIO:8;  //15:8
        uint32_t MMC1_RATIO:4;      //19:16
        uint32_t Reserved1:4;       //23:20
        uint32_t MMC1_PRE_RATIO:8;  //31:24
    } bits;
} CLK_DIV_FSYS1;

/*
 * CLK_DIV_FSYS2
 * 
 * Address = CLOCK Base Address 1 + 0xC548
 * Reset Value = 0x0000_0000
 * 
 *       Name     |   Bit   | Type |                Description                 | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 * MMC2_RATIO     |  [3:0]  |  RW  | DIVMMC2 Clock Divider Ratio                |     0x0     |
 *                |         |      | DOUTMMC2 = MOUTMMC2 / (MMC2_RATIO + 1)     |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           |  [7:4]  |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 *                |         |      | DIVMMC2_PRE Clock Divider Ratio            |             |
 * MMC2_PRE_RATIO |  [15:8] |  RW  | SCLK_MMC2 = [DOUTMMC2 / (MMC2_PRE_RATIO    |     0x0     |
 *                |         |      | + 1)]                                      |             |
 * -------------------------------------------------------------------------------------------|
 * MMC3_RATIO     | [19:16] |  RW  | DIVMMC3 Clock Divider Ratio                |     0x0     |
 *                |         |      | DOUTMMC3 = MOUTMMC3 / (MMC3_RATIO + 1)     |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           | [23:20] |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 *                |         |      | DIVMMC3_PRE Clock Divider Ratio            |             |
 * MMC3_PRE_RATIO | [31:24] |  RW  | CLK_MMC3= DOUTMMC3 / (MMC3_PRE_RATIO +     |     0x0     |
 *                |         |      | + 1)                                       |             |
 * -------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_FSYS2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MMC2_RATIO:4;      //3:0
        uint32_t Reserved0:4;       //7:4
        uint32_t MMC2_PRE_RATIO:8;  //15:8
        uint32_t MMC3_RATIO:4;      //19:16
        uint32_t Reserved1:4;       //23:20
        uint32_t MMC3_PRE_RATIO:8;  //31:24
    } bits;
} CLK_DIV_FSYS2;

/*
 * CLK_DIV_FSYS3
 * 
 * Address = CLOCK Base Address 1 + 0xC54C
 * Reset Value = 0x0000_0000
 * 
 *       Name     |   Bit   | Type |                Description                 | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 * MMC4_RATIO     |  [3:0]  |  RW  | DIVMMC4 Clock Divider Ratio                |     0x0     |
 *                |         |      | DOUTMMC4 = MOUTMMC4 / (MMC4_RATIO + 1)     |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           |  [7:4]  |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 *                |         |      | DIVMMC4_PRE Clock Divider Ratio            |             |
 * MMC4_PRE_RATIO |  [15:8] |  RW  | SCLK_MMC4 = [DOUTMMC4 / (MMC4_PRE_RATIO    |     0x0     |
 *                |         |      | + 1)]                                      |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           | [31:16] |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_FSYS3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MMC2_RATIO:4;      //3:0
        uint32_t Reserved0:4;       //7:4
        uint32_t MMC2_PRE_RATIO:8;  //15:8
        uint32_t Reserved1:16;       //31:16
    } bits;
} CLK_DIV_FSYS3;

/*
 * CLK_DIV_PERIL0
 * 
 * Address = CLOCK Base Address 1 + 0xC550
 * Reset Value = 0x0000_0000
 * 
 *       Name     |   Bit   | Type |                Description                 | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 * UART0_RATIO    |  [3:0]  |  RW  | DIVUART0 Clock Divider Ratio               |     0x0     |
 *                |         |      | SCLK_UART0 = MOUTUART0 / (UART0_RATIO + 1) |             |
 * -------------------------------------------------------------------------------------------|
 * UART1_RATIO    |  [7:4]  |  RW  | DIVUART1 Clock Divider Ratio               |     0x0     |
 *                |         |      | SCLK_UART1 = MOUTUART1 / (UART1_RATIO + 1) |             |
 * -------------------------------------------------------------------------------------------|
 * UART2_RATIO    |  [11:8] |  RW  | DIVUART2 Clock Divider Ratio               |     0x0     |
 *                |         |      | SCLK_UART2 = MOUTUART2 / (UART2_RATIO + 1) |             |
 * -------------------------------------------------------------------------------------------|
 * UART3_RATIO    | [15:12] |  RW  | DIVUART3 Clock Divider Ratio               |     0x0     |
 *                |         |      | SCLK_UART3 = MOUTUART3 / (UART3_RATIO + 1) |             |
 * -------------------------------------------------------------------------------------------|
 * UART4_RATIO    | [19:16] |  RW  | DIVUART4 Clock Divider Ratio               |     0x0     |
 *                |         |      | SCLK_UART4 = MOUTUART4 / (UART4_RATIO + 1) |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           | [31:20] |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_PERIL0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t UART0_RATIO:4;  //3:0
        uint32_t UART1_RATIO:4;  //7:4
        uint32_t UART2_RATIO:4;  //11:8
        uint32_t UART3_RATIO:4;  //15:12
        uint32_t UART4_RATIO:4;  //19:16
        uint32_t Reserved:12;    //31:20
    } bits;
} CLK_DIV_PERIL0;

/*
 * CLK_DIV_PERIL1
 * 
 * Address = CLOCK Base Address 1 + 0xC554
 * Reset Value = 0x0000_0000
 * 
 *       Name     |   Bit   | Type |                 Description                 | Reset Value | 
 * --------------------------------------------------------------------------------------------|
 * SPI0_RATIO     |  [3:0]  |  RW  | DIVSPI0 Clock Divider Ratio                 |     0x0     |
 *                |         |      | DOUTSPI0 = MOUTSPI0 / (SPI0_RATIO + 1)      |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD           |  [7:4]  |  -   | Reserved                                    |     0x0     |   
 * --------------------------------------------------------------------------------------------|
 * SPI0_PRE_RATIO |  [15:8] |  RW  | DIVSPI0_PRE Clock Divider Ratio             |     0x0     |
 *                |         |      | SCLK_SPI0 = DOUTSPI0 / (SPI0_PRE_RATIO + 1) |             |
 * --------------------------------------------------------------------------------------------|
 * SPI1_RATIO     | [19:16] |  RW  | DIVSPI1 Clock Divider Ratio                 |     0x0     |
 *                |         |      | DOUTSPI1 = MOUTSPI1 / (SPI1_RATIO + 1)      |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD           | [23:20] |  -   | Reserved                                    |     0x0     |   
 * --------------------------------------------------------------------------------------------|
 * SPI1_PRE_RATIO | [31:24] |  RW  | DIVSPI1_PRE Clock Divider Ratio             |     0x0     |
 *                |         |      | SCLK_SPI1 = DOUTSPI1 / (SPI1_PRE_RATIO + 1) |             |
 * --------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_PERIL1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SPI0_RATIO:4;      //3:0
        uint32_t Reserved0:4;       //7:4
        uint32_t SPI0_PRE_RATIO:8;  //15:8
        uint32_t SPI1_RATIO:4;      //19:16
        uint32_t Reserved1:4;       //23:20
        uint32_t SPI1_PRE_RATIO:8;  //31:24
    } bits;
} CLK_DIV_PERIL1;

/*
 * CLK_DIV_PERIL2
 * 
 * Address = CLOCK Base Address 1 + 0xC558
 * Reset Value = 0x0000_0000
 * 
 *       Name     |   Bit   | Type |                 Description                 | Reset Value | 
 * --------------------------------------------------------------------------------------------|
 * SPI2_RATIO     |  [3:0]  |  RW  | DIVSPI2 Clock Divider Ratio                 |     0x0     |
 *                |         |      | DOUTSPI2 = MOUTSPI2 / (SPI2_RATIO + 1)      |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD           |  [7:4]  |  -   | Reserved                                    |     0x0     |   
 * --------------------------------------------------------------------------------------------|
 * SPI2_PRE_RATIO |  [15:8] |  RW  | DIVSPI2_PRE Clock Divider Ratio             |     0x0     |
 *                |         |      | SCLK_SPI2 = DOUTSPI2 / (SPI2_PRE_RATIO + 1) |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD           | [31:16] |  -   | Reserved                                    |     0x0     |   
 * --------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_PERIL2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SPI2_RATIO:4;      //3:0
        uint32_t Reserved0:4;       //7:4
        uint32_t SPI2_PRE_RATIO:8;  //15:8
        uint32_t Reserved1:16;       //31:16
    } bits;
} CLK_DIV_PERIL2;

/*
 * CLK_DIV_PERIL3
 * 
 * Address = CLOCK Base Address 1 + 0xC55C
 * Reset Value = 0x0000_0000
 * 
 *       Name     |   Bit   | Type |                 Description                 | Reset Value | 
 * --------------------------------------------------------------------------------------------|
 * RSVD           |  [3:0]  |  -   | Reserved                                    |     0x0     |   
 * --------------------------------------------------------------------------------------------|
 * SLIMBUS_RATIO  |  [7:4]  |  RW  | DIVSLIMBUS Clock Divider Ratio              |     0x0     |
 *                |         |      | SCLK_SLIMBUS = SCLKEPLL(SLIMBUS_RATIO + 1)  |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD           |  [31:8] |  -   | Reserved                                    |     0x0     |   
 * --------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_PERIL3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:4;       //3:0
        uint32_t SLIMBUS_RATIO:4;   //7:4
        uint32_t Reserved1:24;      //31:8
    } bits;
} CLK_DIV_PERIL3;

/*
 * CLK_DIV_PERIL4
 * 
 * Address = CLOCK Base Address 1 + 0xC560
 * Reset Value = 0x0000_0000
 * 
 *       Name     |   Bit   | Type |                 Description                 | Reset Value | 
 * --------------------------------------------------------------------------------------------|
 *                |         |      | DIVAUDIO1 Clock Divider Ratio               |             |
 * AUDIO1_RATIO   |  [3:0]  |  RW  | SCLK_AUDIO1 = [MOUTAUDIO1 / (AUDIO1_RATIO + |     0x0     |
 *                |         |      | 1)]                                         |             |
 * --------------------------------------------------------------------------------------------|
 * PCM1_RATIO     |  [11:4] |  RW  | DIVPCM1 Clock Divider Ratio                 |     0x0     |
 *                |         |      | SCLK_PCM1 = SCLK_AUDIO1 / (PCM1_RATIO + 1)  |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD           | [15:12] |  -   | Reserved                                    |     0x0     |   
 * --------------------------------------------------------------------------------------------|
 *                |         |      | DIVAUDIO2 Clock Divider Ratio               |             |
 * AUDIO2_RATIO   | [19:16] |  RW  | SCLK_AUDIO2 = [MOUTAUDIO2 / (AUDIO2_RATIO + |     0x0     |
 *                |         |      | 1)]                                         |             |
 * --------------------------------------------------------------------------------------------|
 * PCM2_RATIO     | [27:20] |  RW  | DIVPCM2 Clock Divider Ratio                 |     0x0     |
 *                |         |      | SCLK_PCM2 = SCLK_AUDIO2 / (PCM2_RATIO + 1)  |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD           | [31:28] |  -   | Reserved                                    |     0x0     |   
 * --------------------------------------------------------------------------------------------|
 * 
 */

typedef union CLK_DIV_PERIL4_u
{
    uint32_t all_val;
    struct
    {
        uint32_t AUDIO1_RATIO:4;  //3:0
        uint32_t PCM1_RATIO:8;    //11:4
        uint32_t Reserved0:4;     //15:2
        uint32_t AUDIO2_RATIO:4;  //19:16
        uint32_t PCM2_RATIO:8;    //27:20
        uint32_t Reserved1:4;     //31:28
    } bits;
} CLK_DIV_PERIL4;

/*
 * CLK_DIV_PERIL5
 * 
 * Address = CLOCK Base Address 1 + 0xC564
 * Reset Value = 0x0000_0000
 * 
 *       Name     |   Bit   | Type |                Description                 | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 * I2S1_RATIO     |  [5:0]  |  RW  | DIVI2S1 Clock Divider Ratio                |     0x0     |
 *                |         |      | SCLK_I2S1 = SCLK_AUDIO1 / (IS21_RATIO + 1) |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           |  [7:6]  |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 * I2S2_RATIO     |  [13:8] |  RW  | DIVI2S2 Clock Divider Ratio                |     0x0     |
 *                |         |      | SCLK_I2S2 = SCLK_AUDIO2 / (IS2S_RATIO + 1) |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           | [31:14] |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_PERIL5_u
{
    uint32_t all_val;
    struct
    {
        uint32_t I2S1_RATIO:6;  //5:0
        uint32_t Reserved0:2;   //7:6
        uint32_t I2S2_RATIO:6;  //13:8
        uint32_t Reserved1:18;  //31:14
    } bits;
} CLK_DIV_PERIL5;

/*
 * CLK_DIV_CAM1
 * 
 * Address = CLOCK Base Address 1 + 0xC568
 * Reset Value = 0x0000_0000
 * 
 *       Name     |   Bit   | Type |                Description                 | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 * JPEG_RATIO     |  [3:0]  |  RW  | DIVJPEG Clock Divider Ratio                |     0x0     |
 *                |         |      | ACLK_JPEG = MOUTJPEG / (JPEG_RATIO + 1)    |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           |  [31:4] |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_CAM1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t JPEG_RATIO:4;  //3:0
        uint32_t Reserved:28;  //31:4
    } bits;
} CLK_DIV_CAM1;

/*
 * CLKDIV2_RATIO
 * 
 * Address = CLOCK Base Address 1 + 0xC580
 * Reset Value = 0x0110_1011
 * 
 *       Name     |   Bit   | Type |                   Description                    | Reset Value | 
 * -------------------------------------------------------------------------------------------------|
 *                |         |      | PCLK Divider Ratio in FSYS_BLK                   |             |
 *                |         |      | 0 : Reserved                                     |             |
 * FSYS_BLK       |  [1:0]  |  RW  | 1 : Divides by 2                                 |     0x1     |
 *                |         |      | 2 : Divides by 3                                 |             |
 *                |         |      | 3 : Divides by 4                                 |             |
 * -------------------------------------------------------------------------------------------------|
 * RSVD           |  [3:2]  |  -   | Reserved                                         |     0x0     |
 * -------------------------------------------------------------------------------------------------|
 *                |         |      | PCLK Divider Ratio in CAM_BLK                    |             |
 *                |         |      | 0 : Reserved                                     |             |
 * CAM_BLK        |  [5:4]  |  RW  | 1 : Divides by 2                                 |     0x1     |
 *                |         |      | 2 : Divides by 3                                 |             |
 *                |         |      | 3 : Divides by 4                                 |             |
 * -------------------------------------------------------------------------------------------------|
 * RSVD           |  [11:6] |  -   | Reserved                                         |     0x0     |
 * -------------------------------------------------------------------------------------------------|
 *                |         |      | PCLK Divider Ratio in LCD_BLK for 160 MHz domain |             |
 *                |         |      | 0 : Reserved                                     |             |
 * LCD_BLK        | [13:12] |  RW  | 1 : Divides by 2                                 |     0x1     |
 *                |         |      | 2 : Divides by 3                                 |             |
 *                |         |      | 3 : Divides by 4                                 |             |
 * -------------------------------------------------------------------------------------------------|
 * RSVD           | [19:14] |  -   | Reserved                                         |     0x0     |
 * -------------------------------------------------------------------------------------------------|
 *                |         |      | PCLK Divider Ratio in TV_BLK                     |             |
 *                |         |      | 0 : Reserved                                     |             |
 * TV_BLK         | [21:20] |  RW  | 1 : Divides by 2                                 |     0x1     |
 *                |         |      | 2 : Divides by 3                                 |             |
 *                |         |      | 3 : Divides by 4                                 |             |
 * -------------------------------------------------------------------------------------------------|
 * RSVD           | [23:22] |  -   | Reserved                                         |     0x0     |
 * -------------------------------------------------------------------------------------------------|
 *                |         |      | PCLK Divider Ratio in GPS_BLK                    |             |
 *                |         |      | 0 : Reserved                                     |             |
 * GPS_BLK        | [25:24] |  RW  | 1 : Divides by 2                                 |     0x1     |
 *                |         |      | 2 : Divides by 3                                 |             |
 *                |         |      | 3 : Divides by 4                                 |             |
 * -------------------------------------------------------------------------------------------------|
 * RSVD           | [31:26] |  -   | Reserved                                         |     0x0     |
 * -------------------------------------------------------------------------------------------------|
 */

typedef union CLKDIV2_RATIO_u
{
    uint32_t all_val;
    struct
    {
        uint32_t FSYS_BLK:2;  //1:0
        uint32_t Reserved0:2; //3:2
        uint32_t CAM_BLK:2;   //5:4
        uint32_t Reserved1:6; //11:6
        uint32_t LCD_BLK:2;   //13:12
        uint32_t Reserved2:6; //19:14
        uint32_t TV_BLK:2;    //21:20
        uint32_t Reserved3:2; //23:22
        uint32_t GPS_BLK:2;   //25:24
        uint32_t Reserved4:6; //31:26
    } bits;
} CLKDIV2_RATIO;

/*
 * CLK_DIV_STAT_TOP
 * 
 * Address = CLOCK Base Address 1 + 0xC610
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                   Description                    | Reset Value | 
 * ------------------------------------------------------------------------------------------------------|
 *                     |         |      | DIVACLK_200 Status                               |             |
 * DIV_ACLK_200        |   [0]   |  R   | 0 : Stable                                       |     0x0     |
 *                     |         |      | 1 : Status that the divider is changing          |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD                |  [3:1]  |  -   | Reserved                                         |     0x0     |
 * ------------------------------------------------------------------------------------------------------|
 *                     |         |      | 1IVACLK_200 Status                               |             |
 * DIV_ACLK_100        |   [4]   |  R   | 0 : Stable                                       |     0x0     |
 *                     |         |      | 1 : Status that the divider is changing          |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD                |  [7:5]  |  -   | Reserved                                         |     0x0     |
 * ------------------------------------------------------------------------------------------------------|
 *                     |         |      | DIVACLK_160 Status                               |             |
 * DIV_ACLK_160        |   [8]   |  R   | 0 : Stable                                       |     0x0     |
 *                     |         |      | 1 : Status that the divider is changing          |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD                |  [11:9] |  -   | Reserved                                         |     0x0     |
 * ------------------------------------------------------------------------------------------------------|
 *                     |         |      | DIVACLK_133 Status                               |             |
 * DIV_ACLK_133        |   [12]  |  R   | 0 : Stable                                       |     0x0     |
 *                     |         |      | 1 : Status that the divider is changing          |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD                | [15:13] |  -   | Reserved                                         |     0x0     |
 * ------------------------------------------------------------------------------------------------------|
 *                     |         |      | DIV_ONENAND Status                               |             |
 * DIV_ONENAND         |   [16]  |  R   | 0 : Stable                                       |     0x0     |
 *                     |         |      | 1 : Status that the divider is changing          |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD                | [19:17] |  -   | Reserved                                         |     0x0     |
 * ------------------------------------------------------------------------------------------------------|
 *                     |         |      | DIVACLK_266_GPS Status                           |             |
 * DIV_ACLK_266_GPS    |   [20]  |  R   | 0 : Stable                                       |     0x0     |
 *                     |         |      | 1 : Status that the divider is changing          |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD                | [23:21] |  -   | Reserved                                         |     0x0     |
 * ------------------------------------------------------------------------------------------------------|
 *                     |         |      | DIVACLK_400_MCUISP Status                        |             |
 * DIV_ACLK_400_MCUISP |   [24]  |  R   | 0 : Stable                                       |     0x0     |
 *                     |         |      | 1 : Status that the divider is changing          |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:25] |  -   | Reserved                                         |     0x0     |
 * ------------------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_TOP_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_ACLK_200:1;        //0
        uint32_t Reserved0:3;           //3:1
        uint32_t DIV_ACLK_100:1;        //4
        uint32_t Reserved1:3;           //7:5
        uint32_t DIV_ACLK_160:1;        //8
        uint32_t Reserved2:3;           //11:9
        uint32_t DIV_ACLK_133:1;        //12
        uint32_t Reserved3:3;           //15:13
        uint32_t DIV_ONENAND:1;         //16
        uint32_t Reserved4:3;           //19:17
        uint32_t DIV_ACLK_266_GPS:1;    //20
        uint32_t Reserved5:3;           //23:21
        uint32_t DIV_ACLK_400_MCUISP:1; //24
        uint32_t Reserved6:7;           //31:25
    } bits;
} CLK_DIV_STAT_TOP;

/*
 * CLK_DIV_STAT_CAM0
 * 
 * Address = CLOCK Base Address 1 + 0xC620
 * Reset Value = 0x0000_0000
 * 
 *       Name       |   Bit   | Type |                   Description                    | Reset Value | 
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVFIMC0_LCLK Status                             |             |
 * DIV_FIMC0_LCLK   |   [0]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [3:1]  |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVFIMC1_LCLK Status                             |             |
 * DIV_FIMC1_LCLK   |   [4]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [7:5]  |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVFIMC2_LCLK Status                             |             |
 * DIV_FIMC2_LCLK   |   [8]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [11:9] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVFIMC3_LCLK Status                             |             |
 * DIV_FIMC3_LCLK   |   [12]  |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             | [15:13] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVCAM0 Status                                   |             |
 * DIV_CAM0         |   [16]  |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             | [19:17] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVCAM0 Status                                   |             |
 * DIV_CAM1         |   [20]  |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             | [23:21] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVCSIS0 Status                                  |             |
 * DIV_CSIS0        |   [24]  |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             | [27:25] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVCSIS1 Status                                  |             |
 * DIV_CSIS1        |   [28]  |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             | [31:29] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_CAM0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_FIMC0_LCLK:1;  //0
        uint32_t Reserved0:3;       //3:1
        uint32_t DIV_FIMC1_LCLK:1;  //4
        uint32_t Reserved1:3;       //7:5
        uint32_t DIV_FIMC2_LCLK:1;  //8
        uint32_t Reserved2:3;       //11:9
        uint32_t DIV_FIMC3_LCLK:1;  //12
        uint32_t Reserved3:3;       //15:13
        uint32_t DIV_CAM0:1;        //16
        uint32_t Reserved4:3;       //19:17
        uint32_t DIV_CAM1:1;        //20
        uint32_t Reserved5:3;       //23:21
        uint32_t DIV_CSIS0:1;       //24
        uint32_t Reserved6:3;       //27:25
        uint32_t DIV_CSIS1:1;       //28
        uint32_t Reserved6:3;       //31:29
    } bits;
} CLK_DIV_STAT_CAM0;

/*
 * CLK_DIV_STAT_TV
 * 
 * Address = CLOCK Base Address 1 + 0xC624
 * Reset Value = 0x0000_0000
 * 
 *       Name       |   Bit   | Type |                   Description                    | Reset Value | 
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVTV_BLK Status                                 |             |
 * DIV_TV_BLK       |   [0]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [31:1] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_TV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_TV_BLK:1;  //0
        uint32_t Reserved:31;  //31:1
        
    } bits;
} CLK_DIV_STAT_TV;

/*
 * CLK_DIV_STAT_MFC
 * 
 * Address = CLOCK Base Address 1 + 0xC628
 * Reset Value = 0x0000_0000
 * 
 *       Name       |   Bit   | Type |                   Description                    | Reset Value | 
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVMFC Status                                    |             |
 * DIV_MFC          |   [0]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [31:1] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_MFC_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_MFC:1;     //0
        uint32_t Reserved:31;  //31:1
    } bits;
} CLK_DIV_STAT_MFC;

/*
 * CLK_DIV_STAT_G3D
 * 
 * Address = CLOCK Base Address 1 + 0xC62C
 * Reset Value = 0x0000_0000
 * 
 *       Name       |   Bit   | Type |                   Description                    | Reset Value | 
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVG3D Status                                    |             |
 * DIV_G3D          |   [0]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [31:1] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_G3D_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_G3D:1;     //0
        uint32_t Reserved:31;  //31:1
        
    } bits;
} CLK_DIV_STAT_G3D;

/*
 * CLK_DIV_STAT_LCD
 * 
 * Address = CLOCK Base Address 1 + 0xC634
 * Reset Value = 0x0000_0000
 * 
 *        Name        |   Bit   | Type |                   Description                    | Reset Value | 
 * -----------------------------------------------------------------------------------------------------|
 *                    |         |      | DIVFIMD0 Status                                  |             |
 * DIV_FIMD0          |   [0]   |  R   | 0 : Stable                                       |     0x0     |
 *                    |         |      | 1 : Status that the divider is changing          |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD               |  [3:1]  |  -   | Reserved                                         |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 *                    |         |      | DIVMDNIE0 Status                                 |             |
 * DIV_MDNIE0         |   [4]   |  R   | 0 : Stable                                       |     0x0     |
 *                    |         |      | 1 : Status that the divider is changing          |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD               |  [7:5]  |  -   | Reserved                                         |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 *                    |         |      | DIVMDNIE_PWM0 Status                             |             |
 * DIV_MDNIE_PWM0     |   [8]   |  R   | 0 : Stable                                       |     0x0     |
 *                    |         |      | 1 : Status that the divider is changing          |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD               |  [11:9] |  -   | Reserved                                         |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 *                    |         |      | DIVMDNIE_PWM0_PRE Status                         |             |
 * DIV_MDNIE_PWM0_PRE |   [12]  |  R   | 0 : Stable                                       |     0x0     |
 *                    |         |      | 1 : Status that the divider is changing          |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD               | [15:13] |  -   | Reserved                                         |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 *                    |         |      | DIVMIPI0 Status                                  |             |
 * DIV_MIPI0          |   [16]  |  R   | 0 : Stable                                       |     0x0     |
 *                    |         |      | 1 : Status that the divider is changing          |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD               | [19:17] |  -   | Reserved                                         |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 *                    |         |      | DIVMIPI0_PRE Status                              |             |
 * DIV_MIPI0_PRE      |   [20]  |  R   | 0 : Stable                                       |     0x0     |
 *                    |         |      | 1 : Status that the divider is changing          |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD               | [31:21] |  -   | Reserved                                         |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_LCD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_FIMD0:1;           //0
        uint32_t Reserved0:3;           //3:1
        uint32_t DIV_MDNIE0:1;          //4
        uint32_t Reserved1:3;           //7:5
        uint32_t DIV_MDNIE_PWM0:1;      //8
        uint32_t Reserved2:3;           //11:9
        uint32_t DIV_MDNIE_PWM0_PRE:1;  //12
        uint32_t Reserved3:3;           //15:13
        uint32_t DIV_MIPI0:1;           //16
        uint32_t Reserved4:3;           //19:17
        uint32_t DIV_MIPI0_PRE:1;       //20
        uint32_t Reserved5:11;           //31:21
    } bits;
} CLK_DIV_STAT_LCD;

/*
 * CLK_DIV_STAT_ISP
 * 
 * Address = CLOCK Base Address 1 + 0xC638
 * Reset Value = 0x0000_0000
 * 
 *        Name        |   Bit   | Type |                   Description                    | Reset Value | 
 * -----------------------------------------------------------------------------------------------------|
 *                    |         |      | DIVPWM_ISP Status                                |             |
 * DIV_PWM_ISP        |   [0]   |  R   | 0 : Stable                                       |     0x0     |
 *                    |         |      | 1 : Status that the divider is changing          |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD               |  [3:1]  |  -   | Reserved                                         |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 *                    |         |      | DIVSPI0_ISP Status                               |             |
 * DIV_SPI0_ISP       |   [4]   |  R   | 0 : Stable                                       |     0x0     |
 *                    |         |      | 1 : Status that the divider is changing          |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD               |  [7:5]  |  -   | Reserved                                         |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 *                    |         |      | DIVSPI0_ISP_PRE Status                           |             |
 * DIV_SPI0_ISP_PRE   |   [8]   |  R   | 0 : Stable                                       |     0x0     |
 *                    |         |      | 1 : Status that the divider is changing          |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD               |  [15:9] |  -   | Reserved                                         |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 *                    |         |      | DIVSPI1_ISP Status                               |             |
 * DIV_SPI1_ISP       |   [16]  |  R   | 0 : Stable                                       |     0x0     |
 *                    |         |      | 1 : Status that the divider is changing          |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD               | [19:17] |  -   | Reserved                                         |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 *                    |         |      | DIVSPI1_ISP_PRE Status                           |             |
 * DIV_SPI1_ISP_PRE   |   [20]  |  R   | 0 : Stable                                       |     0x0     |
 *                    |         |      | 1 : Status that the divider is changing          |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD               | [27:21] |  -   | Reserved                                         |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 *                    |         |      | DIVUART_ISP Status                               |             |
 * DIV_UART_ISP       |   [28]  |  R   | 0 : Stable                                       |     0x0     |
 *                    |         |      | 1 : Status that the divider is changing          |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD               | [31:29] |  -   | Reserved                                         |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_ISP_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_PWM_ISP:1;         //0
        uint32_t Reserved0:3;           //3:1
        uint32_t DIV_SPI0_ISP:1;        //4
        uint32_t Reserved1:3;           //7:5
        uint32_t DIV_SPI0_ISP_PRE:1;    //8
        uint32_t Reserved2:7;           //15:9
        uint32_t DIV_SPI1_ISP:1;        //16
        uint32_t Reserved3:3;           //19:17
        uint32_t DIV_SPI1_ISP_PRE:1;    //20
        uint32_t Reserved4:7;           //27:21
        uint32_t DIV_UART_ISP:1;        //28
        uint32_t Reserved5:3;           //31:29
    } bits;
} CLK_DIV_STAT_ISP;

/*
 * CLK_DIV_STAT_MAUDIO
 * 
 * Address = CLOCK Base Address 1 + 0xC63C
 * Reset Value = 0x0000_0000
 * 
 *       Name       |   Bit   | Type |                   Description                    | Reset Value | 
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVAUDIO0 Status                                 |             |
 * DIV_AUDIO0       |   [0]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [3:1]  |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVPCM0 Status                                   |             |
 * DIV_PCM0         |   [4]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [31:5] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_MAUDIO_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_AUDIO0:1; //0
        uint32_t Reserved0:3;   //3:1
        uint32_t DIV_PCM0:1;   //4
        uint32_t Reserved1:27;  //31:5
    } bits;
} CLK_DIV_STAT_MAUDIO;

/*
 * CLK_DIV_STAT_FSYS0
 * 
 * Address = CLOCK Base Address 1 + 0xC640
 * Reset Value = 0x0000_0000
 * 
 *       Name       |   Bit   | Type |                   Description                    | Reset Value | 
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [19:0] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVMIPIHSI Status                                |             |
 * DIV_MIPIHSI      |   [20]  |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             | [31:21] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_FSYS0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:20;  //19:0
        uint32_t DIV_MIPIHSI:1; //20
        uint32_t Reserved1:11;  //31:21
    } bits;
} CLK_DIV_STAT_FSYS0;

/*
 * CLK_DIV_STAT_FSYS1
 * 
 * Address = CLOCK Base Address 1 + 0xC644
 * Reset Value = 0x0000_0000
 * 
 *        Name        |   Bit   | Type |                   Description                    | Reset Value | 
 * -----------------------------------------------------------------------------------------------------|
 *                    |         |      | DIVMMC0 Status                                   |             |
 * DIV_MMC0           |   [0]   |  R   | 0 : Stable                                       |     0x0     |
 *                    |         |      | 1 : Status that the divider is changing          |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD               |  [7:1]  |  -   | Reserved                                         |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 *                    |         |      | DIVMMC0_PRE Status                               |             |
 * DIV_MMC0_PRE       |   [8]   |  R   | 0 : Stable                                       |     0x0     |
 *                    |         |      | 1 : Status that the divider is changing          |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD               |  [15:9] |  -   | Reserved                                         |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 *                    |         |      | DIVMMC1 Status                                   |             |
 * DIV_MMC1           |   [16]  |  R   | 0 : Stable                                       |     0x0     |
 *                    |         |      | 1 : Status that the divider is changing          |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD               | [23:17] |  -   | Reserved                                         |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 *                    |         |      | DIVMMC1_PRE Status                               |             |
 * DIV_MMC1_PRE       |   [24]  |  R   | 0 : Stable                                       |     0x0     |
 *                    |         |      | 1 : Status that the divider is changing          |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD               | [31:25] |  -   | Reserved                                         |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_FSYS1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_MMC0:1;      //0
        uint32_t Reserved0:7;     //7:1
        uint32_t DIV_MMC0_PRE:1;  //8
        uint32_t Reserved1:7;     //15:9
        uint32_t DIV_MMC1:1;      //16
        uint32_t Reserved2:7;     //23:17
        uint32_t DIV_MMC1_PRE:1;  //24
        uint32_t Reserved3:7;     //31:25
    } bits;
} CLK_DIV_STAT_FSYS1;

/*
 * CLK_DIV_STAT_FSYS2
 * 
 * Address = CLOCK Base Address 1 + 0xC648
 * Reset Value = 0x0000_0000
 * 
 *        Name        |   Bit   | Type |                   Description                    | Reset Value | 
 * -----------------------------------------------------------------------------------------------------|
 *                    |         |      | DIVMMC2 Status                                   |             |
 * DIV_MMC2           |   [0]   |  R   | 0 : Stable                                       |     0x0     |
 *                    |         |      | 1 : Status that the divider is changing          |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD               |  [7:1]  |  -   | Reserved                                         |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 *                    |         |      | DIVMMC2_PRE Status                               |             |
 * DIV_MMC2_PRE       |   [8]   |  R   | 0 : Stable                                       |     0x0     |
 *                    |         |      | 1 : Status that the divider is changing          |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD               |  [15:9] |  -   | Reserved                                         |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 *                    |         |      | DIVMMC3 Status                                   |             |
 * DIV_MMC3           |   [16]  |  R   | 0 : Stable                                       |     0x0     |
 *                    |         |      | 1 : Status that the divider is changing          |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD               | [23:17] |  -   | Reserved                                         |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 *                    |         |      | DIVMMC3_PRE Status                               |             |
 * DIV_MMC3_PRE       |   [24]  |  R   | 0 : Stable                                       |     0x0     |
 *                    |         |      | 1 : Status that the divider is changing          |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD               | [31:25] |  -   | Reserved                                         |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_FSYS2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_MMC2:1;      //0
        uint32_t Reserved0:7;     //7:1
        uint32_t DIV_MMC2_PRE:1;  //8
        uint32_t Reserved1:7;     //15:9
        uint32_t DIV_MMC3:1;      //16
        uint32_t Reserved2:7;     //23:17
        uint32_t DIV_MMC3_PRE:1;  //24
        uint32_t Reserved3:7;     //31:25
    } bits;
} CLK_DIV_STAT_FSYS2;

/*
 * CLK_DIV_STAT_FSYS3
 * 
 * Address = CLOCK Base Address 1 + 0xC64C
 * Reset Value = 0x0000_0000
 * 
 *       Name       |   Bit   | Type |                   Description                    | Reset Value | 
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVMMC4 Status                                   |             |
 * DIV_MMC4         |   [0]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [7:1]  |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVMMC4_PRE Status                               |             |
 * DIV_MMC4_PRE     |   [8]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [31:9] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_FSYS3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_AUDIV_MMC4DIO0:1;  //0
        uint32_t Reserved0:7;           //7:1
        uint32_t DIV_MMC4_PRE:1;        //8
        uint32_t Reserved1:23;          //31:9
    } bits;
} CLK_DIV_STAT_FSYS3;

/*
 * CLK_DIV_STAT_PERIL0
 * 
 * Address = CLOCK Base Address 1 + 0xC650
 * Reset Value = 0x0000_0000
 * 
 *       Name       |   Bit   | Type |                   Description                    | Reset Value | 
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIV_UART0 Status                                 |             |
 * DIV_UART0        |   [0]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [3:1]  |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIV_UART1 Status                                 |             |
 * DIV_UART1        |   [4]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [7:5]  |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIV_UART2 Status                                 |             |
 * DIV_UART2        |   [8]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [11:9] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIV_UART3 Status                                 |             |
 * DIV_UART3        |   [12]  |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             | [15:13] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIV_UART4 Status                                 |             |
 * DIV_UART4        |   [16]  |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             | [31:17] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_PERIL0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_UART0:1;  //0
        uint32_t Reserved0:3;  //3:1
        uint32_t DIV_UART1:1;  //4
        uint32_t Reserved1:3;  //7:5
        uint32_t DIV_UART2:1;  //8
        uint32_t Reserved2:3;  //11:9
        uint32_t DIV_UART3:1;  //12
        uint32_t Reserved3:3;  //15:13
        uint32_t DIV_UART4:1;  //16
        uint32_t Reserved4:15;  //31:17
    } bits;
} CLK_DIV_STAT_PERIL0;

/*
 * CLK_DIV_STAT_PERIL1
 * 
 * Address = CLOCK Base Address 1 + 0xC654
 * Reset Value = 0x0000_0000
 * 
 *       Name       |   Bit   | Type |                   Description                    | Reset Value | 
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVSPI0 Status                                   |             |
 * DIV_SPI0         |   [0]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [7:1]  |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVSPI0_PRE Status                               |             |
 * DIV_SPI0_PRE     |   [8]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [15:9] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVSPI1 Status                                   |             |
 * DIV_SPI1         |   [16]  |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             | [23:17] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVSPI1_PRE Status                               |             |
 * DIV_SPI1_PRE     |   [24]  |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             | [31:25] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_PERIL1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_SPI0:1;        //0
        uint32_t Reserved0:7;       //7:1
        uint32_t DIV_SPI0_PRE:1;    //8
        uint32_t Reserved1:7;       //15:9
        uint32_t DIV_SPI1:1;        //16
        uint32_t Reserved2:7;       //23:17
        uint32_t DIV_SPI1_PRE:1;    //24
        uint32_t Reserved3:7;       //31:25
    } bits;
} CLK_DIV_STAT_PERIL1;

/*
 * CLK_DIV_STAT_PERIL2
 * 
 * Address = CLOCK Base Address 1 + 0xC658
 * Reset Value = 0x0000_0000
 * 
 *       Name       |   Bit   | Type |                   Description                    | Reset Value | 
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVSPI2 Status                                   |             |
 * DIV_SPI2         |   [0]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [7:1]  |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVSPI2_PRE Status                               |             |
 * DIV_SPI2_PRE     |   [8]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [31:9] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_PERIL2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_SPI2:1;        //0
        uint32_t Reserved0:7;       //7:1
        uint32_t DIV_SPI2_PRE:1;    //8
        uint32_t Reserved1:23;      //31:9
    } bits;
} CLK_DIV_STAT_PERIL2;

/*
 * CLK_DIV_STAT_PERIL3
 * 
 * Address = CLOCK Base Address 1 + 0xC65C
 * Reset Value = 0x0000_0000
 * 
 *       Name       |   Bit   | Type |                   Description                    | Reset Value | 
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [3:0]  |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVSLIMBUS Status                                |             |
 * DIV_SLIMBUS      |   [4]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [31:5] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_PERIL3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:3;       //3:0
        uint32_t DIV_SLIMBUS:1;     //4
        uint32_t Reserved1:27;      //31:5
    } bits;
} CLK_DIV_STAT_PERIL3;

/*
 * CLK_DIV_STAT_PERIL4
 * 
 * Address = CLOCK Base Address 1 + 0xC660
 * Reset Value = 0x0000_0000
 * 
 *       Name       |   Bit   | Type |                   Description                    | Reset Value | 
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVAUDIO1 Status                                 |             |
 * DIV_AUDIO1       |   [0]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [3:1]  |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVPCM1 Status                                   |             |
 * DIV_PCM1         |   [4]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [15:5] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVAUDIO2 Status                                 |             |
 * DIV_AUDIO2       |   [16]  |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             | [19:17] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVPCM2 Status                                   |             |
 * DIV_PCM2         |   [20]  |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             | [31:21] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_PERIL4_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_AUDIO1:1;  //0
        uint32_t Reserved0:3;   //3:1
        uint32_t DIV_PCM1:1;    //4
        uint32_t Reserved1:11;  //15:5
        uint32_t DIV_AUDIO2:1;  //16
        uint32_t Reserved2:3;   //19:17
        uint32_t DIV_PCM2:1;    //20
        uint32_t Reserved3:11;  //31:21
    } bits;
} CLK_DIV_STAT_PERIL4;

/*
 * CLK_DIV_STAT_PERIL5
 * 
 * Address = CLOCK Base Address 1 + 0xC664
 * Reset Value = 0x0000_0000
 * 
 *       Name       |   Bit   | Type |                   Description                    | Reset Value | 
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVI2S1 Status                                   |             |
 * DIV_I2S1         |   [0]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [7:1]  |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | DIVI2S2 Status                               |             |
 * DIV_I2S2         |   [8]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [31:9] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_PERIL5_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_I2S1:1;    //0
        uint32_t Reserved0:7;   //7:1
        uint32_t DIV_I2S2:1;    //8
        uint32_t Reserved1:23;  //31:9
    } bits;
} CLK_DIV_STAT_PERIL5;

/*
 * CLK_DIV_STAT_CAM1
 * 
 * Address = CLOCK Base Address 1 + 0xC668
 * Reset Value = 0x0000_0000
 * 
 *       Name       |   Bit   | Type |                Description               | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | DIVJEPG Status                           |             |
 * DIV_JEPG         |   [0]   |  R   | 0 : Stable                               |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing  |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |  [31:1] |  -   | Reserved                                 |     0x0     |
 * -------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_CAM1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_SLIMBUS:1;    //0
        uint32_t Reserved:31;      //31:1
    } bits;
} CLK_DIV_STAT_CAM1;

/*
 * CLKDIV2_STAT
 * 
 * Address = CLOCK Base Address 1 + 0xC680
 * Reset Value = 0x0000_0000
 * 
 *       Name       |   Bit   | Type |                   Description                    | Reset Value | 
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | PCLK Divider Status in FSYS_BLK                  |             |
 * FSYS_BLK         |   [0]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [3:1]  |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | PCLK Divider Status in CAM_BLK                   |             |
 * CAM_BLK          |   [4]   |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             |  [11:5] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | PCLK Divider Status in LCD_BLK                   |             |
 * LCD_BLK          |   [12]  |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             | [19:13] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | PCLK Divider Status in TV_BLK                    |             |
 * TV_BLK           |   [20]  |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             | [23:21] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 *                  |         |      | PCLK Divider Status in GPS_BLK                   |             |
 * GPS_BLK          |   [24]  |  R   | 0 : Stable                                       |     0x0     |
 *                  |         |      | 1 : Status that the divider is changing          |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD             | [31:25] |  -   | Reserved                                         |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 */

typedef union CLKDIV2_STAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t FSYS_BLK:1;    //0
        uint32_t Reserved0:3;   //3:1
        uint32_t CAM_BLK:1;     //4
        uint32_t Reserved1:7;   //11:5
        uint32_t LCD_BLK:1;     //12
        uint32_t Reserved2:7;   //19:13
        uint32_t TV_BLK:1;      //20
        uint32_t Reserved3:3;   //23:21
        uint32_t GPS_BLK:1;     //24
        uint32_t Reserved3:7;   //31:25
    } bits;
} CLKDIV2_STAT;

/*
 * CLK_GATE_BUS_FSYS1
 * 
 * Address = CLOCK Base Address 1 + 0xC744
 * Reset Value = 0xFFFF_FFFF
 * 
 *       Name       |   Bit   | Type |                Description               | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 * RSVD             |  [15:0] |  -   | Reserved                                 |    0xFFFF   |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating APB clock for FSYS_ADC            |             |
 * PCLK_ADC         |   [16]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating APB clock for PPMUFILE            |             |
 * PCLK_PPMUFILE    |   [17]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD             | [19:18] |  -   | Reserved                                 |     0x3     |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating APB clock for PCLK_AXI_FSYSD      |             |
 * PCLK_AXI_FSYSD   |   [20]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating APB clock for PCLK_AXI_FSYSS      |             |
 * PCLK_AXI_FSYSS   |   [21]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating APB clock for                     |             |
 * PCLK_ASYNCAXIS_  |   [22]  |  RW  | ASYNCAXIS_GPS_FSYSD                      |     0x1     |
 * GPS_FSYSD        |         |      | 0 : Mask                                 |             |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD             | [31:23] |  -   | Reserved                                 |     0x3     |
 * -------------------------------------------------------------------------------------------|
 */

typedef union CLK_GATE_BUS_FSYS1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:16;                   //15:0
        uint32_t PCLK_ADC:1;                    //16
        uint32_t PCLK_PPMUFILE:1;               //17
        uint32_t Reserved1:2;                    //19:18
        uint32_t PCLK_AXI_FSYSD:1;              //20
        uint32_t PCLK_AXI_FSYSS:1;              //21
        uint32_t PCLK_ASYNCAXIS_GPS_FSYSD:1;    //22
        uint32_t Reserved2:9;                    //31:23
    } bits;
} CLK_GATE_BUS_FSYS1;

/*
 * CLK_GATE_IP_CAM
 * 
 * Address = CLOCK Base Address 1 + 0xC920
 * Reset Value = 0xFFFF_FFFF
 * 
 *       Name       |   Bit   | Type |                Description               | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for FIMC0               |             |
 * CLK_FIMC0        |   [0]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for FIMC1               |             |
 * CLK_FIMC1        |   [1]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for FIMC2               |             |
 * CLK_FIMC2        |   [2]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for FIMC3               |             |
 * CLK_FIMC3        |   [3]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for CSIS0               |             |
 * CLK_CSIS0        |   [4]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for CSIS1               |             |
 * CLK_CSIS1        |   [5]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for JEPG                |             |
 * CLK_JEPG         |   [6]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for SMMUFIMC0           |             |
 * CLK_SMMUFIMC0    |   [7]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for SMMUFIMC1           |             |
 * CLK_SMMUFIMC1    |   [8]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for SMMUFIMC2           |             |
 * CLK_SMMUFIMC2    |   [9]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for SMMUFIMC3           |             |
 * CLK_SMMUFIMC3    |   [10]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for SMMUJPEG            |             |
 * CLK_SMMUJPEG     |   [11]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD             | [15:12] |  -   | Reserved                                 |     0xF     |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for PPMUCAMIF           |             |
 * CLK_PPMUCAMIF    |   [16]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for PIXELASYNCM0        |             |
 * CLK_PIXELASYNCM0 |   [17]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for PIXELASYNCM1        |             |
 * CLK_PIXELASYNCM1 |   [18]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [19]  |  -   | Reserved                                 |     0x1     |
 * -------------------------------------------------------------------------------------------|
 * RSVD             | [31:20] |  -   | Reserved                                 |    0xFFF    |
 * -------------------------------------------------------------------------------------------|
 */

typedef union CLK_GATE_IP_CAM_u
{
    uint32_t all_val;
    struct
    {
        uint32_t CLK_FIMC0:1;           //0
        uint32_t CLK_FIMC1:1;           //1
        uint32_t CLK_FIMC2:1;           //2
        uint32_t CLK_FIMC3:1;           //3
        uint32_t CLK_CSIS0:1;           //4
        uint32_t CLK_CSIS1:1;           //5
        uint32_t CLK_JEPG:1;            //6
        uint32_t CLK_SMMUFIMC0:1;       //7
        uint32_t CLK_SMMUFIMC1:1;       //8
        uint32_t CLK_SMMUFIMC2:1;       //9
        uint32_t CLK_SMMUFIMC3:1;       //10
        uint32_t CLK_SMMUJPEG:1;        //11
        uint32_t Reserved0:4;           //15:12
        uint32_t CLK_PPMUCAMIF:1;       //16
        uint32_t CLK_PIXELASYNCM0:1;    //17
        uint32_t CLK_PIXELASYNCM1:1;    //18
        uint32_t Reserved1:1;           //19
        uint32_t Reserved2:12;          //31:20
    } bits;
} CLK_GATE_IP_CAM;

/*
 * CLK_GATE_IP_TV
 * 
 * Address = CLOCK Base Address 1 + 0xC924
 * Reset Value = 0xFFFF_FFFF
 * 
 *       Name       |   Bit   | Type |                Description               | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for VP                  |             |
 * CLK_VP           |   [0]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for MIXER               |             |
 * CLK_MIXER        |   [1]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [2]   |  -   | Reserved                                 |     0x1     |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for HDMI link           |             |
 * CLK_HDMI         |   [3]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for SMMUTV              |             |
 * CLK_SMMUTV       |   [4]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for PPMUTV              |             |
 * CLK_PPMUTV       |   [5]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD             | [31:6]  |  -   | Reserved                                 |  0x3FFFFFF  |
 * -------------------------------------------------------------------------------------------|
 */

typedef union CLK_GATE_IP_TV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t CLK_VP:1;      //0
        uint32_t CLK_MIXER:1;   //1
        uint32_t Reserved0:1;   //15:12
        uint32_t CLK_HDMI:1;    //16
        uint32_t CLK_SMMUTV:1;  //17
        uint32_t CLK_PPMUTV:1;  //18
        uint32_t Reserved1:26;  //19
    } bits;
} CLK_GATE_IP_TV;

/*
 * CLK_GATE_IP_MFC
 * 
 * Address = CLOCK Base Address 1 + 0xC928
 * Reset Value = 0xFFFF_FFFF
 * 
 *       Name       |   Bit   | Type |                Description               | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for MFC                 |             |
 * CLK_MFC          |   [0]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for SMMUMFC_L           |             |
 * CLK_SMMUMFC_L    |   [1]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for SMMUMFC_R           |             |
 * CLK_SMMUMFC_R    |   [2]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for PPMUMFC_L           |             |
 * CLK_PPMUMFC_L    |   [3]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for PPMUMFC_R           |             |
 * CLK_PPMUMFC_R    |   [4]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD             | [31:5]  |  -   | Reserved                                 |  0x7FFFFFF  |
 * -------------------------------------------------------------------------------------------|
 */

typedef union CLK_GATE_IP_MFC_u
{
    uint32_t all_val;
    struct
    {
        uint32_t CLK_MFC:1;        //0
        uint32_t CLK_SMMUMFC_L:1;  //1
        uint32_t CLK_SMMUMFC_R:1;  //2
        uint32_t CLK_PPMUMFC_L:1;  //3
        uint32_t CLK_PPMUMFC_R:1;  //4
        uint32_t Reserved0:27;     //31:5
    } bits;
} CLK_GATE_IP_MFC;

/*
 * CLK_GATE_IP_G3D
 * 
 * Address = CLOCK Base Address 1 + 0xC92C
 * Reset Value = 0xFFFF_FFFF
 * 
 *       Name       |   Bit   | Type |                Description               | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for G3D                 |             |
 * CLK_G3D          |   [0]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for PPMUG3D             |             |
 * CLK_PPMUG3D      |   [1]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [2]   |  -   | Reserved                                 |     0x1     |
 * -------------------------------------------------------------------------------------------|
 * RSVD             | [31:3]  |  -   | Reserved                                 | 0x1FFFFFFF  |
 * -------------------------------------------------------------------------------------------|
 */

typedef union CLK_GATE_IP_G3D_u
{
    uint32_t all_val;
    struct
    {
        uint32_t CLK_G3D:1;      //0
        uint32_t CLK_PPMUG3D:1;  //1
        uint32_t Reserved0:1;    //2
        uint32_t Reserved1:29;   //31:3
    } bits;
} CLK_GATE_IP_G3D;

/*
 * CLK_GATE_IP_LCD
 * 
 * Address = CLOCK Base Address 1 + 0xC934
 * Reset Value = 0xFFFF_FFFF
 * 
 *       Name       |   Bit   | Type |                Description               | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for FIMD0               |             |
 * CLK_FIMD0        |   [0]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for MIE0                |             |
 * CLK_MIE0         |   [1]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for MDNIE0              |             |
 * CLK_MDNIE0       |   [2]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for DSIM0               |             |
 * CLK_DSIM0        |   [3]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for SMMUFIMD0           |             |
 * CLK_SMMUFIMD0    |   [4]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for PPMULCD0            |             |
 * CLK_PPMULCD0     |   [5]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD             | [31:6]  |  -   | Reserved                                 |  0x3FFFFFF  |
 * -------------------------------------------------------------------------------------------|
 */

typedef union CLK_GATE_IP_LCD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t CLK_FIMD0:1;     //0
        uint32_t CLK_MIE0:1;      //1
        uint32_t CLK_MDNIE0:1;    //2
        uint32_t CLK_DSIM0:1;     //3
        uint32_t CLK_SMMUFIMD0:1; //4
        uint32_t CLK_PPMULCD0:1;  //5
        uint32_t Reserved:26;    //31:6
    } bits;
} CLK_GATE_IP_LCD;

/*
 * CLK_GATE_IP_ISP
 * 
 * Address = CLOCK Base Address 1 + 0xC938
 * Reset Value = 0xFFFF_FFFF
 * 
 *        Name       |   Bit   | Type |                Description               | Reset Value | 
 * --------------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clock for PWM_ISP             |             |
 * CLK_PWM_ISP_SCLK  |   [0]   |  RW  | 0 : Mask                                 |     0x1     |
 *                   |         |      | 1 : Pass                                 |             |
 * --------------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clock for SPI0_ISP            |             |
 * CLK_SPI0_ISP_SCLK |   [1]   |  RW  | 0 : Mask                                 |     0x1     |
 *                   |         |      | 1 : Pass                                 |             |
 * --------------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clock for SPI1_ISP            |             |
 * CLK_SPI1_ISP_SCLK |   [2]   |  RW  | 0 : Mask                                 |     0x1     |
 *                   |         |      | 1 : Pass                                 |             |
 * --------------------------------------------------------------------------------------------|
 *                   |         |      | Gating all clock for UART_ISP            |             |
 * CLK_UART_ISP_SCLK |   [3]   |  RW  | 0 : Mask                                 |     0x1     |
 *                   |         |      | 1 : Pass                                 |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD              | [31:4]  |  -   | Reserved                                 |  0xFFFFFFF  |
 * --------------------------------------------------------------------------------------------|
 */

typedef union CLK_GATE_IP_ISP_u
{
    uint32_t all_val;
    struct
    {
        uint32_t CLK_PWM_ISP_SCLK:1;    //0
        uint32_t CLK_SPI0_ISP_SCLK:1;   //1
        uint32_t CLK_SPI1_ISP_SCLK:1;   //2
        uint32_t CLK_UART_ISP_SCLK:1;   //3
        uint32_t Reserved:28;           //31:4
    } bits;
} CLK_GATE_IP_ISP;

/*
 * CLK_GATE_IP_FSYS
 * 
 * Address = CLOCK Base Address 1 + 0xC940
 * Reset Value = 0xFFFF_FFFF
 * 
 *       Name      |   Bit   | Type |                Description               | Reset Value | 
 * ------------------------------------------------------------------------------------------|
 *                 |         |      | Gating all clock for PDMA0               |             |
 * CLK_PDMA0       |   [0]   |  RW  | 0 : Mask                                 |     0x1     |
 *                 |         |      | 1 : Pass                                 |             |
 * ------------------------------------------------------------------------------------------|
 *                 |         |      | Gating all clock for PDMA1               |             |
 * CLK_PDMA1       |   [1]   |  RW  | 0 : Mask                                 |     0x1     |
 *                 |         |      | 1 : Pass                                 |             |
 * ------------------------------------------------------------------------------------------|
 * RSVD            |  [3:2]  |  -   | Reserved                                 |     0x3     |
 * ------------------------------------------------------------------------------------------|
 *                 |         |      | Gating all clock for TSI                 |             |
 * CLK_TSI         |   [4]   |  RW  | 0 : Mask                                 |     0x1     |
 *                 |         |      | 1 : Pass                                 |             |
 * ------------------------------------------------------------------------------------------|
 *                 |         |      | Gating all clock for SDMMC0              |             |
 * CLK_SDMMC0      |   [5]   |  RW  | 0 : Mask                                 |     0x1     |
 *                 |         |      | 1 : Pass                                 |             |
 * ------------------------------------------------------------------------------------------|
 *                 |         |      | Gating all clock for SDMMC1              |             |
 * CLK_SDMMC1      |   [6]   |  RW  | 0 : Mask                                 |     0x1     |
 *                 |         |      | 1 : Pass                                 |             |
 * ------------------------------------------------------------------------------------------|
 *                 |         |      | Gating all clock for SDMMC2              |             |
 * CLK_SDMMC2      |   [7]   |  RW  | 0 : Mask                                 |     0x1     |
 *                 |         |      | 1 : Pass                                 |             |
 * ------------------------------------------------------------------------------------------|
 *                 |         |      | Gating all clock for SDMMC3              |             |
 * CLK_SDMMC3      |   [8]   |  RW  | 0 : Mask                                 |     0x1     |
 *                 |         |      | 1 : Pass                                 |             |
 * ------------------------------------------------------------------------------------------|
 *                 |         |      | Gating all clock for SDMMC4              |             |
 * CLK_SDMMC4      |   [9]   |  RW  | 0 : Mask                                 |     0x1     |
 *                 |         |      | 1 : Pass                                 |             |
 * ------------------------------------------------------------------------------------------|
 *                 |         |      | Gating all clock for MIPIHSI             |             |
 * CLK_MIPIHSI     |   [10]  |  RW  | 0 : Mask                                 |     0x1     |
 *                 |         |      | 1 : Pass                                 |             |
 * ------------------------------------------------------------------------------------------|
 *                 |         |      | Gating all clock for SROM                |             |
 * CLK_SROMC       |   [11]  |  RW  | 0 : Mask                                 |     0x1     |
 *                 |         |      | 1 : Pass                                 |             |
 * ------------------------------------------------------------------------------------------|
 *                 |         |      | Gating all clock for USB HOST            |             |
 * CLK_USBHOST     |   [12]  |  RW  | 0 : Mask                                 |     0x1     |
 *                 |         |      | 1 : Pass                                 |             |
 * ------------------------------------------------------------------------------------------|
 *                 |         |      | Gating all clock for USB Device          |             |
 * CLK_USBDEVICE   |   [13]  |  RW  | 0 : Mask                                 |     0x1     |
 *                 |         |      | 1 : Pass                                 |             |
 * ------------------------------------------------------------------------------------------|
 * RSVD            |   [14]  |  -   | Reserved                                 |     0x1     |
 * ------------------------------------------------------------------------------------------|
 *                 |         |      | Gating all clock for ONENAND             |             |
 * CLK_ONENAND     |   [15]  |  RW  | 0 : Mask                                 |     0x1     |
 *                 |         |      | 1 : Pass                                 |             |
 * ------------------------------------------------------------------------------------------|
 *                 |         |      | Gating all clock for NFCON               |             |
 * CLK_NFCON       |   [16]  |  RW  | 0 : Mask                                 |     0x1     |
 *                 |         |      | 1 : Pass                                 |             |
 * ------------------------------------------------------------------------------------------|
 *                 |         |      | Gating all clock for PPMUFILE            |             |
 * CLK_PPMUFILE    |   [17]  |  RW  | 0 : Mask                                 |     0x1     |
 *                 |         |      | 1 : Pass                                 |             |
 * ------------------------------------------------------------------------------------------|
 * RSVD            | [31:18] |  -   | Reserved                                 |    0x1FFF   |
 * ------------------------------------------------------------------------------------------|
 */

typedef union CLK_GATE_IP_FSYS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t CLK_PDMA0:1;     //0
        uint32_t CLK_PDMA0:1;     //1
        uint32_t Reserved0:1;     //3:2
        uint32_t CLK_TSI:1;       //4
        uint32_t CLK_SDMMC0:1;    //5
        uint32_t CLK_SDMMC1:1;    //6
        uint32_t CLK_SDMMC2:1;    //7
        uint32_t CLK_SDMMC3:1;    //8
        uint32_t CLK_SDMMC4:1;    //9
        uint32_t CLK_MIPIHSI:1;   //10
        uint32_t CLK_SROMC:1;     //11
        uint32_t CLK_USBHOST:1;   //12
        uint32_t CLK_USBDEVICE:1; //13
        uint32_t Reserved1:1;     //14
        uint32_t CLK_ONENAND:1;   //15
        uint32_t CLK_NFCON:1;     //16
        uint32_t CLK_PPMUFILE:1;  //17
        uint32_t Reserved2:28;    //31:18
    } bits;
} CLK_GATE_IP_FSYS;

/*
 * CLK_GATE_IP_GPS
 * 
 * Address = CLOCK Base Address 1 + 0xC94C
 * Reset Value = 0xFFFF_FFFF
 * 
 *       Name       |   Bit   | Type |                Description               | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for G3D                 |             |
 * CLK_GPS          |   [0]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for PPMUG3D             |             |
 * CLK_SMMUGPS      |   [1]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for PPMUG3D             |             |
 * CLK_PPMUGPS      |   [2]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                                 |     0x1     |
 * -------------------------------------------------------------------------------------------|
 * RSVD             | [31:4]  |  -   | Reserved                                 |  0xFFFFFFF  |
 * -------------------------------------------------------------------------------------------|
 */

typedef union CLK_GATE_IP_GPS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t CLK_GPS:1;      //0
        uint32_t CLK_SMMUGPS:1;  //1
        uint32_t CLK_PPMUGPS:1;  //2
        uint32_t Reserved0:1;    //3
        uint32_t Reserved1:28;   //31:4
    } bits;
} CLK_GATE_IP_GPS;

/*
 * CLK_GATE_IP_PERIL
 * 
 * Address = CLOCK Base Address 1 + 0xC950
 * Reset Value = 0xFFFF_FFFF
 * 
 *       Name       |   Bit   | Type |                Description               | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for UART0               |             |
 * CLK_UART0        |   [0]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for UART1               |             |
 * CLK_UART1        |   [1]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for UART2               |             |
 * CLK_UART2        |   [2]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for UART3               |             |
 * CLK_UART3        |   [3]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for UART4               |             |
 * CLK_UART4        |   [4]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [5]   |  -   | Reserved                                 |  0xFFFFFFF  |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for I2C0                |             |
 * CLK_I2C0         |   [6]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for I2C1                |             |
 * CLK_I2C1         |   [7]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for I2C2                |             |
 * CLK_I2C2         |   [8]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for I2C3                |             |
 * CLK_I2C3         |   [9]   |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for I2C4                |             |
 * CLK_I2C4         |   [10]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for I2C5                |             |
 * CLK_I2C5         |   [11]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for I2C6                |             |
 * CLK_I2C6         |   [12]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for I2C7                |             |
 * CLK_I2C7         |   [13]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for ISCHDMI             |             |
 * CLK_I2CHDMI      |   [14]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                                 |     0x1     |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for SPI0                |             |
 * CLK_SPI0         |   [16]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for SPI1                |             |
 * CLK_SPI1         |   [17]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for SPI2                |             |
 * CLK_SPI2         |   [18]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [19]  |  -   | Reserved                                 |     0x1     |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for I2S1                |             |
 * CLK_I2S1         |   [20]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for I2S2                |             |
 * CLK_I2S2         |   [21]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for PCM1                |             |
 * CLK_PCM1         |   [22]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for PCM2                |             |
 * CLK_PCM2         |   [23]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for PWM                 |             |
 * CLK_PWM          |   [24]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for Slimbus             |             |
 * CLK_SLIMBUS      |   [25]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for SPDIF               |             |
 * CLK_SPDIF        |   [26]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Gating all clock for AC97                |             |
 * CLK_AC97         |   [27]  |  RW  | 0 : Mask                                 |     0x1     |
 *                  |         |      | 1 : Pass                                 |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD             | [31:28] |  -   | Reserved                                 |     0xF     |
 * -------------------------------------------------------------------------------------------|
 */

typedef union CLK_GATE_IP_PERIL_u
{
    uint32_t all_val;
    struct
    {
        uint32_t CLK_UART0:1;     //0
        uint32_t CLK_UART1:1;     //1
        uint32_t CLK_UART2:1;     //2
        uint32_t CLK_UART3:1;     //3
        uint32_t CLK_UART4:1;     //4
        uint32_t Reserved0:1;     //5
        uint32_t CLK_I2C0:1;      //6
        uint32_t CLK_I2C1:1;      //7
        uint32_t CLK_I2C2:1;      //8
        uint32_t CLK_I2C3:1;      //9
        uint32_t CLK_I2C4:1;      //10
        uint32_t CLK_I2C5:1;      //11
        uint32_t CLK_I2C6:1;      //12
        uint32_t CLK_I2C7:1;      //13
        uint32_t CLK_I2CHDMI:1;   //14
        uint32_t Reserved1:1;     //15
        uint32_t CLK_SPI0:1;      //16
        uint32_t CLK_SPI0:1;      //17
        uint32_t CLK_SPI0:1;      //18
        uint32_t Reserved2:1;     //19
        uint32_t CLK_I2S1:1;      //20
        uint32_t CLK_I2S2:1;      //21
        uint32_t CLK_PCM1:1;      //22
        uint32_t CLK_PCM2:1;      //23
        uint32_t CLK_PWM:1;       //24
        uint32_t CLK_SLIMBUS:1;   //25
        uint32_t CLK_SPDIF:1;     //26
        uint32_t CLK_AC97:1;      //27
        uint32_t Reserved3:4;     //31:28
    } bits;
} CLK_GATE_IP_PERIL;

/*
 * CLK_GATE_BLOCK
 * 
 * Address = CLOCK Base Address 1 + 0xC970
 * Reset Value = 0xFFFF_FFFF
 * 
 *    Name   |   Bit   | Type |                     Description                    | Reset Value | 
 * ----------------------------------------------------------------------------------------------|
 *           |         |      | Gating all clock for CAM_BLK(FIMC0, FIMC1, FIMC2,  |             |
 * CLK_CAM   |   [0]   |  RW  | 0 : Mask                                           |     0x1     |
 *           |         |      | and FIMC3)                                         |             |
 *           |         |      | 1 : Pass                                           |             |
 * ----------------------------------------------------------------------------------------------|
 *           |         |      | Gating all clock for TV_BLK (VP, MIXER, TVENC, and |             |
 * CLK_TV    |   [1]   |  RW  | and HDMI)                                          |     0x1     |
 *           |         |      | 0 : Mask                                           |             |
 *           |         |      | 1 : Pass                                           |             |
 * ----------------------------------------------------------------------------------------------|
 *           |         |      | Gating all clock for MFC_BLK (MFC)                 |             |
 * CLK_MFC   |   [2]   |  RW  | 0 : Mask                                           |     0x1     |
 *           |         |      | 1 : Pass                                           |             |
 * ----------------------------------------------------------------------------------------------|
 *           |         |      | Gating all clock for G3D_BLK (G3D)                 |             |
 * CLK_G3D   |   [3]   |  RW  | 0 : Mask                                           |     0x1     |
 *           |         |      | 1 : Pass                                           |             |
 * ----------------------------------------------------------------------------------------------|
 *           |         |      | Gating all clock for LCD_BLK (FIMD0, MIE0, and     |             |
 * CLK_LCD   |   [4]   |  RW  | DSIM0)                                             |     0x1     |
 *           |         |      | 0 : Mask                                           |             |
 *           |         |      | 1 : Pass                                           |             |
 * ----------------------------------------------------------------------------------------------|
 * RSVD      |  [6:5]  |  -   | Reserved                                           |     0x3     |
 * ----------------------------------------------------------------------------------------------|
 *           |         |      | Gating all clock for GPS_BLK (GPS)                 |             |
 * CLK_GPS   |   [7]   |  RW  | 0 : Mask                                           |     0x1     |
 *           |         |      | 1 : Pass                                           |             |
 * ----------------------------------------------------------------------------------------------|
 * RSVD      | [31:8]  |  -   | Reserved                                           |  0xFFFFFFF  |
 * ----------------------------------------------------------------------------------------------|
 */

typedef union CLK_GATE_BLOCK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t CLK_CAM:1;     //0
        uint32_t CLK_TV:1;      //1
        uint32_t CLK_MFC:1;     //2
        uint32_t CLK_G3D:1;     //3
        uint32_t CLK_LCD:1;     //4
        uint32_t Reserved0:2;   //6:5
        uint32_t CLK_GPS:1;     //7
        uint32_t Reserved1:24;  //31:8
    } bits;
} CLK_GATE_BLOCK;

/*
 * CLKOUT_CMU_TOP
 * 
 * Address = CLOCK Base Address 1 + 0xCA00
 * Reset Value = 0x0001_0000
 * 
 *       Name       |   Bit   | Type |             Description            | Reset Value | 
 * -------------------------------------------------------------------------------------|
 *                  |         |      | MUX Selection                      |             |
 *                  |         |      | 00000 : EPLL_FOUT                  |             |
 *                  |         |      | 00001 : VPLL_FOUT                  |             |
 *                  |         |      | 00010 : SCLK_HDMI24M               |             |
 *                  |         |      | 00011 : SCLK_USBPHY0               |             |
 *                  |         |      | 00101 : SCLK_HDMIPHY               |             |
 *                  |         |      | 00110 : AUDIOCDCLK0                |             |
 *                  |         |      | 00111 : AUDIOCDCLK1                |             |
 *                  |         |      | 01000 : AUDIOCDCLK2                |             |
 *                  |         |      | 01001 : SPDIF_EXTCLK               |             |
 *                  |         |      | 01010 : ACLK_160                   |             |
 *                  |         |      | 01011 : ACLK_133                   |             |
 *                  |         |      | 01100 : ACLK_200                   |             |
 *                  |         |      | 01101 : ACLK_100                   |             |
 *                  |         |      | 01110 : SCLK_MFC                   |             |
 * MUX_SEL          |  [4:0]  |  RW  | 01111 : SCLK_G3D                   |     0x0     |
 *                  |         |      | 10000 : ACLK_4500_MCUISP           |             |
 *                  |         |      | 10001 : CAM_A_PCLK                 |             |
 *                  |         |      | 10010 : CAM_B_PCLK                 |             |
 *                  |         |      | 10011 : S_RXBYTECLKHS0_2L          |             |
 *                  |         |      | 10100 : S_RXBYTECLKHS0_4L          |             |
 *                  |         |      | 10101 : RX_HALF_BYTE_CLK_CSIS0     |             |
 *                  |         |      | 10110 : RX_HALF_BYTE_CLK_CSIS1     |             |
 *                  |         |      | 10111 : SCLK_JEPG                  |             |
 *                  |         |      | 11000 : SCLK_PWM_ISP               |             |
 *                  |         |      | 11001 : SCLK_SPI0_ISP              |             |
 *                  |         |      | 11010 : SCLK_SPI1_ISP              |             |
 *                  |         |      | 11011 : SCLK_UART_ISP              |             |
 *                  |         |      | 11100 : SCLK_MIPIHSI               |             |
 *                  |         |      | 11101 : SCLK_HDMI                  |             |
 *                  |         |      | 11110 : SCLK_FIMD0                 |             |
 *                  |         |      | 11111 : SCLK_PCM0                  |             |
 * -------------------------------------------------------------------------------------|
 * RSVD             |  [7:5]  |  -   | Reserved                           |     0x0     |
 * -------------------------------------------------------------------------------------|
 * DIV_RATIO        |  [13:8] |  RW  | Divide Ratio                       |     0x0     |
 *                  |         |      | Divide ratio = DIV_RATIO + 1       |             |
 * -------------------------------------------------------------------------------------|
 * RSVD             | [15:14] |  -   | Reserved                           |     0x0     |
 * -------------------------------------------------------------------------------------|
 *                  |         |      | Enable CLKOUT                      |             |
 * ENB_CLKOUT       |   [16]  |  RW  | 0 : Disables                       |     0x1     |
 *                  |         |      | 1 : Enables                        |             |
 * -------------------------------------------------------------------------------------|
 * RSVD             | [31:17] |  -   | Reserved                           |     0x0     | 
 * -------------------------------------------------------------------------------------|
 */

typedef union CLKOUT_CMU_TOP_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MUX_SEL:5;    //4:0
        uint32_t Reserved0:3;  //7:5
        uint32_t DIV_RATIO:5;  //13:8
        uint32_t Reserved1:2;  //15:14
        uint32_t ENB_CLKOUT:1; //16
        uint32_t Reserved2:15; //31:17
    } bits;
} CLKOUT_CMU_TOP;

/*
 * CLKOUT_CMU_TOP_DIV_STAT
 * 
 * Address = CLOCK Base Address 1 + 0xCA04
 * Reset Value = 0x0000_0000
 * 
 *       Name     |   Bit   | Type |                Description                 | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 *                |         |      | DIVCLKOUT Status                           |             |
 * DIV_STAT       |   [0]   |  R   | 0 : Stable                                 |     0x0     |
 *                |         |      | 1 : Status that the divider is changing    |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           | [31:1]  |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 * 
 */

typedef union CLKOUT_CMU_TOP_DIV_STAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_STAT:1;  //0
        uint32_t Reserved:31; //31:1
    } bits;
} CLKOUT_CMU_TOP_DIV_STAT;

/*
 * MPLL_LOCK
 * 
 * Address = CLOCK Base Address 2 + 0x0008
 * Reset Value = 0x0000_0FFF
 * 
 *       Name     |   Bit   | Type |                    Description                    | Reset Value | 
 * --------------------------------------------------------------------------------------------------|
 *                |         |      | Required period to generate a stable clock output |             |
 *                |         |      | Set (270cycles x PDIV) to PLL_LOCKTIME for the    |             |
 * PLL_LOCKTIME   | [15:0]  |  RW  | PLL maximum lock time.                            |     0x0     |
 *                |         |      | 1 cycle = 1 / FREF = 1 / (FIN / PDIV)             |             |
 *                |         |      | The maximum PLL lock time is 22.5usec where FIN   |             |
 *                |         |      | is 24MHz, PDIV is 2 and PLL_LOCKTIME is 540       |             |
 * --------------------------------------------------------------------------------------------------|
 * RSVD           | [31:16] |  -   | Reserved                                          |     0x0     |   
 * --------------------------------------------------------------------------------------------------|
 * 
 * 
 */

typedef union MPLL_LOCK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PLL_LOCKTIME:16;  //15:0
        uint32_t Reserved:16;      //31:16
    } bits;
} MPLL_LOCK;

/*
 * MPLL_CON0
 * 
 * Address = CLOCK Base Address 2 + 0x0108
 * Reset Value = 0x0064_0300
 * 
 *     Name    |   Bit   | Type |                    Description                    | Reset Value | 
 * -----------------------------------------------------------------------------------------------|
 * SDIV        |  [2:0]  |  RW  | PLL S Divide Value                                |     0x0     |
 * -----------------------------------------------------------------------------------------------|
 * RSVD        |  [7:3]  |  -   | Reserved                                          |     0x0     |   
 * -----------------------------------------------------------------------------------------------|
 * PDIV        | [13:8]  |  RW  | PLL P Divide Value                                |     0x6     |
 * -----------------------------------------------------------------------------------------------|
 * RSVD        | [15:14] |  -   | Reserved                                          |     0x0     |   
 * -----------------------------------------------------------------------------------------------|
 * MDIV        | [25:16] |  RW  | PLL M Divide Value                                |     0x64    |
 * -----------------------------------------------------------------------------------------------|
 * RSVD        |   [26]  |  -   | Reserved                                          |     0x0     |   
 * -----------------------------------------------------------------------------------------------|
 *             |         |      | Monitors Frequency Select Pin                     |             |
 * FSEL        |   [27]  |  RW  | 0 : F(VCO_OUT) = F(REF)                           |     0x0     |
 *             |         |      | 1 : F(VCO_OUT) = F(VCO)                           |             |
 * -----------------------------------------------------------------------------------------------|
 * RSVD        |   [28]  |  -   | Reserved                                          |     0x0     |   
 * -----------------------------------------------------------------------------------------------|
 *             |         |      | PLL Locking Indication                            |             |
 *             |         |      | 0 : Unlocks                                       |             |
 *             |         |      | 1 : Locks                                         |             |
 *             |         |      | If ENABLE_LOCK_DET = 0, then this field is set    |             |
 * LOCKED      |   [29]  |  R   | to 1 after the locking time. The lock-time is set |     0x0     |
 *             |         |      | using the MPLL_LOCK SFR register.                 |             |
 *             |         |      | If ENABLE_LOCK_DET = 1, then this field is set    |             |
 *             |         |      | when the hardware lock detector meets the PLL     |             |
 *             |         |      | locking condition.                                |             |
 *             |         |      | This bit is Read only.                            |             |
 * -----------------------------------------------------------------------------------------------|
 * RSVD        |   [30]  |  -   | Reserved                                          |     0x0     |   
 * -----------------------------------------------------------------------------------------------|
 *             |         |      | PLL Enable Control                                |             |
 * ENABLE      |   [31]  |  RW  | 0 : Disables                                      |     0x0     |
 *             |         |      | 1 : Enables                                       |             |
 * -----------------------------------------------------------------------------------------------|
 * 
 * The reset value of MPLL_CON0 generates a 800MHz output clock for an input clock frequency of 24MHz.
 * 
 * The equation to calculate the output frequency is : FOUT = MDIV x FIN / (PDIV x 2SDIV) : 21.9MHz <= FOUT <= 1400
 * MHz
 * 
 * - The conditions MDIV, PDIV, SDIV for APLL and MPLL should meet are : PDIV : 1 <= PDIV <= 63
 * - MDIV : 64 <= MDIV <= 1023
 * - SDIV : 0  <= SDIV <= 5
 * - Freg = FIN / PDIV Fref should fall in the range of : 2MHz <= Fref <= 12MHz FVCO = MDIV x FIN / PDIV FVCO
 *   should fall in the range of : 700MHz <= FVCO <= 1400MHz
 */

typedef union MPLL_CON0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SDIV:3;        //2:0
        uint32_t Reserved0:5;   //7:3
        uint32_t PDIV:6;        //13:8
        uint32_t Reserved1:2;   //15:14
        uint32_t MDIV:10;       //25:16
        uint32_t Reserved2:1;   //26
        uint32_t FSEL:1;        //27
        uint32_t Reserved3:1;   //28
        uint32_t LOCKED:1;      //29
        uint32_t Reserved4:1;   //30
        uint32_t ENABLE:1;      //31
    } bits;
} MPLL_CON0;

/*
 * MPLL_CON1
 * 
 * Address = CLOCK Base Address 2 + 0x010C
 * Reset Value = 0x0080_3800
 * 
 *      Name     |   Bit   | Type |                      Description                      | Reset Value | 
 * -----------------------------------------------------------------------------------------------------|
 * AFC           |  [4:0]  |  RW  | AFC value                                             |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD          |  [7:5]  |  -   | Reserved                                              |     0x0     |   
 * -----------------------------------------------------------------------------------------------------|
 * LOCK_CON_DLY  | [11:8]  |  RW  | Specifies lock detector settings of the detection     |     0x8     |
 *               |         |      | resolution.                                           |             |
 * -----------------------------------------------------------------------------------------------------|
 * LOCK_CON_IN   | [13:12] |  -   | Specifies lock detector settings of the input margin  |     0x3     |   
 * -----------------------------------------------------------------------------------------------------|
 * LOCK_CON_OUT  | [15:14] |  RW  | Specifies lock detector settings of the output margin |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 * FEED_EN       |   [16]  |  -   | Enable pin for FEED_OUT                               |     0x0     |   
 * -----------------------------------------------------------------------------------------------------|
 * RSVD          |   [17]  |  -   | Reserved                                              |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD          | [19:18] |  -   | Reserved                                              |     0x0     |   
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Decides whether AFC is enabled or not                 |             |
 * AFC_ENB       |   [20]  |  RW  | 0 : Enables AFC                                       |     0x0     |
 *               |         |      | 1 : Disables AFC                                      |             |
 *               |         |      | It is an active low signal                            |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Decides whether DCC is enabled or not                 |             |
 * DCC_ENB       |   [21]  |  RW  | 0 : Enables DCC                                       |     0x0     |
 *               |         |      | 1 : Disables DCC                                      |             |
 *               |         |      | It is an active low signal                            |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | If BYPASS = 1, then it enables bypass mode (F(out) =  |             |
 * BYPASS        |   [22]  |  RW  | F(in))                                                |     0x0     |
 *               |         |      | If BYPASS = 0, then the PLL3500X operates             |             |
 *               |         |      | normally.                                             |             |
 * -----------------------------------------------------------------------------------------------------|
 * RESV0         |   [23]  |  RW  | Specifies VCO Range boost-up when the signal is       |     0x1     |
 *               |         |      | high                                                  |             |
 * -----------------------------------------------------------------------------------------------------|
 * RESV1         |   [24]  |  RW  | Specifies status of Linear-Region Detector (LDR)      |     0x0     |
 *               |         |      | when it detects a low signal                          |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD          | [31:25] |  RW  | Reserved                                              |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 */    
    
typedef union MPLL_CON1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t AFC:5;             //4:0
        uint32_t Reserved0:3;       //7:5
        uint32_t LOCK_CON_DLY:4;    //11:8
        uint32_t LOCK_CON_IN:2;     //13:12
        uint32_t LOCK_CON_OUT:2;   //15:14
        uint32_t FEED_EN:1;        //16
        uint32_t Reserved1:1;       //17
        uint32_t Reserved2:2;       //19:18
        uint32_t AFC_ENB:1;         //20
        uint32_t DCC_ENB:1;         //21
        uint32_t BYPASS:1;          //22
        uint32_t RESV0:1;           //23
        uint32_t RESV1:1;           //24
        uint32_t Reserved3:7;       //31:25
    } bits;
} MPLL_CON1;

/*
 * CLK_SRC_DMC
 * 
 * Address = CLOCK Base Address 2 + 0x0200
 * Reset Value = 0x0001_0000
 * 
 *      Name     |   Bit   | Type |                 Description                | Reset Value | 
 * ------------------------------------------------------------------------------------------|
 *               |         |      | Controls MUXC2C                            |             |
 * MUX_C2C_SEL   |   [0]   |  RW  | 0 = SCLKMPLL                               |     0x0     |
 *               |         |      | 1 = SCLKAPLL                               |             |
 * ------------------------------------------------------------------------------------------|
 * RSVD          |  [3:1]  |   -  | Reserved                                   |     0x0     |
 * ------------------------------------------------------------------------------------------|
 * MUX_C2C_SEL   |         |      | Controls MUXDMC_BUS                        |             |
 * _SEL          |   [4]   |  RW  | 0 = SCLKMPLL                               |     0x0     |
 *               |         |      | 1 = SCLKAPLL                               |             |
 * ------------------------------------------------------------------------------------------|
 * RSVD          |  [7:5]  |   -  | Reserved                                   |     0x0     |
 * ------------------------------------------------------------------------------------------|
 *               |         |      | Controls MUXDPHY                           |             |
 * MUX_DPHY_SEL  |   [8]   |  RW  | 0 = SCLKMPLL                               |     0x0     |
 *               |         |      | 1 = SCLKAPLL                               |             |
 * ------------------------------------------------------------------------------------------|
 * RSVD          |  [11:9] |   -  | Reserved                                   |     0x0     |
 * ------------------------------------------------------------------------------------------|
 *               |         |      | Controls MUXMPLL                           |             |
 * MUX_MPLL_SEL  |   [12]  |  RW  | 0 = FINPLL                                 |     0x0     |
 *               |         |      | 1 = MOUTMPLLFOUT                           |             |
 * ------------------------------------------------------------------------------------------|
 * RSVD          | [15:13] |   -  | Reserved                                   |     0x0     |
 * ------------------------------------------------------------------------------------------| 
 *               |         |      | Controls MUXPWI                            |             |
 *               |         |      | 0000 = XXTI                                |             |
 *               |         |      | 0001 = XusbXTI                             |             |
 *               |         |      | 0010 = SCLK_HDMI24M                        |             |
 *               |         |      | 0011 = SCLK_USBPHY0                        |             |
 * MUX_PWI_SEL   | [19:16] |  RW  | 0100 = SCLK_USBPHY1                        |     0x1     |
 *               |         |      | 0101 = SCLK_HDMIPHY                        |             |
 *               |         |      | 0110 = SCLKMPLL                            |             |
 *               |         |      | 0111 = SCLKEPLL                            |             |
 *               |         |      | 1000 = SCLKVPLL                            |             |
 *               |         |      | Others = Reserved                          |             |
 *               |         |      | MUXPWI is the clock source of PWI          |             |
 * ------------------------------------------------------------------------------------------|
 *               |         |      | Control MUXG2D_ACP_0. which is the source  |             |
 * MUX_G2D_ACP_0 |   [20]  |  RW  | clock of G2D_ACP core                      |     0x0     |
 * _SEL          |         |      | 0 = SCLKMPLL                               |             |
 *               |         |      | 1 = SCLKAPLL                               |             |
 * ------------------------------------------------------------------------------------------|
 * RSVD          | [23:21] |   -  | Reserved                                   |     0x0     |
 * ------------------------------------------------------------------------------------------|
 *               |         |      | Control MUXG2D_ACP_1. which is the source  |             |
 * MUX_G2D_ACP_1 |   [24]  |  RW  | clock of G2D_ACP core                      |     0x0     |
 * _SEL          |         |      | 0 = SCLKEPLL                               |             |
 *               |         |      | 1 = SCLKVPLL                               |             |
 * ------------------------------------------------------------------------------------------|
 * RSVD          | [27:25] |   -  | Reserved                                   |     0x0     |
 * ------------------------------------------------------------------------------------------|
 *               |         |      | Control MUXG2D_ACP. which is the source    |             |
 * MUX_G2D_ACP_S |   [28]  |  RW  | clock of G2D_ACP core                      |     0x0     |
 * EL            |         |      | 0 = MOUTG2D_ACP_0                          |             |
 *               |         |      | 1 = MOUTG2D_ACP_1                         |             |
 * ------------------------------------------------------------------------------------------|
 * RSVD          | [31:29] |   -  | Reserved                                   |     0x0     |
 * ------------------------------------------------------------------------------------------|
 */    
    
typedef union CLK_SRC_DMC_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MUX_C3C_SEL:1;         //0
        uint32_t Reserved0:3;           //3:1
        uint32_t MUX_DMC_BUS_SEL:1;     //4
        uint32_t Reserved1:3;           //7:5
        uint32_t MUX_DPHY_SEL:1;        //8
        uint32_t Reserved2:3;           //11:9
        uint32_t MUX_MPLL_SELL:1;       //12
        uint32_t Reserved3:3;           //15:13
        uint32_t MUX_PWI_SEL:4;         //19:16
        uint32_t MUX_G2D_ACP_0_SEL:1;   //20
        uint32_t Reserved4:3;           //23:21
        uint32_t MUX_G2D_ACP_1_SEL:1;   //24
        uint32_t Reserved5:3;           //27:25
        uint32_t MUX_G2D_ACP_SEL:1;     //28
        uint32_t Reserved6:3;           //31:29
    } bits;
} CLK_SRC_DMC;

/*
 * CLK_SRC_MASK_DMC
 * 
 * Address = CLOCK Base Address 2 + 0x0300
 * Reset Value = 0x0001_0000
 * 
 *       Name     |   Bit   | Type |                    Description                    | Reset Value | 
 * --------------------------------------------------------------------------------------------------|
 * RSVD           | [31:17] |  -   | Reserved                                          |     0x0     |   
 * --------------------------------------------------------------------------------------------------|
 *                |         |      | Mask output clock of MUXPWI                       |             |
 * PWI_MASK       |  [16]   |  RW  | 0 = Mask                                          |     0x1     |
 *                |         |      | 1 = Unmask                                        |             |
 * --------------------------------------------------------------------------------------------------|
 * RSVD           | [15:0]  |  -   | Reserved                                          |     0x0     |   
 * --------------------------------------------------------------------------------------------------|
 * 
 * 
 */

typedef union CLK_SRC_MASK_DMC_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:16;      //15:0
        uint32_t PLL_LOCKTIME:1;    //16
        uint32_t Reserved1:15;      //31:17
    } bits;
} CLK_SRC_MASK_DMC;

/*
 * CLK_MUX_STAT_DMC
 * 
 * Address = CLOCK Base Address 2 + 0x0400
 * Reset Value = 0x1110_1111
 * 
 *       Name     |   Bit   | Type |                Description                 | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 *                |         |      | Selection signal status of MUXC2C          |             |
 * C2C_SEL        |  [2:0]  |  R   | 001 = SCLKMPLL                             |     0x1     |
 *                |         |      | 010 = SCLKAPLL                             |             |
 *                |         |      | 1xx = Status that the mux is changing      |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           |   [3]   |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 *                |         |      | Selection signal status of MUXDMC_BUS      |             |
 * DMC_BUS_SEL    |  [6:4]  |  R   | 001 = SCLKMPLL                             |     0x1     |
 *                |         |      | 010 = SCLKAPLL                             |             |
 *                |         |      | 1xx = Status that the mux is changing      |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           |   [7]   |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 *                |         |      | Selection signal status of MUXDMC0         |             |
 * DPHY_SEL       | [10:8]  |  R   | 001 = SCLKMPLL                             |     0x1     |
 *                |         |      | 010 = SCLKAPLL                             |             |
 *                |         |      | 1xx = Status that the mux is changing      |             |
 * -------------------------------------------------------------------------------------------|
 *                |         |      | Selection signal status of MUXMPLL         |             |
 * MPLL_SEL       | [14:12] |  R   | 001 = FINPLL                               |     0x1     |
 *                |         |      | 010 = MOUTMPLLFOUT                         |             |
 *                |         |      | 1xx = Status that the mux is changing      |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           | [19:15] |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 *                |         |      | Selection signal status of MUXG2D_ACP_0    |             |
 * G2D_ACP_0_SEL  | [22:20] |  R   | 001 = SCLKMPLL                             |     0x1     |
 *                |         |      | 010 = SCLKAPLL                             |             |
 *                |         |      | 1xx = On changing                          |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           |  [23]   |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 *                |         |      | Selection signal status of MUXG2D_ACP_1    |             |
 * G2D_ACP_1_SEL  | [26:24] |  R   | 001 = SCLKEPLL                             |     0x1     |
 *                |         |      | 010 = SCLKVPLL                             |             |
 *                |         |      | 1xx = On changing                          |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           |  [27]   |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 *                |         |      | Selection signal status of MUXG2D_ACP      |             |
 * G2D_ACP_SEL    | [30:28] |  R   | 001 = MOUTG2D_ACP_0                        |     0x1     |
 *                |         |      | 010 = MOUTG2D_ACP_1                        |             |
 *                |         |      | 1xx = On changing                          |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           |  [31]   |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 * 
 */

typedef union CLK_MUX_STAT_DMC_u
{
    uint32_t all_val;
    struct
    {
        uint32_t C2C_SEL:3;         //2:0
        uint32_t Reserved0:1;       //3
        uint32_t DMC_BUS_SEL:3;     //6:4
        uint32_t Reserved1:1;       //7
        uint32_t DPHY_SEL:3;        //10:8
        uint32_t MPLL_SEL:3;        //14:12
        uint32_t Reserved3:5;       //19:15
        uint32_t G2D_ACP_0_SEL:3;   //22:20
        uint32_t Reserved4:1;       //23
        uint32_t G2D_ACP_1_SEL:3;   //26:24
        uint32_t Reserved5:1;       //27
        uint32_t G2D_ACP_SEL:3;     //30:28
        uint32_t Reserved6:1;       //31
    } bits;
} CLK_MUX_STAT_DMC;

/*
 * CLK_DIV_DMC0
 * 
 * Address = CLOCK Base Address 2 + 0x0500
 * Reset Value = 0x0000_0000
 * 
 *       Name     |   Bit   | Type |                Description                 | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 * ACP_RATIO      |  [2:0]  |  RW  | DIVACP Clock Divider Ratio                 |     0x0     |
 *                |         |      | ACLK_ACP = MOUTDMC_BUS/(ACP_RATIO + 1)     |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           |   [3]   |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 * ACP_PCLK_RATIO |  [6:4]  |  RW  | DIVACP Clock Divider Ratio                 |     0x0     |
 *                |         |      | PCLK_ACP = ACLK_ACP/(ACP_PCLK_RATIO + 1)   |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           |   [7]   |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 * DPHY_RATIO     | [10:8]  |  RW  | DIVDPHY Clock Divider Ratio                |     0x0     |
 *                |         |      | SCLK_DPHY = MOUTDPHY/(DPHY_RATIO + 1)      |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           |   [11]  |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 * DMC_RATIO      | [14:12] |  RW  | DIVDMC Clock Divider Ratio                 |     0x0     |
 *                |         |      | DOUTDMC = MOUTDMC_BUS/(DMC_RATIO + 1)      |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           |  [15]   |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 * DMCD_RATIO     | [18:16] |  RW  | DIVDMCD Clock Divider Ratio                |     0x0     |
 *                |         |      | ACLK_DMCD = DOUTDMC/(DMCD_RATIO + 1)       |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           |  [19]   |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 * DMCP_RATIO     | [22:20] |  RW  | DIVCK133 Clock Divider Ratio               |     0x0     |
 *                |         |      | ACLK_DMCP = ACLK_DMCD(DMCP_RATIO + 1)      |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD           | [31:23] |  -   | Reserved                                   |     0x0     |   
 * -------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_DMC0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ACP_RATIO:3;       //2:0
        uint32_t Reserved0:1;       //3
        uint32_t ACP_PCLK_RATIO:3;  //6:4
        uint32_t Reserved1:1;       //7
        uint32_t DPHY_RATIO:3;      //10:8
        uint32_t Reserved2:1;       //11
        uint32_t DMC_RATIO:3;       //14:12
        uint32_t Reserved3:1;       //15
        uint32_t DMCD_RATIO:3;      //18:16
        uint32_t Reserved4:1;       //19
        uint32_t DMCP_RATIO:3;      //22:20
        uint32_t Reserved5:9;       //31:23
    } bits;
} CLK_DIV_DMC0;

/*
 * CLK_DIV_DMC1
 * 
 * Address = CLOCK Base Address 2 + 0x0504
 * Reset Value = 0x0000_1000
 * 
 *       Name     |   Bit   | Type |                     Description                     | Reset Value | 
 * ----------------------------------------------------------------------------------------------------|
 *                |         |      | DIVG2D_ACP Clock Divider Ratio                      |             |
 * G2D_ACP_RATIO  |  [3:0]  |  RW  | SCLK_G2D_ACP = MOUTG2D_ACP /                        |     0x0     |
 *                |         |      | (G2D_ACP_RATIO + 1)                                 |             |
 * ----------------------------------------------------------------------------------------------------|
 * C2C_RATIO      |  [6:4]  |  RW  | C2C Clock Divider Ratio                             |     0x0     |
 *                |         |      | SCLK_C2C = MOUTC2C / (C2C_RATIO + 1)                |             |
 * ----------------------------------------------------------------------------------------------------|
 * RSVD           |   [7]   |  -   | Reserved                                            |     0x0     |   
 * ----------------------------------------------------------------------------------------------------|
 * PWI_RARIO      | [11:8]  |  RW  | DIVPWI Clock Divider Ratio                          |     0x0     |
 *                |         |      | SCLK_PWI = MOUTPWI / (PWI_RATIO + 1)                |             |
 * ----------------------------------------------------------------------------------------------------|
 *                |         |      | C2C_ACLK Clock Divider Ratio                        |             |
 * C2C_ACLK_RATIO | [14:12] |  RW  | ACLK_C2C =                                          |     0x1     |
 *                |         |      | [MOUTC2C_ACLK / (C2C_ACLK_RATIO + 1)]               |             |
 * ----------------------------------------------------------------------------------------------------|
 * RSVD           |  [15]   |  -   | Reserved                                            |     0x0     |   
 * ----------------------------------------------------------------------------------------------------|
 *                |         |      | DIVDVSEM Clock Divider Ratio                        |             |
 * DVSEM_RATIO    | [22:16] |  RW  | It decides frequency for PWM frame time slot in DVS |     0x0     |
 *                |         |      | emulation mode.                                     |             |
 * ----------------------------------------------------------------------------------------------------|
 * RSVD           |  [23]   |  -   | Reserved                                            |     0x0     |   
 * ----------------------------------------------------------------------------------------------------|
 * DPM_RATIO      | [30:24] |  RW  | DIVDPM Clock Divider Ratio                          |     0x0     |
 *                |         |      | It decides frequency of DPM channel clock.          |             |
 * ----------------------------------------------------------------------------------------------------|
 * RSVD           |   [31]  |  -   | Reserved                                            |     0x0     |   
 * ----------------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_DMC1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t G2D_ACP_RATIO:4;   //3:0
        uint32_t C2C_RATIO:3;       //6:4
        uint32_t Reserved0:1;       //7
        uint32_t PWI_RARIO:4;       //11:8
        uint32_t C2C_ACLK_RATIO:3;  //14:12
        uint32_t Reserved1:1;       //15
        uint32_t DVSEM_RATIO:7;     //22:16
        uint32_t Reserved2:1;       //23
        uint32_t DPM_RATIO:7;       //30:24
        uint32_t Reserved3:1;       //31
    } bits;
} CLK_DIV_DMC1;

/*
 * CLK_DIV_STAT_DMC0
 * 
 * Address = CLOCK Base Address 2 + 0x0600
 * Reset Value = 0x0000_0000
 * 
 *       Name     |   Bit   | Type |                 Description                 | Reset Value | 
 * --------------------------------------------------------------------------------------------|
 *                |         |      | DIVACP Status                               |             |
 * DIV_ACP        |   [0]   |  R   | 0 = Stable                                  |     0x0     |
 *                |         |      | 1 = Status that the divider is changing     |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD           |  [3:1]  |  -   | Reserved                                    |     0x0     |
 * --------------------------------------------------------------------------------------------|
 *                |         |      | DIVACP_PCLK Status                          |             |
 * DIV_ACP_PCLK   |   [4]   |  R   | 0 = Stable                                  |     0x0     |
 *                |         |      | 1 = Status that the divider is changing     |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD           |  [7:5]  |  -   | Reserved                                    |     0x0     |
 * --------------------------------------------------------------------------------------------|
 *                |         |      | DIVDPHY Status                              |             |
 * DIV_DPHY       |   [8]   |  R   | 0 = Stable                                  |     0x0     |
 *                |         |      | 1 = Status that the divider is changing     |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD           | [11:9]  |  -   | Reserved                                    |     0x0     |
 * --------------------------------------------------------------------------------------------|
 *                |         |      | DIVDMC Status                               |             |
 * DIV_DMC        |  [12]   |  R   | 0 = Stable                                  |     0x0     |
 *                |         |      | 1 = Status that the divider is changing     |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD           | [15:13] |  -   | Reserved                                    |     0x0     |
 * --------------------------------------------------------------------------------------------|
 *                |         |      | DIVDMCD Status                              |             |
 * DIV_DMCD       |  [16]   |  R   | 0 = Stable                                  |     0x0     |
 *                |         |      | 1 = Status that the divider is changing     |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD           | [19:17] |  -   | Reserved                                    |     0x0     |
 * --------------------------------------------------------------------------------------------|
 *                |         |      | DIVDMCP Status                              |             |
 * DIV_DMCP       |  [20]   |  R   | 0 = Stable                                  |     0x0     |
 *                |         |      | 1 = Status that the divider is changing     |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD           | [31:21] |  -   | Reserved                                    |     0x0     |
 * --------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_DMC0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_ACP:1;         //0
        uint32_t Reserved0:3;       //3:1
        uint32_t DIV_ACP_PCLK:1;    //4
        uint32_t Reserved1:3;       //7:5
        uint32_t DIV_DPHY:1;        //8
        uint32_t Reserved2:3;       //11:9
        uint32_t DIV_DMC:1;         //12
        uint32_t Reserved3:3;       //15:13
        uint32_t DIV_DMCD:1;        //16
        uint32_t Reserved4:3;       //19:17
        uint32_t DIV_DMCP:1;        //20
        uint32_t Reserved5:11;       //31:21
    } bits;
} CLK_DIV_STAT_DMC0;

/*
 * CLK_DIV_STAT_DMC1
 * 
 * Address = CLOCK Base Address 2 + 0x0600
 * Reset Value = 0x0000_0000
 * 
 *       Name     |   Bit   | Type |                 Description                 | Reset Value | 
 * --------------------------------------------------------------------------------------------|
 *                |         |      | DIVG2D_ACP Status                           |             |
 * DIV_G2D_ACP    |   [0]   |  R   | 0 = Stable                                  |     0x0     |
 *                |         |      | 1 = Status that the divider is changing     |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD           |  [3:1]  |  -   | Reserved                                    |     0x0     |
 * --------------------------------------------------------------------------------------------|
 *                |         |      | DIVC2C Status                               |             |
 * DIV_C2C        |   [4]   |  R   | 0 = Stable                                  |     0x0     |
 *                |         |      | 1 = Status that the divider is changing     |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD           |  [7:5]  |  -   | Reserved                                    |     0x0     |
 * --------------------------------------------------------------------------------------------|
 *                |         |      | DIVPWI Status                               |             |
 * DIV_PWI        |   [8]   |  R   | 0 = Stable                                  |     0x0     |
 *                |         |      | 1 = Status that the divider is changing     |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD           | [11:9]  |  -   | Reserved                                    |     0x0     |
 * --------------------------------------------------------------------------------------------|
 *                |         |      | DIVC2C_ACLK Status                          |             |
 * DIV_C2C_ACLK   |  [12]   |  R   | 0 = Stable                                  |     0x0     |
 *                |         |      | 1 = Status that the divider is changing     |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD           | [15:13] |  -   | Reserved                                    |     0x0     |
 * --------------------------------------------------------------------------------------------|
 *                |         |      | DIVDVSEM Status                             |             |
 * DIV_DVSEM      |  [16]   |  R   | 0 = Stable                                  |     0x0     |
 *                |         |      | 1 = Status that the divider is changing     |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD           | [23:17] |  -   | Reserved                                    |     0x0     |
 * --------------------------------------------------------------------------------------------|
 *                |         |      | DIVDPM Status                               |             |
 * DIV_DPM        |  [24]   |  R   | 0 = Stable                                  |     0x0     |
 *                |         |      | 1 = Status that the divider is changing     |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD           | [31:25] |  -   | Reserved                                    |     0x0     |
 * --------------------------------------------------------------------------------------------|
 */

typedef union CLK_DIV_STAT_DMC1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_G2D_ACP:1;     //0
        uint32_t Reserved0:3;       //3:1
        uint32_t DIV_C2C:1;         //4
        uint32_t Reserved1:3;       //7:5
        uint32_t DIV_PWI:1;         //8
        uint32_t Reserved2:3;       //11:9
        uint32_t DIV_C2C_ACLK:1;    //12
        uint32_t Reserved3:3;       //15:13
        uint32_t DIV_DVSEM:1;       //16
        uint32_t Reserved4:7;       //23:17
        uint32_t DIV_DPM:1;         //24
        uint32_t Reserved5:7;      //31:25
    } bits;
} CLK_DIV_STAT_DMC1;

/****************** 2021-03-28 *********************/

/*
 * CLK_GATE_IP_DMC
 * 
 * Address = CLOCK Base Address 2 + 0x0900
 * Reset Value = 0xFFFF_FFFF
 * 
 *          Name        |   Bit   | Type |                 Description                 | Reset Value | 
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for DREX2                 |             |
 * CLK_DREX2            |   [0]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 * RSVD                 |   [1]   |  -   | Reserved                                    |     0x1     |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for INT_COMB              |             |
 * CLK_INT_COMB         |   [2]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 * RSVD                 |   [3]   |  -   | Reserved                                    |     0x1     |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for SSS                   |             |
 * CLK_SSS              |   [4]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for FBMDMC0               |             |
 * CLK_FBMDMC0          |   [5]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for FBMDMC1               |             |
 * CLK_FBMDMC1          |   [6]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 * RSVD                 |   [7]   |  -   | Reserved                                    |     0x1     |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for PPMUDMC0              |             |
 * CLK_PPMUDMC0         |   [8]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for PPMUDMC1              |             |
 * CLK_PPMUDMC1         |   [9]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for PPMUCPU               |             |
 * CLK_PPMUCPU          |  [10]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 * RSVD                 |  [11]   |  -   | Reserved                                    |     0x1     |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for SMMUSSS               |             |
 * CLK_SMMUSSS          |  [12]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for ID_REMAPPER           |             |
 * CLK_ID_REMAPPER      |  [13]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 * RSVD                 | [15:14] |  -   | Reserved                                    |     0x1     |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for PPMUCPU               |             |
 * CLK_PPMUACP          |  [16]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for IEM APC               |             |
 * CLK_IEM_APC          |  [17]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for IEM IEC               |             |
 * CLK_IEM_IEC          |  [18]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 * RSVD                 |  [19]   |  -   | Reserved                                    |     0x1     |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for GIC                   |             |
 * CLK_GIC              |  [20]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for ASYNC_GDL             |             |
 * CLK_ASYNC_GDL        |  [21]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for ASYNC_GDR             |             |
 * CLK_ASYNC_GDR        |  [22]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for G2D_ACP               |             |
 * CLK_G2D_ACP          |  [23]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for SMMUG2D_ACP           |             |
 * CLK_SMMUG2D_ACP      |  [24]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 * RSVD                 |  [25]   |  -   | Reserved                                    |     0x1     |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for C2C                   |             |
 * CLK_C2C              |  [26]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for ASYNC_C2C_XIUL        |             |
 * CLK_ASYNC_C2C_XIUL   |  [27]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for ASYNC_CPU_XIUR        |             |
 * CLK_ASYNC_C2C_XIUR   |  [28]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 * RSVD                 | [30:29] |  -   | Reserved                                    |     0x1     |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for GPIOC2C               |             |
 * CLK_GPIOC2C          |  [31]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 */

typedef union CLK_GATE_IP_DMC_u
{
    uint32_t all_val;
    struct
    {
        uint32_t CLK_DREX2:1;           //0
        uint32_t Reserved0:1;           //1
        uint32_t CLK_INT_COMB:1;        //2
        uint32_t Reserved1:1;           //3
        uint32_t CLK_SSS:1;             //4
        uint32_t CLK_FBMDMC0:1;         //5
        uint32_t CLK_FBMDMC1:1;         //6
        uint32_t Reserved2:1;           //7
        uint32_t CLK_PPMUDMC0:1;        //8
        uint32_t CLK_PPMUDMC1:1;        //9
        uint32_t CLK_PPMUCPU:1;         //10
        uint32_t Reserved3:1;           //11
        uint32_t CLK_SMMUSSS:1;         //12
        uint32_t CLK_ID_REMAPPER:1;     //13
        uint32_t Reserved4:2;           //15:14
        uint32_t CLK_PPMUACP:1;         //16
        uint32_t CLK_IEM_APC:1;         //17
        uint32_t CLK_IEM_IEC:1;         //18
        uint32_t Reserved5:1;           //19
        uint32_t CLK_GIC:1;             //20
        uint32_t CLK_ASYNC_GDL:1;       //21
        uint32_t CLK_ASYNC_GDR:1;       //22
        uint32_t CLK_G2D_ACP:1;         //23
        uint32_t CLK_SMMUG2D_ACP:1;     //24
        uint32_t Reserved6:1;           //25
        uint32_t CLK_C2C:1;             //26
        uint32_t CLK_ASYNC_C2C_XIUL:1;  //27
        uint32_t CLK_ASYNC_C2C_XIUR:1;  //28
        uint32_t Reserved7:2;           //30:29
        uint32_t CLK_GPIOC2C:1;         //31
    } bits;
} CLK_GATE_IP_DMC;

/*
 * CLK_GATE_IP_DMC1
 * 
 * Address = CLOCK Base Address 2 + 0x0904
 * Reset Value = 0xFFFF_FFFF
 * 
 *          Name        |   Bit   | Type |                 Description                 | Reset Value | 
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for TZASC_RW              |             |
 * CLK_TZASC_RW         |   [0]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for TZASC_RR              |             |
 * CLK_TZASC_RR         |   [1]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for TZASC_LW              |             |
 * CLK_TZASC_LW         |   [2]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Gating all clocks for TZASC_LR              |             |
 * CLK_TZASC_LR         |   [3]   |  RW  | 0 = Mask                                    |     0x1     |
 *                      |         |      | 1 = Pass                                    |             |
 * --------------------------------------------------------------------------------------------------|
 * RSVD                 | [31:4]  |  -   | Reserved                                    |  0xFFFFFFF  |
 * --------------------------------------------------------------------------------------------------|
 */

typedef union CLK_GATE_IP_DMC1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t CLK_TZASC_RW:1;        //0
        uint32_t CLK_TZASC_RR:1;        //1
        uint32_t CLK_TZASC_LW:1;        //2
        uint32_t CLK_TZASC_LR:1;        //3
        uint32_t Reserved0:28;          //31:4
    } bits;
} CLK_GATE_IP_DMC1;

/*
 * CLKOUT_CMU_DMC
 * 
 * Address = CLOCK Base Address 2 + 0x0A00
 * Reset Value = 0x0001_0000
 * 
 *          Name        |   Bit   | Type |                 Description                 | Reset Value | 
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | MUX Selection                               |             |
 *                      |         |      | 00000 = ACLK_DMCD                           |             |
 *                      |         |      | 00000 = ACLK_DMCP                           |             |
 *                      |         |      | 00000 = ACLK_ACP                            |             |
 *                      |         |      | 00000 = PCLK_ACP                            |             |
 * MUX_SEL              |  [4:0]  |  RW  | 00000 = SCLK_DMC                            |     0x0     |
 *                      |         |      | 00000 = SCLK_DPHY                           |             |
 *                      |         |      | 00000 = MPLL_FOUT/2                         |             |
 *                      |         |      | 00000 = SCLK_PWI                            |             |
 *                      |         |      | 00000 = Reserved                            |             |
 *                      |         |      | 00000 = SCLK_C2C                            |             |
 *                      |         |      | 00000 = ACLK_C2C                            |             |
 * --------------------------------------------------------------------------------------------------|
 * RSVD                 |  [7:5]  |  -   | Reserved                                    |     0x0     |
 * --------------------------------------------------------------------------------------------------|
 * DIV_RATIO            | [13:8]  |  RW  | Divide Ratio                                |     0x0     |
 *                      |         |      | Divide ratio = DIV_RATIO + 1                |             |
 * --------------------------------------------------------------------------------------------------|
 * RSVD                 | [15:14] |  -   | Reserved                                    |     0x0     |
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | Enable CLKOUT                               |             |
 * ENB_CLKOUT           |  [16]   |  RW  | 0 = Disables                                |     0x1     |
 *                      |         |      | 1 = Enables                                 |             |
 * --------------------------------------------------------------------------------------------------|
 * RSVD                 | [31:17] |  -   | Reserved                                    |     0x0     |
 * --------------------------------------------------------------------------------------------------|
 */

typedef union CLKOUT_CMU_DMC_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MUX_SEL:5;             //4:0
        uint32_t Reserved0:3;           //7:5
        uint32_t DIV_RATIO:6;           //13:8
        uint32_t Reserved1:2;           //15:14
        uint32_t ENB_CLKOUT:1;          //16
        uint32_t Reserved2:15;          //31:17
    } bits;
} CLKOUT_CMU_DMC;

/*
 * CLKOUT_CMU_DMC_DIV_STAT
 * 
 * Address = CLOCK Base Address 2 + 0x0A04
 * Reset Value = 0x0000_0000
 * 
 *          Name        |   Bit   | Type |                 Description                 | Reset Value | 
 * --------------------------------------------------------------------------------------------------|
 *                      |         |      | DIVCLKOUT Status                            |             |
 * DIV_STAT             |   [0]   |  R   | 0 = Stable                                  |     0x0     |
 *                      |         |      | 1 = Status that the divider is changing     |             |
 * --------------------------------------------------------------------------------------------------|
 * RSVD                 |  [31:1] |  -   | Reserved                                    |     0x0     |
 * --------------------------------------------------------------------------------------------------|
 */

typedef union CLKOUT_CMU_DMC_DIV_STAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DIV_STAT:1;            //0
        uint32_t Reserved0:31;          //31:1
    } bits;
} CLKOUT_CMU_DMC_DIV_STAT;

/*
 * DCGIDX_MAP0
 * 
 * Address = CLOCK Base Address 2 + 0x1000
 * Reset Value = 0xFFFF_FFFF
 * 
 *          Name        |   Bit   | Type |                 Description                 | Reset Value | 
 * --------------------------------------------------------------------------------------------------|
 * DCGIDX_MAP0          | [31:0]  |  RW  | IEC Configuration for DCG index Map[31:0]   | 0xFFFFFFFFF |
 * --------------------------------------------------------------------------------------------------|
 */

typedef union DCGIDX_MAP0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DCGIDX_MAP0:32;            //32
    } bits;
} DCGIDX_MAP0;

/*
 * DCGIDX_MAP1
 * 
 * Address = CLOCK Base Address 2 + 0x1004
 * Reset Value = 0xFFFF_FFFF
 * 
 *          Name        |   Bit   | Type |                 Description                 | Reset Value | 
 * --------------------------------------------------------------------------------------------------|
 * DCGIDX_MAP1          | [31:0]  |  RW  | IEC Configuration for DCG index Map[63:32]  | 0xFFFFFFFFF |
 * --------------------------------------------------------------------------------------------------|
 */

typedef union DCGIDX_MAP1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DCGIDX_MAP1:32;            //32
    } bits;
} DCGIDX_MAP1;

/*
 * DCGIDX_MAP2
 * 
 * Address = CLOCK Base Address 2 + 0x1008
 * Reset Value = 0xFFFF_FFFF
 * 
 *          Name        |   Bit   | Type |                 Description                 | Reset Value | 
 * --------------------------------------------------------------------------------------------------|
 * DCGIDX_MAP2          | [31:0]  |  RW  | IEC Configuration for DCG index Map[95:64]  | 0xFFFFFFFFF |
 * --------------------------------------------------------------------------------------------------|
 */

typedef union DCGIDX_MAP2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DCGIDX_MAP2:32;            //32
    } bits;
} DCGIDX_MAP2;

/*
 * DCGPERF_MAP0
 * 
 * Address = CLOCK Base Address 2 + 0x1020
 * Reset Value = 0xFFFF_FFFF
 * 
 *          Name        |   Bit   | Type |          Description          | Reset Value | 
 * ------------------------------------------------------------------------------------|
 * DCGPERF_MAP0         | [31:0]  |  RW  | DCG Performance Map[31:0]     | 0xFFFFFFFFF |
 * ------------------------------------------------------------------------------------|
 */

typedef union DCGPERF_MAP0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DCGPERF_MAP0:32;            //32
    } bits;
} DCGPERF_MAP0;

/*
 * DCGPERF_MAP1
 * 
 * Address = CLOCK Base Address 2 + 0x1024
 * Reset Value = 0xFFFF_FFFF
 * 
 *          Name        |   Bit   | Type |          Description          | Reset Value | 
 * ------------------------------------------------------------------------------------|
 * DCGPERF_MAP1         | [31:0]  |  RW  | DCG Performance Map[63:32]    | 0xFFFFFFFFF |
 * ------------------------------------------------------------------------------------|
 */

typedef union DCGPERF_MAP1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DCGPERF_MAP1:32;            //32
    } bits;
} DCGPERF_MAP1;

/*
 * DVCIDX_MAP
 * 
 * Address = CLOCK Base Address 2 + 0x1040
 * Reset Value = 0x00FF_FFFF
 * 
 *        Name      |   Bit   | Type |                 Description                 | Reset Value | 
 * ----------------------------------------------------------------------------------------------|
 * DCGPERF_MAP0     | [23:0]  |  RW  | IEC Configuration for DVC index Map[31:0]   |  0xFFFFFFF  |
 * ----------------------------------------------------------------------------------------------|
 * RSVD             | [31:24] |  -   | Reserved                                    |     0x0     |
 * ----------------------------------------------------------------------------------------------|
 */

typedef union DVCIDX_MAP_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DCGPERF_MAP0:24;       //32
        uint32_t Reserved0:8;           //32
    } bits;
} DVCIDX_MAP;

/*
 * FREQ_CPU
 * 
 * Address = CLOCK Base Address 2 + 0x1060
 * Reset Value = 0x0000_0000
 * 
 * 
 *        Name      |   Bit   | Type |                 Description                 | Reset Value | 
 * ----------------------------------------------------------------------------------------------|
 * FREQ_CPU         | [23:0]  |  RW  | Maximum Frequency of CPU in KHz             |     0x0     |
 * ----------------------------------------------------------------------------------------------|
 * RSVD             | [31:24] |  -   | Reserved                                    |     0x0     |
 * ----------------------------------------------------------------------------------------------|
 */

typedef union FREQ_CPU_u
{
    uint32_t all_val;
    struct
    {
        uint32_t FREQ_CPU:24;           //23:0
        uint32_t Reserved0:8;           //31:24
    } bits;
} FREQ_CPU;

/*
 * FREQ_DPM
 * 
 * Address = CLOCK Base Address 2 + 0x1064
 * Reset Value = 0x0000_0000
 * 
 * 
 *        Name      |   Bit   | Type |                 Description                 | Reset Value | 
 * ----------------------------------------------------------------------------------------------|
 * FREQ_DPM         | [23:0]  |  RW  | Maximum Frequency of DPM                    |     0x0     |
 * ----------------------------------------------------------------------------------------------|
 * RSVD             | [31:24] |  -   | Reserved                                    |     0x0     |
 * ----------------------------------------------------------------------------------------------|
 */

typedef union FREQ_DPM_u
{
    uint32_t all_val;
    struct
    {
        uint32_t FREQ_DPM:24;           //23:0
        uint32_t Reserved0:8;           //31:24
    } bits;
} FREQ_DPM;

/*
 * DVSEMCLK_EN
 * 
 * Address = CLOCK Base Address 2 + 0x1080
 * Reset Value = 0x0000_0000
 * 
 * 
 *        Name      |   Bit   | Type |                 Description                 | Reset Value | 
 * ----------------------------------------------------------------------------------------------|
 * DVSEMCLK_EN      |   [0]   |  RW  | DVS Emulatjion CLock Enable                 |     0x0     |
 * ----------------------------------------------------------------------------------------------|
 * RSVD             | [31:1]  |  -   | Reserved                                    |     0x0     |
 * ----------------------------------------------------------------------------------------------|
 */

typedef union DVSEMCLK_EN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DVSEMCLK_EN:1;         //0
        uint32_t Reserved0:31;          //31:1
    } bits;
} DVSEMCLK_EN;

/*
 * MAXPERF
 * 
 * Address = CLOCK Base Address 2 + 0x1084
 * Reset Value = 0x0000_0000
 * 
 * 
 *        Name      |   Bit   | Type |                 Description                 | Reset Value | 
 * ----------------------------------------------------------------------------------------------|
 *                  |         |      | Maximum Performance Enable                  |             |
 * MAXPERF_EN       |   [0]   |  RW  | 0 = Disables                                |     0x0     |
 *                  |         |      | 1 = Enables                                 |             |
 * ----------------------------------------------------------------------------------------------|
 * RSVD             | [31:1]  |  -   | Reserved                                    |     0x0     |
 * ----------------------------------------------------------------------------------------------|
 */

typedef union MAXPERF_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MAXPERF_EN:1;         //0
        uint32_t Reserved0:31;          //31:1
    } bits;
} MAXPERF;

/*
 * DMC_PAUSE_CTRL
 * 
 * Address = CLOCK Base Address 2 + 0x1094
 * Reset Value = 0x0000_0000
 * 
 * 
 *        Name      |   Bit   | Type |                 Description                  | Reset Value | 
 * -----------------------------------------------------------------------------------------------|
 *                  |         |      | Enable pause function for DREX2 DVFS         |             |
 * DMC_PAUSE_ENABLE |   [0]   |  RW  | DREX2 pause function works when DMC_RATIO or |     0x0     |
 *                  |         |      | DMCD_RATIO in CLK_DIV_DMC0 register is       |             |
 *                  |         |      | changed.                                     |             |
 * -----------------------------------------------------------------------------------------------|
 * RSVD             | [15:1]  |  -   | Reserved                                     |     0x0     |
 * -----------------------------------------------------------------------------------------------|
 * STATE            | [18:16] |  R   | Specifies current status for debugging       |     0x0     |
 * -----------------------------------------------------------------------------------------------|
 * RSVD             | [31:19] |  -   | Reserved                                     |     0x0     |
 * -----------------------------------------------------------------------------------------------|
 */

typedef union DMC_PAUSE_CTRL_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DMC_PAUSE_ENABLE:1;    //0
        uint32_t Reserved0:15;          //15:1
        uint32_t STATE:3;               //18:16
        uint32_t Reserved0:13;          //31:19
    } bits;
} DMC_PAUSE_CTRL;

/*
 * DDRPHY_LOCK_CTRL
 * 
 * Address = CLOCK Base Address 2 + 0x1098
 * Reset Value = 0x0000_0000
 * 
 * 
 *        Name      |   Bit   | Type |                 Description                  | Reset Value | 
 * -----------------------------------------------------------------------------------------------|
 * DUR_CTRL_ST      |   [0]   |  RW  | DREX2 pause function works when DMC_RATIO or |     0x0     |
 * _CLR             |         |      | DMCD_RATIO in CLK_DIV_DMC0 register is       |             |
 * -----------------------------------------------------------------------------------------------|
 * RSVD             | [15:1]  |  -   | Reserved                                     |     0x0     |
 * -----------------------------------------------------------------------------------------------|
 * STATE            | [18:16] |  R   | Specifies current status for debugging       |     0x0     |
 * -----------------------------------------------------------------------------------------------|
 * RSVD             | [31:19] |  -   | Reserved                                     |     0x0     |
 * -----------------------------------------------------------------------------------------------|
 */

typedef union DMC_PAUSE_CTRL_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DMC_PAUSE_ENABLE:1;    //0
        uint32_t Reserved0:15;          //15:1
        uint32_t STATE:3;               //18:16
        uint32_t Reserved0:13;          //31:19
    } bits;
} DMC_PAUSE_CTRL;

#endif