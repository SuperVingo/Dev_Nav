#ifndef __POWER_POWER_STRUCTURE_H__     
#define __POWER_POWER_STRUCTURE_H__    

#include "ustdint.h"

/*
 * OM_STAT
 * 
 * Address = POWER Base Address 1 + 0x0000
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |      Description     | Reset Value | 
 * --------------------------------------------------------------------------|
 * OM                  |  [6:0]  |  R   | Operation mode value |     0x0     |
 * --------------------------------------------------------------------------|
 * RSVD                | [31:7]  |  -   | Reserved             |     0x0     |
 * --------------------------------------------------------------------------|
 */

typedef union OM_STAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t OM:7;             //6:0
        uint32_t Reserved0:25;     //31:7
    } bits;
} OM_STAT;

/*
 * LPI_MASK0
 * 
 * Address = POWER Base Address 1 + 0x0004
 * Reset Value = 0x0000_0008
 * 
 *         Name        |   Bit   | Type |                   Description                   | Reset Value | 
 * -----------------------------------------------------------------------------------------------------|
 * AHB_EXMHS           |   [0]   |  RW  | Disables LPI of AHB_EXMHS                       |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 * AHB_MMCHS           |   [1]   |  RW  | Disables LPI of AHB_MMCHS                       |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 * AHB_USBHS           |   [2]   |  RW  | Disables LPI of AHB_USBHS                       |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD                |   [3]   |  -   | Reserved                                        |     0x1     |
 * -----------------------------------------------------------------------------------------------------|
 *                     |         |      | Even though I2S0 has AXI master interface.      |             |
 * I2S0                |   [5]   |  RW  | It has AHB bus master.                          |     0x0     |
 *                     |         |      | IS20 resides in MAUDIO block.                   |             |
 * -----------------------------------------------------------------------------------------------------|
 * FIMC_FD             |   [6]   |  RW  | Disables LPI of FIMC_FD                         |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 * FIMC_ISP            |   [7]   |  RW  | Disables LPI of FIMC_ISP                        |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 * FIMC_LITE0          |   [8]   |  RW  | Disables LPI of FIMC_LITE0                      |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 * FIMC_LITE1          |   [9]   |  RW  | Disables LPI of FIMC_LITE1                      |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 * FIMC_DRC            |  [10]   |  RW  | Disables LPI of FIMC_DRC                        |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD                | [13:11] |  -   | Reserved                                        |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 * ATB_ISP_ARM         |  [14]   |  RW  | Disables LPI of ATB asynchronous bridge for     |     0x0     |
 *                     |         |      | ISP_ARM.                                        |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD                | [31:15] |  -   | Reserved                                        |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 */

typedef union LPI_MASK0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t AHB_EXMHS:1;      //0
        uint32_t AHB_MMCHS:1;      //1
        uint32_t AHB_USBHS:1;      //2
        uint32_t Reserved0:1;      //3
        uint32_t Unknown:1;        //4
        uint32_t IS20:1;           //5
        uint32_t FIMC_FD:1;        //6
        uint32_t FIMC_ISP:1;       //7
        uint32_t FIMC_LITE0:1;     //8
        uint32_t FIMC_LITE1:1;     //9
        uint32_t FIMC_DRC:1;       //10
        uint32_t Reserved1:3;      //13:11
        uint32_t ATB_ISP_ARM:1;    //14
        uint32_t Reserved2:17;     //31:15
    } bits;
} LPI_MASK0;

/*
 * LPI_MASK1
 * 
 * Address = POWER Base Address 1 + 0x0008
 * Reset Value = 0x0800_1E00
 * 
 *         Name        |   Bit   | Type |               Description              | Reset Value | 
 * --------------------------------------------------------------------------------------------|
 * RSVD                |  [8:0]  |  -   | Reserved                               |     0x0     |
 * --------------------------------------------------------------------------------------------|
 * MDMA                |   [9]   |  RW  | When set to HIGH, PMU ignores bus down |     0x1     |
 *                     |         |      | acknownledge from selected IPs.        |             |
 * --------------------------------------------------------------------------------------------|
 * PDMA0               |  [10]   |  RW  | When set to HIGH, PMU ignores bus down |     0x1     |
 *                     |         |      | acknownledge from selected IPs.        |             |
 * --------------------------------------------------------------------------------------------|
 * PDMA1               |  [11]   |  RW  | When set to HIGH, PMU ignores bus down |     0x1     |
 *                     |         |      | acknownledge from selected IPs.        |             |
 * --------------------------------------------------------------------------------------------|
 * GPS                 |  [12]   |  RW  | When set to HIGH, PMU ignores bus down |     0x1     |
 *                     |         |      | acknownledge from selected IPs.        |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD                | [14:13] |  -   | Reserved                               |     0x0     |
 * --------------------------------------------------------------------------------------------|
 * RP                  |  [15]   |  RW  | When set to HIGH, PMU ignores bus down |     0x0     |
 *                     |         |      | acknownledge from selected IPs.        |             |
 * --------------------------------------------------------------------------------------------|
 * FIMC0               |  [16]   |  RW  | When set to HIGH, PMU ignores bus down |     0x0     |
 *                     |         |      | acknownledge from selected IPs.        |             |
 * --------------------------------------------------------------------------------------------|
 * FIMC1               |  [17]   |  RW  | When set to HIGH, PMU ignores bus down |     0x0     |
 *                     |         |      | acknownledge from selected IPs.        |             |
 * --------------------------------------------------------------------------------------------|
 * FIMC2               |  [18]   |  RW  | When set to HIGH, PMU ignores bus down |     0x0     |
 *                     |         |      | acknownledge from selected IPs.        |             |
 * --------------------------------------------------------------------------------------------|
 * FIMC3               |  [19]   |  RW  | When set to HIGH, PMU ignores bus down |     0x0     |
 *                     |         |      | acknownledge from selected IPs.        |             |
 * --------------------------------------------------------------------------------------------|
 * FIMD0               |  [20]   |  RW  | When set to HIGH, PMU ignores bus down |     0x0     |
 *                     |         |      | acknownledge from selected IPs.        |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD                |  [21]   |  -   | Reserved                               |     0x0     |
 * --------------------------------------------------------------------------------------------|
 * ROTATOR             |  [22]   |  RW  | When set to HIGH, PMU ignores bus down |     0x0     |
 *                     |         |      | acknownledge from selected IPs.        |             |
 * --------------------------------------------------------------------------------------------|
 * VP                  |  [23]   |  RW  | When set to HIGH, PMU ignores bus down |     0x0     |
 *                     |         |      | acknownledge from selected IPs.        |             |
 * --------------------------------------------------------------------------------------------|
 * MIXER               |  [24]   |  RW  | When set to HIGH, PMU ignores bus down |     0x0     |
 *                     |         |      | acknownledge from selected IPs.        |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD                | [26:25] |  -   | Reserved                               |     0x0     |
 * --------------------------------------------------------------------------------------------|
 * G3D                 |  [27]   |  RW  | When set to HIGH, PMU ignores bus down |     0x1     |
 *                     |         |      | acknownledge from selected IPs.        |             |
 * --------------------------------------------------------------------------------------------|
 * MFC                 |  [28]   |  RW  | When set to HIGH, PMU ignores bus down |     0x0     |
 *                     |         |      | acknownledge from selected IPs.        |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD                | [31:29] |  -   | Reserved                               |     0x0     |
 * --------------------------------------------------------------------------------------------|
 */

typedef union LPI_MASK1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:9;        //8:0
        uint32_t MDMA:1;             //9
        uint32_t PDMA0:1;            //10
        uint32_t PDMA1:1;            //11
        uint32_t GPS:1;              //12
        uint32_t Reserved1:2;        //14:13
        uint32_t RP:1;               //15
        uint32_t FIMC0:1;            //16
        uint32_t FIMC1:1;            //17
        uint32_t FIMC2:1;            //18
        uint32_t FIMC3:1;            //19
        uint32_t FIMD0:1;            //20
        uint32_t Reserved2:1;        //21
        uint32_t ROTATOR:1;          //22
        uint32_t VP:1;               //23
        uint32_t MIXER:1;            //24
        uint32_t Reserved3:2;        //26:25
        uint32_t G3D:1;              //27
        uint32_t MFC:1;              //28
        uint32_t Reserved4:3;        //31:29
    } bits;
} LPI_MASK1;

/*
 * LPI_MASK2
 * 
 * Address = POWER Base Address 1 + 0x000C
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |        Description       | Reset Value | 
 * ------------------------------------------------------------------------------|
 * DREX2               |   [0]   |  RW  | Disables LPI of DREX2    |     0x0     |
 * ------------------------------------------------------------------------------|
 * G2D_ACP             |   [1]   |  RW  | Disables LPI of G2D_ACP  |     0x0     |
 * ------------------------------------------------------------------------------|
 * SSS                 |   [2]   |  RW  | Disables LPI of SSS      |     0x0     |
 * ------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                 |     0x0     |
 * ------------------------------------------------------------------------------|
 */

typedef union LPI_MASK2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DREX2:1;          //0
        uint32_t G2D_ACP:1;        //1
        uint32_t SSS:1;            //2
        uint32_t Reserved0:29;     //31:3
    } bits;
} LPI_MASK2;

/*
 * RTC_CLKO_SEL
 * 
 * Address = POWER Base Address 1 + 0x0010
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                   Description                 | Reset Value | 
 * ---------------------------------------------------------------------------------------------------|
 * EN_OSC_EN           |   [0]   |  RW  | When you activate EN_OSC_EN, RTCCLKOUT drives |     0x0     |
 *                     |         |      | internal oscillator clock-enable value.       |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                      |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 */

typedef union RTC_CLKO_SEL_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EN_OSC_EN:1;          //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} RTC_CLKO_SEL;

/*
 * GNSS_RTC_OUT_CTRL
 * 
 * Address = POWER Base Address 1 + 0x0014
 * Reset Value = 0x0000_0001
 * 
 *         Name        |   Bit   | Type |                   Description                 | Reset Value | 
 * ---------------------------------------------------------------------------------------------------|
 * GNSS_RTC_OUT_EN     |   [0]   |  RW  | When you activate GNSS_RTC_OUT_EN,            |     0x1     |
 *                     |         |      | GNSS_RTC_OUT_EN outputs oscillator clock.     |             |
 * ---------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                      |     0x0     |
 * ---------------------------------------------------------------------------------------------------|
 */

typedef union GNSS_RTC_OUT_CTRL_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GNSS_RTC_OUT_EN:1;    //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} GNSS_RTC_OUT_CTRL;

/*
 * LPI_DENIAL_MASK0
 * 
 * Address = POWER Base Address 1 + 0x0018
 * Reset Value = 0x0000_47C0
 * 
 *         Name        |   Bit   | Type |                     Description                    | Reset Value | 
 * --------------------------------------------------------------------------------------------------------|
 * RSVD                |  [5:0]  |  -   | Reserved                                           |     0x0     |
 * --------------------------------------------------------------------------------------------------------|
 * FIMC_FD             |   [6]   |  RW  | Disables LPI denial of FIMC_FD                     |     0x1     |
 * --------------------------------------------------------------------------------------------------------|
 * FIMC_ISP            |   [7]   |  RW  | Disables LPI denial of FIMC_ISP                    |     0x1     |
 * --------------------------------------------------------------------------------------------------------|
 * FIMC_LITE0          |   [8]   |  RW  | Disables LPI denial of FIMC_LITE0                  |     0x1     |
 * --------------------------------------------------------------------------------------------------------|
 * FIMC_LITE1          |   [9]   |  RW  | Disables LPI denial of FIMC_LITE1                  |     0x1     |
 * --------------------------------------------------------------------------------------------------------|
 * FIMC_DRC            |  [10]   |  RW  | Disables LPI denial of FIMC_DRC                    |     0x1     |
 * --------------------------------------------------------------------------------------------------------|
 * RSVD                | [13:11] |  -   | Reserved                                           |     0x0     |
 * --------------------------------------------------------------------------------------------------------|
 * ATB_ISP_ARM         |  [14]   |  RW  | Disables LPI denial of ATB asynchronous bridge for |     0x1     |
 *                     |         |      | ISP_ARM                                            |             |
 * --------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:15] |  -   | Reserved                                           |     0x0     |
 * --------------------------------------------------------------------------------------------------------|
 */

typedef union LPI_DENIAL_MASK0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:6;         //5:0
        uint32_t FIMC_FD:1;           //6
        uint32_t FIMC_ISP:1;          //7
        uint32_t FIMC_LITE0:1;        //8
        uint32_t FIMC_LITE1:1;        //9
        uint32_t FIMC_DRC:1;          //10
        uint32_t Reserved1:3;         //13:11
        uint32_t ATB_ISP_ARM:1;       //14
        uint32_t Reserved2:17;        //31:15
    } bits;
} LPI_DENIAL_MASK0;

/*
 * LPI_DENIAL_MASK1
 * 
 * Address = POWER Base Address 1 + 0x001C
 * Reset Value = 0x19DF_9E00
 * 
 *         Name        |   Bit   | Type |               Description              | Reset Value | 
 * --------------------------------------------------------------------------------------------|
 * RSVD                |  [8:0]  |  -   | Reserved                               |     0x0     |
 * --------------------------------------------------------------------------------------------|
 * MDMA                |   [9]   |  RW  | When set to HIGH, PMU ignores bus down |     0x1     |
 *                     |         |      | denial from selected IPs.              |             |
 * --------------------------------------------------------------------------------------------|
 * PDMA0               |  [10]   |  RW  | When set to HIGH, PMU ignores bus down |     0x1     |
 *                     |         |      | denial from selected IPs.              |             |
 * --------------------------------------------------------------------------------------------|
 * PDMA1               |  [11]   |  RW  | When set to HIGH, PMU ignores bus down |     0x1     |
 *                     |         |      | denial from selected IPs.              |             |
 * --------------------------------------------------------------------------------------------|
 * GPS                 |  [12]   |  RW  | When set to HIGH, PMU ignores bus down |     0x1     |
 *                     |         |      | denial from selected IPs.              |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD                | [14:13] |  -   | Reserved                               |     0x0     |
 * --------------------------------------------------------------------------------------------|
 * RP                  |  [15]   |  RW  | When set to HIGH, PMU ignores bus down |     0x1     |
 *                     |         |      | denial from selected IPs.              |             |
 * --------------------------------------------------------------------------------------------|
 * FIMC0               |  [16]   |  RW  | When set to HIGH, PMU ignores bus down |     0x1     |
 *                     |         |      | denial from selected IPs.              |             |
 * --------------------------------------------------------------------------------------------|
 * FIMC1               |  [17]   |  RW  | When set to HIGH, PMU ignores bus down |     0x1     |
 *                     |         |      | denial from selected IPs.              |             |
 * --------------------------------------------------------------------------------------------|
 * FIMC2               |  [18]   |  RW  | When set to HIGH, PMU ignores bus down |     0x1     |
 *                     |         |      | denial from selected IPs.              |             |
 * --------------------------------------------------------------------------------------------|
 * FIMC3               |  [19]   |  RW  | When set to HIGH, PMU ignores bus down |     0x1     |
 *                     |         |      | denial from selected IPs.              |             |
 * --------------------------------------------------------------------------------------------|
 * FIMD0               |  [20]   |  RW  | When set to HIGH, PMU ignores bus down |     0x1     |
 *                     |         |      | denial from selected IPs.              |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD                |  [21]   |  -   | Reserved                               |     0x0     |
 * --------------------------------------------------------------------------------------------|
 * ROTATOR             |  [22]   |  RW  | When set to HIGH, PMU ignores bus down |     0x1     |
 *                     |         |      | denial from selected IPs.              |             |
 * --------------------------------------------------------------------------------------------|
 * VP                  |  [23]   |  RW  | When set to HIGH, PMU ignores bus down |     0x1     |
 *                     |         |      | denial from selected IPs.              |             |
 * --------------------------------------------------------------------------------------------|
 * MIXER               |  [24]   |  RW  | When set to HIGH, PMU ignores bus down |     0x1     |
 *                     |         |      | denial from selected IPs.              |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD                | [26:25] |  -   | Reserved                               |     0x0     |
 * --------------------------------------------------------------------------------------------|
 * G3D                 |  [27]   |  RW  | When set to HIGH, PMU ignores bus down |     0x1     |
 *                     |         |      | denial from selected IPs.              |             |
 * --------------------------------------------------------------------------------------------|
 * MFC                 |  [28]   |  RW  | When set to HIGH, PMU ignores bus down |     0x1     |
 *                     |         |      | denial from selected IPs.              |             |
 * --------------------------------------------------------------------------------------------|
 * RSVD                | [31:29] |  -   | Reserved                               |     0x0     |
 * --------------------------------------------------------------------------------------------|
 */

typedef union LPI_DENIAL_MASK1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:9;        //8:0
        uint32_t MDMA:1;             //9
        uint32_t PDMA0:1;            //10
        uint32_t PDMA1:1;            //11
        uint32_t GPS:1;              //12
        uint32_t Reserved1:2;        //14:13
        uint32_t RP:1;               //15
        uint32_t FIMC0:1;            //16
        uint32_t FIMC1:1;            //17
        uint32_t FIMC2:1;            //18
        uint32_t FIMC3:1;            //19
        uint32_t FIMD0:1;            //20
        uint32_t Reserved2:1;        //21
        uint32_t ROTATOR:1;          //22
        uint32_t VP:1;               //23
        uint32_t MIXER:1;            //24
        uint32_t Reserved3:2;        //26:25
        uint32_t G3D:1;              //27
        uint32_t MFC:1;              //28
        uint32_t Reserved4:3;        //31:29
    } bits;
} LPI_DENIAL_MASK1;

/*
 * LPI_DEINAL_MASK2
 * 
 * Address = POWER Base Address 1 + 0x0020
 * Reset Value = 0x0000_0007
 * 
 *         Name        |   Bit   | Type |            Description           | Reset Value | 
 * --------------------------------------------------------------------------------------|
 * DREX2               |   [0]   |  RW  | Disables denial LPI of DREX2     |     0x1     |
 * --------------------------------------------------------------------------------------|
 * G2D_ACP             |   [1]   |  RW  | Disables denial LPI of G2D_ACP   |     0x1     |
 * --------------------------------------------------------------------------------------|
 * SSS                 |   [2]   |  RW  | Disables denial LPI of SSS       |     0x1     |
 * --------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                         |     0x0     |
 * --------------------------------------------------------------------------------------|
 */

typedef union LPI_DEINAL_MASK2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DREX2:1;          //0
        uint32_t G2D_ACP:1;        //1
        uint32_t SSS:1;            //2
        uint32_t Reserved0:29;     //31:3
    } bits;
} LPI_DEINAL_MASK2;

/*
 * C2C_CTRL
 * 
 * Address = POWER Base Address 1 + 0x0024
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |      Description     | Reset Value | 
 * --------------------------------------------------------------------------|
 * ENABLE_C2C          |   [0]   |  RW  | 0 = Disables C2C     |     0x0     |
 *                     |         |      | 1 = Enables C2C      |             |
 * --------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved             |     0x0     |
 * --------------------------------------------------------------------------|
 */

typedef union C2C_CTRL_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ENABLE_C2C:1;      //0
        uint32_t Reserved0:31;      //31:1
    } bits;
} C2C_CTRL;

/*
 * INTR_SPREAD_ENABLE
 * 
 * Address = POWER Base Address 1 + 0x0100
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |            Description           | Reset Value | 
 * --------------------------------------------------------------------------------------|
 * ENABLE              |  [3:0]  |  RW  | Enable bit for corresponding CPU |     0x0     |
 * --------------------------------------------------------------------------------------|
 * RSVD                | [31:4]  |  -   | Reserved                         |     0x0     |
 * --------------------------------------------------------------------------------------|
 */

typedef union INTR_SPREAD_ENABLE_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ENABLE:4;          //3:0
        uint32_t Reserved0:28;      //31:4
    } bits;
} INTR_SPREAD_ENABLE;

/*
 * INTR_SPREAD_USE_STANDBYWFI
 * 
 * Address = POWER Base Address 1 + 0x0104
 * Reset Value = 0x0000_0003
 * 
 *         Name        |   Bit   | Type |                 Description                 | Reset Value | 
 * -------------------------------------------------------------------------------------------------|
 * SPREAD_USE_         |  [3:0]  |  RW  | STANDBYWFI for corresponding CPU is used to |     0x3     |
 * STANDBYWFI          |         |      | decide idle state.                          |             |
 * -------------------------------------------------------------------------------------------------|
 * RSVD                | [31:4]  |  -   | Reserved                                    |     0x0     |
 * -------------------------------------------------------------------------------------------------|
 */

typedef union INTR_SPREAD_USE_STANDBYWFI_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SPREAD_USE_STANDBYWFI:4;          //3:0
        uint32_t Reserved0:28;                     //31:4
    } bits;
} INTR_SPREAD_USE_STANDBYWFI;

/*
 * INTR_SPREAD_BLOCKING_DURATION
 * 
 * Address = POWER Base Address 1 + 0x0108
 * Reset Value = 0x0000_0080
 * 
 *         Name        |   Bit   | Type |                   Description                    | Reset Value | 
 * ------------------------------------------------------------------------------------------------------|
 *                     |         |      | Number of clock cycles for preventing additional |             |
 * DURATION            | [11:0]  |  RW  | interrupt is given.                              |     0x80    |
 *                     |         |      | Default value guarantee 5.3us                    |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:12] |  -   | Reserved                                         |     0x0     |
 * ------------------------------------------------------------------------------------------------------|
 */

typedef union INTR_SPREAD_BLOCKING_DURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DURATION:12;          //11:0
        uint32_t Reserved0:20;         //31:12
    } bits;
} INTR_SPREAD_BLOCKING_DURATION;

/*
 * CENTRAL_SEQ_CONFIGURATION
 * 
 * Address = POWER Base Address 1 + 0x0200
 * Reset Value = 0x0001_0080
 * 
 *         Name        |   Bit   | Type |                   Description                    | Reset Value | 
 * ------------------------------------------------------------------------------------------------------|
 * RSVD                | [15:0]  |  -   | Reserved                                         |     0x0     |
 * ------------------------------------------------------------------------------------------------------|
 *                     |         |      | Decides whether you can use the system-level     |             |
 *                     |         |      | power mode.                                      |             |
 * SYS_PWR_CFG         |  [16]   |  RWX | HIGH : Disables system-level low-power mode.     |     0x1     |
 *                     |         |      | LOW : Enables system-level low-power mode.       |             |
 *                     |         |      | When system enters low-power mode. PMU clears    |             |
 *                     |         |      | this field automatically to HIGH.                |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:17] |  -   | Reserved                                         |     0x0     |
 * ------------------------------------------------------------------------------------------------------|
 */

typedef union CENTRAL_SEQ_CONFIGURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:16;         //15:0
        uint32_t SYS_PWR_CFG:1;        //16
        uint32_t Reserved1:15;         //31:17
    } bits;
} CENTRAL_SEQ_CONFIGURATION;

