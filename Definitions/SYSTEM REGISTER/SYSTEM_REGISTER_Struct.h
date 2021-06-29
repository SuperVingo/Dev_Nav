#ifndef __SYSTEM_REGISTER_SYSTEM_REGISTER_ADDR_H__    
#define __SYSTEM_REGISTER_SYSTEM_REGISTER_ADDR_H__  

#include "ustdint.h"

/*
 * GENERAL_CTRL_C2C
 * 
 * Address = SYSTEM REGISTER Base Address 1 + 0x010C
 * Reset Value = 0x823A_A803
 * 
 *     Name    |   Bit   | Type |                   Description                  | Reset Value | 
 * --------------------------------------------------------------------------------------------|
 *             |         |      | Accessible DRAM range                          |             |
 *             |         |      | 512MB = 3`b111                                 |             |
 *             |         |      | 256MB = 3`b110                                 |             |
 *             |         |      | 128MB = 3`b101                                 |             |
 * SIZE        |  [2:0]  |  RW  | 64MB = 3`b100                                  |     0x3     |
 *             |         |      | 32MB = 3`b011                                  |             |
 *             |         |      | 16MB = 3`b010                                  |             |
 *             |         |      | 8MB = 3`b001                                   |             |
 *             |         |      | 4MB = 3`b000                                   |             |
 * --------------------------------------------------------------------------------------------|
 * BA          | [12:3]  |  RW  | DRAM Base Address                              |    0x100    |
 * --------------------------------------------------------------------------------------------|
 * RET_RSTn    |   [13]  |  RW  | Reset Signal of Retention Register in C2C IP.  |     0x1     |
 * --------------------------------------------------------------------------------------------|
 * MD          |   [14]  |  RW  | dram_init_done signal for wake-up sequence.    |     0x0     |
 * --------------------------------------------------------------------------------------------|
 * RSTn        |   [15]  |  RW  | Reset Signal of C2C IP.                        |     0x1     |
 * --------------------------------------------------------------------------------------------|
 *             |         |      | Default RX width                               |             |
 *             |         |      | 0x0 = 8-bit                                    |             |
 * RXW         | [17:16] |  RW  | 0x1 = 10-bit                                   |     0x2     |
 *             |         |      | 0x2 = 16-bit                                   |             |
 *             |         |      | 0x3 = RSV                                      |             |
 * --------------------------------------------------------------------------------------------|
 *             |         |      | Default TX width                               |             |
 *             |         |      | 0x0 = 8-bit                                    |             |
 * TXW         | [19:18] |  RW  | 0x1 = 10-bit                                   |     0x2     |
 *             |         |      | 0x2 = 16-bit                                   |             |
 *             |         |      | 0x3 = RSV                                      |             |
 * --------------------------------------------------------------------------------------------|
 * FCLK_FREQ   | [29:20] |  RW  | Function CLock Frequency                       |    0x32     |
 * --------------------------------------------------------------------------------------------|
 * MO          |   [30]  |  RW  | Master ON                                      |     0x0     |
 * --------------------------------------------------------------------------------------------|
 *             |         |      | Clock Gating                                   |             |
 * CG          |   [31]  |  RW  | 0 = Gating off                                 |     0x1     |
 *             |         |      | 1 = Gating On                                  |             |
 * --------------------------------------------------------------------------------------------|
 */

typedef union GENERAL_CTRL_C2C_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SIZE:3;            //2:0
        uint32_t BA:10;             //12:3
        uint32_t RET_RSTn:1;        //13
        uint32_t MD:1;              //14
        uint32_t RSTn:1;            //15
        uint32_t RXW:2;             //17:16
        uint32_t TXW:2;             //19:18
        uint32_t FCLK_FREQ:10;      //29:20
        uint32_t MO:1;              //30
        uint32_t CG:1;              //31
    } bits;
} GENERAL_CTRL_C2C;

