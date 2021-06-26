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
 *         Name        |   Bit   | Type |                   Description                    | Reset Value | 
 * ------------------------------------------------------------------------------------------------------|
 * RSVD                |  [7:0]  |  -   | Reserved                                         |     0x0     |
 * ------------------------------------------------------------------------------------------------------|
 *                     |         |      | Decides whether you can use the system-level     |             |
 * FAST_PWDN           |  [16]   |  RWX | HIGH : Disables system-level low-power mode.     |     0x1     |
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

#endif