/*
 * CENTRAL_SEQ_OPTION
 * 
 * Address = POWER Base Address 1 + 0x0208
 * Reset Value = 0x07C7_C000
 * 
 *         Name        |   Bit   | Type |                   Description                     | Reset Value | 
 * -------------------------------------------------------------------------------------------------------|
 * RSVD                |  [7:0]  |  -   | Reserved                                          |     0x0     |
 * -------------------------------------------------------------------------------------------------------|
 *                     |         |      | When you set to HIGH, all sub-power domains are   |             |
 * FAST_PWDN           |   [8]   |  RW  | turned off at the same time.                      |     0x0     |
 *                     |         |      | When you set to LOW, each sub-block is turned off |             |
 *                     |         |      | one by one.                                       |             |
 * -------------------------------------------------------------------------------------------------------|
 *                     |         |      | When you set to HIGH, all sub-power domains are   |             |
 * FAST_PWUP           |   [9]   |  RW  | turned off at the same time.                      |     0x0     |
 *                     |         |      | When you set to LOW, each sub-block is turned off |             |
 *                     |         |      | one by one.                                       |             |
 * -------------------------------------------------------------------------------------------------------|
 * RSVD                | [13:10] |  -   | Reserved                                          |     0x0     |
 * -------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses STANDBYWFI for judging whether ARM           |             |
 *                     |         |      | CORE 2 is ready for entering low-power mode.      |             |
 *                     |         |      | When you set USE_STANDBYWFI and                   |             |
 *                     |         |      | USE_STANDBYWFE to HIGH, either STANDBYWFI         |             |
 *                     |         |      | or STANDBYWFE can indicate idle ARM state.        |             |
 * USE_STANDBYWFI      |  [14]   | RWX  | When you set USE_STANDBYWFI and                   |     0x1     |
 * _ARM_CORE2          |         |      | USE_STANDBYWFE to LOW, PMU assumes that           |             |
 *                     |         |      | ARM is ready without regarding to STANDBYWFI      |             |
 *                     |         |      | and STANDBYWFE value.                             |             |
 *                     |         |      | Updates changes on USE_STANDBYWFI field of        |             |
 *                     |         |      | ARM_CORE0_OPTION register automatically in this   |             |
 *                     |         |      | field.                                            |             |
 * -------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses STANDBYWFI for judging whether ARM           |             |
 *                     |         |      | CORE 3 is ready for entering low-power mode.      |             |
 *                     |         |      | When you set USE_STANDBYWFI and                   |             |
 *                     |         |      | USE_STANDBYWFE to HIGH, either STANDBYWFI         |             |
 *                     |         |      | or STANDBYWFE can indicate idle ARM state.        |             |
 * USE_STANDBYWFI      |  [15]   | RWX  | When you set USE_STANDBYWFI and                   |     0x1     |
 * _ARM_CORE3          |         |      | USE_STANDBYWFE to LOW, PMU assumes that           |             |
 *                     |         |      | ARM is ready without regarding to STANDBYWFI      |             |
 *                     |         |      | and STANDBYWFE value.                             |             |
 *                     |         |      | Updates changes on USE_STANDBYWFI field of        |             |
 *                     |         |      | ARM_CORE0_OPTION register automatically in this   |             |
 *                     |         |      | field.                                            |             |
 * -------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses STANDBYWFI for judging whether ARM           |             |
 *                     |         |      | CORE 0 is ready for entering low-power mode.      |             |
 *                     |         |      | When you set USE_STANDBYWFI and                   |             |
 *                     |         |      | USE_STANDBYWFE to HIGH, either STANDBYWFI         |             |
 *                     |         |      | or STANDBYWFE can indicate idle ARM state.        |             |
 * USE_STANDBYWFI      |  [16]   | RWX  | When you set USE_STANDBYWFI and                   |     0x1     |
 * _ARM_CORE0          |         |      | USE_STANDBYWFE to LOW, PMU assumes that           |             |
 *                     |         |      | ARM is ready without regarding to STANDBYWFI      |             |
 *                     |         |      | and STANDBYWFE value.                             |             |
 *                     |         |      | Updates changes on USE_STANDBYWFI field of        |             |
 *                     |         |      | ARM_CORE0_OPTION register automatically in this   |             |
 *                     |         |      | field.                                            |             |
 * -------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses STANDBYWFI for judging whether ARM           |             |
 *                     |         |      | CORE 1 is ready for entering low-power mode.      |             |
 *                     |         |      | When you set USE_STANDBYWFI and                   |             |
 *                     |         |      | USE_STANDBYWFE to HIGH, either STANDBYWFI         |             |
 *                     |         |      | or STANDBYWFE can indicate idle ARM state.        |             |
 * USE_STANDBYWFI      |  [17]   | RWX  | When you set USE_STANDBYWFI and                   |     0x1     |
 * _ARM_CORE1          |         |      | USE_STANDBYWFE to LOW, PMU assumes that           |             |
 *                     |         |      | ARM is ready without regarding to STANDBYWFI      |             |
 *                     |         |      | and STANDBYWFE value.                             |             |
 *                     |         |      | Updates changes on USE_STANDBYWFI field of        |             |
 *                     |         |      | ARM_CORE0_OPTION register automatically in this   |             |
 *                     |         |      | field.                                            |             |
 * -------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses STANDBYWFI for judging whether ISP_ARM       |             |
 *                     |         |      | is ready for entering low-power mode.             |             |
 *                     |         |      | You should activate either USE_STANDBYWFI or      |             |
 * USE_STANDBYWFI      |  [18]   | RWX  | USE_STANDBYWFE at a time.                         |     0x1     |
 * _ISP_ARM            |         |      | Updates changes on USE_STANDBYWFI field of        |             |
 *                     |         |      | ISP_ARM_OPTION register automatically in this     |             |
 *                     |         |      | field.                                            |             |
 * -------------------------------------------------------------------------------------------------------|
 * RSVD                | [21:19] |  -   | Reserved                                          |     0x0     |
 * -------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses STANDBYWFE for judging whether ARM           |             |
 *                     |         |      | CORE 2 is ready for entering low-power mode.      |             |
 *                     |         |      | When you set USE_STANDBYWFI and                   |             |
 *                     |         |      | USE_STANDBYWFE to HIGH, either STANDBYWFI         |             |
 *                     |         |      | or STANDBYWFE can indicate idle ARM state.        |             |
 * USE_STANDBYWFE      |  [22]   | RWX  | When you set USE_STANDBYWFI and                   |     0x1     |
 * _ARM_CORE2          |         |      | USE_STANDBYWFE to LOW, PMU assumes that           |             |
 *                     |         |      | ARM is ready without regarding to STANDBYWFI      |             |
 *                     |         |      | and STANDBYWFE value.                             |             |
 *                     |         |      | Updates changes on USE_STANDBYWFI field of        |             |
 *                     |         |      | ARM_CORE0_OPTION register automatically in this   |             |
 *                     |         |      | field.                                            |             |
 * -------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses STANDBYWFE for judging whether ARM           |             |
 *                     |         |      | CORE 3 is ready for entering low-power mode.      |             |
 *                     |         |      | When you set USE_STANDBYWFI and                   |             |
 *                     |         |      | USE_STANDBYWFE to HIGH, either STANDBYWFI         |             |
 *                     |         |      | or STANDBYWFE can indicate idle ARM state.        |             |
 * USE_STANDBYWFE      |  [23]   | RWX  | When you set USE_STANDBYWFI and                   |     0x1     |
 * _ARM_CORE3          |         |      | USE_STANDBYWFE to LOW, PMU assumes that           |             |
 *                     |         |      | ARM is ready without regarding to STANDBYWFI      |             |
 *                     |         |      | and STANDBYWFE value.                             |             |
 *                     |         |      | Updates changes on USE_STANDBYWFI field of        |             |
 *                     |         |      | ARM_CORE0_OPTION register automatically in this   |             |
 *                     |         |      | field.                                            |             |
 * -------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses STANDBYWFE for judging whether ARM           |             |
 *                     |         |      | CORE 0 is ready for entering low-power mode.      |             |
 *                     |         |      | When you set USE_STANDBYWFI and                   |             |
 *                     |         |      | USE_STANDBYWFE to HIGH, either STANDBYWFI         |             |
 *                     |         |      | or STANDBYWFE can indicate idle ARM state.        |             |
 * USE_STANDBYWFE      |  [24]   | RWX  | When you set USE_STANDBYWFI and                   |     0x1     |
 * _ARM_CORE0          |         |      | USE_STANDBYWFE to LOW, PMU assumes that           |             |
 *                     |         |      | ARM is ready without regarding to STANDBYWFI      |             |
 *                     |         |      | and STANDBYWFE value.                             |             |
 *                     |         |      | Updates changes on USE_STANDBYWFI field of        |             |
 *                     |         |      | ARM_CORE0_OPTION register automatically in this   |             |
 *                     |         |      | field.                                            |             |
 * -------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses STANDBYWFE for judging whether ARM           |             |
 *                     |         |      | CORE 1 is ready for entering low-power mode.      |             |
 *                     |         |      | When you set USE_STANDBYWFI and                   |             |
 *                     |         |      | USE_STANDBYWFE to HIGH, either STANDBYWFI         |             |
 *                     |         |      | or STANDBYWFE can indicate idle ARM state.        |             |
 * USE_STANDBYWFE      |  [25]   | RWX  | When you set USE_STANDBYWFI and                   |     0x1     |
 * _ARM_CORE1          |         |      | USE_STANDBYWFE to LOW, PMU assumes that           |             |
 *                     |         |      | ARM is ready without regarding to STANDBYWFI      |             |
 *                     |         |      | and STANDBYWFE value.                             |             |
 *                     |         |      | Updates changes on USE_STANDBYWFI field of        |             |
 *                     |         |      | ARM_CORE0_OPTION register automatically in this   |             |
 *                     |         |      | field.                                            |             |
 * -------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses STANDBYWFE for judging whether ISP_ARM       |             |
 *                     |         |      | is ready for entering low-power mode.             |             |
 *                     |         |      | When you set USE_STANDBYWFI and                   |             |
 *                     |         |      | USE_STANDBYWFE to HIGH, either STANDBYWFI         |             |
 *                     |         |      | or STANDBYWFE can indicate idle ARM state.        |             |
 * USE_STANDBYWFE      |  [26]   | RWX  | When you set USE_STANDBYWFI and                   |     0x1     |
 * _ISP_ARM            |         |      | USE_STANDBYWFE to LOW, PMU assumes that           |             |
 *                     |         |      | ARM is ready without regarding to STANDBYWFI      |             |
 *                     |         |      | and STANDBYWFE value.                             |             |
 *                     |         |      | Updates changes on USE_STANDBYWFI field of        |             |
 *                     |         |      | FSYS_ARM_OPTION register automatically in this    |             |
 *                     |         |      | field.                                            |             |
 * -------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:27] |  -   | Reserved                                          |     0x0     |
 * -------------------------------------------------------------------------------------------------------|
 */
 

typedef union CENTRAL_SEQ_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:8;                       //7:0
        uint32_t FAST_PWDN:1;                       //8
        uint32_t FAST_PWUP:1;                       //9
        uint32_t Reserved1:4;                       //13:10
        uint32_t USE_STANDBYWFI_ARM_CORE2:1;        //14
        uint32_t USE_STANDBYWFI_ARM_CORE3:1;        //15
        uint32_t USE_STANDBYWFI_ARM_CORE0:1;        //16
        uint32_t USE_STANDBYWFI_ARM_CORE1:1;        //17
        uint32_t USE_STANDBYWFI_ISP_ARM:1;          //18
        uint32_t Reserved2:3;                       //21:19
        uint32_t USE_STANDBYWFE_ARM_CORE2:1;        //22
        uint32_t USE_STANDBYWFE_ARM_CORE3:1;        //23
        uint32_t USE_STANDBYWFE_ARM_CORE0:1;        //24
        uint32_t USE_STANDBYWFE_ARM_CORE1:1;        //25
        uint32_t USE_STANDBYWFE_ISP_ARM:1;          //26
        uint32_t Reserved3:15;                      //31:17
    } bits;
} CENTRAL_SEQ_OPTION;

/*
 * CENTRAL_SEQ_CONFIGURATION_COREBLK
 * 
 * Address = POWER Base Address 1 + 0x0240
 * Reset Value = 0x0001_0000
 * 
 *         Name        |   Bit   | Type |                   Description                    | Reset Value | 
 * ------------------------------------------------------------------------------------------------------|
 * RSVD                | [15:0]  |  -   | Reserved                                         |     0x0     |
 * ------------------------------------------------------------------------------------------------------|
 *                     |         |      | Decides whether PMU uses the system-level power  |             |
 *                     |         |      | mode.                                            |             |
 * SYS_PWR_CFG         |  [16]   |  RWX | HIGH : Disables system-level low-power mode.     |     0x1     |
 *                     |         |      | LOW : Enables system-level low-power mode.       |             |
 *                     |         |      | When system enters low-power mode. PMU clears    |             |
 *                     |         |      | this field automatically to HIGH.                |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:17] |  -   | Reserved                                         |     0x0     |
 * ------------------------------------------------------------------------------------------------------|
 */

typedef union CENTRAL_SEQ_CONFIGURATION_COREBLK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:16;         //15:0
        uint32_t SYS_PWR_CFG:1;        //16
        uint32_t Reserved1:15;         //31:17
    } bits;
} CENTRAL_SEQ_CONFIGURATION_COREBLK;

/*
 * SWRESET
 * 
 * Address = POWER Base Address 1 + 0x0400
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Software reset for whole system.                     |             |
 *                     |         |      | After the software reset process is over. PMU clears |             |
 * SYSTEM              |   [0]   |  RWX | this field automatically.                            |     0x0     |
 *                     |         |      | 0 = No effect                                        |             |
 *                     |         |      | 1 = Reset                                            |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved(should be zero)                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union SWRESET_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYSTEM:1;         //0
        uint32_t Reserved0:31;     //31:1
    } bits;
} SWRESET;

/*
 * RST_STAT
 * 
 * Address = POWER Base Address 1 + 0x0404
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                          Description                           | Reset Value | 
 * --------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [13:0]  |  -   | Reserved                                                       |     0x0     |
 * --------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Sets this field automatically when you give F4D                |             |
 * F4D_WDTRESET2       |  [14]   |  R   | watchdog timer reset2. Clears this field when you              |     0x0     |
 *                     |         |      | activate other reset source                                    |             |
 * --------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Sets this field automatically when you give F4D                |             |
 * F4D_WDTRESET3       |  [15]   |  R   | watchdog timer reset3. Clears this field when you              |     0x0     |
 *                     |         |      | activate other reset source                                    |             |
 * --------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Sets this field automatically when you give                    |             |
 * PINRESET            |  [16]   |  R   | XnRESET reset. Clears this field when you activate other reset |     0x0     |
 *                     |         |      | source.                                                        |             |
 * --------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [19:17] |  -   | Reserved                                                       |     0x0     |
 * --------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Sets this field automatically when you give timer              |             |
 * SYS_WDTRESET        |  [20]   |  R   | reset. Clears this field when you activate other reset         |     0x0     |
 *                     |         |      | source.                                                        |             |
 * --------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Sets this field automatically when you give F4D                |             |
 * F4D_WDTRESET0       |  [23]   |  R   | watchdog timer reset0. Clears this field when you              |     0x0     |
 *                     |         |      | activate other reset source                                    |             |
 * --------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Sets this field automatically when you give F4D                |             |
 * F4D_WDTRESET1       |  [24]   |  R   | watchdog timer reset1. Clears this field when you              |     0x0     |
 *                     |         |      | activate other reset source                                    |             |
 * --------------------------------------------------------------------------------------------------------------------|
 * ISP_ARM_            |         |      | Sets this field automatically when you give ISP_ARM            |             |
 * WDTRESET            |  [25]   |  R   | watchdog timer reset. Clears this field when you               |     0x0     |
 *                     |         |      | activate other reset source                                    |             |
 * --------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [27:26] |  -   | Reserved                                                       |     0x0     |
 * --------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Sets this field automatically when you give warm               |             |
 * WRESET              |  [28]   |  R   | reset. Clears this field when you activate other reset         |     0x0     |
 *                     |         |      | source.                                                        |             |
 * --------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Sets this field automatically when you give software           |             |
 * SWRESET             |  [29]   |  R   | reset. Clears this field when you activate other reset         |     0x0     |
 *                     |         |      | source.                                                        |             |
 * --------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:30] |  -   | Reserved                                                       |     0x0     |
 * --------------------------------------------------------------------------------------------------------------------|
 */

typedef union RST_STAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:14;          //13:0
        uint32_t F4D_WDTRESET2:1;       //14
        uint32_t F4D_WDTRESET3:1;       //15
        uint32_t PINRESET:1;            //16
        uint32_t Reserved1:3;           //19:17
        uint32_t SYS_WDTRESET:1;        //20
        uint32_t F4D_WDTRESET0:1;       //23
        uint32_t F4D_WDTRESET1:1;       //24
        uint32_t ISP_ARM_WDTRESET:1;    //25
        uint32_t Reserved2:2;           //27:26
        uint32_t WRESET:1;              //28
        uint32_t SWRESET:1;             //29
        uint32_t Reserved3:2;           //31:30
    } bits;
} RST_STAT;

/*
 * AUTOMATIC_WDT_RESET_DISABLE
 * 
 * Address = POWER Base Address 1 + 0x0408
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                          Description                           | Reset Value | 
 * --------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [15:0]  |  -   | Reserved                                                       |    0xFFFF   |
 * --------------------------------------------------------------------------------------------------------------------|
 * CORETIMER_          |         |      | When you set this field. the PMU disables                      |             |
 * WDTRESET2           |  [16]   |  RW  | corresponding CORETIMER_WDTRESET2 when                         |     0x1     |
 *                     |         |      | the corresponding processor is in reset state.                 |             |
 * --------------------------------------------------------------------------------------------------------------------|
 * CORETIMER_          |         |      | When you set this field. the PMU disables                      |             |
 * WDTRESET3           |  [17]   |  RW  | corresponding CORETIMER_WDTRESET3 when                         |     0x1     |
 *                     |         |      | the corresponding processor is in reset state.                 |             |
 * --------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | When you set this field. the PMU disables                      |             |
 * F4D_WDTRESET2       |  [18]   |  RW  | corresponding F4D_WDTRESET2 when the                           |     0x1     |
 *                     |         |      | corresponding processor is in reset state.                     |             |
 * --------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | When you set this field. the PMU disables                      |             |
 * F4D_WDTRESET3       |  [19]   |  RW  | corresponding F4D_WDTRESET3 when the                           |     0x1     |
 *                     |         |      | the corresponding processor is in reset state.                 |             |
 * --------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | When you set this field. the PMU disables                      |             |
 * SYS_WDTRESET        |  [20]   |  RW  | corresponding SYS_WDTRESET when the                            |     0x1     |
 *                     |         |      | the corresponding processor is in reset state.                 |             |
 * --------------------------------------------------------------------------------------------------------------------|
 * CORETIMER_          |         |      | When you set this field. the PMU disables                      |             |
 * WDTRESET0           |  [21]   |  RW  | corresponding CORETIMER_WDTRESET0 when                         |     0x1     |
 *                     |         |      | the corresponding processor is in reset state.                 |             |
 * --------------------------------------------------------------------------------------------------------------------|
 * CORETIMER_          |         |      | When you set this field. the PMU disables                      |             |
 * WDTRESET1           |  [22]   |  RW  | corresponding CORETIMER_WDTRESET1 when                         |     0x1     |
 *                     |         |      | the corresponding processor is in reset state.                 |             |
 * --------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | When you set this field. the PMU disables                      |             |
 * F4D_WDTRESET0       |  [23]   |  RW  | corresponding F4D_WDTRESET0 when the                           |     0x1     |
 *                     |         |      | corresponding processor is in reset state.                     |             |
 * --------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | When you set this field. the PMU disables                      |             |
 * F4D_WDTRESET1       |  [24]   |  RW  | corresponding F4D_WDTRESET1 when the                           |     0x1     |
 *                     |         |      | the corresponding processor is in reset state.                 |             |
 * --------------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [25]   |  -   | Reserved                                                       |     0x1     |
 * --------------------------------------------------------------------------------------------------------------------|
 * ISP_ARM_            |         |      | When you set this field. the PMU disables                      |             |
 * WDTRESET            |  [26]   |  RW  | corresponding ISP_ARM_WDTRESET when the                        |     0x1     |
 *                     |         |      | corresponding processor is in reset state.                     |             |
 * --------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:27] |  -   | Reserved                                                       |    0x1F     |
 * --------------------------------------------------------------------------------------------------------------------|
 */

typedef union AUTOMATIC_WDT_RESET_DISABLE_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:16;                //15:0
        uint32_t CORETIMER_WDTRESET2:1;       //16
        uint32_t CORETIMER_WDTRESET3:1;       //17
        uint32_t F4D_WDTRESET2:1;             //18
        uint32_t F4D_WDTRESET3:1;             //19
        uint32_t SYS_WDTRESET:1;              //20
        uint32_t CORETIMER_WDTRESET0:1;       //21
        uint32_t CORETIMER_WDTRESET1:1;       //22
        uint32_t F4D_WDTRESET0:1;             //23
        uint32_t F4D_WDTRESET1:1;             //24
        uint32_t Reserved1:1;                 //25
        uint32_t ISP_ARM_WDTRESET:1;          //26
        uint32_t Reserved2:5;                 //31:27
    } bits;
} AUTOMATIC_WDT_RESET_DISABLE;

/*
 * MASK_WDT_RESET_REQUEST
 * 
 * Address = POWER Base Address 1 + 0x040C
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |              Description              | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 * RSVD                | [15:0]  |  -   | Reserved                              |    0xFFFF   |
 * -------------------------------------------------------------------------------------------|
 * CORETIMER_          |  [16]   |  RW  | When you set CORETIMER_WDTRESET2, PMU |     0x1     |
 * WDTRESET2           |         |      | ignores the watchdog timer reset.     |             |
 * -------------------------------------------------------------------------------------------|
 * CORETIMER_          |  [17]   |  RW  | When you set CORETIMER_WDTRESET2, PMU |     0x1     |
 * WDTRESET3           |         |      | ignores the watchdog timer reset.     |             |
 * -------------------------------------------------------------------------------------------|
 * F4D_WDTRESET2       |  [18]   |  RW  | When you set CORETIMER_WDTRESET2, PMU |     0x1     |
 *                     |         |      | ignores the watchdog timer reset.     |             |
 * -------------------------------------------------------------------------------------------|
 * F4D_WDTRESET3       |  [19]   |  RW  | When you set CORETIMER_WDTRESET2, PMU |     0x1     |
 *                     |         |      | ignores the watchdog timer reset.     |             |
 * -------------------------------------------------------------------------------------------|
 * SYS_WDTRESET        |  [20]   |  RW  | When you set CORETIMER_WDTRESET2, PMU |     0x1     |
 *                     |         |      | ignores the watchdog timer reset.     |             |
 * -------------------------------------------------------------------------------------------|
 * CORETIMER_          |  [21]   |  RW  | When you set CORETIMER_WDTRESET2, PMU |     0x1     |
 * WDTRESET0           |         |      | ignores the watchdog timer reset.     |             |
 * -------------------------------------------------------------------------------------------|
 * CORETIMER_          |  [22]   |  RW  | When you set CORETIMER_WDTRESET2, PMU |     0x1     |
 * WDTRESET1           |         |      | ignores the watchdog timer reset.     |             |
 * -------------------------------------------------------------------------------------------|
 * F4D_WDTRESET0       |  [23]   |  RW  | When you set CORETIMER_WDTRESET2, PMU |     0x1     |
 *                     |         |      | ignores the watchdog timer reset.     |             |
 * -------------------------------------------------------------------------------------------|
 * F4D_WDTRESET1       |  [24]   |  RW  | When you set CORETIMER_WDTRESET2, PMU |     0x1     |
 *                     |         |      | ignores the watchdog timer reset.     |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD                |  [25]   |  -   | Reserved                              |     0x1     |
 * -------------------------------------------------------------------------------------------|
 * WDTRESET            |  [26]   |  RW  | When you set CORETIMER_WDTRESET2, PMU |     0x1     |
 * ISP_ARM_            |         |      | ignores the watchdog timer reset.     |             |
 * -------------------------------------------------------------------------------------------|
 * RSVD                | [31:27] |  -   | Reserved                              |    0x1F     |
 * -------------------------------------------------------------------------------------------|
 */