/*
 * GENERAL_CTRL_GPS
 * 
 * Address = SYSTEM REGISTER Base Address 1 + 0x0110
 * Reset Value = 0x0000_0005
 * 
 *       Name      |   Bit   | Type |                   Description                  | Reset Value | 
 * ------------------------------------------------------------------------------------------------|
 * SRSTN           |   [0]   |  RW  | Software Reset                                 |     0x1     |
 * ------------------------------------------------------------------------------------------------|
 * MUX_SEL         |   [1]   |  RW  | Mux Selection Control                          |     0x0     |
 * ------------------------------------------------------------------------------------------------|
 * ALV_SRSTN       |   [2]   |  RW  | Software reset of GPA_ALIVE                    |     0x1     |
 * ------------------------------------------------------------------------------------------------|
 * RESERVED_STATUS | [15:3]  |  R   | Reserved for Status.                           |     0x0     |
 * ------------------------------------------------------------------------------------------------|
 * RESERVED_CTRL   | [31:16] |  RW  | Reserved for Control.                          |     0x0     |
 * ------------------------------------------------------------------------------------------------|
 */

typedef union GENERAL_CTRL_GPS_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SRSTN:1;               //0
        uint32_t MUX_SEL:1;             //1
        uint32_t ALV_SRSTN:1;           //2
        uint32_t RESERVED_STATUS:13;    //15:3
        uint32_t RESERVED_CTRL:16;      //31:16
    } bits;
} GENERAL_CTRL_GPS;

/*
 * ADC_CFG
 * 
 * Address = SYSTEM REGISTER Base Address 1 + 0x0118
 * Reset Value = 0x0000_0000
 * 
 *       Name      |   Bit   | Type |                   Description                  | Reset Value | 
 * ------------------------------------------------------------------------------------------------|
 * RSVD            | [15:0]  |  -   | Reserved                                       |     0x0     |
 * ------------------------------------------------------------------------------------------------|
 *                 |         |      | Select ADC Mux                                 |             |
 * ADC_MUX_SEL     |  [16]   |  RW  | 0 : General ADC                                |     0x0     |
 *                 |         |      | 1 : MTCADC_ISP                                 |             |
 * ------------------------------------------------------------------------------------------------|
 * RSVD            | [31:17] |  -   | Reserved                                       |     0x0     |
 * ------------------------------------------------------------------------------------------------|
 */

typedef union ADC_CFG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:16;      //15:0
        uint32_t ADC_MUX_SEL:1;     //16
        uint32_t Reserved1:15;      //31:17
    } bits;
} ADC_CFG;

/*
 * ISPBLK_CFG
 * 
 * Address = SYSTEM REGISTER Base Address 1 + 0x020C
 * Reset Value = 0x0000_3F80
 * 
 *       Name      |   Bit   | Type |                   Description                  | Reset Value | 
 * ------------------------------------------------------------------------------------------------|
 *                 |         |      | Reset Mask of ISP Block                        |             |
 *                 |         |      | [0] : CAM_BLK                                  |             |
 *                 |         |      | [1] : LITE_M                                   |             |
 * RST_MASK_ISPBLK |  [6:0]  |  RW  | [2] : LITE_S                                   |     0x0     |
 *                 |         |      | [3] : ITU_A                                    |             |
 *                 |         |      | [4] : ITU_B                                    |             |
 *                 |         |      | [5] : MIPI_A                                   |             |
 *                 |         |      | [6] : MIPI_B                                   |             |
 * ------------------------------------------------------------------------------------------------|
 *                 |         |      | FIFO Software Reset of ISP Block (active low)  |             |
 *                 |         |      | [0] : CAM_BLK                                  |             |
 *                 |         |      | [1] : LITE_M                                   |             |
 * FIFORST_ISPBLK  | [13:7]  |  RW  | [2] : LITE_S                                   |     0x7F    |
 *                 |         |      | [3] : ITU_A                                    |             |
 *                 |         |      | [4] : ITU_B                                    |             |
 *                 |         |      | [5] : MIPI_A                                   |             |
 *                 |         |      | [6] : MIPI_B                                   |             |
 * ------------------------------------------------------------------------------------------------|
 * RSVD            | [31:14] |  -   | Reserved                                       |     0x0     |
 * ------------------------------------------------------------------------------------------------|
 */