typedef union MASK_WDT_RESET_REQUEST_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:16;                //15:0
        uint32_t CORETIMER_WDTRESET2:1;       //16
        uint32_t CORETIMER_WDTRESET3:1;       //17
        uint32_t F4D_WDTRESET2:1;             //18
        uint32_t F4D_WDTRESET3:1;             //19
        uint32_t SYS_WDTRESET:1;              //20
        uint32_t CORETIMER_WDTRESET0:1;       //21
        uint32_t CORETIMER_WDTRESET1:1;       //22
        uint32_t F4D_WDTRESET0:1;             //23
        uint32_t F4D_WDTRESET1:1;             //24
        uint32_t Reserved1:1;                 //25
        uint32_t ISP_ARM_WDTRESET:1;          //26
        uint32_t Reserved2:5;                 //31:27
    } bits;
} MASK_WDT_RESET_REQUEST;

/*
 * WAKEUP_STAT
 * 
 * Address = POWER Base Address 1 + 0x0600
 * Reset Value = 0x0000_0000
 * 
 *      Name     |   Bit   | Type |                      Description                      | Reset Value | 
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up by EINT                                       |             |
 * EINT          |   [0]   | RWX  | Clears this field automatically when system starts to |     0x0     |
 *               |         |      | enter system-level power-down mode operation. Also,   |             |
 *               |         |      | clears this field by writing 0 to this field.         |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up by RTC_ALARM                                  |             |
 * RTC_ALARM     |   [1]   | RWX  | Clears this field automatically when system starts to |     0x0     |
 *               |         |      | enter system-level power-down mode operation. Also,   |             |
 *               |         |      | clears this field by writing 0 to this field.         |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up by RTC_TICK                                   |             |
 * RTC_TICK      |   [2]   | RWX  | Clears this field automatically when system starts to |     0x0     |
 *               |         |      | enter system-level power-down mode operation. Also,   |             |
 *               |         |      | clears this field by writing 0 to this field.         |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up by TSADC0                                     |             |
 * TS0           |   [3]   | RWX  | Clears this field automatically when system starts to |     0x0     |
 *               |         |      | enter system-level power-down mode operation. Also,   |             |
 *               |         |      | clears this field by writing 0 to this field.         |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up by TSADC1                                     |             |
 * TS1           |   [4]   | RWX  | Clears this field automatically when system starts to |     0x0     |
 *               |         |      | enter system-level power-down mode operation. Also,   |             |
 *               |         |      | clears this field by writing 0 to this field.         |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up by KEY I/F                                    |             |
 * KEY           |   [5]   | RWX  | Clears this field automatically when system starts to |     0x0     |
 *               |         |      | enter system-level power-down mode operation. Also,   |             |
 *               |         |      | clears this field by writing 0 to this field.         |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD          |  [8:6]  |  -   | Reserved                                              |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up by MMC0                                       |             |
 * MMC0          |   [9]   | RWX  | Clears this field automatically when system starts to |     0x0     |
 *               |         |      | enter system-level power-down mode operation. Also,   |             |
 *               |         |      | clears this field by writing 0 to this field.         |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up by MMC1                                       |             |
 * MMC1          |  [10]   | RWX  | Clears this field automatically when system starts to |     0x0     |
 *               |         |      | enter system-level power-down mode operation. Also,   |             |
 *               |         |      | clears this field by writing 0 to this field.         |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up by MMC2                                       |             |
 * MMC2          |  [11]   | RWX  | Clears this field automatically when system starts to |     0x0     |
 *               |         |      | enter system-level power-down mode operation. Also,   |             |
 *               |         |      | clears this field by writing 0 to this field.         |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up by MMC3                                       |             |
 * MMC3          |  [12]   | RWX  | Clears this field automatically when system starts to |     0x0     |
 *               |         |      | enter system-level power-down mode operation. Also,   |             |
 *               |         |      | clears this field by writing 0 to this field.         |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up by Audio sub-system                           |             |
 * AUDIOSS       |  [13]   | RWX  | Clears this field automatically when system starts to |     0x0     |
 *               |         |      | enter system-level power-down mode operation. Also,   |             |
 *               |         |      | clears this field by writing 0 to this field.         |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up by MCT                                        |             |
 * MCT           |  [14]   | RWX  | Clears this field automatically when system starts to |     0x0     |
 *               |         |      | enter system-level power-down mode operation. Also,   |             |
 *               |         |      | clears this field by writing 0 to this field.         |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up by HDMI_CEC                                   |             |
 * CEC           |  [15]   | RWX  | Clears this field automatically when system starts to |     0x0     |
 *               |         |      | enter system-level power-down mode operation. Also,   |             |
 *               |         |      | clears this field by writing 0 to this field.         |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up by IRQ0 of External GIC                       |             |
 * EXT_GIC_IRQ0  |  [16]   | RWX  | Clears this field automatically when system starts to |     0x0     |
 * (NOTE)        |         |      | enter system-level power-down mode operation. Also,   |             |
 *               |         |      | clears this field by writing 0 to this field.         |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up by FIQ0 of External GIC                       |             |
 * EXT_GIC_FIQ0  |  [17]   | RWX  | Clears this field automatically when system starts to |     0x0     |
 * (NOTE)        |         |      | enter system-level power-down mode operation. Also,   |             |
 *               |         |      | clears this field by writing 0 to this field.         |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up by IRQ1 of External GIC                       |             |
 * EXT_GIC_IRQ1  |  [18]   | RWX  | Clears this field automatically when system starts to |     0x0     |
 * (NOTE)        |         |      | enter system-level power-down mode operation. Also,   |             |
 *               |         |      | clears this field by writing 0 to this field.         |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up by FIQ1 of External GIC                       |             |
 * EXT_GIC_FIQ1  |  [19]   | RWX  | Clears this field automatically when system starts to |     0x0     |
 * (NOTE)        |         |      | enter system-level power-down mode operation. Also,   |             |
 *               |         |      | clears this field by writing 0 to this field.         |             |
 * -----------------------------------------------------------------------------------------------------|
 * C2C_RESET_REQ |  [20]   | RWX  | Wake-up by C2C_RESET_REQ of C2C                       |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 * GPS_ALIVE     |  [21]   | RWX  | Wake-up by GPS_ALIVE                                  |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up by IRQ2 of External GIC                       |             |
 * EXT_GIC_IRQ2  |  [16]   | RWX  | Clears this field automatically when system starts to |     0x0     |
 * (NOTE)        |         |      | enter system-level power-down mode operation. Also,   |             |
 *               |         |      | clears this field by writing 0 to this field.         |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up by FIQ2 of External GIC                       |             |
 * EXT_GIC_FIQ2  |  [17]   | RWX  | Clears this field automatically when system starts to |     0x0     |
 * (NOTE)        |         |      | enter system-level power-down mode operation. Also,   |             |
 *               |         |      | clears this field by writing 0 to this field.         |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up by IRQ3 of External GIC                       |             |
 * EXT_GIC_IRQ3  |  [18]   | RWX  | Clears this field automatically when system starts to |     0x0     |
 * (NOTE)        |         |      | enter system-level power-down mode operation. Also,   |             |
 *               |         |      | clears this field by writing 0 to this field.         |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up by FIQ3 of External GIC                       |             |
 * EXT_GIC_FIQ3  |  [19]   | RWX  | Clears this field automatically when system starts to |     0x0     |
 * (NOTE)        |         |      | enter system-level power-down mode operation. Also,   |             |
 *               |         |      | clears this field by writing 0 to this field.         |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD          | [30:26] |  -   | Reserved                                              |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | This field indicates wakeup source that caused        |             |
 * WAKEUP        |  [31]   |  R   | system to start working again.                        |     0x0     |
 *               |         |      | Automatically sets when you assert any reset source   |             |
 * -----------------------------------------------------------------------------------------------------|
 */

typedef union WAKEUP_STAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EINT:1;                //0
        uint32_t RTC_ALARM:1;           //1
        uint32_t RTC_TICK:1;            //2
        uint32_t TS0:1;                 //3
        uint32_t TS1:1;                 //4
        uint32_t KEY:1;                 //5
        uint32_t Reserved0:3;           //8:6
        uint32_t MMC0:1;                //9
        uint32_t MMC1:1;                //10
        uint32_t MMC2:1;                //11
        uint32_t MMC3:1;                //12
        uint32_t AUDIOSS:1;             //13
        uint32_t MCT:1;                 //14
        uint32_t CEC:1;                 //15
        uint32_t EXT_GIC_IRQ0:1;        //16
        uint32_t EXT_GIC_FIQ0:1;        //17
        uint32_t EXT_GIC_IRQ1:1;        //18
        uint32_t EXT_GIC_FIQ1:1;        //19
        uint32_t C2C_RESET_REQ:1;       //20
        uint32_t GPS_ALIVE:1;           //21
        uint32_t EXT_GIC_IRQ2:1;        //22
        uint32_t EXT_GIC_FIQ2:1;        //23
        uint32_t EXT_GIC_IRQ3:1;        //24
        uint32_t EXT_GIC_FIQ3:1;        //25
        uint32_t Reserved1:5;           //30:26
        uint32_t WAKEUP:1;              //31
    } bits;
} WAKEUP_STAT;

/*
 * EINT_WAKEUP_MASK
 * 
 * Address = POWER Base Address 1 + 0x0604
 * Reset Value = 0x0000_0080
 * 
 *         Name        |   Bit   | Type |                   Description                    | Reset Value | 
 * ------------------------------------------------------------------------------------------------------|
 * EINT_WAKEUP_        |         |      | External interrupt wake-up mask EINT[31:0]       |             |
 * MASK                | [31:0]  |  RW  | 0 = Uses as a wake-up source                     |     0x0     |
 *                     |         |      | 1 = The PMU disables the external interrupt.     |             |
 * ------------------------------------------------------------------------------------------------------|
 */

typedef union EINT_WAKEUP_MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EINT_WAKEUP_MASK:32;          //31:0
    } bits;
} EINT_WAKEUP_MASK;

/*
 * WAKEUP_MASK
 * 
 * Address = POWER Base Address 1 + 0x0608
 * Reset Value = 0x0000_0000
 * 
 *      Name     |   Bit   | Type |                      Description                      | Reset Value | 
 * -----------------------------------------------------------------------------------------------------|
 * RSVD          |   [0]   |  -   | Reserved                                              |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up mask for RTC-Alarm                            |             |
 * RTC_ALARM     |   [1]   |  RW  | 0 = Pass                                              |     0x0     |
 *               |         |      | 1 = Mask                                              |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up mask for RTC-Tick                             |             |
 * RTC_TICK      |   [2]   |  RW  | 0 = Pass                                              |     0x0     |
 *               |         |      | 1 = Mask                                              |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up mask for TSADC0                               |             |
 * TS0           |   [3]   |  RW  | 0 = Pass                                              |     0x0     |
 *               |         |      | 1 = Mask                                              |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up mask for TSADC1                               |             |
 * TS1           |   [4]   |  RW  | 0 = Pass                                              |     0x0     |
 *               |         |      | 1 = Mask                                              |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up mask for KEY I/F                              |             |
 * KEY           |   [5]   |  RW  | 0 = Pass                                              |     0x0     |
 *               |         |      | 1 = Mask                                              |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD          |  [8:6]  |  -   | Reserved                                              |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up mask for MMC0                                 |             |
 * MMC0          |   [9]   |  RW  | 0 = Pass                                              |     0x0     |
 *               |         |      | 1 = Mask                                              |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up mask for MMC1                                 |             |
 * MMC1          |  [10]   |  RW  | 0 = Pass                                              |     0x0     |
 *               |         |      | 1 = Mask                                              |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up mask for MMC2                                 |             |
 * MMC2          |  [11]   |  RW  | 0 = Pass                                              |     0x0     |
 *               |         |      | 1 = Mask                                              |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up mask for MMC3                                 |             |
 * MMC3          |  [12]   |  RW  | 0 = Pass                                              |     0x0     |
 *               |         |      | 1 = Mask                                              |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up mask for audio sub-system                     |             |
 * MADUIO        |  [13]   |  RW  | 0 = Pass                                              |     0x0     |
 *               |         |      | 1 = Mask                                              |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up mask for system timer                         |             |
 * ST            |  [14]   |  RW  | 0 = Pass                                              |     0x0     |
 *               |         |      | 1 = Mask                                              |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up mask for HDMI_CEC                             |             |
 * CEC           |  [15]   |  RW  | 0 = Pass                                              |     0x0     |
 *               |         |      | 1 = Mask                                              |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up mask for IRQ0 of External GIC                 |             |
 * EXT_GIC_IRQ0  |  [16]   |  RW  | 0 = Pass                                              |     0x0     |
 * (NOTE)        |         |      | 1 = Mask                                              |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up mask for FIQ0 of External GIC                 |             |
 * EXT_GIC_FIQ0  |  [17]   |  RW  | 0 = Pass                                              |     0x0     |
 * (NOTE)        |         |      | 1 = Mask                                              |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up mask for IRQ1 of External GIC                 |             |
 * EXT_GIC_IRQ1  |  [18]   |  RW  | 0 = Pass                                              |     0x0     |
 * (NOTE)        |         |      | 1 = Mask                                              |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up mask for FIQ1 of External GIC                 |             |
 * EXT_GIC_FIQ1  |  [19]   |  RW  | 0 = Pass                                              |     0x0     |
 * (NOTE)        |         |      | 1 = Mask                                              |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up mask for C2C_RESET_REQ wakeup                 |             |
 * C2C_RESET_REQ |  [20]   |  RW  | source                                                |     0x1     |
 *               |         |      | 0 = Pass                                              |             |
 *               |         |      | 1 = Mask                                              |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up mask for GPS_ALIVE wakeup source              |             |
 * GPS_ALIVE     |  [21]   |  RW  | 0 = Pass                                              |     0x1     |
 *               |         |      | 1 = Mask                                              |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up mask for IRQ2 of External GIC                 |             |
 * EXT_GIC_IRQ2  |  [22]   |  RW  | 0 = Pass                                              |     0x0     |
 * (NOTE)        |         |      | 1 = Mask                                              |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up mask for FIQ2 of External GIC                 |             |
 * EXT_GIC_FIQ2  |  [23]   |  RW  | 0 = Pass                                              |     0x0     |
 * (NOTE)        |         |      | 1 = Mask                                              |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up mask for IRQ3 of External GIC                 |             |
 * EXT_GIC_IRQ3  |  [24]   |  RW  | 0 = Pass                                              |     0x0     |
 * (NOTE)        |         |      | 1 = Mask                                              |             |
 * -----------------------------------------------------------------------------------------------------|
 *               |         |      | Wake-up mask for FIQ3 of External GIC                 |             |
 * EXT_GIC_FIQ3  |  [25]   |  RW  | 0 = Pass                                              |     0x0     |
 * (NOTE)        |         |      | 1 = Mask                                              |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD          | [29:26] |  -   | Reserved                                              |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 * USE_LEVEL_    |  [30]   |  RW  | Uses level-trigger mode for wakeup request signal     |     0x0     |
 * TRIGGER       |         |      | By default, PMU uses edge-trigger                     |             |
 * -----------------------------------------------------------------------------------------------------|
 * RSVD          |  [31]   |  -   | Reserved                                              |     0x0     |
 * -----------------------------------------------------------------------------------------------------|
 */

typedef union WAKEUP_MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:1;           //0
        uint32_t RTC_ALARM:1;           //1
        uint32_t RTC_TICK:1;            //2
        uint32_t TS0:1;                 //3
        uint32_t TS1:1;                 //4
        uint32_t KEY:1;                 //5
        uint32_t Reserved1:3;           //8:6
        uint32_t MMC0:1;                //9
        uint32_t MMC1:1;                //10
        uint32_t MMC2:1;                //11
        uint32_t MMC3:1;                //12
        uint32_t MAUDIO:1;              //13
        uint32_t ST:1;                  //14
        uint32_t CEC:1;                 //15
        uint32_t EXT_GIC_IRQ0:1;        //16
        uint32_t EXT_GIC_FIQ0:1;        //17
        uint32_t EXT_GIC_IRQ1:1;        //18
        uint32_t EXT_GIC_FIQ1:1;        //19
        uint32_t C2C_RESET_REQ:1;       //20
        uint32_t GPS_ALIVE:1;           //21
        uint32_t EXT_GIC_IRQ2:1;        //22
        uint32_t EXT_GIC_FIQ2:1;        //23
        uint32_t EXT_GIC_IRQ3:1;        //24
        uint32_t EXT_GIC_FIQ3:1;        //25
        uint32_t Reserved2:4;           //29:26
        uint32_t USE_LEVEL_TRIGGER:1;   //30
        uint32_t Reserved3:1;           //31
    } bits;
} WAKEUP_MASK;

/*
 * WAKEUP_STAT_COREBLK
 * 
 * Address = POWER Base Address 1 + 0x0620
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [19:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Wake-up by C2C_WAKEUP                                |             |
 * C2C                 |  [20]   | RWX  | The C2C_WAKEUP wakes up only DMC_BLK from            |     0x0     |
 *                     |         |      | retention state.                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [30:21] |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | This field indicates wakeup source that causes       |             |
 * WAKEUP              |  [31]   |  R   | system to start working again                        |     0x0     |
 *                     |         |      | Automatically sets when any reset source is          |             |
 *                     |         |      | asserted.                                            |             |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union WAKEUP_STAT_COREBLK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:20;      //19:0
        uint32_t C2C:1;             //20
        uint32_t Reserved1:10;      //30:21
        uint32_t WAKEUP:1;          //31
    } bits;
} WAKEUP_STAT_COREBLK;

/*
 * WAKE_MASK_COREBLK
 * 
 * Address = POWER Base Address 1 + 0x0628
 * Reset Value = 0x0010_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [19:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Wake-up mask for C2C_WAKEUP                          |             |
 * C2C                 |  [20]   |  RW  | The PMU disables C2C_WAKEUP in default               |     0x1     |
 *                     |         |      | setting.                                             |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [29:21] |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * USE_LEVEL_          |  [30]   | RWX  | Uses level trigger mode for wakeup request signal    |     0x0     |
 * TRIGGER             |         |      | By default. PMU uses edge-trigger                    |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                |  [31]  |  -   | Reserved                                              |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union WAKE_MASK_COREBLK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:20;          //19:0
        uint32_t C2C:1;                 //20
        uint32_t Reserved1:9;           //29:21
        uint32_t USE_LEVEL_TRIGGER:1;   //30
        uint32_t Reserved2:1;           //31
    } bits;
} WAKE_MASK_COREBLK;

/*
 * HDMI_PHY_CONTROL
 * 
 * Address = POWER Base Address 1 + 0x0700
 * Reset Value = 0x0096_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | HDMI PHY output isolation enables control            |             |
 *                     |         |      | 0 = Enables isolation                                |             |
 * ENABLE              |   [0]   |  RW  | 1 = Bypasses isolation                               |     0x0     |
 *                     |         |      | By default, isolation is enabled because power       |             |
 *                     |         |      | supply for the corresponding hard macro may not      |             |
 *                     |         |      | be present.                                          |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [15:1]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * DIV_RATIO           | [25:16] |  RW  | Clock divider ratio for HDMI                         |    0x96     |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:26] |  -   | Reserved                                              |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union HDMI_PHY_CONTROL_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ENABLE:1;          //0
        uint32_t Reserved0:15;      //15:1
        uint32_t DIV_RATIO:10;      //25:16
        uint32_t Reserved1:6;       //31:26
    } bits;
} HDMI_PHY_CONTROL;

/*
 * USB_PHY_CONTROL
 * 
 * Address = POWER Base Address 1 + 0x0704
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | USB PHY output isolation control                     |             |
 *                     |         |      | 0 = Enables isolation                                |             |
 * ENABLE              |   [0]   |  RW  | 1 = Bypasses isolation                               |     0x0     |
 *                     |         |      | By default, isolation is enabled because power       |             |
 *                     |         |      | supply for the corresponding hard macro may not      |             |
 *                     |         |      | be present.                                          |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union USB_PHY_CONTROL_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ENABLE:1;          //0
        uint32_t Reserved0:31;      //31:1
    } bits;
} USB_PHY_CONTROL;

/*
 * HSIC_1_PHY_CONTROL
 * 
 * Address = POWER Base Address 1 + 0x0708
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | HSIC_1 PHY output isolation control                  |             |
 *                     |         |      | 0 = Enables isolation                                |             |
 * ENABLE              |   [0]   |  RW  | 1 = Bypasses isolation                               |     0x0     |
 *                     |         |      | By default, isolation is enabled because power       |             |
 *                     |         |      | supply for the corresponding hard macro may not      |             |
 *                     |         |      | be present.                                          |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union HSIC_1_PHY_CONTROL_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ENABLE:1;          //0
        uint32_t Reserved0:31;      //31:1
    } bits;
} HSIC_1_PHY_CONTROL;

/*
 * HSIC_2_PHY_CONTROL
 * 
 * Address = POWER Base Address 1 + 0x070C
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | HSIC_2 PHY output isolation control                  |             |
 *                     |         |      | 0 = Enables isolation                                |             |
 * ENABLE              |   [0]   |  RW  | 1 = Bypasses isolation                               |     0x0     |
 *                     |         |      | By default, isolation is enabled because power       |             |
 *                     |         |      | supply for the corresponding hard macro may not      |             |
 *                     |         |      | be present.                                          |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union HSIC_2_PHY_CONTROL_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ENABLE:1;          //0
        uint32_t Reserved0:31;      //31:1
    } bits;
} HSIC_2_PHY_CONTROL;

/*
 * MIPI_PHY0_CONTROL
 * 
 * Address = POWER Base Address 1 + 0x0710
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | MIPI_PHY0 enables selection. Set this bit to 1 at    |             |
 *                     |         |      | the system initialization step before data access    |             |
 *                     |         |      | from/to MIPI_PHY0 begins.                            |             |
 * ENABLE              |   [0]   |  RW  | Caution: If you have not used MIPI_PHY0 in your      |     0x0     |
 *                     |         |      | system, do not touch this bit                        |             |
 *                     |         |      | 0 = Disables                                         |             |
 *                     |         |      | 1 = Enables                                          |             |
 * ----------------------------------------------------------------------------------------------------------|
 * S_RESETN            |   [1]   |  RW  | Resets CSIS part of MIPI_PHY0                        |     0x0     |
 *                     |         |      | This bit should be HIGH before enabling CSIS         |             |
 * ----------------------------------------------------------------------------------------------------------|
 * M_RESETN            |   [2]   |  RW  | Resets DSIM part of MIPI_PHY0                        |     0x0     |
 *                     |         |      | This bit should be HIGH before enabling DSIM         |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union MIPI_PHY0_CONTROL_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ENABLE:1;          //0
        uint32_t S_RESETN:1;        //1
        uint32_t M_RESETN:1;        //2
        uint32_t Reserved0:31;      //31:3
    } bits;
} MIPI_PHY0_CONTROL;

/*
 * MIPI_PHY1_CONTROL
 * 
 * Address = POWER Base Address 1 + 0x0714
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | MIPI_PHY1 enables selection. Set this bit to 1 at    |             |
 *                     |         |      | the system initialization step before data access    |             |
 *                     |         |      | from/to MIPI_PHY1 begins.                            |             |
 * ENABLE              |   [0]   |  RW  | Caution: If you have not used MIPI_PHY1 in your      |     0x0     |
 *                     |         |      | system, do not touch this bit                        |             |
 *                     |         |      | 0 = Disables                                         |             |
 *                     |         |      | 1 = Enables                                          |             |
 * ----------------------------------------------------------------------------------------------------------|
 * S_RESETN            |   [1]   |  RW  | Resets CSIS part of MIPI_PHY1                        |     0x0     |
 *                     |         |      | This bit should be HIGH before enabling CSIS         |             |
 * ----------------------------------------------------------------------------------------------------------|
 * M_RESETN            |   [2]   |  RW  | Resets DSIM part of MIPI_PHY1                        |     0x0     |
 *                     |         |      | This bit should be HIGH before enabling DSIM         |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union MIPI_PHY1_CONTROL_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ENABLE:1;          //0
        uint32_t S_RESETN:1;        //1
        uint32_t M_RESETN:1;        //2
        uint32_t Reserved0:31;      //31:3
    } bits;
} MIPI_PHY1_CONTROL;

/*
 * ADC_PHY_CONTROL
 * 
 * Address = POWER Base Address 1 + 0x0718
 * Reset Value = 0x0000_0001
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | TS-ADC enbales contorl                               |             |
 * ENABLE              |   [0]   |  RW  | 0 = Disables                                         |     0x1     |
 *                     |         |      | 1 = Enables                                          |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ADC_PHY_CONTROL_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ENABLE:1;          //0
        uint32_t Reserved0:31;      //31:1
    } bits;
} ADC_PHY_CONTROL;

/*
 * BODY_BIAS_CON0
 * 
 * Address = POWER Base Address 1 + 0x0780
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | INT block ABB control valule for PMOS ABB control    |             |
 *                     |         |      | 00000 = 0.60 * voltage of VDD_INT                    |             |
 *                     |         |      | 00001 = 0.65 * voltage of VDD_INT                    |             |
 *                     |         |      | 00010 = 0.70 * voltage of VDD_INT                    |             |
 *                     |         |      | 00011 = 0.75 * voltage of VDD_INT                    |             |
 *                     |         |      | 00100 = 0.80 * voltage of VDD_INT                    |             |
 *                     |         |      | 00101 = 0.85 * voltage of VDD_INT                    |             |
 *                     |         |      | 00110 = 0.90 * voltage of VDD_INT                    |             |
 *                     |         |      | 00111 = 0.95 * voltage of VDD_INT                    |             |
 *                     |         |      | 01000 = 1.00 * voltage of VDD_INT                    |             |
 *                     |         |      | 01001 = 1.05 * voltage of VDD_INT                    |             |
 *                     |         |      | 01010 = 1.10 * voltage of VDD_INT                    |             |
 * CODE_PMOS           |  [4:0]  |  RW  | 01011 = 1.15 * voltage of VDD_INT                    |     0x0     |
 *                     |         |      | 01100 = 1.20 * voltage of VDD_INT                    |             |
 *                     |         |      | 01101 = 1.25 * voltage of VDD_INT                    |             |
 *                     |         |      | 01110 = 1.30 * voltage of VDD_INT                    |             |
 *                     |         |      | 01111 = 1.35 * voltage of VDD_INT                    |             |
 *                     |         |      | 10000 = 1.40 * voltage of VDD_INT                    |             |
 *                     |         |      | 10001 = 1.45 * voltage of VDD_INT                    |             |
 *                     |         |      | 10010 = 1.50 * voltage of VDD_INT                    |             |
 *                     |         |      | 10011 = 1.55 * voltage of VDD_INT                    |             |
 *                     |         |      | 10100 = 1.60 * voltage of VDD_INT                    |             |
 *                     |         |      | 10101 ~ 11111 = Not available                        |             |
 *                     |         |      |                                                      |             |
 *                     |         |      | The voltage of VDD_INT shall be lower than 1.30V     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                |  [6:5]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Enable INT block PMOS ABB control                    |             |
 *                     |         |      | 0 = Bypass. Body bias voltage is the voltage of      |             |
 * ENABLE_PMOS         |   [7]   |  RW  | VDD_INT.                                             |     0x0     |
 *                     |         |      | 1 = Enable PMOS ABB control. Body bias voltage       |             |
 *                     |         |      | is selected by CODE_PMOS.                            |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [30:8]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Selection for INT block body bias generator control  |             |
 * SEL                 |  [31]   |  RW  | signal.                                              |     0x0     |
 *                     |         |      | 0 = Using internal eFUse                             |             |
 *                     |         |      | 1 = Using BODY_BIAS_CON0                             |             |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union BODY_BIAS_CON0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t CODE_PMOS:5;       //4:0
        uint32_t Reserved0:2;       //6:5
        uint32_t ENABLE_PMOS:1;     //7
        uint32_t Reserved1:23;      //30:8
        uint32_t SEL:1;             //31
    } bits;
} BODY_BIAS_CON0;

/*
 * BODY_BIAS_CON1
 * 
 * Address = POWER Base Address 1 + 0x0784
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | MIF block ABB control valule for PMOS ABB control    |             |
 *                     |         |      | 00000 = 0.60 * voltage of VDD_MIF                    |             |
 *                     |         |      | 00001 = 0.65 * voltage of VDD_MIF                    |             |
 *                     |         |      | 00010 = 0.70 * voltage of VDD_MIF                    |             |
 *                     |         |      | 00011 = 0.75 * voltage of VDD_MIF                    |             |
 *                     |         |      | 00100 = 0.80 * voltage of VDD_MIF                    |             |
 *                     |         |      | 00101 = 0.85 * voltage of VDD_MIF                    |             |
 *                     |         |      | 00110 = 0.90 * voltage of VDD_MIF                    |             |
 *                     |         |      | 00111 = 0.95 * voltage of VDD_MIF                    |             |
 *                     |         |      | 01000 = 1.00 * voltage of VDD_MIF                    |             |
 *                     |         |      | 01001 = 1.05 * voltage of VDD_MIF                    |             |
 *                     |         |      | 01010 = 1.10 * voltage of VDD_MIF                    |             |
 * CODE_PMOS           |  [4:0]  |  RW  | 01011 = 1.15 * voltage of VDD_MIF                    |     0x0     |
 *                     |         |      | 01100 = 1.20 * voltage of VDD_MIF                    |             |
 *                     |         |      | 01101 = 1.25 * voltage of VDD_MIF                    |             |
 *                     |         |      | 01110 = 1.30 * voltage of VDD_MIF                    |             |
 *                     |         |      | 01111 = 1.35 * voltage of VDD_MIF                    |             |
 *                     |         |      | 10000 = 1.40 * voltage of VDD_MIF                    |             |
 *                     |         |      | 10001 = 1.45 * voltage of VDD_MIF                    |             |
 *                     |         |      | 10010 = 1.50 * voltage of VDD_MIF                    |             |
 *                     |         |      | 10011 = 1.55 * voltage of VDD_MIF                    |             |
 *                     |         |      | 10100 = 1.60 * voltage of VDD_MIF                    |             |
 *                     |         |      | 10101 ~ 11111 = Not available                        |             |
 *                     |         |      |                                                      |             |
 *                     |         |      | The voltage of VDD_MIF shall be lower than 1.30V     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                |  [6:5]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Enable MIF block PMOS ABB control                    |             |
 *                     |         |      | 0 = Bypass. Body bias voltage is the voltage of      |             |
 * ENABLE_PMOS         |   [7]   |  RW  | VDD_MIF.                                             |     0x0     |
 *                     |         |      | 1 = Enable PMOS ABB control. Body bias voltage       |             |
 *                     |         |      | is selected by CODE_PMOS.                            |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [30:8]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Selection for MIF block body bias generator control  |             |
 * SEL                 |  [31]   |  RW  | signal.                                              |     0x0     |
 *                     |         |      | 0 = Using internal eFUse                             |             |
 *                     |         |      | 1 = Using BODY_BIAS_CON1                             |             |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union BODY_BIAS_CON1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t CODE_PMOS:5;       //4:0
        uint32_t Reserved0:2;       //6:5
        uint32_t ENABLE_PMOS:1;     //7
        uint32_t Reserved1:23;      //30:8
        uint32_t SEL:1;             //31
    } bits;
} BODY_BIAS_CON1;

/*
 * BODY_BIAS_CON1
 * 
 * Address = POWER Base Address 1 + 0x0788
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | G3D block ABB control valule for PMOS ABB control    |             |
 *                     |         |      | 00000 = 0.60 * voltage of VDD_G3D                    |             |
 *                     |         |      | 00001 = 0.65 * voltage of VDD_G3D                    |             |
 *                     |         |      | 00010 = 0.70 * voltage of VDD_G3D                    |             |
 *                     |         |      | 00011 = 0.75 * voltage of VDD_G3D                    |             |
 *                     |         |      | 00100 = 0.80 * voltage of VDD_G3D                    |             |
 *                     |         |      | 00101 = 0.85 * voltage of VDD_G3D                    |             |
 *                     |         |      | 00110 = 0.90 * voltage of VDD_G3D                    |             |
 *                     |         |      | 00111 = 0.95 * voltage of VDD_G3D                    |             |
 *                     |         |      | 01000 = 1.00 * voltage of VDD_G3D                    |             |
 *                     |         |      | 01001 = 1.05 * voltage of VDD_G3D                    |             |
 *                     |         |      | 01010 = 1.10 * voltage of VDD_G3D                    |             |
 * CODE_PMOS           |  [4:0]  |  RW  | 01011 = 1.15 * voltage of VDD_G3D                    |     0x0     |
 *                     |         |      | 01100 = 1.20 * voltage of VDD_G3D                    |             |
 *                     |         |      | 01101 = 1.25 * voltage of VDD_G3D                    |             |
 *                     |         |      | 01110 = 1.30 * voltage of VDD_G3D                    |             |
 *                     |         |      | 01111 = 1.35 * voltage of VDD_G3D                    |             |
 *                     |         |      | 10000 = 1.40 * voltage of VDD_G3D                    |             |
 *                     |         |      | 10001 = 1.45 * voltage of VDD_G3D                    |             |
 *                     |         |      | 10010 = 1.50 * voltage of VDD_G3D                    |             |
 *                     |         |      | 10011 = 1.55 * voltage of VDD_G3D                    |             |
 *                     |         |      | 10100 = 1.60 * voltage of VDD_G3D                    |             |
 *                     |         |      | 10101 ~ 11111 = Not available                        |             |
 *                     |         |      |                                                      |             |
 *                     |         |      | The voltage of VDD_G3D shall be lower than 1.30V     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                |  [6:5]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Enable G3D block PMOS ABB control                    |             |
 *                     |         |      | 0 = Bypass. Body bias voltage is the voltage of      |             |
 * ENABLE_PMOS         |   [7]   |  RW  | VDD_G3D.                                             |     0x0     |
 *                     |         |      | 1 = Enable PMOS ABB control. Body bias voltage       |             |
 *                     |         |      | is selected by CODE_PMOS.                            |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [30:8]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Selection for G3D block body bias generator control  |             |
 * SEL                 |  [31]   |  RW  | signal.                                              |     0x0     |
 *                     |         |      | 0 = Using internal eFUse                             |             |
 *                     |         |      | 1 = Using BODY_BIAS_CON2                             |             |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union BODY_BIAS_CON2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t CODE_PMOS:5;       //4:0
        uint32_t Reserved0:2;       //6:5
        uint32_t ENABLE_PMOS:1;     //7
        uint32_t Reserved1:23;      //30:8
        uint32_t SEL:1;             //31
    } bits;
} BODY_BIAS_CON2;

/*
 * BODY_BIAS_CON3
 * 
 * Address = POWER Base Address 1 + 0x078C
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | ARM block ABB control valule for PMOS ABB control    |             |
 *                     |         |      | 00000 = 0.60 * voltage of VDD_ARM                    |             |
 *                     |         |      | 00001 = 0.65 * voltage of VDD_ARM                    |             |
 *                     |         |      | 00010 = 0.70 * voltage of VDD_ARM                    |             |
 *                     |         |      | 00011 = 0.75 * voltage of VDD_ARM                    |             |
 *                     |         |      | 00100 = 0.80 * voltage of VDD_ARM                    |             |
 *                     |         |      | 00101 = 0.85 * voltage of VDD_ARM                    |             |
 *                     |         |      | 00110 = 0.90 * voltage of VDD_ARM                    |             |
 *                     |         |      | 00111 = 0.95 * voltage of VDD_ARM                    |             |
 *                     |         |      | 01000 = 1.00 * voltage of VDD_ARM                    |             |
 *                     |         |      | 01001 = 1.05 * voltage of VDD_ARM                    |             |
 *                     |         |      | 01010 = 1.10 * voltage of VDD_ARM                    |             |
 * CODE_PMOS           |  [4:0]  |  RW  | 01011 = 1.15 * voltage of VDD_ARM                    |     0x0     |
 *                     |         |      | 01100 = 1.20 * voltage of VDD_ARM                    |             |
 *                     |         |      | 01101 = 1.25 * voltage of VDD_ARM                    |             |
 *                     |         |      | 01110 = 1.30 * voltage of VDD_ARM                    |             |
 *                     |         |      | 01111 = 1.35 * voltage of VDD_ARM                    |             |
 *                     |         |      | 10000 = 1.40 * voltage of VDD_ARM                    |             |
 *                     |         |      | 10001 = 1.45 * voltage of VDD_ARM                    |             |
 *                     |         |      | 10010 = 1.50 * voltage of VDD_ARM                    |             |
 *                     |         |      | 10011 = 1.55 * voltage of VDD_ARM                    |             |
 *                     |         |      | 10100 = 1.60 * voltage of VDD_ARM                    |             |
 *                     |         |      | 10101 ~ 11111 = Not available                        |             |
 *                     |         |      |                                                      |             |
 *                     |         |      | The voltage of VDD_ARM shall be lower than 1.30V     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                |  [6:5]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Enable ARM block PMOS ABB control                    |             |
 *                     |         |      | 0 = Bypass. Body bias voltage is the voltage of      |             |
 * ENABLE_PMOS         |   [7]   |  RW  | VDD_ARM.                                             |     0x0     |
 *                     |         |      | 1 = Enable PMOS ABB control. Body bias voltage       |             |
 *                     |         |      | is selected by CODE_PMOS.                            |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [30:8]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Selection for ARM block body bias generator control  |             |
 * SEL                 |  [31]   |  RW  | signal.                                              |     0x0     |
 *                     |         |      | 0 = Using internal eFUse                             |             |
 *                     |         |      | 1 = Using BODY_BIAS_CON3                             |             |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union BODY_BIAS_CON3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t CODE_PMOS:5;       //4:0
        uint32_t Reserved0:2;       //6:5
        uint32_t ENABLE_PMOS:1;     //7
        uint32_t Reserved1:23;      //30:8
        uint32_t SEL:1;             //31
    } bits;
} BODY_BIAS_CON3;

/*
 * INFORM0
 * 
 * Address = POWER Base Address 1 + 0x0800
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | User-defined information register. By asserting      |             |
 * ENABLE              | [31:0]  |  RW  | XnRESET pin. PMU clears INFORM0 to 3                 |     0x0     |
 *                     |         |      | registers.                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union INFORM0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ENABLE:32;          //31:0
    } bits;
} INFORM0;

/*
 * INFORM1
 * 
 * Address = POWER Base Address 1 + 0x0804
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | User-defined information register. By asserting      |             |
 * ENABLE              | [31:0]  |  RW  | XnRESET pin. PMU clears INFORM0 to 3                 |     0x0     |
 *                     |         |      | registers.                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union INFORM1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ENABLE:32;          //31:0
    } bits;
} INFORM1;

/*
 * INFORM2
 * 
 * Address = POWER Base Address 1 + 0x0808
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | User-defined information register. By asserting      |             |
 * ENABLE              | [31:0]  |  RW  | XnRESET pin. PMU clears INFORM0 to 3                 |     0x0     |
 *                     |         |      | registers.                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union INFORM2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ENABLE:32;          //31:0
    } bits;
} INFORM2;

/*
 * INFORM3
 * 
 * Address = POWER Base Address 1 + 0x080C
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | User-defined information register. By asserting      |             |
 * ENABLE              | [31:0]  |  RW  | XnRESET pin. PMU clears INFORM0 to 3                 |     0x0     |
 *                     |         |      | registers.                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union INFORM3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ENABLE:32;          //31:0
    } bits;
} INFORM3;

/*
 * INFORM4
 * 
 * Address = POWER Base Address 1 + 0x0810
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                      Description                       | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------|
 * ENABLE              | [31:0]  |  RW  | User-defined information register. Only power-up reset |     0x0     |
 *                     |         |      | clears INFORM4 to 7.                                   |             |
 * ------------------------------------------------------------------------------------------------------------|
 */

typedef union INFORM4_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ENABLE:32;          //31:0
    } bits;
} INFORM4;

/*
 * INFORM5
 * 
 * Address = POWER Base Address 1 + 0x0814
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                      Description                       | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------|
 * ENABLE              | [31:0]  |  RW  | User-defined information register. Only power-up reset |     0x0     |
 *                     |         |      | clears INFORM4 to 7.                                   |             |
 * ------------------------------------------------------------------------------------------------------------|
 */

typedef union INFORM5_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ENABLE:32;          //31:0
    } bits;
} INFORM5;

/*
 * INFORM6
 * 
 * Address = POWER Base Address 1 + 0x0818
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                      Description                       | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------|
 * ENABLE              | [31:0]  |  RW  | User-defined information register. Only power-up reset |     0x0     |
 *                     |         |      | clears INFORM4 to 7.                                   |             |
 * ------------------------------------------------------------------------------------------------------------|
 */

typedef union INFORM6_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ENABLE:32;          //31:0
    } bits;
} INFORM6;

/*
 * INFORM7
 * 
 * Address = POWER Base Address 1 + 0x081C
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                      Description                       | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------|
 * ENABLE              | [31:0]  |  RW  | User-defined information register. Only power-up reset |     0x0     |
 *                     |         |      | clears INFORM4 to 7.                                   |             |
 * ------------------------------------------------------------------------------------------------------------|
 */

typedef union INFORM7_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ENABLE:32;          //31:0
    } bits;
} INFORM7;

/*
 * IROM_DATA_REG0
 * 
 * Address = POWER Base Address 1 + 0x0980
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |              Description               | Reset Value | 
 * --------------------------------------------------------------------------------------------|
 * IROM_DATA           | [31:0]  |  RW  | Data field for IROM code               |     0x0     |
 * --------------------------------------------------------------------------------------------|
 */

typedef union IROM_DATA_REG0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t IROM_DATA:32;          //31:0
    } bits;
} IROM_DATA_REG0;

/*
 * IROM_DATA_REG1
 * 
 * Address = POWER Base Address 1 + 0x0984
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |              Description               | Reset Value | 
 * --------------------------------------------------------------------------------------------|
 * IROM_DATA           | [31:0]  |  RW  | Data field for IROM code               |     0x0     |
 * --------------------------------------------------------------------------------------------|
 */

typedef union IROM_DATA_REG1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t IROM_DATA:32;          //31:0
    } bits;
} IROM_DATA_REG1;

/*
 * IROM_DATA_REG2
 * 
 * Address = POWER Base Address 1 + 0x0988
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |              Description               | Reset Value | 
 * --------------------------------------------------------------------------------------------|
 * IROM_DATA           | [31:0]  |  RW  | Data field for IROM code               |     0x0     |
 * --------------------------------------------------------------------------------------------|
 */

typedef union IROM_DATA_REG2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t IROM_DATA:32;          //31:0
    } bits;
} IROM_DATA_REG2;

/*
 * IROM_DATA_REG3
 * 
 * Address = POWER Base Address 1 + 0x098C
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |              Description               | Reset Value | 
 * --------------------------------------------------------------------------------------------|
 * IROM_DATA           | [31:0]  |  RW  | Data field for IROM code               |     0x0     |
 * --------------------------------------------------------------------------------------------|
 */

typedef union IROM_DATA_REG3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t IROM_DATA:32;          //31:0
    } bits;
} IROM_DATA_REG3;

/*
 * PMU_DEBUG
 * 
 * Address = POWER Base Address 1 + 0x0A00
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                       Description                        | Reset Value | 
 * --------------------------------------------------------------------------------------------------------------|
 * CLKOUT_             |   [0]   |  RW  | When CLKOUT_DISABLE is set to HIGH, PMU                  |     0x0     |
 * DISABLE             |         |      | disables CLKOUT.                                         |             |
 * --------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [7:1]  |  -   | Reserved                                                 |     0x0     |
 * --------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls clock out                                       |             |
 *                     |         |      | 0000 = Clock output signal from CMU_DMC                  |             |
 *                     |         |      | 0001 = Clock output signal from CMU_TOP                  |             |
 *                     |         |      | 0010 = Clock output signal from CMU_LEFTBUS              |             |
 *                     |         |      | 0011 = Clock output signal from CMU_RIGHTUBUS            |             |
 * CLKOUT_SEL          | [11:8]  |  RW  | 0100 = Clock output signal from CMU_CPU                  |     0x0     |
 *                     |         |      | 0101 = Clock output signal from CMU_ISP                  |             |
 *                     |         |      | 1000 = XXTI                                              |             |
 *                     |         |      | 1001 = XUSBXTI                                           |             |
 *                     |         |      | 1100 = RTC TICCLK                                        |             |
 *                     |         |      | 1101 = RTCCLK                                            |             |
 *                     |         |      | 1110 = CLKOUT_DEBUG                                      |             |
 * --------------------------------------------------------------------------------------------------------------|
 * RSVD                | [15:12] |  -   | Reserved                                                 |     0x0     |
 * --------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Debugger signals set selection                           |             |
 * DBG_SEL             | [18:16] |  RW  | Debugging information is available to XEINT port that    |     0x0     |
 *                     |         |      | is configured in GPIO_ALIVE                              |             |
 * --------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [19]   |  -   | Reserved                                                 |     0x0     |
 * --------------------------------------------------------------------------------------------------------------|
 * SELECT_SERIAL_      |         |      | Decides the debug port for serial debug output data.     |             |
 * DEBUG_OUTPUT        | [24:20] |  RW  | This field is effective only when you turn on            |     0x0     |
 * _PORT               |         |      | ENABLE_SERIAL_DEBUG.                                     |             |
 * --------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [25]   |  -   | Reserved                                                 |     0x0     |
 * --------------------------------------------------------------------------------------------------------------|
 * SELECT_POWER        |         |      | Decides the debug port that is used for giving power-    |             |
 * _DOWN_STATE_        | [30:26] |  RW  | down state information.                                  |     0x0     |
 * OUTPUT_PORT         |         |      |                                                          |             |
 * --------------------------------------------------------------------------------------------------------------|
 * ENABLE_SERIAL_      |         |      | When you enable ENABLE_SERIAL_DEBUG, PMU                 |             |
 * DEBUG               |  [31]   |  RW  | generates serial debug output data to external interrupt |     0x0     |
 *                     |         |      | port.                                                    |             |
 * --------------------------------------------------------------------------------------------------------------|
 */