typedef union ISPBLK_CFG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t RST_MASK_ISPBLK:7;     //6:0
        uint32_t FIFORST_ISPBLK:7;      //13:7
        uint32_t Reserved0:18;          //31:14
    } bits;
} ISPBLK_CFG;

/*
 * LCDBLK_CFG
 * 
 * Address = SYSTEM REGISTER Base Address 1 + 0x0210
 * Reset Value = 0x00F8_0000
 * 
 *        Name       |   Bit   | Type |                   Description                  | Reset Value | 
 * --------------------------------------------------------------------------------------------------|
 *                   |         |      | MIE of LBLK0 Selection                         |             |
 * MIE_LBLK0         |   [0]   |  RW  | 0 = MIE                                        |     0x0     |
 *                   |         |      | 1 = MDNIE                                      |             |
 * --------------------------------------------------------------------------------------------------|
 *                   |         |      | FIMD of LBLK0 Bypass Selection                 |             |
 * FIMDBYPASS_LBLK0  |   [1]   |  RW  | 0 = MIE/MDNIE                                  |     0x0     |
 *                   |         |      | 1 = FIMD Bypass                                |             |
 * --------------------------------------------------------------------------------------------------|
 * RGB_LBLK0         |  [4:2]  |  RW  | RGB Reordering for LBLK0                       |     0x0     |
 * --------------------------------------------------------------------------------------------------|
 * I80MS_LBLK0       |  [7:5]  |  RW  | i80 Master Slave Relation for LBLK0            |     0x0     |
 * --------------------------------------------------------------------------------------------------|
 * RESERVE_LBLK0     |  [9:8]  |  RW  | Reserved for Later Usage                       |     0x0     |
 * --------------------------------------------------------------------------------------------------|
 *                   |         |      | Video Type Selection                           |             |
 *                   |         |      | 00 = RGB interface                             |             |
 * VT_LBLK0          | [11:10] |  RW  | 01 = i80 interface                             |     0x0     |
 *                   |         |      | 10 = reserved                                  |             |
 *                   |         |      | 11 = reserved                                  |             |
 * --------------------------------------------------------------------------------------------------|
 * SBZ               |  [12]   |  RW  | It should be zero                              |     0x0     |
 * --------------------------------------------------------------------------------------------------|
 * SBZ               |  [13]   |  RW  | It should be zero                              |     0x0     |
 * --------------------------------------------------------------------------------------------------|
 *                   |         |      | LO_MASK of PIXELASYNC                          |             |
 *                   |         |      | [0] : L0                                       |             |
 * RST_MASK_LBLK     | [18:14] |  RW  | [1] : L1                                       |     0x0     |
 *                   |         |      | [2] : L2                                       |             |
 *                   |         |      | [3] : L3                                       |             |
 *                   |         |      | [4] : WB                                       |             |
 * --------------------------------------------------------------------------------------------------|
 *                   |         |      | LCD_BLK FIFO software reset (active Low)       |             |
 *                   |         |      | [0] : L0                                       |             |
 * FIFORST_LBLK      | [23:19] |  RW  | [1] : L1                                       |     0x1F    |
 *                   |         |      | [2] : L2                                       |             |
 *                   |         |      | [3] : L3                                       |             |
 *                   |         |      | [4] : WB                                       |             |
 * --------------------------------------------------------------------------------------------------|
 * RESERVE_LBLK1     | [28:24] |  RW  | Reserved for Later Usage                       |     0x0     |
 * --------------------------------------------------------------------------------------------------|
 * SBZ               | [31:29] |  RW  | It should be zero                              |     0x0     |
 * --------------------------------------------------------------------------------------------------|
 */