typedef union PMU_DEBUG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t CLKOUT_DISABLE:1;                             //0
        uint32_t Reserved0:7;                                  //7:1
        uint32_t CLKOUT_SEL:4;                                 //11:8
        uint32_t Reserved1:4;                                  //15:12
        uint32_t DBG_SEL:3;                                    //18:16
        uint32_t Reserved2:1;                                  //19
        uint32_t SELECT_SERIAL_DEBUG_OUTPUT_PORT:5;            //24:20
        uint32_t Reserved3:1;                                  //25
        uint32_t SELECT_POWER_DOWN_STATE_OUTPUT_PORT:5;        //30:26
        uint32_t ENABLE_SERIAL_DEBUG:1;                        //31
    } bits;
} PMU_DEBUG;

/*
 * ARM_CORE0_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1000
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down mode |             |
 * SYS_PWR_CFG         |  [1:0]  |  RW  | 0x3 = Power on                                       |     0x3     |
 *                     |         |      | 0x2 = Reset                                          |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             | 0x3FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_CORE0_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:2;        //1:0
        uint32_t Reserved0:30;         //31:2
    } bits;
} ARM_CORE0_SYS_PWR_REG;

/*
 * DIS_IRQ_ARM_CORE0_LOCAL_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1004
 * Reset Value = 0xFFFF_FFFE
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                          |             |
 *                     |         |      | Each bit represents power state in each power-down           |             |
 *                     |         |      | level                                                        |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | HIGH: Power on                                               |     0x0     |
 *                     |         |      | LOW: Power down                                              |             |
 *                     |         |      | By default, field[0] is set to LOW. It sets this register to |             |
 *                     |         |      | HIGH only for debugging purpose.                             |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                                     | 0x7FFFFFFF  |
 * ------------------------------------------------------------------------------------------------------------------|
 */

typedef union DIS_IRQ_ARM_CORE0_LOCAL_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //1:0
        uint32_t Reserved0:31;         //31:2
    } bits;
} DIS_IRQ_ARM_CORE0_LOCAL_SYS_PWR_REG;

/*
 * DIS_IRQ_ARM_CORE0_CENTRAL_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1008
 * Reset Value = 0xFFFF_FFFE
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                          |             |
 *                     |         |      | Each bit represents power state in each power-down           |             |
 *                     |         |      | level                                                        |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | HIGH: Power on                                               |     0x0     |
 *                     |         |      | LOW: Power down                                              |             |
 *                     |         |      | By default, field[0] is set to LOW. It sets this register to |             |
 *                     |         |      | HIGH only for debugging purpose.                             |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                                     | 0x7FFFFFFF  |
 * ------------------------------------------------------------------------------------------------------------------|
 */

typedef union DIS_IRQ_ARM_CORE0_CENTRAL_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //1:0
        uint32_t Reserved0:31;         //31:2
    } bits;
} DIS_IRQ_ARM_CORE0_CENTRAL_SYS_PWR_REG;

/*
 * ARM_CORE1_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1010
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down mode |             |
 * SYS_PWR_CFG         |  [1:0]  |  RW  | 0x3 = Power on                                       |     0x3     |
 *                     |         |      | 0x2 = Reset                                          |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             | 0x3FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_CORE1_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:2;        //1:0
        uint32_t Reserved0:30;         //31:2
    } bits;
} ARM_CORE1_SYS_PWR_REG;

/*
 * DIS_IRQ_ARM_CORE1_LOCAL_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1014
 * Reset Value = 0xFFFF_FFFE
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                          |             |
 *                     |         |      | Each bit represents power state in each power-down           |             |
 *                     |         |      | level                                                        |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | HIGH: Power on                                               |     0x0     |
 *                     |         |      | LOW: Power down                                              |             |
 *                     |         |      | By default, field[0] is set to LOW. It sets this register to |             |
 *                     |         |      | HIGH only for debugging purpose.                             |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                                     | 0x7FFFFFFF  |
 * ------------------------------------------------------------------------------------------------------------------|
 */

typedef union DIS_IRQ_ARM_CORE1_LOCAL_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //1:0
        uint32_t Reserved0:31;         //31:2
    } bits;
} DIS_IRQ_ARM_CORE1_LOCAL_SYS_PWR_REG;

/*
 * DIS_IRQ_ARM_CORE1_CENTRAL_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1018
 * Reset Value = 0xFFFF_FFFE
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                          |             |
 *                     |         |      | Each bit represents power state in each power-down           |             |
 *                     |         |      | level                                                        |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | HIGH: Power on                                               |     0x0     |
 *                     |         |      | LOW: Power down                                              |             |
 *                     |         |      | By default, field[0] is set to LOW. It sets this register to |             |
 *                     |         |      | HIGH only for debugging purpose.                             |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                                     | 0x7FFFFFFF  |
 * ------------------------------------------------------------------------------------------------------------------|
 */

typedef union DIS_IRQ_ARM_CORE1_CENTRAL_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //1:0
        uint32_t Reserved0:31;         //31:2
    } bits;
} DIS_IRQ_ARM_CORE1_CENTRAL_SYS_PWR_REG;

/*
 * ARM_CORE2_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1020
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down mode |             |
 * SYS_PWR_CFG         |  [1:0]  |  RW  | 0x3 = Power on                                       |     0x3     |
 *                     |         |      | 0x2 = Reset                                          |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             | 0x3FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_CORE2_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:2;        //1:0
        uint32_t Reserved0:30;         //31:2
    } bits;
} ARM_CORE2_SYS_PWR_REG;

/*
 * DIS_IRQ_ARM_CORE2_LOCAL_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1024
 * Reset Value = 0xFFFF_FFFE
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                          |             |
 *                     |         |      | Each bit represents power state in each power-down           |             |
 *                     |         |      | level                                                        |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | HIGH: Power on                                               |     0x0     |
 *                     |         |      | LOW: Power down                                              |             |
 *                     |         |      | By default, field[0] is set to LOW. It sets this register to |             |
 *                     |         |      | HIGH only for debugging purpose.                             |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                                     | 0x7FFFFFFF  |
 * ------------------------------------------------------------------------------------------------------------------|
 */

typedef union DIS_IRQ_ARM_CORE2_LOCAL_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //1:0
        uint32_t Reserved0:31;         //31:2
    } bits;
} DIS_IRQ_ARM_CORE2_LOCAL_SYS_PWR_REG;

/*
 * DIS_IRQ_ARM_CORE2_CENTRAL_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1028
 * Reset Value = 0xFFFF_FFFE
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                          |             |
 *                     |         |      | Each bit represents power state in each power-down           |             |
 *                     |         |      | level                                                        |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | HIGH: Power on                                               |     0x0     |
 *                     |         |      | LOW: Power down                                              |             |
 *                     |         |      | By default, field[0] is set to LOW. It sets this register to |             |
 *                     |         |      | HIGH only for debugging purpose.                             |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                                     | 0x7FFFFFFF  |
 * ------------------------------------------------------------------------------------------------------------------|
 */

typedef union DIS_IRQ_ARM_CORE2_CENTRAL_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //1:0
        uint32_t Reserved0:31;         //31:2
    } bits;
} DIS_IRQ_ARM_CORE2_CENTRAL_SYS_PWR_REG;

/*
 * ARM_CORE3_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1030
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down mode |             |
 * SYS_PWR_CFG         |  [1:0]  |  RW  | 0x3 = Power on                                       |     0x3     |
 *                     |         |      | 0x2 = Reset                                          |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             | 0x3FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_CORE3_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:2;        //1:0
        uint32_t Reserved0:30;         //31:2
    } bits;
} ARM_CORE3_SYS_PWR_REG;

/*
 * DIS_IRQ_ARM_CORE3_LOCAL_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1034
 * Reset Value = 0xFFFF_FFFE
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                          |             |
 *                     |         |      | Each bit represents power state in each power-down           |             |
 *                     |         |      | level                                                        |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | HIGH: Power on                                               |     0x0     |
 *                     |         |      | LOW: Power down                                              |             |
 *                     |         |      | By default, field[0] is set to LOW. It sets this register to |             |
 *                     |         |      | HIGH only for debugging purpose.                             |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                                     | 0x7FFFFFFF  |
 * ------------------------------------------------------------------------------------------------------------------|
 */

typedef union DIS_IRQ_ARM_CORE3_LOCAL_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //1:0
        uint32_t Reserved0:31;         //31:2
    } bits;
} DIS_IRQ_ARM_CORE3_LOCAL_SYS_PWR_REG;

/*
 * DIS_IRQ_ARM_CORE3_CENTRAL_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1038
 * Reset Value = 0xFFFF_FFFE
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                          |             |
 *                     |         |      | Each bit represents power state in each power-down           |             |
 *                     |         |      | level                                                        |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | HIGH: Power on                                               |     0x0     |
 *                     |         |      | LOW: Power down                                              |             |
 *                     |         |      | By default, field[0] is set to LOW. It sets this register to |             |
 *                     |         |      | HIGH only for debugging purpose.                             |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                                     | 0x7FFFFFFF  |
 * ------------------------------------------------------------------------------------------------------------------|
 */

typedef union DIS_IRQ_ARM_CORE3_CENTRAL_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //1:0
        uint32_t Reserved0:31;         //31:2
    } bits;
} DIS_IRQ_ARM_CORE3_CENTRAL_SYS_PWR_REG;

/*
 * ISP_ARM_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1050
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down mode |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | leve                                                 |     0x1     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ISP_ARM_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} ISP_ARM_SYS_PWR_REG;

/*
 * DIS_IRQ_ISP_ARM_LOCAL_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1054
 * Reset Value = 0xFFFF_FFFE
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                          |             |
 *                     |         |      | Each bit represents power state in each power-down           |             |
 *                     |         |      | level                                                        |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | HIGH: Power on                                               |     0x0     |
 *                     |         |      | LOW: Power down                                              |             |
 *                     |         |      | By default, field[0] is set to LOW. It sets this register to |             |
 *                     |         |      | HIGH only for debugging purpose.                             |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                                     | 0x7FFFFFFF  |
 * ------------------------------------------------------------------------------------------------------------------|
 */

typedef union DIS_IRQ_ISP_ARM_LOCAL_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //1:0
        uint32_t Reserved0:31;         //31:2
    } bits;
} DIS_IRQ_ISP_ARM_LOCAL_SYS_PWR_REG;

/*
 * DIS_IRQ_ISP_ARM_CENTRAL_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1058
 * Reset Value = 0xFFFF_FFFE
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                          |             |
 *                     |         |      | Each bit represents power state in each power-down           |             |
 *                     |         |      | level                                                        |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | HIGH: Power on                                               |     0x0     |
 *                     |         |      | LOW: Power down                                              |             |
 *                     |         |      | By default, field[0] is set to LOW. It sets this register to |             |
 *                     |         |      | HIGH only for debugging purpose.                             |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                                     | 0x7FFFFFFF  |
 * ------------------------------------------------------------------------------------------------------------------|
 */

typedef union DIS_IRQ_ISP_ARM_CENTRAL_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //1:0
        uint32_t Reserved0:31;         //31:2
    } bits;
} DIS_IRQ_ISP_ARM_CENTRAL_SYS_PWR_REG;

/*
 * ARM_COMMON_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1080
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down mode |             |
 * SYS_PWR_CFG         |  [1:0]  |  RW  | 0x3 = Power on                                       |     0x3     |
 *                     |         |      | 0x2 = Reset                                          |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             | 0x3FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_COMMON_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:2;        //1:0
        uint32_t Reserved0:30;         //31:2
    } bits;
} ARM_COMMON_SYS_PWR_REG;

/*
 * ARM_L2_0_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x10C0
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down mode |             |
 * SYS_PWR_CFG         |  [1:0]  |  RW  | 0x3 = Power on                                       |     0x3     |
 *                     |         |      | 0x2 = Reset                                          |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             | 0x3FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_L2_0_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:2;        //1:0
        uint32_t Reserved0:30;         //31:2
    } bits;
} ARM_L2_0_SYS_PWR_REG;

/*
 * ARM_L2_1_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x10C4
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down mode |             |
 * SYS_PWR_CFG         |  [1:0]  |  RW  | 0x3 = Power on                                       |     0x3     |
 *                     |         |      | 0x2 = Reset                                          |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             | 0x3FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_L2_1_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:2;        //1:0
        uint32_t Reserved0:30;         //31:2
    } bits;
} ARM_L2_1_SYS_PWR_REG;

/*
 * CMU_ACLKSTOP_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1100
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_ACLKSTOP_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_ACLKSTOP_SYS_PWR_REG;

/*
 * CMU_SCLKSTOP_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1104
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_SCLKSTOP_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_SCLKSTOP_SYS_PWR_REG;

/*
 * CMU_RESET_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x110C
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_RESET_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_RESET_SYS_PWR_REG;

/*
 * CMU_ACLKSTOP_COREBLK_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1110
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | leve                                                 |     0x1     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_ACLKSTOP_COREBLK_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_ACLKSTOP_COREBLK_SYS_PWR_REG;

/*
 * CMU_SCLKSTOP_COREBLK_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1114
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | leve                                                 |     0x1     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_SCLKSTOP_COREBLK_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_SCLKSTOP_COREBLK_SYS_PWR_REG;

/*
 * CMU_RESET_COREBLK_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x111C
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | leve                                                 |     0x1     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_RESET_COREBLK_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_RESET_COREBLK_SYS_PWR_REG;

/*
 * APLL_SYSCLK_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1120
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union APLL_SYSCLK_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} APLL_SYSCLK_SYS_PWR_REG;

/*
 * MPLL_SYSCLK_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1124
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union MPLL_SYSCLK_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} MPLL_SYSCLK_SYS_PWR_REG;

/*
 * VPLL_SYSCLK_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1128
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union VPLL_SYSCLK_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} VPLL_SYSCLK_SYS_PWR_REG;

/*
 * EPLL_SYSCLK_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x112C
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union EPLL_SYSCLK_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} EPLL_SYSCLK_SYS_PWR_REG;

/*
 * MPLLUSER_SYSCLK_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1130
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | leve                                                 |     0x1     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union MPLLUSER_SYSCLK_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} MPLLUSER_SYSCLK_SYS_PWR_REG;

/*
 * CMU_CLKSTOP_GPS_ALIVE_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1138
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_CLKSTOP_GPS_ALIVE_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_CLKSTOP_GPS_ALIVE_SYS_PWR_REG;

/*
 * CMU_RESET_GPS_ALIVE_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x113C
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_RESET_GPS_ALIVE_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_RESET_GPS_ALIVE_SYS_PWR_REG;

/*
 * CMU_CLKSTOP_CAM_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1140
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_CLKSTOP_CAM_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_CLKSTOP_CAM_SYS_PWR_REG;

/*
 * CMU_CLKSTOP_TV_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1144
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_CLKSTOP_TV_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_CLKSTOP_TV_SYS_PWR_REG;

/*
 * CMU_CLKSTOP_MFC_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1148
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_CLKSTOP_MFC_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_CLKSTOP_MFC_SYS_PWR_REG;

/*
 * CMU_CLKSTOP_G3D_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x114C
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_CLKSTOP_G3D_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_CLKSTOP_G3D_SYS_PWR_REG;

/*
 * CMU_CLKSTOP_LCD0_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1150
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_CLKSTOP_LCD0_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_CLKSTOP_LCD0_SYS_PWR_REG;

/*
 * CMU_CLKSTOP_ISP_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1154
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_CLKSTOP_ISP_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_CLKSTOP_ISP_SYS_PWR_REG;

/*
 * CMU_CLKSTOP_MAUDIO_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1158
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_CLKSTOP_MAUDIO_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_CLKSTOP_MAUDIO_SYS_PWR_REG;

/*
 * CMU_CLKSTOP_GPS_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x115C
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_CLKSTOP_GPS_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_CLKSTOP_GPS_SYS_PWR_REG;

/*
 * CMU_RESET_CAM_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1160
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_RESET_CAM_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_RESET_CAM_SYS_PWR_REG;

/*
 * CMU_RESET_TV_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1164
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_RESET_TV_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_RESET_TV_SYS_PWR_REG;

/*
 * CMU_RESET_MFC_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1168
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_RESET_MFC_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_RESET_MFC_SYS_PWR_REG;

/*
 * CMU_RESET_G3D_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x116C
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_RESET_G3D_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_RESET_G3D_SYS_PWR_REG;

/*
 * CMU_RESET_LCD0_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1170
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_RESET_LCD0_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_RESET_LCD0_SYS_PWR_REG;

/*
 * CMU_RESET_ISP_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1174
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_RESET_ISP_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_RESET_ISP_SYS_PWR_REG;

/*
 * CMU_RESET_MAUDIO_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1178
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_RESET_MAUDIO_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_RESET_MAUDIO_SYS_PWR_REG;

/*
 * CMU_RESET_GPS_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x117C
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_RESET_GPS_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_RESET_GPS_SYS_PWR_REG;

/*
 * TOP_BUS_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1180
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |  [1:0]  |  RW  | mode                                                 |     0x3     |
 *                     |         |      | 0x3 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x3FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union TOP_BUS_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:2;        //0
        uint32_t Reserved0:30;         //31:1
    } bits;
} TOP_BUS_SYS_PWR_REG;

/*
 * TOP_RETENTION_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1184
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union TOP_RETENTION_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} TOP_RETENTION_SYS_PWR_REG;

/*
 * TOP_PWR_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1188
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |  [1:0]  |  RW  | mode                                                 |     0x3     |
 *                     |         |      | 0x3 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x3FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union TOP_PWR_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} TOP_PWR_SYS_PWR_REG;

/*
 * TOP_BUS_COREBLK_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1190
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |  [1:0]  |  RW  | leve                                                 |     0x3     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x3FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union TOP_BUS_COREBLK_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:2;        //1:0
        uint32_t Reserved0:30;         //31:2
    } bits;
} TOP_BUS_COREBLK_SYS_PWR_REG;

/*
 * TOP_RETENTION_COREBLK_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1194
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | leve                                                 |     0x1     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union TOP_RETENTION_COREBLK_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} TOP_RETENTION_COREBLK_SYS_PWR_REG;

/*
 * TOP_PWR_COREBLK_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1198
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | leve                                                 |     0x1     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union TOP_PWR_COREBLK_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} TOP_PWR_COREBLK_SYS_PWR_REG;

/*
 * LOGIC_RESET_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x11A0
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union LOGIC_RESET_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} LOGIC_RESET_SYS_PWR_REG;

/*
 * OSCCLK_GATE_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x11A4
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | leve                                                 |     0x1     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union OSCCLK_GATE_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} OSCCLK_GATE_SYS_PWR_REG;

/*
 * LOGIC_RESET_COREBLK_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x11B0
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | leve                                                 |     0x1     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union LOGIC_RESET_COREBLK_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} LOGIC_RESET_COREBLK_SYS_PWR_REG;

/*
 * OSCCLK_GATE_COREBLK_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x11B4
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | leve                                                 |     0x1     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union OSCCLK_GATE_COREBLK_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} OSCCLK_GATE_COREBLK_SYS_PWR_REG;

/*
 * OneNANDXL_MEM_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x11C0
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |  [1:0]  |  RW  | mode                                                 |     0x3     |
 *                     |         |      | 0x3 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x3FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union OneNANDXL_MEM_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:2;        //1:0
        uint32_t Reserved0:30;         //31:2
    } bits;
} OneNANDXL_MEM_SYS_PWR_REG;

/*
 * HSI_MEM_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x11C4
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |  [1:0]  |  RW  | leve                                                 |     0x3     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             | 0x3FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union HSI_MEM_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:2;        //1:0
        uint32_t Reserved0:30;         //31:2
    } bits;
} HSI_MEM_SYS_PWR_REG;

/*
 * G2D_ACP_MEM_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x11C8
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |  [1:0]  |  RW  | mode                                                 |     0x3     |
 *                     |         |      | 0x3 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             | 0x3FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union G2D_ACP_MEM_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:2;        //1:0
        uint32_t Reserved0:30;         //31:2
    } bits;
} G2D_ACP_MEM_SYS_PWR_REG;

/*
 * UBSOG_MEM_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x11CC
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |  [1:0]  |  RW  | mode                                                 |     0x3     |
 *                     |         |      | 0x3 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             | 0x3FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union UBSOG_MEM_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:2;        //1:0
        uint32_t Reserved0:30;         //31:2
    } bits;
} UBSOG_MEM_SYS_PWR_REG;

/*
 * SDMMC_MEM_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x11D0
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |  [1:0]  |  RW  | mode                                                 |     0x3     |
 *                     |         |      | 0x3 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             | 0x3FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union SDMMC_MEM_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:2;        //1:0
        uint32_t Reserved0:30;         //31:2
    } bits;
} SDMMC_MEM_SYS_PWR_REG;

/*
 * CSSYS_MEM_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x11D4
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |  [1:0]  |  RW  | mode                                                 |     0x3     |
 *                     |         |      | 0x3 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             | 0x3FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CSSYS_MEM_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:2;        //1:0
        uint32_t Reserved0:30;         //31:2
    } bits;
} CSSYS_MEM_SYS_PWR_REG;

/*
 * SECSS_MEM_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x11D8
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |  [1:0]  |  RW  | mode                                                 |     0x3     |
 *                     |         |      | 0x3 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             | 0x3FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union SECSS_MEM_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:2;        //1:0
        uint32_t Reserved0:30;         //31:2
    } bits;
} SECSS_MEM_SYS_PWR_REG;

/*
 * ROTATOR_MEM_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x11DC
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |  [1:0]  |  RW  | leve                                                 |     0x3     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             | 0x3FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ROTATOR_MEM_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:2;        //1:0
        uint32_t Reserved0:30;         //31:2
    } bits;
} ROTATOR_MEM_SYS_PWR_REG;

/*
 * PAD_RETENTION_DRAM_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1200
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union PAD_RETENTION_DRAM_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} PAD_RETENTION_DRAM_SYS_PWR_REG;

/*
 * PAD_RETENTION_MAUDIO_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1204
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union PAD_RETENTION_MAUDIO_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} PAD_RETENTION_MAUDIO_SYS_PWR_REG;

/*
 * PAD_RETENTION_GPIO_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1220
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union PAD_RETENTION_GPIO_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} PAD_RETENTION_GPIO_SYS_PWR_REG;

/*
 * PAD_RETENTION_UART_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1224
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union PAD_RETENTION_UART_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} PAD_RETENTION_UART_SYS_PWR_REG;

/*
 * PAD_RETENTION_MMCA_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1228
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union PAD_RETENTION_MMCA_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} PAD_RETENTION_MMCA_SYS_PWR_REG;

/*
 * PAD_RETENTION_MMCB_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x122C
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union PAD_RETENTION_MMCB_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} PAD_RETENTION_MMCB_SYS_PWR_REG;

/*
 * PAD_RETENTION_EBIA_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1230
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union PAD_RETENTION_EBIA_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} PAD_RETENTION_EBIA_SYS_PWR_REG;

/*
 * PAD_RETENTION_EBIB_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1234
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union PAD_RETENTION_EBIB_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} PAD_RETENTION_EBIB_SYS_PWR_REG;

/*
 * PAD_RETENTION_GPIO_COREBLK_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x123C
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | leve                                                 |     0x1     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union PAD_RETENTION_GPIO_COREBLK_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} PAD_RETENTION_GPIO_COREBLK_SYS_PWR_REG;

/*
 * PAD_ISOLATION_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1240
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union PAD_ISOLATION_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} PAD_ISOLATION_SYS_PWR_REG;

/*
 * PAD_ISOLATION_COREBLK_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1250
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | leve                                                 |     0x1     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union PAD_ISOLATION_COREBLK_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} PAD_ISOLATION_COREBLK_SYS_PWR_REG;

/*
 * PAD_ALV_SEL_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1260
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union PAD_ALV_SEL_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} PAD_ALV_SEL_SYS_PWR_REG;

/*
 * XUSBXTI_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1280
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union XUSBXTI_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} XUSBXTI_SYS_PWR_REG;

/*
 * XXTI_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1284
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union XXTI_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} XXTI_SYS_PWR_REG;

/*
 * EXT_REGULATOR_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x12C0
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union EXT_REGULATOR_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} EXT_REGULATOR_SYS_PWR_REG;

/*
 * GPIO_MODE_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1300
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union GPIO_MODE_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} GPIO_MODE_SYS_PWR_REG;

/*
 * GPIO_MODE_COREBLK_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1320
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | leve                                                 |     0x1     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union GPIO_MODE_COREBLK_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} GPIO_MODE_COREBLK_SYS_PWR_REG;

/*
 * GPIO_MODE_MAUDIO_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1340
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | mode                                                 |     0x1     |
 *                     |         |      | 0x1 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union GPIO_MODE_MAUDIO_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} GPIO_MODE_MAUDIO_SYS_PWR_REG;

/*
 * TOP_ASB_RESET_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1344
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | leve                                                 |     0x1     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union TOP_ASB_RESET_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} TOP_ASB_RESET_SYS_PWR_REG;

/*
 * TOP_ASB_ISOLATION_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1348
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | leve                                                 |     0x1     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union TOP_ASB_ISOLATION_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} TOP_ASB_ISOLATION_SYS_PWR_REG;

/*
 * TV_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1384
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |  [2:0]  |  RW  | mode                                                 |     0x7     |
 *                     |         |      | 0x7 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             | 0x1FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union TV_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:3;        //2:0
        uint32_t Reserved0:29;         //31:3
    } bits;
} TV_SYS_PWR_REG;

/*
 * MFC_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1388
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |  [2:0]  |  RW  | mode                                                 |     0x7     |
 *                     |         |      | 0x7 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             | 0x1FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union MFC_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:3;        //2:0
        uint32_t Reserved0:29;         //31:3
    } bits;
} MFC_SYS_PWR_REG;

/*
 * G3D_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x138C
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |  [2:0]  |  RW  | mode                                                 |     0x7     |
 *                     |         |      | 0x7 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             | 0x1FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union G3D_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:3;        //2:0
        uint32_t Reserved0:29;         //31:3
    } bits;
} G3D_SYS_PWR_REG;

/*
 * LCD0_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1390
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |  [2:0]  |  RW  | mode                                                 |     0x7     |
 *                     |         |      | 0x7 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             | 0x1FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union LCD0_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:3;        //2:0
        uint32_t Reserved0:29;         //31:3
    } bits;
} LCD0_SYS_PWR_REG;

/*
 * ISP_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1394
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |  [2:0]  |  RW  | leve                                                 |     0x7     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             | 0x1FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ISP_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:3;        //2:0
        uint32_t Reserved0:29;         //31:3
    } bits;
} ISP_SYS_PWR_REG;

/*
 * MAUDIO_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x1398
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |  [2:0]  |  RW  | mode                                                 |     0x7     |
 *                     |         |      | 0x7 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             | 0x1FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union MAUDIO_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:3;        //2:0
        uint32_t Reserved0:29;         //31:3
    } bits;
} MAUDIO_SYS_PWR_REG;

/*
 * GPS_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x139C
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |  [2:0]  |  RW  | mode                                                 |     0x7     |
 *                     |         |      | 0x7 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             | 0x1FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union GPS_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:3;        //2:0
        uint32_t Reserved0:29;         //31:3
    } bits;
} GPS_SYS_PWR_REG;

/*
 * GPS_ALIVE_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x13A0
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in system-level power-down      |             |
 * SYS_PWR_CFG         |  [2:0]  |  RW  | mode                                                 |     0x7     |
 *                     |         |      | 0x7 = Power on                                       |             |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             | 0x1FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union GPS_ALIVE_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:3;        //2:0
        uint32_t Reserved0:29;         //31:3
    } bits;
} GPS_ALIVE_SYS_PWR_REG;

/*
 * DRAM_FREQ_DOWN_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x13B0
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | leve                                                 |     0x1     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union DRAM_FREQ_DOWN_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} DRAM_FREQ_DOWN_SYS_PWR_REG;

/*
 * DDRPHY_DDLOFF_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x13B4
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | leve                                                 |     0x1     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union DDRPHY_DDLOFF_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} DDRPHY_DDLOFF_SYS_PWR_REG;

/*
 * CMU_SYSCLK_ISP_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x13B8
 * Reset Value = 0xFFFF_FFFE
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | leve                                                 |     0x0     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_SYSCLK_ISP_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_SYSCLK_ISP_SYS_PWR_REG;

/*
 * CMU_SYSCLK_GPS_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x13BC
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | leve                                                 |     0x1     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CMU_SYSCLK_GPS_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} CMU_SYSCLK_GPS_SYS_PWR_REG;

/*
 * LPDDR_PHY_DLL_LOCK_SYS_PWR_REG
 * 
 * Address = POWER Base Address 1 + 0x13C0
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * SYS_PWR_CFG         |   [0]   |  RW  | leve                                                 |     0x1     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             | 0x7FFFFFFF  |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union LPDDR_PHY_DLL_LOCK_SYS_PWR_REG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYS_PWR_CFG:1;        //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} LPDDR_PHY_DLL_LOCK_SYS_PWR_REG;

/*
 * ARM_CORE0_CONFIGURATION
 * 
 * Address = POWER Base Address 1 + 0x2000
 * Reset Value = 0x0000_0003
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in NORMAL mode                  |             |
 * LOCAL_PWR_CFG       |  [1:0]  | RWX  | 0x3 = Power on                                       |     0x3     |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_CORE0_CONFIGURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t LOCAL_PWR_CFG:2;      //1:0
        uint32_t Reserved0:30;         //31:2
    } bits;
} ARM_CORE0_CONFIGURATION;

/*
 * ARM_CORE0_STATUS
 * 
 * Address = POWER Base Address 1 + 0x2004
 * Reset Value = 0x0003_0003
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Verifies power state in NORMAL mode                  |             |
 * STATUS              |  [1:0]  |  R   | 0x3 = Power on                                       |     0x3     |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             |   0xC000    |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_CORE0_STATUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t STATUS:2;          //1:0
        uint32_t Reserved0:30;      //31:2
    } bits;
} ARM_CORE0_STATUS;

/*
 * ARM_CORE0_OPTION
 * 
 * Address = POWER Base Address 1 + 0x2008
 * Reset Value = 0x0101_0001
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses counter to measure power on/off duration of     |             |
 * USE_SC_             |   [0]   | RWX  | ARM_CORE0.                                           |     0x1     |
 * COUNTER             |         |      | 0x1 = Enable                                         |             |
 *                     |         |      | 0x0 = Disable                                        |             |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses power control feedback to measure power on/off  |             |
 * USE_SC_             |   [1]   | RWX  | duration of ARM_CORE0.                               |     0x0     |
 * FEEDBACK            |         |      | 0x1 = Enable                                         |             |
 *                     |         |      | 0x0 = Disable                                        |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [11:2]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * USE_DELAYED_        |         |      | Decide whether the PMU delays assertion of reset of  |             |
 * RESET_              |  [12]   | RWX  | ARM_CORE until power is re-supplied or not.          |     0x0     |
 * ASSERTION           |         |      | 0x1 = Delayed reset assertion                        |             |
 *                     |         |      | 0x0 = Normal reset assertion                         |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:13] |  -   | Reserved                                             |   0x00808   |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_CORE0_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t USE_SC_COUNTER:1;                  //0
        uint32_t USE_SC_FEEDBACK:1;                 //1
        uint32_t Reserved0:10;                      //11:2
        uint32_t USE_DELAYED_RESET_ASSERTION:1;     //12
        uint32_t Reserved1:19;                      //31:13
    } bits;
} ARM_CORE0_OPTION;

/*
 * ARM_CORE1_CONFIGURATION
 * 
 * Address = POWER Base Address 1 + 0x2080
 * Reset Value = 0x0000_0003
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in NORMAL mode                  |             |
 * LOCAL_PWR_CFG       |  [1:0]  | RWX  | 0x3 = Power on                                       |     0x3     |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_CORE1_CONFIGURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t LOCAL_PWR_CFG:2;      //1:0
        uint32_t Reserved0:30;         //31:2
    } bits;
} ARM_CORE1_CONFIGURATION;

/*
 * ARM_CORE1_STATUS
 * 
 * Address = POWER Base Address 1 + 0x2084
 * Reset Value = 0x0003_0003
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Verifies power state in NORMAL mode                  |             |
 * STATUS              |  [1:0]  |  R   | 0x3 = Power on                                       |     0x3     |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             |   0xC000    |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_CORE1_STATUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t STATUS:2;          //1:0
        uint32_t Reserved0:30;      //31:2
    } bits;
} ARM_CORE1_STATUS;

/*
 * ARM_CORE1_OPTION
 * 
 * Address = POWER Base Address 1 + 0x2088
 * Reset Value = 0x0101_0001
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses counter to measure power on/off duration of     |             |
 * USE_SC_             |   [0]   | RWX  | ARM_CORE1.                                           |     0x1     |
 * COUNTER             |         |      | 0x1 = Enable                                         |             |
 *                     |         |      | 0x0 = Disable                                        |             |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses power control feedback to measure power on/off  |             |
 * USE_SC_             |   [1]   | RWX  | duration of ARM_CORE1.                               |     0x0     |
 * FEEDBACK            |         |      | 0x1 = Enable                                         |             |
 *                     |         |      | 0x0 = Disable                                        |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [11:2]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * USE_DELAYED_        |         |      | Decide whether the PMU delays assertion of reset of  |             |
 * RESET_              |  [12]   | RWX  | ARM_CORE until power is re-supplied or not.          |     0x0     |
 * ASSERTION           |         |      | 0x1 = Delayed reset assertion                        |             |
 *                     |         |      | 0x0 = Normal reset assertion                         |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:13] |  -   | Reserved                                             |   0x00808   |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_CORE1_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t USE_SC_COUNTER:1;                  //0
        uint32_t USE_SC_FEEDBACK:1;                 //1
        uint32_t Reserved0:10;                      //11:2
        uint32_t USE_DELAYED_RESET_ASSERTION:1;     //12
        uint32_t Reserved1:19;                      //31:13
    } bits;
} ARM_CORE1_OPTION;

/*
 * ARM_CORE2_CONFIGURATION
 * 
 * Address = POWER Base Address 1 + 0x2100
 * Reset Value = 0x0000_0003
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in NORMAL mode                  |             |
 * LOCAL_PWR_CFG       |  [1:0]  | RWX  | 0x3 = Power on                                       |     0x3     |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_CORE2_CONFIGURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t LOCAL_PWR_CFG:2;      //1:0
        uint32_t Reserved0:30;         //31:2
    } bits;
} ARM_CORE2_CONFIGURATION;

/*
 * ARM_CORE2_STATUS
 * 
 * Address = POWER Base Address 1 + 0x2104
 * Reset Value = 0x0003_0003
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Verifies power state in NORMAL mode                  |             |
 * STATUS              |  [1:0]  |  R   | 0x3 = Power on                                       |     0x3     |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             |   0xC000    |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_CORE2_STATUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t STATUS:2;          //1:0
        uint32_t Reserved0:30;      //31:2
    } bits;
} ARM_CORE2_STATUS;

/*
 * ARM_CORE2_OPTION
 * 
 * Address = POWER Base Address 1 + 0x2108
 * Reset Value = 0x0101_0001
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses counter to measure power on/off duration of     |             |
 * USE_SC_             |   [0]   | RWX  | ARM_CORE2.                                           |     0x1     |
 * COUNTER             |         |      | 0x1 = Enable                                         |             |
 *                     |         |      | 0x0 = Disable                                        |             |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses power control feedback to measure power on/off  |             |
 * USE_SC_             |   [1]   | RWX  | duration of ARM_CORE2.                               |     0x0     |
 * FEEDBACK            |         |      | 0x1 = Enable                                         |             |
 *                     |         |      | 0x0 = Disable                                        |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [11:2]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * USE_DELAYED_        |         |      | Decide whether the PMU delays assertion of reset of  |             |
 * RESET_              |  [12]   | RWX  | ARM_CORE until power is re-supplied or not.          |     0x0     |
 * ASSERTION           |         |      | 0x1 = Delayed reset assertion                        |             |
 *                     |         |      | 0x0 = Normal reset assertion                         |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:13] |  -   | Reserved                                             |   0x00808   |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_CORE2_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t USE_SC_COUNTER:1;                  //0
        uint32_t USE_SC_FEEDBACK:1;                 //1
        uint32_t Reserved0:10;                      //11:2
        uint32_t USE_DELAYED_RESET_ASSERTION:1;     //12
        uint32_t Reserved1:19;                      //31:13
    } bits;
} ARM_CORE2_OPTION;

/*
 * ARM_CORE3_CONFIGURATION
 * 
 * Address = POWER Base Address 1 + 0x2180
 * Reset Value = 0x0000_0003
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in NORMAL mode                  |             |
 * LOCAL_PWR_CFG       |  [1:0]  | RWX  | 0x3 = Power on                                       |     0x3     |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_CORE3_CONFIGURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t LOCAL_PWR_CFG:2;      //1:0
        uint32_t Reserved0:30;         //31:2
    } bits;
} ARM_CORE3_CONFIGURATION;

/*
 * ARM_CORE3_STATUS
 * 
 * Address = POWER Base Address 1 + 0x2184
 * Reset Value = 0x0003_0003
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Verifies power state in NORMAL mode                  |             |
 * STATUS              |  [1:0]  |  R   | 0x3 = Power on                                       |     0x3     |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             |   0xC000    |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_CORE3_STATUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t STATUS:2;          //1:0
        uint32_t Reserved0:30;      //31:2
    } bits;
} ARM_CORE3_STATUS;

/*
 * ARM_CORE3_OPTION
 * 
 * Address = POWER Base Address 1 + 0x2188
 * Reset Value = 0x0101_0001
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses counter to measure power on/off duration of     |             |
 * USE_SC_             |   [0]   | RWX  | ARM_CORE0.                                           |     0x1     |
 * COUNTER             |         |      | 0x1 = Enable                                         |             |
 *                     |         |      | 0x0 = Disable                                        |             |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses power control feedback to measure power on/off  |             |
 * USE_SC_             |   [1]   | RWX  | duration of ARM_CORE0.                               |     0x0     |
 * FEEDBACK            |         |      | 0x1 = Enable                                         |             |
 *                     |         |      | 0x0 = Disable                                        |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [11:2]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * USE_DELAYED_        |         |      | Decide whether the PMU delays assertion of reset of  |             |
 * RESET_              |  [12]   | RWX  | ARM_CORE until power is re-supplied or not.          |     0x0     |
 * ASSERTION           |         |      | 0x1 = Delayed reset assertion                        |             |
 *                     |         |      | 0x0 = Normal reset assertion                         |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:13] |  -   | Reserved                                             |   0x00808   |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_CORE3_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t USE_SC_COUNTER:1;                  //0
        uint32_t USE_SC_FEEDBACK:1;                 //1
        uint32_t Reserved0:10;                      //11:2
        uint32_t USE_DELAYED_RESET_ASSERTION:1;     //12
        uint32_t Reserved1:19;                      //31:13
    } bits;
} ARM_CORE3_OPTION;

/*
 * ISP_ARM_CONFIGURATION
 * 
 * Address = POWER Base Address 1 + 0x2280
 * Reset Value = 0x0000_0001
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in LOWPWR mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * LOCAL_PWR_CFG       |   [0]   |  RW  | leve                                                 |     0x1     |
 *                     |         |      | HIGH: Run                                            |             |
 *                     |         |      | LOW: Reset                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ISP_ARM_CONFIGURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t LOCAL_PWR_CFG:1;      //0
        uint32_t Reserved0:31;         //31:1
    } bits;
} ISP_ARM_CONFIGURATION;

/*
 * ISP_ARM_STATUS
 * 
 * Address = POWER Base Address 1 + 0x2284
 * Reset Value = 0x0000_0001
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Verifies power state in NORMAL Mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * STATUS              |   [0]   |  R   | leve                                                 |     0x1     |
 *                     |         |      | HIGH: Run                                            |             |
 *                     |         |      | LOW: Reset                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [15:1]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * STATES              | [18:16] |  R   | Verifies state machine status                        |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:19] |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ISP_ARM_STATUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t STATUS:1;          //0
        uint32_t Reserved0:15;      //15:1
        uint32_t STATES:3;          //18:16
        uint32_t Reserved1:13;      //31:19
    } bits;
} ISP_ARM_STATUS;

/*
 * ISP_ARM_OPTION
 * 
 * Address = POWER Base Address 1 + 0x2288
 * Reset Value = 0x0101_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [14:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * ENABLE              |  [15]   | RWX  | By default, PMU disables ISP_ARM. Write 0x1 to this  |     0x0     |
 *                     |         |      | field to enable ISP_ARM.                             |             |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses STANDBYWFI for judging whether ARM is           |             |
 *                     |         |      | ready for entering low-power mode.                   |             |
 *                     |         |      | You should activate either USE_STANDBYWFI or         |             |
 * USE_                |  [16]   | RWX  | USE_STANDBYWFE at a time.                            |     0x1     |
 * STANDBYWFI          |         |      | Updates changes on USE_STANDBYWFI_ISP_ARM            |             |
 *                     |         |      | field of CENTRAL_SEQ_OPTION register                 |             |
 *                     |         |      | automatically in this field.                         |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [23:17] |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses STANDBYWFE for judging whether ARM is           |             |
 *                     |         |      | ready for entering low-power mode.                   |             |
 *                     |         |      | Either one of USE_STANDBYWFI or                      |             |
 * USE_                |  [24]   | RWX  | USE_STANDBYWFE should be activated at a time.        |     0x1     |
 * STANDBYWFE          |         |      | Updates changes on USE_STANDBYWFI_ISP_ARM            |             |
 *                     |         |      | field of CENTRAL_SEQ_OPTION register                 |             |
 *                     |         |      | automatically in this field.                         |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:25] |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ISP_ARM_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:15;          //14:0
        uint32_t ENABLE:1;              //15
        uint32_t USE_STANDBYWFI:1;      //16
        uint32_t Reserved0:7;           //23:17
        uint32_t USE_STANDBYWFE:1;      //24
        uint32_t Reserved1:7;           //31:25
    } bits;
} ISP_ARM_OPTION;

/*
 * ARM_COMMON_OPTION
 * 
 * Address = POWER Base Address 1 + 0x2408
 * Reset Value = 0x0000_0001
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses counter to measure power on/off duration of     |             |
 * USE_SC_             |   [0]   | RWX  | ARM_CORE0.                                           |     0x1     |
 * COUNTER             |         |      | 0x1 = Enable                                         |             |
 *                     |         |      | 0x0 = Disable                                        |             |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses power control feedback to measure power on/off  |             |
 * USE_SC_             |   [1]   | RWX  | duration of ARM_CORE0.                               |     0x0     |
 * FEEDBACK            |         |      | 0x1 = Enable                                         |             |
 *                     |         |      | 0x0 = Disable                                        |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             |  0x0000000  |
 * ----------------------------------------------------------------------------------------------------------|
 * 
 * NOTE : Either one of USE_SC_FEEDBACK and USE_SC_COUNTER should be activated.
 */

typedef union ARM_COMMON_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t USE_SC_COUNTER:1;      //0
        uint32_t USE_SC_FEEDBACK:1;     //1
        uint32_t Reserved0:30;          //11:2
    } bits;
} ARM_COMMON_OPTION;