typedef union LCDBLK_CFG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MIE_LBLK0:1;           //0
        uint32_t FIMDBYPASS_LBLK0:1;    //1
        uint32_t RGB_LBLK0:3;           //4:2
        uint32_t I80MS_LBLK0:3;         //7:5
        uint32_t RESERVE_LBLK0:2;       //9:8
        uint32_t VT_LBLK0:2;            //11:10
        uint32_t SBZ0:1;                //12
        uint32_t SBZ1:1;                //13
        uint32_t RST_MASK_LBLK:5;       //18:14
        uint32_t FIFORST_LBLK:5;        //23:19
        uint32_t RESERVE_LBLK1:5;       //28:24
        uint32_t SBZ2:3;                //31:29
    } bits;
} LCDBLK_CFG;

/*
 * CAMBLK_CFG
 * 
 * Address = SYSTEM REGISTER Base Address 1 + 0x0218
 * Reset Value = 0x01BF_FC00
 * 
 *        Name       |   Bit   | Type |                   Description                  | Reset Value | 
 * --------------------------------------------------------------------------------------------------|
 *                   |         |      | LCD0 Write Back Interface FIFO Local Reset     |             |
 * RST_MASK          |   [0]   |  RW  | Mask                                           |     0x0     |
 * _LCD0_CAMBLK_M0   |         |      | 0 = Enables local reset                        |             |
 *                   |         |      | 1 = Masks local reset                          |             |
 * --------------------------------------------------------------------------------------------------|
 * RST_MASK          |         |      | FIMC0 Local Interface FIFO Local Reset Mask    |             |
 * _LCD0_CAMBLK_S0   |   [1]   |  RW  | 0 = Enables local reset                        |     0x0     |
 *                   |         |      | 1 = Masks local reset                          |             |
 * --------------------------------------------------------------------------------------------------|
 * RST_MASK          |         |      | FIMC1 Local Interface FIFO Local Reset Mask    |             |
 * _LCD0_CAMBLK_S1   |   [2]   |  RW  | 0 = Enables local reset                        |     0x0     |
 *                   |         |      | 1 = Masks local reset                          |             |
 * --------------------------------------------------------------------------------------------------|
 * RST_MASK          |         |      | FIMC2 Local Interface FIFO Local Reset Mask    |             |
 * _LCD0_CAMBLK_S2   |   [3]   |  RW  | 0 = Enables local reset                        |     0x0     |
 *                   |         |      | 1 = Masks local reset                          |             |
 * --------------------------------------------------------------------------------------------------|
 * RST_MASK          |         |      | FIMC3 Local Interface FIFO Local Reset Mask    |             |
 * _LCD0_CAMBLK_S3   |   [4]   |  RW  | 0 = Enables local reset                        |     0x0     |
 *                   |         |      | 1 = Masks local reset                          |             |
 * --------------------------------------------------------------------------------------------------|
 *                   |         |      | ISP Write Back Interface FIFO Local Reset      |             |
 * RST_MASK          |   [5]   |  RW  | Mask                                           |     0x0     |
 * _ISP_CAMBLK_M1    |         |      | 0 = Enables local reset                        |             |
 *                   |         |      | 1 = Masks local reset                          |             |
 * --------------------------------------------------------------------------------------------------|
 * RST_MASK          |         |      | CAM_A Local Interface FIFO Local Reset Mask    |             |
 * _ISP_CAMBLK_S4    |   [6]   |  RW  | 0 = Enables local reset                        |     0x0     |
 *                   |         |      | 1 = Masks local reset                          |             |
 * --------------------------------------------------------------------------------------------------|
 * RST_MASK          |         |      | CAM_B Local Interface FIFO Local Reset Mask    |             |
 * _ISP_CAMBLK_S5    |   [7]   |  RW  | 0 = Enables local reset                        |     0x0     |
 *                   |         |      | 1 = Masks local reset                          |             |
 * --------------------------------------------------------------------------------------------------|
 * RST_MASK          |         |      | MIPI_A Local Interface FIFO Local Reset Mask   |             |
 * _ISP_CAMBLK_S6    |   [8]   |  RW  | 0 = Enables local reset                        |     0x0     |
 *                   |         |      | 1 = Masks local reset                          |             |
 * --------------------------------------------------------------------------------------------------|
 * RST_MASK          |         |      | MIPI_B Local Interface FIFO Local Reset Mask   |             |
 * _ISP_CAMBLK_S7    |   [9]   |  RW  | 0 = Enables local reset                        |     0x0     |
 *                   |         |      | 1 = Masks local reset                          |             |
 * --------------------------------------------------------------------------------------------------|
 * FIFORST_LCD0_     |  [10]   |  RW  | LCD0 Write Back Interface FIFO Software        |     0x1     |
 * CAMBLK_M0         |         |      | Reset                                          |             |
 * --------------------------------------------------------------------------------------------------|
 * FIFORST_LCD0_     |  [11]   |  RW  | FIMC0 Local Interface FIFO Software            |     0x1     |
 * CAMBLK_S0         |         |      |                                                |             |
 * --------------------------------------------------------------------------------------------------|
 * FIFORST_LCD0_     |  [12]   |  RW  | FIMC1 Local Interface FIFO Software            |     0x1     |
 * CAMBLK_S1         |         |      |                                                |             |
 * --------------------------------------------------------------------------------------------------|
 * FIFORST_LCD0_     |  [13]   |  RW  | FIMC2 Local Interface FIFO Software            |     0x1     |
 * CAMBLK_S2         |         |      |                                                |             |
 * --------------------------------------------------------------------------------------------------|
 * FIFORST_LCD0_     |  [14]   |  RW  | FIMC3 Local Interface FIFO Software            |     0x1     |
 * CAMBLK_S3         |         |      |                                                |             |
 * --------------------------------------------------------------------------------------------------|
 * FIFORST_LCD0_     |  [15]   |  RW  | ISP Write Back Interface FIFO Software         |     0x1     |
 * CAMBLK_M1         |         |      |                                                |             |
 * --------------------------------------------------------------------------------------------------|
 * FIFORST_LCD0_     |  [16]   |  RW  | CAM_A Write Back Interface FIFO Software       |     0x1     |
 * CAMBLK_S4         |         |      |                                                |             |
 * --------------------------------------------------------------------------------------------------|
 * FIFORST_LCD0_     |  [17]   |  RW  | CAM_B Write Back Interface FIFO Software       |     0x1     |
 * CAMBLK_S5         |         |      |                                                |             |
 * --------------------------------------------------------------------------------------------------|
 * FIFORST_LCD0_     |  [18]   |  RW  | MIPI_A Write Back Interface FIFO Software      |     0x1     |
 * CAMBLK_S6         |         |      |                                                |             |
 * --------------------------------------------------------------------------------------------------|
 * FIFORST_LCD0_     |  [19]   |  RW  | MIPI_B Write Back Interface FIFO Software      |     0x1     |
 * CAMBLK_S7         |         |      |                                                |             |
 * --------------------------------------------------------------------------------------------------|
 *                   |         |      | ISP WB Pixel Asynchronous FIFO Full Signal     |             |
 *                   |         |      | Enable                                         |             |
 *                   |         |      | 3`b001 = Enables FIMC0 FIFO Full signal only   |             |
 * ISPWB_FULL_EN     | [22:20] |  RW  | 3`b010 = Enables FIMC1 FIFO Full signal only   |     0x3     |
 *                   |         |      | 3`b100 = Enables FIMC2 FIFO Full signal only   |             |
 *                   |         |      | 3`b111 = Enables FIMC0 & FIMC1 & FIMC2         |             |
 *                   |         |      | FIFO full signals                              |             |
 * --------------------------------------------------------------------------------------------------|
 *                   |         |      | FIMD0 WB Interface Destination                 |             |
 *                   |         |      | 00 = FIMC0                                     |             |
 * FIMD0WB_DEST      | [24:23] |  RW  | 01 = FIMC1                                     |     0x3     |
 *                   |         |      | 10 = FIMC2                                     |             |
 *                   |         |      | 11 = FIMC3 should be different value from      |             |
 *                   |         |      | FIMD1WB_DEST                                   |             |
 * --------------------------------------------------------------------------------------------------|
 * RESERVE_CAMBLK    | [31:25] |  RW  | Reserved for Later Usage                       |     0x0     |
 * --------------------------------------------------------------------------------------------------|
 */

typedef union CAMBLK_CFG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t RST_MASK_LCD0_CAMBLK_M0:1;     //0
        uint32_t RST_MASK_LCD0_CAMBLK_S0:1;     //1
        uint32_t RST_MASK_LCD0_CAMBLK_S1:1;     //2
        uint32_t RST_MASK_LCD0_CAMBLK_S2:1;     //3
        uint32_t RST_MASK_LCD0_CAMBLK_S3:1;     //4
        uint32_t RST_MASK_ISP_CAMBLK_M1:1;      //5
        uint32_t RST_MASK_ISP_CAMBLK_S4:1;      //6
        uint32_t RST_MASK_ISP_CAMBLK_S5:1;      //7
        uint32_t RST_MASK_ISP_CAMBLK_S6:1;      //8
        uint32_t RST_MASK_ISP_CAMBLK_S7:1;      //9
        uint32_t FIFORST_LCD0_CAMBLK_M0:1;      //10
        uint32_t FIFORST_LCD0_CAMBLK_S0:1;      //11
        uint32_t FIFORST_LCD0_CAMBLK_S1:1;      //12
        uint32_t FIFORST_LCD0_CAMBLK_S2:1;      //13
        uint32_t FIFORST_LCD0_CAMBLK_S3:1;      //14
        uint32_t FIFORST_LCD0_CAMBLK_M1:1;      //15
        uint32_t FIFORST_LCD0_CAMBLK_S4:1;      //16
        uint32_t FIFORST_LCD0_CAMBLK_S5:1;      //17
        uint32_t FIFORST_LCD0_CAMBLK_S6:1;      //18
        uint32_t FIFORST_LCD0_CAMBLK_S7:1;      //19
        uint32_t ISPWB_FULL_EN:3;               //22:20
        uint32_t FIMD0WB_DEST:2;                //24:23
        uint32_t RESERVE_CAMBLK:7;              //31:25
    } bits;
} CAMBLK_CFG;