/*
 * ARM_L2_0_CONFIGURATION
 * 
 * Address = POWER Base Address 1 + 0x2600
 * Reset Value = 0x0000_0003
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in NORMAL mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * LOCAL_PWR_CFG       |  [1:0]  |  RW  | level                                                |     0x3     |
 *                     |         |      | 0x3 = Power on                                       |             |
 *                     |         |      | 0x0 = Power off when USE_RETENTION is "0",           |             |
 *                     |         |      | Power retention when USE_RETENTION is "1".           |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_L2_0_CONFIGURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t LOCAL_PWR_CFG:2;      //1:0
        uint32_t Reserved0:30;         //31:2
    } bits;
} ARM_L2_0_CONFIGURATION;

/*
 * ARM_L2_0_STATUS
 * 
 * Address = POWER Base Address 1 + 0x2604
 * Reset Value = 0x0000_0003
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Verifies power state in NORMAL mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * STATUS              |  [1:0]  |  R   | level.                                               |     0x3     |
 *                     |         |      | 0x3 = Power on                                       |             |
 *                     |         |      | 0x0 = Power off when USE_RETENTION is "0",           |             |
 *                     |         |      | Power retention when USE_RETENTION is "1".           |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_L2_0_STATUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t STATUS:2;          //1:0
        uint32_t Reserved0:30;      //31:2
    } bits;
} ARM_L2_0_STATUS;

/*
 * ARM_L2_0_OPTION
 * 
 * Address = POWER Base Address 1 + 0x2608
 * Reset Value = 0x0000_0010
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                |  [3:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * USE_RETENTION       |   [4]   |  RW  | Decides whether to use retention capability.         |     0x1     |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [19:5]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * IGNORE_OUTPUT       |         |      | By default, some state waits until Reset/CLAMPOUT    |             |
 * _UPDATE_DONE        |  [20]   |  RW  | is properly updated to loads.                        |     0x0     |
 *                     |         |      | This field disables this waiting function.           |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:21] |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_L2_0_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:4;                       //3:0
        uint32_t USE_RETENTION:1;                   //4
        uint32_t Reserved1:15;                      //19:5
        uint32_t IGNORE_OUTPUT_UPDATE_DONE:1;       //20
        uint32_t Reserved2:11;                      //31:21
    } bits;
} ARM_L2_0_OPTION;

/*
 * ARM_L2_1_CONFIGURATION
 * 
 * Address = POWER Base Address 1 + 0x2620
 * Reset Value = 0x0000_0003
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in NORMAL mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * LOCAL_PWR_CFG       |  [1:0]  |  RW  | level                                                |     0x3     |
 *                     |         |      | 0x3 = Power on                                       |             |
 *                     |         |      | 0x0 = Power off when USE_RETENTION is "0",           |             |
 *                     |         |      | Power retention when USE_RETENTION is "1".           |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_L2_1_CONFIGURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t LOCAL_PWR_CFG:2;      //1:0
        uint32_t Reserved0:30;         //31:2
    } bits;
} ARM_L2_1_CONFIGURATION;

/*
 * ARM_L2_1_STATUS
 * 
 * Address = POWER Base Address 1 + 0x2624
 * Reset Value = 0x0000_0003
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Verifies power state in NORMAL mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * STATUS              |  [1:0]  |  R   | level.                                               |     0x3     |
 *                     |         |      | 0x3 = Power on                                       |             |
 *                     |         |      | 0x0 = Power off when USE_RETENTION is "0",           |             |
 *                     |         |      | Power retention when USE_RETENTION is "1".           |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:2]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_L2_1_STATUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t STATUS:2;          //1:0
        uint32_t Reserved0:30;      //31:2
    } bits;
} ARM_L2_1_STATUS;

/*
 * ARM_L2_1_OPTION
 * 
 * Address = POWER Base Address 1 + 0x2628
 * Reset Value = 0x0000_0010
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                |  [3:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * USE_RETENTION       |   [4]   |  RW  | Decides whether to use retention capability.         |     0x1     |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [19:5]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * IGNORE_OUTPUT       |         |      | By default, some state waits until Reset/CLAMPOUT    |             |
 * _UPDATE_DONE        |  [20]   |  RW  | is properly updated to loads.                        |     0x0     |
 *                     |         |      | This field disables this waiting function.           |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:21] |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ARM_L2_1_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:4;                       //3:0
        uint32_t USE_RETENTION:1;                   //4
        uint32_t Reserved1:15;                      //19:5
        uint32_t IGNORE_OUTPUT_UPDATE_DONE:1;       //20
        uint32_t Reserved2:11;                      //31:21
    } bits;
} ARM_L2_1_OPTION;

/*
 * DRAM_FREQ_DOWN_OPTION
 * 
 * Address = POWER Base Address 1 + 0x29A8
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [27:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * WAKEUP_FROM_        |  [28]   | RWX  | Restores DRAM speed after finishing the power-up.    |     0x0     |
 * LOWPWR              |         |      |                                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | 0 = S/W restores DRAM speed after finishing the      |             |
 * AUTOMATIC_          |         |      | power-up by writing WAKEUP_FROM_LOWPWR               |             |
 * WAKEUP              |  [29]   | RWX  | register bit to "1".                                 |     0x0     |
 *                     |         |      | 1 = H/W restores DRAM speed automatically during     |             |
 *                     |         |      | wakeup sequence.                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:30] |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union DRAM_FREQ_DOWN_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:28;              //27:0
        uint32_t WAKEUP_FROM_LOWPWR:1;      //28
        uint32_t AUTOMATIC_WAKEUP:1;        //29
        uint32_t Reserved1:2;               //31:30
    } bits;
} DRAM_FREQ_DOWN_OPTION;

/*
 * DDRPHY_DLLOFF_OPTION
 * 
 * Address = POWER Base Address 1 + 0x2DC8
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [27:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * WAKEUP_FROM_        |  [28]   | RWX  | Re-enables DDRPHY DLL after power-down.              |     0x0     |
 * LOWPWR              |         |      |                                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | 0 = S/W re-enables DDRPHY DLL after finishing        |             |
 * AUTOMATIC_          |         |      | power-up by writing WAKEUP_FROM_LOWPWR               |             |
 * WAKEUP              |  [29]   | RWX  | register bit to "1".                                 |     0x0     |
 *                     |         |      | 1 = H/W re-enables DDRPHY DLL automatically          |             |
 *                     |         |      | during wakeup sequence.                              |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:30] |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union DDRPHY_DLLOFF_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:28;              //27:0
        uint32_t WAKEUP_FROM_LOWPWR:1;      //28
        uint32_t AUTOMATIC_WAKEUP:1;        //29
        uint32_t Reserved1:2;               //31:30
    } bits;
} DDRPHY_DLLOFF_OPTION;

/*
 * OneNANDXL_MEM_OPTION
 * 
 * Address = POWER Base Address 1 + 0x2E08
 * Reset Value = 0x0000_0010
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                |  [3:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * USE_RETENTION       |   [4]   |  RW  | Decides whether to use retention capability.         |     0x1     |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [30:5]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses emulation mode for power off.                   |             |
 * EMULATION           |  [31]   |  RW  | In emulation mode, PMU performs all power-down       |     0x0     |
 *                     |         |      | sequences.                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union OneNANDXL_MEM_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:4;           //3:0
        uint32_t USE_RETENTION:1;       //4
        uint32_t Reserved1:26;          //30:5
        uint32_t EMULATION:1;           //31
    } bits;
} OneNANDXL_MEM_OPTION;

/*
 * HSI_MEM_OPTION
 * 
 * Address = POWER Base Address 1 + 0x2E28
 * Reset Value = 0x0000_0010
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                |  [3:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * USE_RETENTION       |   [4]   |  RW  | Decides whether to use retention capability.         |     0x1     |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [30:5]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses emulation mode for power off.                   |             |
 * EMULATION           |  [31]   |  RW  | In emulation mode, PMU performs all power-down       |     0x0     |
 *                     |         |      | sequences.                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union HSI_MEM_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:4;           //3:0
        uint32_t USE_RETENTION:1;       //4
        uint32_t Reserved1:26;          //30:5
        uint32_t EMULATION:1;           //31
    } bits;
} HSI_MEM_OPTION;

/*
 * G2D_ACP_MEM_OPTION
 * 
 * Address = POWER Base Address 1 + 0x2E48
 * Reset Value = 0x0000_0010
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                |  [3:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * USE_RETENTION       |   [4]   |  RW  | Decides whether to use retention capability.         |     0x1     |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [30:5]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses emulation mode for power off.                   |             |
 * EMULATION           |  [31]   |  RW  | In emulation mode, PMU performs all power-down       |     0x0     |
 *                     |         |      | sequences.                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union G2D_ACP_MEM_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:4;           //3:0
        uint32_t USE_RETENTION:1;       //4
        uint32_t Reserved1:26;          //30:5
        uint32_t EMULATION:1;           //31
    } bits;
} G2D_ACP_MEM_OPTION;

/*
 * USBOTG_MEM_OPTION
 * 
 * Address = POWER Base Address 1 + 0x2E68
 * Reset Value = 0x0000_0010
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                |  [3:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * USE_RETENTION       |   [4]   |  RW  | Decides whether to use retention capability.         |     0x1     |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [30:5]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses emulation mode for power off.                   |             |
 * EMULATION           |  [31]   |  RW  | In emulation mode, PMU performs all power-down       |     0x0     |
 *                     |         |      | sequences.                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union USBOTG_MEM_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:4;           //3:0
        uint32_t USE_RETENTION:1;       //4
        uint32_t Reserved1:26;          //30:5
        uint32_t EMULATION:1;           //31
    } bits;
} USBOTG_MEM_OPTION;

/*
 * SDMMC_MEM_OPTION
 * 
 * Address = POWER Base Address 1 + 0x2E88
 * Reset Value = 0x0000_0010
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                |  [3:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * USE_RETENTION       |   [4]   |  RW  | Decides whether to use retention capability.         |     0x1     |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [30:5]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses emulation mode for power off.                   |             |
 * EMULATION           |  [31]   |  RW  | In emulation mode, PMU performs all power-down       |     0x0     |
 *                     |         |      | sequences.                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union SDMMC_MEM_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:4;           //3:0
        uint32_t USE_RETENTION:1;       //4
        uint32_t Reserved1:26;          //30:5
        uint32_t EMULATION:1;           //31
    } bits;
} SDMMC_MEM_OPTION;

/*
 * CSSYS_MEM_OPTION
 * 
 * Address = POWER Base Address 1 + 0x2EA8
 * Reset Value = 0x0000_0010
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                |  [3:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * USE_RETENTION       |   [4]   |  RW  | Decides whether to use retention capability.         |     0x1     |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [30:5]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses emulation mode for power off.                   |             |
 * EMULATION           |  [31]   |  RW  | In emulation mode, PMU performs all power-down       |     0x0     |
 *                     |         |      | sequences.                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CSSYS_MEM_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:4;           //3:0
        uint32_t USE_RETENTION:1;       //4
        uint32_t Reserved1:26;          //30:5
        uint32_t EMULATION:1;           //31
    } bits;
} CSSYS_MEM_OPTION;

/*
 * SECSS_MEM_OPTION
 * 
 * Address = POWER Base Address 1 + 0x2EC8
 * Reset Value = 0x0000_0010
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                |  [3:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * USE_RETENTION       |   [4]   |  RW  | Decides whether to use retention capability.         |     0x1     |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [30:5]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses emulation mode for power off.                   |             |
 * EMULATION           |  [31]   |  RW  | In emulation mode, PMU performs all power-down       |     0x0     |
 *                     |         |      | sequences.                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union SECSS_MEM_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:4;           //3:0
        uint32_t USE_RETENTION:1;       //4
        uint32_t Reserved1:26;          //30:5
        uint32_t EMULATION:1;           //31
    } bits;
} SECSS_MEM_OPTION;

/*
 * ROTATOR_MEM_OPTION
 * 
 * Address = POWER Base Address 1 + 0x2F48
 * Reset Value = 0x0000_0010
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                |  [3:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * USE_RETENTION       |   [4]   |  RW  | Decides whether to use retention capability.         |     0x1     |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [30:5]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses emulation mode for power off.                   |             |
 * EMULATION           |  [31]   |  RW  | In emulation mode, PMU performs all power-down       |     0x0     |
 *                     |         |      | sequences.                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ROTATOR_MEM_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:4;           //3:0
        uint32_t USE_RETENTION:1;       //4
        uint32_t Reserved1:26;          //30:5
        uint32_t EMULATION:1;           //31
    } bits;
} ROTATOR_MEM_OPTION;

/*
 * PAD_RETENTION_MAUDIO_OPTION
 * 
 * Address = POWER Base Address 1 + 0x3028
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [27:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | In activate-related, PAD enters retention mode from  |             |
 *                     |         |      | retention state in case of system-level low-power    |             |
 * WAKEUP_FROM_        |  [28]   | RWX  | mode.                                                |     0x0     |
 * LOWPWR              |         |      | In case-related, LOCAL_PWR_CFG puts PAD in           |             |
 *                     |         |      | relation state. Writing to this register can cause   |             |
 *                     |         |      | undefined behavior.                                  |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:29] |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union PAD_RETENTION_MAUDIO_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:28;              //27:0
        uint32_t WAKEUP_FROM_LOWPWR:1;      //28
        uint32_t Reserved1:3;               //31:29
    } bits;
} PAD_RETENTION_MAUDIO_OPTION;

/*
 * PAD_RETENTION_GPIO_OPTION
 * 
 * Address = POWER Base Address 1 + 0x3108
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [27:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | In activate-related, PAD enters retention mode from  |             |
 *                     |         |      | retention state in case of system-level low-power    |             |
 * WAKEUP_FROM_        |  [28]   | RWX  | mode.                                                |     0x0     |
 * LOWPWR              |         |      | In case-related, LOCAL_PWR_CFG puts PAD in           |             |
 *                     |         |      | relation state. Writing to this register can cause   |             |
 *                     |         |      | undefined behavior.                                  |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:29] |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union PAD_RETENTION_GPIO_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:28;              //27:0
        uint32_t WAKEUP_FROM_LOWPWR:1;      //28
        uint32_t Reserved1:3;               //31:29
    } bits;
} PAD_RETENTION_GPIO_OPTION;

/*
 * PAD_RETENTION_UART_OPTION
 * 
 * Address = POWER Base Address 1 + 0x3128
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [27:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | In activate-related, PAD enters retention mode from  |             |
 *                     |         |      | retention state in case of system-level low-power    |             |
 * WAKEUP_FROM_        |  [28]   | RWX  | mode.                                                |     0x0     |
 * LOWPWR              |         |      | In case-related, LOCAL_PWR_CFG puts PAD in           |             |
 *                     |         |      | relation state. Writing to this register can cause   |             |
 *                     |         |      | undefined behavior.                                  |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:29] |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union PAD_RETENTION_UART_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:28;              //27:0
        uint32_t WAKEUP_FROM_LOWPWR:1;      //28
        uint32_t Reserved1:3;               //31:29
    } bits;
} PAD_RETENTION_UART_OPTION;

/*
 * PAD_RETENTION_MMCA_OPTION
 * 
 * Address = POWER Base Address 1 + 0x3148
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [27:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | In activate-related, PAD enters retention mode from  |             |
 *                     |         |      | retention state in case of system-level low-power    |             |
 * WAKEUP_FROM_        |  [28]   | RWX  | mode.                                                |     0x0     |
 * LOWPWR              |         |      | In case-related, LOCAL_PWR_CFG puts PAD in           |             |
 *                     |         |      | relation state. Writing to this register can cause   |             |
 *                     |         |      | undefined behavior.                                  |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:29] |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union PAD_RETENTION_MMCA_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:28;              //27:0
        uint32_t WAKEUP_FROM_LOWPWR:1;      //28
        uint32_t Reserved1:3;               //31:29
    } bits;
} PAD_RETENTION_MMCA_OPTION;

/*
 * PAD_RETENTION_MMCB_OPTION
 * 
 * Address = POWER Base Address 1 + 0x3168
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [27:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | In activate-related, PAD enters retention mode from  |             |
 *                     |         |      | retention state in case of system-level low-power    |             |
 * WAKEUP_FROM_        |  [28]   | RWX  | mode.                                                |     0x0     |
 * LOWPWR              |         |      | In case-related, LOCAL_PWR_CFG puts PAD in           |             |
 *                     |         |      | relation state. Writing to this register can cause   |             |
 *                     |         |      | undefined behavior.                                  |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:29] |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union PAD_RETENTION_MMCB_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:28;              //27:0
        uint32_t WAKEUP_FROM_LOWPWR:1;      //28
        uint32_t Reserved1:3;               //31:29
    } bits;
} PAD_RETENTION_MMCB_OPTION;

/*
 * PAD_RETENTION_EBIA_OPTION
 * 
 * Address = POWER Base Address 1 + 0x3188
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [27:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | In activate-related, PAD enters retention mode from  |             |
 *                     |         |      | retention state in case of system-level low-power    |             |
 * WAKEUP_FROM_        |  [28]   | RWX  | mode.                                                |     0x0     |
 * LOWPWR              |         |      | In case-related, LOCAL_PWR_CFG puts PAD in           |             |
 *                     |         |      | relation state. Writing to this register can cause   |             |
 *                     |         |      | undefined behavior.                                  |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:29] |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union PAD_RETENTION_EBIA_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:28;              //27:0
        uint32_t WAKEUP_FROM_LOWPWR:1;      //28
        uint32_t Reserved1:3;               //31:29
    } bits;
} PAD_RETENTION_EBIA_OPTION;

/*
 * PAD_RETENTION_EBIB_OPTION
 * 
 * Address = POWER Base Address 1 + 0x31A8
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [27:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | In activate-related, PAD enters retention mode from  |             |
 *                     |         |      | retention state in case of system-level low-power    |             |
 * WAKEUP_FROM_        |  [28]   | RWX  | mode.                                                |     0x0     |
 * LOWPWR              |         |      | In case-related, LOCAL_PWR_CFG puts PAD in           |             |
 *                     |         |      | relation state. Writing to this register can cause   |             |
 *                     |         |      | undefined behavior.                                  |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:29] |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union PAD_RETENTION_EBIB_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:28;              //27:0
        uint32_t WAKEUP_FROM_LOWPWR:1;      //28
        uint32_t Reserved1:3;               //31:29
    } bits;
} PAD_RETENTION_EBIB_OPTION;

/*
 * PAD_RETENTION_GPIO_COREBLK_OPTION
 * 
 * Address = POWER Base Address 1 + 0x31E8
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [27:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | In activate-related, PAD enters retention mode from  |             |
 *                     |         |      | retention state in case of system-level low-power    |             |
 * WAKEUP_FROM_        |  [28]   | RWX  | mode.                                                |     0x0     |
 * LOWPWR              |         |      | In case-related, LOCAL_PWR_CFG puts PAD in           |             |
 *                     |         |      | relation state. Writing to this register can cause   |             |
 *                     |         |      | undefined behavior.                                  |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:29] |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union PAD_RETENTION_GPIO_COREBLK_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:28;              //27:0
        uint32_t WAKEUP_FROM_LOWPWR:1;      //28
        uint32_t Reserved1:3;               //31:29
    } bits;
} PAD_RETENTION_GPIO_COREBLK_OPTION;

/*
 * PS_HOLD_CONTROL
 * 
 * Address = POWER Base Address 1 + 0x330C
 * Reset Value = 0x0000_5200
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                |  [7:0]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | PAD driving value                                    |             |
 * DATA                |   [8]   |  RW  | You should reset PSHOLD control only when cold       |     0x0     |
 *                     |         |      | booted.                                              |             |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Enables signal for PSHOLD port.                      |             |
 *                     |         |      | 0 = Input                                            |             |
 * EN                  |   [9]   |  RW  | 1 = Output                                           |     0x1     |
 *                     |         |      | You should reset PSHOLD control only when cold       |             |
 *                     |         |      | booted.                                              |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:10] |  -   | Reserved                                             |    0x14     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union PS_HOLD_CONTROL_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:8;       //7:0
        uint32_t DATA:1;            //8
        uint32_t EN:1;              //9
        uint32_t Reserved1:22;      //31:10
    } bits;
} PS_HOLD_CONTROL;

/*
 * XUSBXTI_CONFIGURATION
 * 
 * Address = POWER Base Address 1 + 0x3400
 * Reset Value = 0x0000_0001
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls XUSBXTI pad in NORMAL mode                  |             |
 * LOCAL_PWR_CFG       |   [0]   |  RW  | 0x1 = Enable                                         |     0x1     |
 *                     |         |      | 0x0 = Disable                                        |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union XUSBXTI_CONFIGURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t LOCAL_PWR_CFG:1;      //1:0
        uint32_t Reserved0:31;         //31:2
    } bits;
} XUSBXTI_CONFIGURATION;

/*
 * XUSBXTI_STATUS
 * 
 * Address = POWER Base Address 1 + 0x3404
 * Reset Value = 0x0003_0001
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Verifies the state of XUSBXTI pad in NORMAL mode     |             |
 * STATUS              |   [0]   |  R   | 0x1 = Enables                                        |     0x1     |
 *                     |         |      | 0x0 = Disables                                       |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union XUSBXTI_STATUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t STATUS:1;          //0
        uint32_t Reserved0:31;      //31:1
    } bits;
} XUSBXTI_STATUS;

/*
 * XUSBXTI_DURATION
 * 
 * Address = POWER Base Address 1 + 0x341C
 * Reset Value = 0xFFF0_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Sets the time required to stabilize XUSBXTI          |             |
 *                     |         |      | DUR_STABLE appends 0xF. You should compare           |             |
 * DUR_STABLE          | [19:0]  |  RW  | this value to counter value.                         |     0x0     |
 *                     |         |      | NOTE: Stabilization time                             |             |
 *                     |         |      | = DUR_STABLE x 16 + 15(0xF)                          |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:20] |  -   | Reserved                                             |    0xFFF    |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union XUSBXTI_DURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DUR_STABLE:20;         //19:0
        uint32_t Reserved0:12;          //31:20
    } bits;
} XUSBXTI_DURATION;

/*
 * XXTI_CONFIGURATION
 * 
 * Address = POWER Base Address 1 + 0x3420
 * Reset Value = 0x0000_0001
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls XXTI pad in NORMAL mode                     |             |
 * LOCAL_PWR_CFG       |   [0]   |  RW  | 0x1 = Enable                                         |     0x1     |
 *                     |         |      | 0x0 = Disable                                        |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union XXTI_CONFIGURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t LOCAL_PWR_CFG:1;      //1:0
        uint32_t Reserved0:31;         //31:2
    } bits;
} XXTI_CONFIGURATION;

/*
 * XXTI_STATUS
 * 
 * Address = POWER Base Address 1 + 0x3424
 * Reset Value = 0x0003_0001
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Verifies the state of XXTI pad in NORMAL mode        |             |
 * STATUS              |   [0]   |  R   | 0x1 = Enables                                        |     0x1     |
 *                     |         |      | 0x0 = Disables                                       |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:1]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union XXTI_STATUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t STATUS:1;          //0
        uint32_t Reserved0:31;      //31:1
    } bits;
} XXTI_STATUS;

/*
 * XXTI_DURATION
 * 
 * Address = POWER Base Address 1 + 0x343C
 * Reset Value = 0xFFF0_0000
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Sets the time required to stabilize XXTI             |             |
 *                     |         |      | DUR_STABLE appends 0xF. You should compare           |             |
 * DUR_STABLE          | [19:0]  |  RW  | this value to counter value.                         |     0x0     |
 *                     |         |      | NOTE: Stabilization time                             |             |
 *                     |         |      | = DUR_STABLE x 16 + 15(0xF)                          |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:20] |  -   | Reserved                                             |    0xFFF    |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union XXTI_DURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DUR_STABLE:20;         //19:0
        uint32_t Reserved0:12;          //31:20
    } bits;
} XXTI_DURATION;

/*
 * EXT_REGULATOR_DURATION
 * 
 * Address = POWER Base Address 1 + 0x361C
 * Reset Value = 0xFFF0_3FFF
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Sets the time required to stabilize EXT_REGULATOR    |             |
 *                     |         |      | DUR_STABLE appends 0xF. You should compare           |             |
 * DUR_STABLE          | [19:0]  |  RW  | this value to counter value.                         |    0x3FFF   |
 *                     |         |      | NOTE: Stabilization time                             |             |
 *                     |         |      | = DUR_STABLE x 16 + 15(0xF)                          |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:20] |  -   | Reserved                                             |    0xFFF    |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union EXT_REGULATOR_DURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DUR_STABLE:20;         //19:0
        uint32_t Reserved0:12;          //31:20
    } bits;
} EXT_REGULATOR_DURATION;

/*
 * CAM_CONFIGURATION
 * 
 * Address = POWER Base Address 1 + 0x3C00
 * Reset Value = 0x0000_0007
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in NORMAL mode                  |             |
 * LOCAL_PWR_CFG       |  [2:0]  |  RW  | 0x7 = Power on                                       |     0x7     |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CAM_CONFIGURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t LOCAL_PWR_CFG:3;      //2:0
        uint32_t Reserved0:29;         //31:3
    } bits;
} CAM_CONFIGURATION;

/*
 * CAM_STATUS
 * 
 * Address = POWER Base Address 1 + 0x3C04
 * Reset Value = 0x0006_0007
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Verifies power state in NORMAL mode                  |             |
 * STATUS              |  [2:0]  |  R   | 0x7 = Power on                                       |     0x7     |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             |   0xC000    |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union CAM_STATUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t STATUS:3;          //2:0
        uint32_t Reserved0:29;      //31:3
    } bits;
} CAM_STATUS;

/*
 * CAM_OPTION
 * 
 * Address = POWER Base Address 1 + 0x3C08
 * Reset Value = 0x0000_0001
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses counter to measure power on/off duration of     |             |
 * USE_SC_             |   [0]   |  RW  | CAM.                                                 |     0x1     |
 * COUNTER             |         |      | You should either activate USE_SC_COUNTER or         |             |
 *                     |         |      | USE_SC_FEEDBACK                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses power control feedback to measure power on/off  |             |
 * USE_SC_             |   [1]   |  RW  | duration of CAM.                                     |     0x0     |
 * FEEDBACK            |         |      | You should either activate USE_SC_COUNTER or         |             |
 *                     |         |      | USE_SC_FEEDBACK                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [30:2]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses emulation mode for power off.                   |             |
 * EMULATION           |  [31]   |  RW  | In emulation mode, PMU performs all power-down       |     0x0     |
 *                     |         |      | sequences.                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 * NOTE: Either one of USE_SC_FEEDBACK and USE_SC_COUNTER should be activated.
 */