/*
 * USB_CFG
 * 
 * Address = SYSTEM REGISTER Base Address 1 + 0x021C
 * Reset Value = 0x0000_0000
 * 
 *       Name      |   Bit   | Type |                   Description                  | Reset Value | 
 * ------------------------------------------------------------------------------------------------|
 *                 |         |      | USB PHY Mode Selection                         |             |
 *                 |         |      | USB PHY operates as only one mode at a time    |             |
 * HOST_MODE       |   [0]   |  RW  | by this selection.                             |     0x0     |
 *                 |         |      | 0 = USB Device                                 |             |
 *                 |         |      | 1 = USB Host                                   |             |
 * ------------------------------------------------------------------------------------------------|
 * RSVD            | [31:1]  |  -   | Reserved                                       |     0x0     |
 * ------------------------------------------------------------------------------------------------|
 */

typedef union USB_CFG_u
{
    uint32_t all_val;
    struct
    {
        uint32_t HOST_MODE:1;       //0
        uint32_t Reserved0:31;      //31:1
    } bits;
} USB_CFG;

/*
 * PPMU_CON
 * 
 * Address = SYSTEM REGISTER Base Address 1 + 0x0320
 * Reset Value = 0x0000_0000
 * 
 *    Name   |   Bit   | Type |     Description     | Reset Value | 
 * ---------------------------------------------------------------|
 * CPU       |   [0]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * ACP       |   [1]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * DMC0      |   [2]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * DMC1      |   [3]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * LEFTBUS   |   [4]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * RIGHTBUS  |   [5]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * CAM       |   [6]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * TV        |   [7]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * MFC_R     |   [8]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * MFC_L     |   [9]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * G3D       |  [10]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * IMAGE     |  [11]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * LCD0      |  [12]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * RSVD      |  [13]   |  -   | Reserved            |     0x0     |
 * ---------------------------------------------------------------|
 * FSYS      |  [14]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * DMC0_A    |  [15]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * DMC1_A    |  [16]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * DMC0_M    |  [17]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * DMC1_M    |  [18]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * ISPX      |  [19]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * ISPMX     |  [20]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * RSVD      | [31:21] |  -   | Reserved            |     0x0     |
 * ---------------------------------------------------------------|
 */

typedef union PPMU_CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t CPU:1;             //0
        uint32_t ACP:1;             //1
        uint32_t DMC0:1;            //2
        uint32_t DMC1:1;            //3
        uint32_t LEFTBUS:1;         //4
        uint32_t RIGHTBUS:1;        //5
        uint32_t CAM:1;             //6
        uint32_t TV:1;              //7
        uint32_t MFC_R:1;           //8
        uint32_t MFC_L:1;           //9
        uint32_t G3D:1;             //10
        uint32_t IMAGE:1;           //11
        uint32_t LCD0:1;            //12
        uint32_t Reserved0:1;       //13
        uint32_t FSYS:1;            //14
        uint32_t DMC0_A:1;          //15
        uint32_t DMC1_A:1;          //16
        uint32_t DMC0_M:1;          //17
        uint32_t DMC1_M:1;          //18
        uint32_t ISPX:1;            //19
        uint32_t ISPMX:1;           //20
        uint32_t Reserved1:11;      //31:21
    } bits;
} PPMU_CON;

/*
 * SMMU_CON
 * 
 * Address = SYSTEM REGISTER Base Address 1 + 0x0330
 * Reset Value = 0x0000_0000
 * 
 *    Name   |   Bit   | Type |     Description     | Reset Value | 
 * ---------------------------------------------------------------|
 * RSVD      |   [0]   |  -   | Reserved            |     0x0     |
 * ---------------------------------------------------------------|
 * SSS       |   [1]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * FIMC0     |   [2]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * FIMC1     |   [3]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * FIMC2     |   [4]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * FIMC3     |   [5]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * JEPG      |   [6]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * TV        |   [7]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * MFC_R     |   [8]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * MFC_L     |   [9]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * G2D       |  [10]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * ROTATOR   |  [11]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * MDMA      |  [12]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * FIMD0     |  [13]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * ISPCX     |  [14]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * ISP       |  [15]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * FD        |  [16]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * DRC       |  [17]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * LITE0     |  [18]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * LITE1     |  [19]   |  RW  | 0 = Stop            |     0x0     |
 *           |         |      | 1 = Start           |             |
 * ---------------------------------------------------------------|
 * RSVD      | [31:20] |  -   | Reserved            |     0x0     |
 * ---------------------------------------------------------------|
 */

typedef union SMMU_CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:1;       //0
        uint32_t SSS:1;             //1
        uint32_t FIMC0:1;           //2
        uint32_t FIMC1:1;           //3
        uint32_t FIMC2:1;           //4
        uint32_t FIMC3:1;           //5
        uint32_t JEPG:1;            //6
        uint32_t TV:1;              //7
        uint32_t MFC_R:1;           //8
        uint32_t MFC_L:1;           //9
        uint32_t G2D:1;             //10
        uint32_t ROTATOR:1;         //11
        uint32_t MDMA:1;            //12
        uint32_t FIMD0:1;           //13
        uint32_t ISPCX:1;           //14
        uint32_t ISP:1;             //15
        uint32_t FD:1;              //16
        uint32_t DRC:1;             //17
        uint32_t LITE0:1;           //18
        uint32_t LITE1:1;           //19
        uint32_t Reserved1:12;      //31:20
    } bits;
} SMMU_CON;

#endif