typedef union CAM_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t USE_SC_COUNTER:1;      //0
        uint32_t USE_SC_FEEDBACK:1;     //1
        uint32_t Reserved0:29;          //30:2
        uint32_t EMULATION:1;           //31
    } bits;
} CAM_OPTION;

/*
 * TV_CONFIGURATION
 * 
 * Address = POWER Base Address 1 + 0x3C20
 * Reset Value = 0x0000_0007
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in NORMAL mode                  |             |
 * LOCAL_PWR_CFG       |  [2:0]  |  RW  | 0x7 = Power on                                       |     0x7     |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union TV_CONFIGURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t LOCAL_PWR_CFG:3;      //2:0
        uint32_t Reserved0:29;         //31:3
    } bits;
} TV_CONFIGURATION;

/*
 * TV_STATUS
 * 
 * Address = POWER Base Address 1 + 0x3C24
 * Reset Value = 0x0006_0007
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Verifies power state in NORMAL mode                  |             |
 * STATUS              |  [2:0]  |  R   | 0x7 = Power on                                       |     0x7     |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             |   0xC000    |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union TV_STATUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t STATUS:3;          //2:0
        uint32_t Reserved0:29;      //31:3
    } bits;
} TV_STATUS;

/*
 * TV_OPTION
 * 
 * Address = POWER Base Address 1 + 0x3C28
 * Reset Value = 0x0000_0001
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses counter to measure power on/off duration of TV  |             |
 * USE_SC_             |   [0]   |  RW  | You should either activate USE_SC_COUNTER or         |     0x1     |
 * COUNTER             |         |      | USE_SC_FEEDBACK                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses power control feedback to measure power on/off  |             |
 * USE_SC_             |   [1]   |  RW  | duration of TV.                                      |     0x0     |
 * FEEDBACK            |         |      | You should either activate USE_SC_COUNTER or         |             |
 *                     |         |      | USE_SC_FEEDBACK                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [30:2]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses emulation mode for power off.                   |             |
 * EMULATION           |  [31]   |  RW  | In emulation mode, PMU performs all power-down       |     0x0     |
 *                     |         |      | sequences.                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 * NOTE: Either one of USE_SC_FEEDBACK and USE_SC_COUNTER should be activated.
 */

typedef union TV_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t USE_SC_COUNTER:1;      //0
        uint32_t USE_SC_FEEDBACK:1;     //1
        uint32_t Reserved0:29;          //30:2
        uint32_t EMULATION:1;           //31
    } bits;
} TV_OPTION;

/*
 * MFC_CONFIGURATION
 * 
 * Address = POWER Base Address 1 + 0x3C40
 * Reset Value = 0x0000_0007
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in NORMAL mode                  |             |
 * LOCAL_PWR_CFG       |  [2:0]  |  RW  | 0x7 = Power on                                       |     0x7     |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union MFC_CONFIGURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t LOCAL_PWR_CFG:3;      //2:0
        uint32_t Reserved0:29;         //31:3
    } bits;
} MFC_CONFIGURATION;

/*
 * MFC_STATUS
 * 
 * Address = POWER Base Address 1 + 0x3C44
 * Reset Value = 0x0006_0007
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Verifies power state in NORMAL mode                  |             |
 * STATUS              |  [2:0]  |  R   | 0x7 = Power on                                       |     0x7     |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             |   0xC000    |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union MFC_STATUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t STATUS:3;          //2:0
        uint32_t Reserved0:29;      //31:3
    } bits;
} MFC_STATUS;

/*
 * MFC_OPTION
 * 
 * Address = POWER Base Address 1 + 0x3C48
 * Reset Value = 0x0000_0001
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses counter to measure power on/off duration of     |             |
 * USE_SC_             |   [0]   |  RW  | MFC                                                  |             |
 * COUNTER             |         |      | You should either activate USE_SC_COUNTER or         |     0x1     |
 *                     |         |      | USE_SC_FEEDBACK                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses power control feedback to measure power on/off  |             |
 * USE_SC_             |   [1]   |  RW  | duration of MFC.                                     |     0x0     |
 * FEEDBACK            |         |      | You should either activate USE_SC_COUNTER or         |             |
 *                     |         |      | USE_SC_FEEDBACK                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [30:2]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses emulation mode for power off.                   |             |
 * EMULATION           |  [31]   |  RW  | In emulation mode, PMU performs all power-down       |     0x0     |
 *                     |         |      | sequences.                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 * NOTE: Either one of USE_SC_FEEDBACK and USE_SC_COUNTER should be activated.
 */

typedef union MFC_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t USE_SC_COUNTER:1;      //0
        uint32_t USE_SC_FEEDBACK:1;     //1
        uint32_t Reserved0:29;          //30:2
        uint32_t EMULATION:1;           //31
    } bits;
} MFC_OPTION;

/*
 * G3D_CONFIGURATION
 * 
 * Address = POWER Base Address 1 + 0x3C60
 * Reset Value = 0x0000_0007
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in NORMAL mode                  |             |
 * LOCAL_PWR_CFG       |  [2:0]  |  RW  | 0x7 = Power on                                       |     0x7     |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union G3D_CONFIGURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t LOCAL_PWR_CFG:3;      //2:0
        uint32_t Reserved0:29;         //31:3
    } bits;
} G3D_CONFIGURATION;

/*
 * G3D_STATUS
 * 
 * Address = POWER Base Address 1 + 0x3C64
 * Reset Value = 0x0006_0007
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Verifies power state in NORMAL mode                  |             |
 * STATUS              |  [2:0]  |  R   | 0x7 = Power on                                       |     0x7     |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             |   0xC000    |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union G3D_STATUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t STATUS:3;          //2:0
        uint32_t Reserved0:29;      //31:3
    } bits;
} G3D_STATUS;

/*
 * G3D_OPTION
 * 
 * Address = POWER Base Address 1 + 0x3C68
 * Reset Value = 0x0000_0001
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses counter to measure power on/off duration of     |             |
 * USE_SC_             |   [0]   |  RW  | G3D                                                  |             |
 * COUNTER             |         |      | You should either activate USE_SC_COUNTER or         |     0x1     |
 *                     |         |      | USE_SC_FEEDBACK                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses power control feedback to measure power on/off  |             |
 * USE_SC_             |   [1]   |  RW  | duration of G3D.                                     |     0x0     |
 * FEEDBACK            |         |      | You should either activate USE_SC_COUNTER or         |             |
 *                     |         |      | USE_SC_FEEDBACK                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [30:2]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses emulation mode for power off.                   |             |
 * EMULATION           |  [31]   |  RW  | In emulation mode, PMU performs all power-down       |     0x0     |
 *                     |         |      | sequences.                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 * NOTE: Either one of USE_SC_FEEDBACK and USE_SC_COUNTER should be activated.
 */

typedef union G3D_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t USE_SC_COUNTER:1;      //0
        uint32_t USE_SC_FEEDBACK:1;     //1
        uint32_t Reserved0:29;          //30:2
        uint32_t EMULATION:1;           //31
    } bits;
} G3D_OPTION;

/*
 * LCD0_CONFIGURATION
 * 
 * Address = POWER Base Address 1 + 0x3C80
 * Reset Value = 0x0000_0007
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in NORMAL mode                  |             |
 * LOCAL_PWR_CFG       |  [2:0]  |  RW  | 0x7 = Power on                                       |     0x7     |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union LCD0_CONFIGURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t LOCAL_PWR_CFG:3;      //2:0
        uint32_t Reserved0:29;         //31:3
    } bits;
} LCD0_CONFIGURATION;

/*
 * LCD0_STATUS
 * 
 * Address = POWER Base Address 1 + 0x3C84
 * Reset Value = 0x0006_0007
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Verifies power state in NORMAL mode                  |             |
 * STATUS              |  [2:0]  |  R   | 0x7 = Power on                                       |     0x7     |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             |   0xC000    |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union LCD0_STATUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t STATUS:3;          //2:0
        uint32_t Reserved0:29;      //31:3
    } bits;
} LCD0_STATUS;

/*
 * LCD0_OPTION
 * 
 * Address = POWER Base Address 1 + 0x3C88
 * Reset Value = 0x0000_0001
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses counter to measure power on/off duration of     |             |
 * USE_SC_             |   [0]   |  RW  | LCD0                                                 |             |
 * COUNTER             |         |      | You should either activate USE_SC_COUNTER or         |     0x1     |
 *                     |         |      | USE_SC_FEEDBACK                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses power control feedback to measure power on/off  |             |
 * USE_SC_             |   [1]   |  RW  | duration of LCD0.                                    |     0x0     |
 * FEEDBACK            |         |      | You should either activate USE_SC_COUNTER or         |             |
 *                     |         |      | USE_SC_FEEDBACK                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [30:2]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses emulation mode for power off.                   |             |
 * EMULATION           |  [31]   |  RW  | In emulation mode, PMU performs all power-down       |     0x0     |
 *                     |         |      | sequences.                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 * NOTE: Either one of USE_SC_FEEDBACK and USE_SC_COUNTER should be activated.
 */

typedef union LCD0_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t USE_SC_COUNTER:1;      //0
        uint32_t USE_SC_FEEDBACK:1;     //1
        uint32_t Reserved0:29;          //30:2
        uint32_t EMULATION:1;           //31
    } bits;
} LCD0_OPTION;

/*
 * ISP_CONFIGURATION
 * 
 * Address = POWER Base Address 1 + 0x3CA0
 * Reset Value = 0x0000_0007
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in NORMAL mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * LOCAL_PWR_CFG       |  [2:0]  |  RW  | level                                                |     0x7     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */          
                                                       

typedef union ISP_CONFIGURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t LOCAL_PWR_CFG:3;      //2:0
        uint32_t Reserved0:29;         //31:3
    } bits;
} ISP_CONFIGURATION;

/*
 * ISP_STATUS
 * 
 * Address = POWER Base Address 1 + 0x3CA4
 * Reset Value = 0x0000_0007
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Verifies power state in NORMAL mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * STATUS              |  [2:0]  |  R   | level                                                |     0x7     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [15:3]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * STATES              | [21:16] |  R   | Verifies state machine status.                       |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:22] |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union ISP_STATUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t STATUS:3;          //2:0
        uint32_t Reserved0:13;      //15:3
        uint32_t STATES:6;          //21:16
        uint32_t Reserved1:10;      //31:22
    } bits;
} ISP_STATUS;

/*
 * ISP_OPTION
 * 
 * Address = POWER Base Address 1 + 0x3CA8
 * Reset Value = 0x0000_0001
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses counter to measure power on/off duration of     |             |
 * USE_SC_             |   [0]   |  RW  | ISP                                                  |             |
 * COUNTER             |         |      | You should either activate USE_SC_COUNTER or         |     0x1     |
 *                     |         |      | USE_SC_FEEDBACK                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses power control feedback to measure power on/off  |             |
 * USE_SC_             |   [1]   |  RW  | duration of ISP.                                     |     0x0     |
 * FEEDBACK            |         |      | You should either activate USE_SC_COUNTER or         |             |
 *                     |         |      | USE_SC_FEEDBACK                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [30:2]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses emulation mode for power off.                   |             |
 * EMULATION           |  [31]   |  RW  | In emulation mode, PMU performs all power-down       |     0x0     |
 *                     |         |      | sequences.                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 * NOTE: Either one of USE_SC_FEEDBACK and USE_SC_COUNTER should be activated.
 */

typedef union ISP_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t USE_SC_COUNTER:1;      //0
        uint32_t USE_SC_FEEDBACK:1;     //1
        uint32_t Reserved0:29;          //30:2
        uint32_t EMULATION:1;           //31
    } bits;
} ISP_OPTION;

/*
 * ISP_DURATION0
 * 
 * Address = POWER Base Address 1 + 0x3CB0
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                     Description                       | Reset Value | 
 * -----------------------------------------------------------------------------------------------------------|
 * RSVD                |  [3:0]  |  -   | Reserved                                              |     0xF     |
 * -----------------------------------------------------------------------------------------------------------|
 * DUR_SCALL           |  [7:4]  |  RW  | Sets SCALL on/off duration for ISP                    |     0xF     |
 * -----------------------------------------------------------------------------------------------------------|
 * DUR_SCPRE           | [11:8]  |  RW  | Sets SCPRE on/off duration for ISP                    |     0xF     |
 * -----------------------------------------------------------------------------------------------------------|
 * RSVD                | [15:12] |  -   | Reserved                                              |     0xF     |
 * -----------------------------------------------------------------------------------------------------------|
 * DUR_CHG_RESET       | [19:16] |  RW  | Sets required time after PMU asserts/de-asserts reset |     0xF     |
 *                     |         |      | before system starts to respond to it.                |             |
 * -----------------------------------------------------------------------------------------------------------|
 * DUR_WAIT_RESET      | [23:20] |  RW  | Sets minimum amount of time to assert reset.          |     0xF     |
 * -----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:24] |  -   | Reserved                                              |    0xFF     |
 * -----------------------------------------------------------------------------------------------------------|
 * NOTE: Either one of USE_SC_FEEDBACK and USE_SC_COUNTER should be activated.
 */

typedef union ISP_DURATION0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:4;           //3:0
        uint32_t DUR_SCALL:4;           //7:4
        uint32_t DUR_SCPRE:4;           //11:8
        uint32_t Reserved1:4;           //15:12
        uint32_t DUR_CHG_RESET:4;       //19:16
        uint32_t DUR_WAIT_RESET:4;      //23:20
        uint32_t Reserved2:8;           //31:24
    } bits;
} ISP_DURATION0;

/*
 * ISP_DURATION2
 * 
 * Address = POWER Base Address 1 + 0x3CB8
 * Reset Value = 0xFFFF_FFFF
 * 
 *         Name        |   Bit   | Type |                       Description                        | Reset Value | 
 * --------------------------------------------------------------------------------------------------------------|
 * DUR_ISO             |  [3:0]  |  RW  | Sets required time after PMU asserts/de-asserts          |     0xF     |
 *                     |         |      | isolation control before system starts to respond to it. |             |
 * --------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:4]  |  -   | Reserved                                                 |  0xFFFFFFF  |
 * --------------------------------------------------------------------------------------------------------------|
 */

typedef union ISP_DURATION2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DUR_ISO:4;      //3:0
        uint32_t Reserved2:28;          //31:4
    } bits;
} ISP_DURATION2;

/*
 * MAUDIO_CONFIGURATION
 * 
 * Address = POWER Base Address 1 + 0x3CC0
 * Reset Value = 0x0000_0007
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in NORMAL mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * LOCAL_PWR_CFG       |  [2:0]  |  RW  | level                                                |     0x7     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */          
                                                       

typedef union MAUDIO_CONFIGURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t LOCAL_PWR_CFG:3;      //2:0
        uint32_t Reserved0:29;         //31:3
    } bits;
} MAUDIO_CONFIGURATION;

/*
 * MAUDIO_STATUS
 * 
 * Address = POWER Base Address 1 + 0x3CC4
 * Reset Value = 0x0006_0007
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Verifies power state in NORMAL mode                  |             |
 *                     |         |      | Each bit represents power state in each power-down   |             |
 * STATUS              |  [2:0]  |  R   | level                                                |     0x7     |
 *                     |         |      | HIGH: Power on                                       |             |
 *                     |         |      | LOW: Power down                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [15:3]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * STATES              | [21:16] |  R   | Verifies state machine status.                       |     0x6     |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:22] |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union MAUDIO_STATUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t STATUS:3;          //2:0
        uint32_t Reserved0:13;      //15:3
        uint32_t STATES:6;          //21:16
        uint32_t Reserved1:10;      //31:22
    } bits;
} MAUDIO_STATUS;

/*
 * MAUDIO_OPTION
 * 
 * Address = POWER Base Address 1 + 0x3CC8
 * Reset Value = 0x0000_0001
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses counter to measure power on/off duration of     |             |
 * USE_SC_             |   [0]   |  RW  | MAUDIO.                                              |             |
 * COUNTER             |         |      | You should either activate USE_SC_COUNTER or         |     0x1     |
 *                     |         |      | USE_SC_FEEDBACK                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses power control feedback to measure power on/off  |             |
 * USE_SC_             |   [1]   |  RW  | duration of MAUDIO.                                  |     0x0     |
 * FEEDBACK            |         |      | You should either activate USE_SC_COUNTER or         |             |
 *                     |         |      | USE_SC_FEEDBACK                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [30:2]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses emulation mode for power off.                   |             |
 * EMULATION           |  [31]   |  RW  | In emulation mode, PMU performs all power-down       |     0x0     |
 *                     |         |      | sequences.                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 * NOTE: Either one of USE_SC_FEEDBACK and USE_SC_COUNTER should be activated.
 */

typedef union MAUDIO_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t USE_SC_COUNTER:1;      //0
        uint32_t USE_SC_FEEDBACK:1;     //1
        uint32_t Reserved0:29;          //30:2
        uint32_t EMULATION:1;           //31
    } bits;
} MAUDIO_OPTION;

/*
 * GPS_CONFIGURATION
 * 
 * Address = POWER Base Address 1 + 0x3CE0
 * Reset Value = 0x0000_0007
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in NORMAL mode                  |             |
 * LOCAL_PWR_CFG       |  [2:0]  |  RW  | 0x7 = Power on                                       |     0x7     |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */          
                                                       

typedef union GPS_CONFIGURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t LOCAL_PWR_CFG:3;      //2:0
        uint32_t Reserved0:29;         //31:3
    } bits;
} GPS_CONFIGURATION;

/*
 * GPS_STATUS
 * 
 * Address = POWER Base Address 1 + 0x3CE4
 * Reset Value = 0x0006_0007
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Verifies power state in NORMAL mode                  |             |
 * STATUS              |  [2:0]  |  RW  | 0x7 = Power on                                       |     0x7     |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             |    0xC000   |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union GPS_STATUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t STATUS:3;          //2:0
        uint32_t Reserved0:29;      //31:3
    } bits;
} GPS_STATUS;

/*
 * GPS_OPTION
 * 
 * Address = POWER Base Address 1 + 0x3CE8
 * Reset Value = 0x0000_0001
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses counter to measure power on/off duration of     |             |
 * USE_SC_             |   [0]   |  RW  | GPS.                                                 |             |
 * COUNTER             |         |      | You should either activate USE_SC_COUNTER or         |     0x1     |
 *                     |         |      | USE_SC_FEEDBACK                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses power control feedback to measure power on/off  |             |
 * USE_SC_             |   [1]   |  RW  | duration of GPS.                                     |     0x0     |
 * FEEDBACK            |         |      | You should either activate USE_SC_COUNTER or         |             |
 *                     |         |      | USE_SC_FEEDBACK                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [30:2]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses emulation mode for power off.                   |             |
 * EMULATION           |  [31]   |  RW  | In emulation mode, PMU performs all power-down       |     0x0     |
 *                     |         |      | sequences.                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 * NOTE: Either one of USE_SC_FEEDBACK and USE_SC_COUNTER should be activated.
 */

typedef union GPS_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t USE_SC_COUNTER:1;      //0
        uint32_t USE_SC_FEEDBACK:1;     //1
        uint32_t Reserved0:29;          //30:2
        uint32_t EMULATION:1;           //31
    } bits;
} GPS_OPTION;

/*
 * GPS_ALIVE_CONFIGURATION
 * 
 * Address = POWER Base Address 1 + 0x3D00
 * Reset Value = 0x0000_0007
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Controls power state in NORMAL mode                  |             |
 * LOCAL_PWR_CFG       |  [2:0]  |  RW  | 0x7 = Power on                                       |     0x7     |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 */          
                                                       

typedef union GPS_CONFIGURATION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t LOCAL_PWR_CFG:3;      //2:0
        uint32_t Reserved0:29;         //31:3
    } bits;
} GPS_CONFIGURATION;

/*
 * GPS_ALIVE_STATUS
 * 
 * Address = POWER Base Address 1 + 0x3D04
 * Reset Value = 0x0006_0007
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Verifies power state in NORMAL mode                  |             |
 * STATUS              |  [2:0]  |  RW  | 0x7 = Power on                                       |     0x7     |
 *                     |         |      | 0x0 = Power down                                     |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:3]  |  -   | Reserved                                             |    0xC000   |
 * ----------------------------------------------------------------------------------------------------------|
 */

typedef union GPS_ALIVE_STATUS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t STATUS:3;          //2:0
        uint32_t Reserved0:29;      //31:3
    } bits;
} GPS_ALIVE_STATUS;

/*
 * GPS_ALIVE_OPTION
 * 
 * Address = POWER Base Address 1 + 0x3D08
 * Reset Value = 0x0000_0001
 * 
 *         Name        |   Bit   | Type |                     Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses counter to measure power on/off duration of     |             |
 * USE_SC_             |   [0]   |  RW  | GPS_ALIVE_OPTION.                                    |             |
 * COUNTER             |         |      | You should either activate USE_SC_COUNTER or         |     0x1     |
 *                     |         |      | USE_SC_FEEDBACK                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses power control feedback to measure power on/off  |             |
 * USE_SC_             |   [1]   |  RW  | duration of GPS_ALIVE_OPTION.                        |     0x0     |
 * FEEDBACK            |         |      | You should either activate USE_SC_COUNTER or         |             |
 *                     |         |      | USE_SC_FEEDBACK                                      |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD                | [30:2]  |  -   | Reserved                                             |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 *                     |         |      | Uses emulation mode for power off.                   |             |
 * EMULATION           |  [31]   |  RW  | In emulation mode, PMU performs all power-down       |     0x0     |
 *                     |         |      | sequences.                                           |             |
 * ----------------------------------------------------------------------------------------------------------|
 * NOTE: Either one of USE_SC_FEEDBACK and USE_SC_COUNTER should be activated.
 */

typedef union GPS_ALIVE_OPTION_u
{
    uint32_t all_val;
    struct
    {
        uint32_t USE_SC_COUNTER:1;      //0
        uint32_t USE_SC_FEEDBACK:1;     //1
        uint32_t Reserved0:29;          //30:2
        uint32_t EMULATION:1;           //31
    } bits;
} GPS_ALIVE_OPTION;

#endif