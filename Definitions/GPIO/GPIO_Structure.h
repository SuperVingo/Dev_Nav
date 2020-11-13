#ifndef __GPIO_GPIO_STRUCTURE_H__     
#define __GPIO_GPIO_STRUCTURE_H__    

#include "ustdint.h"

/*
 * GPA0CON
 * 
 * Address = GPIO Base Address 1 + 0x0000
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |      Description      |   Reset Value    | 
 * -------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input       |                  |
 *              |         |      | 0x1     : Output      |                  |
 * GPA0CON[0]   |  [3:0]  |  RW  | 0x2     : UART_0_RXD  |       0x00       |
 *              |         |      | 0x3~0xE : Reserved    |                  |
 *              |         |      | 0xF     : EXT_INT1[0] |                  |
 * -------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input       |                  |
 *              |         |      | 0x1     : Output      |                  |
 * GPA0CON[1]   |  [7:4]  |  RW  | 0x2     : UART_0_TXD  |       0x00       |
 *              |         |      | 0x3~0xE : Reserved    |                  |
 *              |         |      | 0xF     : EXT_INT1[1] |                  |
 * -------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input       |                  |
 *              |         |      | 0x1     : Output      |                  |
 * GPA0CON[2]   |  [11:8] |  RW  | 0x2     : UART_0_CTSn |       0x00       |
 *              |         |      | 0x3~0xE : Reserved    |                  |
 *              |         |      | 0xF     : EXT_INT1[2] |                  |
 * -------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input       |                  |
 *              |         |      | 0x1     : Output      |                  |
 * GPA0CON[3]   | [15:12] |  RW  | 0x2     : UART_0_RTSn |       0x00       |
 *              |         |      | 0x3~0xE : Reserved    |                  |
 *              |         |      | 0xF     : EXT_INT1[3] |                  |
 * -------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input       |                  |
 *              |         |      | 0x1     : Output      |                  |
 * GPA0CON[4]   | [19:16] |  RW  | 0x2     : UART_1_RXD  |       0x00       |
 *              |         |      | 0x3~0xE : Reserved    |                  |
 *              |         |      | 0xF     : EXT_INT1[4] |                  |
 * -------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input       |                  |
 *              |         |      | 0x1     : Output      |                  |
 * GPA0CON[5]   | [23:20] |  RW  | 0x2     : UART_1_TXD  |       0x00       |
 *              |         |      | 0x3~0xE : Reserved    |                  |
 *              |         |      | 0xF     : EXT_INT1[5] |                  |
 * -------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input       |                  |
 *              |         |      | 0x1     : Output      |                  |
 *              |         |      | 0x2     : UART_1_CTSn |                  |
 * GPA0CON[6]   | [27:24] |  RW  | 0x3     : I2C_2_SDA   |       0x00       |
 *              |         |      | 0x4~0xE : Reserved    |                  |
 *              |         |      | 0xF     : EXT_INT1[6] |                  |
 * -------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input       |                  |
 *              |         |      | 0x1     : Output      |                  |
 *              |         |      | 0x2     : Output      |                  |
 * GPA0CON[7]   | [31:28] |  RW  | 0x3     : I2C_2_SCL   |       0x00       |
 *              |         |      | 0x4~0xE : Reserved    |                  |
 *              |         |      | 0xF     : EXT_INT1[7] |                  |
 * -------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPA0DAT
 * 
 * Address = GPIO Base Address 1 + 0x0004
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPA0DAT[7:0] |  [7:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPA0PUD
 * 
 * Address = GPIO Base Address 1 + 0x0008
 * Reset Value = 0x5555
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPA0PUD[n]   | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |      0x5555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPA0DRV
 * 
 * Address = GPIO Base Address 1 + 0x000C
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPA0DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 7 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPA0CONPDN
 * 
 * Address = GPIO Base Address 1 + 0x0010
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPA0[n]      | n = 0 ~ 7 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPA0PUDPDN
 * 
 * Address = GPIO Base Address 1 + 0x0014
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPA0[n]      | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPA0CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPA0CON0:4; //3:0
        uint32_t GPA0CON1:4; //7:4
        uint32_t GPA0CON2:4; //11:8
        uint32_t GPA0CON3:4; //15:12
        uint32_t GPA0CON4:4; //19:16
        uint32_t GPA0CON5:4; //23:20
        uint32_t GPA0CON6:4; //27:24
        uint32_t GPA0CON7:4; //28:31
    } bits;
} GPA0CON;

typedef union GPA0DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPA0DAT:8; //7:0
    } bits;
} GPA0DAT;

typedef union GPA0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPA0PUD0:2; //1:0
        uint32_t GPA0PUD1:2; //3:2
        uint32_t GPA0PUD2:2; //5:4
        uint32_t GPA0PUD3:2; //7:6
        uint32_t GPA0PUD4:2; //9:8
        uint32_t GPA0PUD5:2; //11:10
        uint32_t GPA0PUD6:2; //13:12
        uint32_t GPA0PUD7:2; //15:14
    } bits;
} GPA0PUD;

typedef union GPA0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPA0DRV0:2; //1:0
        uint32_t GPA0DRV1:2; //3:2
        uint32_t GPA0DRV2:2; //5:4
        uint32_t GPA0DRV3:2; //7:6
        uint32_t GPA0DRV4:2; //9:8
        uint32_t GPA0DRV5:2; //11:10
        uint32_t GPA0DRV6:2; //13:12
        uint32_t GPA0DRV7:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPA0DRV;

typedef union GPA0CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPA00:2; //1:0
        uint32_t GPA01:2; //3:2
        uint32_t GPA02:2; //5:4
        uint32_t GPA03:2; //7:6
        uint32_t GPA04:2; //9:8
        uint32_t GPA05:2; //11:10
        uint32_t GPA06:2; //13:12
        uint32_t GPA07:2; //15:14 
    } bits;   
} GPA0CONPDN;

typedef union GPA0PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPA00:2; //1:0
        uint32_t GPA01:2; //3:2
        uint32_t GPA02:2; //5:4
        uint32_t GPA03:2; //7:6
        uint32_t GPA04:2; //9:8
        uint32_t GPA05:2; //11:10
        uint32_t GPA06:2; //13:12
        uint32_t GPA07:2; //15:14
    } bits;   
} GPA0PUDPDN;

/*
 * GPA1CON
 * 
 * Address = GPIO Base Address 1 + 0x0020
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |        Description       |   Reset Value    | 
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : UART_2_RXD     |                  |
 * GPA1CON[0]   |  [3:0]  |  RW  | 0x3     : Reserved       |       0x00       |
 *              |         |      | 0x4     : UART_AUDIO_RXD |                  |
 *              |         |      | 0x5~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT2[0]    |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : UART_2_TXD     |                  |
 * GPA1CON[1]   |  [7:4]  |  RW  | 0x3     : Reserved       |       0x00       |
 *              |         |      | 0x4     : UART_AUDIO_TXD |                  |
 *              |         |      | 0x5~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT2[1]    |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : UART_2_CTSn    |                  |
 * GPA1CON[2]   | [11:8]  |  RW  | 0x3     : I2C_3_SDA      |       0x00       |
 *              |         |      | 0x5~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT2[2]    |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : UART_2_RTSn    |                  |
 * GPA1CON[3]   | [15:12] |  RW  | 0x3     : I2C_3_SCL      |       0x00       |
 *              |         |      | 0x4~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT2[3]    |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : UART_3_RXD     |                  |
 * GPA1CON[4]   | [19:16] |  RW  | 0x3     : Reserved       |       0x00       |
 *              |         |      | 0x4     : UART_AUDIO_RXD |                  |
 *              |         |      | 0x5~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT2[4]    |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : UART_3_TXD     |                  |
 * GPA1CON[5]   | [23:20] |  RW  | 0x3     : Reserved       |       0x00       |
 *              |         |      | 0x4     : UART_AUDIO_TXD |                  |
 *              |         |      | 0x5~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT2[5]    |                  |
 * ----------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPA1DAT
 * 
 * Address = GPIO Base Address 1 + 0x0024
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPA1DAT[5:0] |  [5:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPA1PUD
 * 
 * Address = GPIO Base Address 1 + 0x0028
 * Reset Value = 0x5555
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPA1PUD[n]   | n = 0 ~ 5 |  RW  | 0x2 : Reserved                     |      0x5555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPA1DRV
 * 
 * Address = GPIO Base Address 1 + 0x002C
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPA1DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 5 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPA1CONPDN
 * 
 * Address = GPIO Base Address 1 + 0x0030
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPA1[n]      | n = 0 ~ 5 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPA1PUDPDN
 * 
 * Address = GPIO Base Address 1 + 0x0034
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPA1[n]      | n = 0 ~ 5 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPA1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPA1CON0:4; //3:0
        uint32_t GPA1CON1:4; //7:4
        uint32_t GPA1CON2:4; //11:8
        uint32_t GPA1CON3:4; //15:12
        uint32_t GPA1CON4:4; //19:16
        uint32_t GPA1CON5:4; //23:20
    } bits;
} GPA1CON;

typedef union GPA1DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPA1DAT:6; //5:0
    } bits;
} GPA1DAT;

typedef union GPA1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPA1PUD0:2; //1:0
        uint32_t GPA1PUD1:2; //3:2
        uint32_t GPA1PUD2:2; //5:4
        uint32_t GPA1PUD3:2; //7:6
        uint32_t GPA1PUD4:2; //9:8
        uint32_t GPA1PUD5:2; //11:10
    } bits;
} GPA1PUD;

typedef union GPA1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPA1DRV0:2; //1:0
        uint32_t GPA1DRV1:2; //3:2
        uint32_t GPA1DRV2:2; //5:4
        uint32_t GPA1DRV3:2; //7:6
        uint32_t GPA1DRV4:2; //9:8
        uint32_t GPA1DRV5:2; //11:10
        uint32_t Unknown:4;  //15:12
        uint32_t Reserved:8; //23:16
    } bits;
} GPA1DRV;

typedef union GPA1CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPA10:2; //1:0
        uint32_t GPA11:2; //3:2
        uint32_t GPA12:2; //5:4
        uint32_t GPA13:2; //7:6
        uint32_t GPA14:2; //9:8
        uint32_t GPA15:2; //11:10
    } bits;   
} GPA1CONPDN;

typedef union GPA1PUDPDN_u
{
    uint16_t all_val:12;
    struct
    {
        uint32_t GPA10:2; //1:0
        uint32_t GPA11:2; //3:2
        uint32_t GPA12:2; //5:4
        uint32_t GPA13:2; //7:6
        uint32_t GPA14:2; //9:8
        uint32_t GPA15:2; //11:10
    } bits;   
} GPA1PUDPDN;

/*
 * GPBCON
 *  
 * Address = GPIO Base Address 1 + 0x0040
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |      Description      |   Reset Value    | 
 * -------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input       |                  |
 *              |         |      | 0x1     : Output      |                  |
 *              |         |      | 0x2     : SPI_0_CLK   |                  |
 * GPBCON[0]    |  [3:0]  |  RW  | 0x3     : I2C_4_SDA   |       0x00       |
 *              |         |      | 0x4~0xE : Reserved    |                  |
 *              |         |      | 0xF     : EXT_INT3[0] |                  |
 * -------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input       |                  |
 *              |         |      | 0x1     : Output      |                  |
 *              |         |      | 0x2     : SPI_0_nSS   |                  |
 * GPBCON[1]    |  [7:4]  |  RW  | 0x3     : I2C_4_SCL   |       0x00       |
 *              |         |      | 0x4~0xE : Reserved    |                  |
 *              |         |      | 0xF     : EXT_INT3[1] |                  |
 * -------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input       |                  |
 *              |         |      | 0x1     : Output      |                  |
 *              |         |      | 0x2     : SPI_0_MISO  |                  |
 * GPBCON[2]    |  [11:8] |  RW  | 0x3     : I2C_5_SDA   |       0x00       |
 *              |         |      | 0x4~0xE : Reserved    |                  |
 *              |         |      | 0xF     : EXT_INT3[2] |                  |
 * -------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input       |                  |
 *              |         |      | 0x1     : Output      |                  |
 *              |         |      | 0x2     : SPI_0_MOSI  |                  |
 * GPBCON[3]    | [15:12] |  RW  | 0x3     : I2C_5_SCL   |       0x00       |
 *              |         |      | 0x4~0xE : Reserved    |                  |
 *              |         |      | 0xF     : EXT_INT3[3] |                  |
 * -------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input       |                  |
 *              |         |      | 0x1     : Output      |                  |
 *              |         |      | 0x2     : SPI_1_CLK   |                  |
 * GPBCON[4]    | [19:16] |  RW  | 0x3     : Reserved    |       0x00       |
 *              |         |      | 0x4     : IEM_SCLK    |                  |
 *              |         |      | 0x5~0xE : Reserved    |                  |
 *              |         |      | 0xF     : EXT_INT3[4] |                  |
 * -------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input       |                  |
 *              |         |      | 0x1     : Output      |                  |
 *              |         |      | 0x2     : SPI_1_nSS   |                  |
 * GPBCON[5]    | [23:20] |  RW  | 0x3     : Reserved    |       0x00       |
 *              |         |      | 0x4     : IEM_SPWI    |                  |
 *              |         |      | 0x5~0xE : Reserved    |                  |
 *              |         |      | 0xF     : EXT_INT3[5] |                  |
 * -------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input       |                  |
 *              |         |      | 0x1     : Output      |                  |
 * GPBCON[6]    | [27:24] |  RW  | 0x3     : SPI_1_MISO  |       0x00       |
 *              |         |      | 0x4~0xE : Reserved    |                  |
 *              |         |      | 0xF     : EXT_INT3[6] |                  |
 * -------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input       |                  |
 *              |         |      | 0x1     : Output      |                  |
 * GPBCON[7]    | [31:28] |  RW  | 0x3     : SPI_1_MOSI  |       0x00       |
 *              |         |      | 0x4~0xE : Reserved    |                  |
 *              |         |      | 0xF     : EXT_INT3[7] |                  |
 * -------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPBDAT
 * 
 * Address = GPIO Base Address 1 + 0x0044
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPBDAT[7:0]  |  [7:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPBPUD
 * 
 * Address = GPIO Base Address 1 + 0x0048
 * Reset Value = 0x5555
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPBPUD[n]    | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |      0x5555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPBDRV
 * 
 * Address = GPIO Base Address 1 + 0x004C
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPBDRV[n]    | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 7 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4                       |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPBCONPDN
 * 
 * Address = GPIO Base Address 1 + 0x0050
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPB[n]       | n = 0 ~ 7 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPBPUDPDN
 * 
 * Address = GPIO Base Address 1 + 0x0054
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPB[n]       | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPBCON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPBCON0:4; //3:0
        uint32_t GPBCON1:4; //7:4
        uint32_t GPBCON2:4; //11:8
        uint32_t GPBCON3:4; //15:12
        uint32_t GPBCON4:4; //19:16
        uint32_t GPBCON5:4; //23:20
        uint32_t GPBCON6:4; //27:24
        uint32_t GPBCON7:4; //28:31
    } bits;
} GPBCON;

typedef union GPBDAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPBDAT:8; //7:0
    } bits;
} GPBDAT;

typedef union GPBPUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPBPUD0:2; //1:0
        uint32_t GPBPUD1:2; //3:2
        uint32_t GPBPUD2:2; //5:4
        uint32_t GPBPUD3:2; //7:6
        uint32_t GPBPUD4:2; //9:8
        uint32_t GPBPUD5:2; //11:10
        uint32_t GPBPUD6:2; //13:12
        uint32_t GPBPUD7:2; //15:14
    } bits;
} GPBPUD;

typedef union GPBDRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPBDRV0:2; //1:0
        uint32_t GPBDRV1:2; //3:2
        uint32_t GPBDRV2:2; //5:4
        uint32_t GPBDRV3:2; //7:6
        uint32_t GPBDRV4:2; //9:8
        uint32_t GPBDRV5:2; //11:10
        uint32_t GPBDRV6:2; //13:12
        uint32_t GPBDRV7:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPBDRV;

typedef union GPBCONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPB0:2; //1:0
        uint32_t GPB1:2; //3:2
        uint32_t GPB2:2; //5:4
        uint32_t GPB3:2; //7:6
        uint32_t GPB4:2; //9:8
        uint32_t GPB5:2; //11:10
        uint32_t GPB6:2; //13:12
        uint32_t GPB7:2; //15:14 
    } bits;   
} GPBCONPDN;

typedef union GPBPUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPB0:2; //1:0
        uint32_t GPB1:2; //3:2
        uint32_t GPB2:2; //5:4
        uint32_t GPB3:2; //7:6
        uint32_t GPB4:2; //9:8
        uint32_t GPB5:2; //11:10
        uint32_t GPB6:2; //13:12
        uint32_t GPB7:2; //15:14
    } bits;   
} GPBPUDPDN;

/*
 * GPC0CON
 * 
 * Address = GPIO Base Address 1 + 0x0060
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |        Description       |   Reset Value    | 
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : I2S_1_SCLK     |                  |
 * GPC0CON[0]   |  [3:0]  |  RW  | 0x3     : PCM_1_SCLK     |       0x00       |
 *              |         |      | 0x4     : AC97BITCLK     |                  |
 *              |         |      | 0x5~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT4[0]    |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : I2S_1_CDCLK    |                  |
 * GPC0CON[1]   |  [7:4]  |  RW  | 0x2     : PCM_1_EXTCLK   |       0x00       |
 *              |         |      | 0x4     : AC97RESETn     |                  |
 *              |         |      | 0x5~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT4[1]    |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : IS2_1_LRCK     |                  |
 * GPC0CON[2]   | [11:8]  |  RW  | 0x3     : PCM_1_FSYNC    |       0x00       |
 *              |         |      | 0x4     : AC97SYNC       |                  |
 *              |         |      | 0x5~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT4[2]    |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : I2S_1_SDI      |                  |
 * GPC0CON[3]   | [15:12] |  RW  | 0x3     : PCM_1_SIN      |       0x00       |
 *              |         |      | 0x4     : AC97SDI        |                  |
 *              |         |      | 0x5~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT4[3]    |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : I2S_1_SDO      |                  |
 * GPC0CON[4]   | [19:16] |  RW  | 0x3     : PCM_1_SOUT     |       0x00       |
 *              |         |      | 0x4     : AC97SDO        |                  |
 *              |         |      | 0x5~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT4[4]    |                  |
 * ----------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPC0DAT
 * 
 * Address = GPIO Base Address 1 + 0x0064
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPC0DAT[4:0] |  [4:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPC0PUD
 * 
 * Address = GPIO Base Address 1 + 0x0068
 * Reset Value = 0x0155
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPC0PUD[n]   | n = 0 ~ 4 |  RW  | 0x2 : Reserved                     |      0x0155      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPC0DRV
 * 
 * Address = GPIO Base Address 1 + 0x006C
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPC0DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 4 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPC0CONPDN
 * 
 * Address = GPIO Base Address 1 + 0x0070
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPC0[n]      | n = 0 ~ 4 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPC0PUDPDN
 * 
 * Address = GPIO Base Address 1 + 0x0074
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPC0[n]      | n = 0 ~ 4 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPC0CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPC0CON0:4; //3:0
        uint32_t GPC0CON1:4; //7:4
        uint32_t GPC0CON2:4; //11:8
        uint32_t GPC0CON3:4; //15:12
        uint32_t GPC0CON4:4; //19:16
    } bits;
} GPC0CON;

typedef union GPC0DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPC0DAT:5; //4:0
    } bits;
} GPC0DAT;

typedef union GPC0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPC0PUD0:2; //1:0
        uint32_t GPC0PUD1:2; //3:2
        uint32_t GPC0PUD2:2; //5:4
        uint32_t GPC0PUD3:2; //7:6
        uint32_t GPC0PUD4:2; //9:8
    } bits;
} GPC0PUD;

typedef union GPC0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPC0DRV0:2; //1:0
        uint32_t GPC0DRV1:2; //3:2
        uint32_t GPC0DRV2:2; //5:4
        uint32_t GPC0DRV3:2; //7:6
        uint32_t GPC0DRV4:2; //9:8
        uint32_t Unknown:6;  //15:12
        uint32_t Reserved:8; //23:16
    } bits;
} GPC0DRV;

typedef union GPC0CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPC00:2; //1:0
        uint32_t GPC01:2; //3:2
        uint32_t GPC02:2; //5:4
        uint32_t GPC03:2; //7:6
        uint32_t GPC04:2; //9:8
    } bits;   
} GPC0CONPDN;

typedef union GPC0PUDPDN_u
{
    uint16_t all_val:10;
    struct
    {
        uint32_t GPC00:2; //1:0
        uint32_t GPC01:2; //3:2
        uint32_t GPC02:2; //5:4
        uint32_t GPC03:2; //7:6
        uint32_t GPC04:2; //9:8
    } bits;   
} GPC0PUDPDN;

/*
 * GPC1CON
 * 
 * Address = GPIO Base Address 1 + 0x0080
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |        Description       |   Reset Value    | 
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : I2S_2_SCLK     |                  |
 * GPC1CON[0]   |  [3:0]  |  RW  | 0x3     : PCM_2_SCLK     |       0x00       |
 *              |         |      | 0x4     : SPDIF_0_OUT    |                  |
 *              |         |      | 0x5~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT5[0]    |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : I2S_2_CDCLK    |                  |
 *              |         |      | 0x3     : PCM_2_EXTCLK   |                  |
 * GPC1CON[1]   |  [7:4]  |  RW  | 0x4     : SPDIF_EXTCLK   |       0x00       |
 *              |         |      | 0x5     : SPI_2_CLK      |                  |
 *              |         |      | 0x6~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT5[1]    |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : IS2_2_LRCK     |                  |
 *              |         |      | 0x3     : PCM_2_FSYNC    |                  |
 * GPC1CON[2]   | [11:8]  |  RW  | 0x4     : Reserved       |       0x00       |
 *              |         |      | 0x5     : SPI_2_nSS      |                  |
 *              |         |      | 0x6~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT5[2]    |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : I2S_2_SDI      |                  |
 *              |         |      | 0x3     : PCM_2_SIN      |                  |
 * GPC1CON[3]   | [15:12] |  RW  | 0x4     : I2C_6_SDA      |       0x00       |
 *              |         |      | 0x5     : SPI_2_MISO     |                  |
 *              |         |      | 0x6~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT5[3]    |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : I2S_2_SDO      |                  |
 *              |         |      | 0x2     : PCM_2_SOUT     |                  |
 * GPC1CON[4]   | [19:16] |  RW  | 0x3     : I2C_6_SCL      |       0x00       |
 *              |         |      | 0x4     : SPI_2_MOSI     |                  |
 *              |         |      | 0x5~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT5[4]    |                  |
 * ----------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPC1DAT
 * 
 * Address = GPIO Base Address 1 + 0x0084
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPC1DAT[4:0] |  [4:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPC1PUD
 * 
 * Address = GPIO Base Address 1 + 0x0088
 * Reset Value = 0x0155
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPC1PUD[n]   | n = 0 ~ 4 |  RW  | 0x2 : Reserved                     |      0x0155      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPC1DRV
 * 
 * Address = GPIO Base Address 1 + 0x008C
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPC1DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 4 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPC1CONPDN
 * 
 * Address = GPIO Base Address 1 + 0x0090
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPC1[n]      | n = 0 ~ 4 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPC1PUDPDN
 * 
 * Address = GPIO Base Address 1 + 0x0094
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPC1[n]      | n = 0 ~ 4 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPC1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPC1CON0:4; //3:0
        uint32_t GPC1CON1:4; //7:4
        uint32_t GPC1CON2:4; //11:8
        uint32_t GPC1CON3:4; //15:12
        uint32_t GPC1CON4:4; //19:16
    } bits;
} GPC1CON;

typedef union GPC1DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPC1DAT:5; //4:0
    } bits;
} GPC1DAT;

typedef union GPC1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPC1PUD0:2; //1:0
        uint32_t GPC1PUD1:2; //3:2
        uint32_t GPC1PUD2:2; //5:4
        uint32_t GPC1PUD3:2; //7:6
        uint32_t GPC1PUD4:2; //9:8
    } bits;
} GPC1PUD;

typedef union GPC1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPC1DRV0:2; //1:0
        uint32_t GPC1DRV1:2; //3:2
        uint32_t GPC1DRV2:2; //5:4
        uint32_t GPC1DRV3:2; //7:6
        uint32_t GPC1DRV4:2; //9:8
        uint32_t Unknown:6;  //15:12
        uint32_t Reserved:8; //23:16
    } bits;
} GPC1DRV;

typedef union GPC1CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPC10:2; //1:0
        uint32_t GPC11:2; //3:2
        uint32_t GPC12:2; //5:4
        uint32_t GPC13:2; //7:6
        uint32_t GPC14:2; //9:8
    } bits;   
} GPC1CONPDN;

typedef union GPC1PUDPDN_u
{
    uint16_t all_val:10;
    struct
    {
        uint32_t GPC10:2; //1:0
        uint32_t GPC11:2; //3:2
        uint32_t GPC12:2; //5:4
        uint32_t GPC13:2; //7:6
        uint32_t GPC14:2; //9:8
    } bits;   
} GPC1PUDPDN;

/*
 * GPD0CON
 * 
 * Address = GPIO Base Address 1 + 0x00A0
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |        Description       |   Reset Value    | 
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : TOUT_0         |                  |
 * GPD0CON[0]   |  [3:0]  |  RW  | 0x3     : LCD_FRM        |       0x00       |
 *              |         |      | 0x4~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT6[0]    |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : TOUT_1         |                  |
 * GPD0CON[1]   |  [7:4]  |  RW  | 0x3     : LCD_PWM        |       0x00       |
 *              |         |      | 0x4~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT6[1]    |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : TOUT_2         |                  |
 * GPD0CON[2]   | [11:8]  |  RW  | 0x3     : I2C_7_SDA      |       0x00       |
 *              |         |      | 0x4~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT6[2]    |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : TOUT_3         |                  |
 * GPD0CON[3]   | [15:12] |  RW  | 0x3     : I2C_7_SCL      |       0x00       |
 *              |         |      | 0x4~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT6[3]    |                  |
 * ----------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPD0DAT
 * 
 * Address = GPIO Base Address 1 + 0x00A4
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPD0DAT[3:0] |  [3:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPD0PUD
 * 
 * Address = GPIO Base Address 1 + 0x00A8
 * Reset Value = 0x0055
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPD0PUD[n]   | n = 0 ~ 3 |  RW  | 0x2 : Reserved                     |      0x0055      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPD0DRV
 * 
 * Address = GPIO Base Address 1 + 0x00AC
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPD0DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 3 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPD0CONPDN
 * 
 * Address = GPIO Base Address 1 + 0x00B0
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPD0[n]      | n = 0 ~ 3 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPD0PUDPDN
 * 
 * Address = GPIO Base Address 1 + 0x00B4
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPD0[n]      | n = 0 ~ 3 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPD0CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPD0CON0:4; //3:0
        uint32_t GPD0CON1:4; //7:4
        uint32_t GPD0CON2:4; //11:8
        uint32_t GPD0CON3:4; //15:12
    } bits;
} GPD0CON;

typedef union GPD0DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPD0DAT:4; //3:0
    } bits;
} GPD0DAT;

typedef union GPD0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPD0PUD0:2; //1:0
        uint32_t GPD0PUD1:2; //3:2
        uint32_t GPD0PUD2:2; //5:4
        uint32_t GPD0PUD3:2; //7:6
    } bits;
} GPD0PUD;

typedef union GPD0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPD0DRV0:2; //1:0
        uint32_t GPD0DRV1:2; //3:2
        uint32_t GPD0DRV2:2; //5:4
        uint32_t GPD0DRV3:2; //7:6
        uint32_t Unknown:8;  //15:12
        uint32_t Reserved:8; //23:16
    } bits;
} GPD0DRV;

typedef union GPD0CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPD00:2; //1:0
        uint32_t GPD01:2; //3:2
        uint32_t GPD02:2; //5:4
        uint32_t GPD03:2; //7:6
    } bits;   
} GPD0CONPDN;

typedef union GPD0PUDPDN_u
{
    uint16_t all_val:8;
    struct
    {
        uint32_t GPD00:2; //1:0
        uint32_t GPD01:2; //3:2
        uint32_t GPD02:2; //5:4
        uint32_t GPD03:2; //7:6
    } bits;   
} GPD0PUDPDN;

/*
 * GPD1CON
 * 
 * Address = GPIO Base Address 1 + 0x00C0
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |        Description       |   Reset Value    | 
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : I2C_0_SDA      |                  |
 * GPD1CON[0]   |  [3:0]  |  RW  | 0x3     : MIPI0_BYTE_CLK |       0x00       |
 *              |         |      | 0x4~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT7[0]    |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : I2C_0_SCL      |                  |
 * GPD1CON[1]   |  [7:4]  |  RW  | 0x3     : MIPI0_ESC_CLK  |       0x00       |
 *              |         |      | 0x4~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT7[1]    |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : I2C_1_SDA      |                  |
 * GPD1CON[2]   | [11:8]  |  RW  | 0x3     : MIPI1_BYTE_CLK |       0x00       |
 *              |         |      | 0x4~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT7[2]    |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 *              |         |      | 0x2     : I2C_1_SCL      |                  |
 * GPD1CON[3]   | [15:12] |  RW  | 0x3     : MIPI1_ESC_CLK  |       0x00       |
 *              |         |      | 0x4~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT7[3]    |                  |
 * ----------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPD1DAT
 * 
 * Address = GPIO Base Address 1 + 0x00C4
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPD1DAT[3:0] |  [3:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPD1PUD
 * 
 * Address = GPIO Base Address 1 + 0x00C8
 * Reset Value = 0x0055
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPD1PUD[n]   | n = 0 ~ 3 |  RW  | 0x2 : Reserved                     |      0x0055      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPD1DRV
 * 
 * Address = GPIO Base Address 1 + 0x00CC
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPD1DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 3 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPD1CONPDN
 * 
 * Address = GPIO Base Address 1 + 0x00D0
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPD1[n]      | n = 0 ~ 3 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPD1PUDPDN
 * 
 * Address = GPIO Base Address 1 + 0x00D4
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPD1[n]      | n = 0 ~ 3 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPD1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPD1CON0:4; //3:0
        uint32_t GPD1CON1:4; //7:4
        uint32_t GPD1CON2:4; //11:8
        uint32_t GPD1CON3:4; //15:12
    } bits;
} GPD1CON;

typedef union GPD1DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPD1DAT:4; //3:0
    } bits;
} GPD1DAT;

typedef union GPD1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPD1PUD1:2; //1:0
        uint32_t GPD1PUD1:2; //3:2
        uint32_t GPD1PUD2:2; //5:4
        uint32_t GPD1PUD3:2; //7:6
    } bits;
} GPD1PUD;

typedef union GPD1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPD1DRV0:2; //1:0
        uint32_t GPD1DRV1:2; //3:2
        uint32_t GPD1DRV2:2; //5:4
        uint32_t GPD1DRV3:2; //7:6
        uint32_t Unknown:8;  //15:12
        uint32_t Reserved:8; //23:16
    } bits;
} GPD1DRV;

typedef union GPD1CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPD10:2; //1:0
        uint32_t GPD11:2; //3:2
        uint32_t GPD12:2; //5:4
        uint32_t GPD13:2; //7:6
    } bits;   
} GPD1CONPDN;

typedef union GPD1PUDPDN_u
{
    uint16_t all_val:8;
    struct
    {
        uint32_t GPD10:2; //1:0
        uint32_t GPD11:2; //3:2
        uint32_t GPD12:2; //5:4
        uint32_t GPD13:2; //7:6
    } bits;   
} GPD1PUDPDN;

/*
 * GPF0CON
 *  
 * Address = GPIO Base Address 1 + 0x0180
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |       Description      |   Reset Value    | 
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF0CON[0]   |  [3:0]  |  RW  | 0x2     : LCD_HSYNC    |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT13[0] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF0CON[1]   |  [7:4]  |  RW  | 0x2     : LCD_VSYNC    |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT13[1] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF0CON[2]   |  [11:8] |  RW  | 0x2     : LCD_VDEN     |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT13[2] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF0CON[3]   | [15:12] |  RW  | 0x2     : LCD_VCLK     |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT13[3] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF0CON[4]   | [19:16] |  RW  | 0x2     : LCD_VD[0]    |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT13[4] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF0CON[5]   | [23:20] |  RW  | 0x2     : LCD_VD[1]    |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT13[5] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF0CON[6]   | [27:24] |  RW  | 0x2     : LCD_VD[2]    |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT13[6] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF0CON[7]   | [31:28] |  RW  | 0x2     : LCD_VD[3]    |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT13[7] |                  |
 * --------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPF0DAT
 * 
 * Address = GPIO Base Address 1 + 0x0184
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPF0DAT[7:0] |  [7:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPF0PUD
 * 
 * Address = GPIO Base Address 1 + 0x0188
 * Reset Value = 0x5555
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPF0PUD[n]   | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |      0x5555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPF0DRV
 * 
 * Address = GPIO Base Address 1 + 0x018C
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPF0DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 7 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPF0CONPDN
 * 
 * Address = GPIO Base Address 1 + 0x0190
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPF0[n]      | n = 0 ~ 7 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPF0PUDPDN
 * 
 * Address = GPIO Base Address 1 + 0x0194
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPF0[n]      | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPF0CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF0CON0:4; //3:0
        uint32_t GPF0CON1:4; //7:4
        uint32_t GPF0CON2:4; //11:8
        uint32_t GPF0CON3:4; //15:12
        uint32_t GPF0CON4:4; //19:16
        uint32_t GPF0CON5:4; //23:20
        uint32_t GPF0CON6:4; //27:24
        uint32_t GPF0CON7:4; //28:31
    } bits;
} GPF0CON;

typedef union GPF0DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF0DAT:8; //7:0
    } bits;
} GPF0DAT;

typedef union GPF0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF0PUD0:2; //1:0
        uint32_t GPF0PUD1:2; //3:2
        uint32_t GPF0PUD2:2; //5:4
        uint32_t GPF0PUD3:2; //7:6
        uint32_t GPF0PUD4:2; //9:8
        uint32_t GPF0PUD5:2; //11:10
        uint32_t GPF0PUD6:2; //13:12
        uint32_t GPF0PUD7:2; //15:14
    } bits;
} GPF0PUD;

typedef union GPF0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF0DRV0:2; //1:0
        uint32_t GPF0DRV1:2; //3:2
        uint32_t GPF0DRV2:2; //5:4
        uint32_t GPF0DRV3:2; //7:6
        uint32_t GPF0DRV4:2; //9:8
        uint32_t GPF0DRV5:2; //11:10
        uint32_t GPF0DRV6:2; //13:12
        uint32_t GPF0DRV7:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPF0DRV;

typedef union GPF0CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF00:2; //1:0
        uint32_t GPF01:2; //3:2
        uint32_t GPF02:2; //5:4
        uint32_t GPF03:2; //7:6
        uint32_t GPF04:2; //9:8
        uint32_t GPF05:2; //11:10
        uint32_t GPF06:2; //13:12
        uint32_t GPF07:2; //15:14 
    } bits;   
} GPF0CONPDN;

typedef union GPF0PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPF00:2; //1:0
        uint32_t GPF01:2; //3:2
        uint32_t GPF02:2; //5:4
        uint32_t GPF03:2; //7:6
        uint32_t GPF04:2; //9:8
        uint32_t GPF05:2; //11:10
        uint32_t GPF06:2; //13:12
        uint32_t GPF07:2; //15:14
    } bits;   
} GPF0PUDPDN;

/*
 * GPF1CON
 *  
 * Address = GPIO Base Address 1 + 0x01A0
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |       Description      |   Reset Value    | 
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF1CON[0]   |  [3:0]  |  RW  | 0x2     : LCD_VD[4]    |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT14[0] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF1CON[1]   |  [7:4]  |  RW  | 0x2     : LCD_VD[5]    |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT14[1] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF1CON[2]   |  [11:8] |  RW  | 0x2     : LCD_VD[6]    |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT14[2] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF1CON[3]   | [15:12] |  RW  | 0x2     : LCD_VD[7]    |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT14[3] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF1CON[4]   | [19:16] |  RW  | 0x2     : LCD_VD[8]    |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT14[4] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF1CON[5]   | [23:20] |  RW  | 0x2     : LCD_VD[9]    |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT14[5] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF1CON[6]   | [27:24] |  RW  | 0x2     : LCD_VD[10]   |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT14[6] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF1CON[7]   | [31:28] |  RW  | 0x2     : LCD_VD[11]   |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT14[7] |                  |
 * --------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPF1DAT
 * 
 * Address = GPIO Base Address 1 + 0x01A4
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPF1DAT[7:0] |  [7:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPF1PUD
 * 
 * Address = GPIO Base Address 1 + 0x01A8
 * Reset Value = 0x5555
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPF1PUD[n]   | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |      0x5555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPF1DRV
 * 
 * Address = GPIO Base Address 1 + 0x01AC
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPF1DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 7 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPF1CONPDN
 * 
 * Address = GPIO Base Address 1 + 0x01B0
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPF1[n]      | n = 0 ~ 7 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPF1PUDPDN
 * 
 * Address = GPIO Base Address 1 + 0x01B4
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPF1[n]      | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPF1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF1CON0:4; //3:0
        uint32_t GPF1CON1:4; //7:4
        uint32_t GPF1CON2:4; //11:8
        uint32_t GPF1CON3:4; //15:12
        uint32_t GPF1CON4:4; //19:16
        uint32_t GPF1CON5:4; //23:20
        uint32_t GPF1CON6:4; //27:24
        uint32_t GPF1CON7:4; //28:31
    } bits;
} GPF1CON;

typedef union GPF1DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF1DAT:8; //7:0
    } bits;
} GPF1DAT;

typedef union GPF1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF1PUD0:2; //1:0
        uint32_t GPF1PUD1:2; //3:2
        uint32_t GPF1PUD2:2; //5:4
        uint32_t GPF1PUD3:2; //7:6
        uint32_t GPF1PUD4:2; //9:8
        uint32_t GPF1PUD5:2; //11:10
        uint32_t GPF1PUD6:2; //13:12
        uint32_t GPF1PUD7:2; //15:14
    } bits;
} GPF1PUD;

typedef union GPF1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF1DRV0:2; //1:0
        uint32_t GPF1DRV1:2; //3:2
        uint32_t GPF1DRV2:2; //5:4
        uint32_t GPF1DRV3:2; //7:6
        uint32_t GPF1DRV4:2; //9:8
        uint32_t GPF1DRV5:2; //11:10
        uint32_t GPF1DRV6:2; //13:12
        uint32_t GPF1DRV7:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPF1DRV;

typedef union GPF1CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF10:2; //1:0
        uint32_t GPF11:2; //3:2
        uint32_t GPF12:2; //5:4
        uint32_t GPF13:2; //7:6
        uint32_t GPF14:2; //9:8
        uint32_t GPF15:2; //11:10
        uint32_t GPF16:2; //13:12
        uint32_t GPF17:2; //15:14 
    } bits;   
} GPF1CONPDN;

typedef union GPF1PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPF10:2; //1:0
        uint32_t GPF11:2; //3:2
        uint32_t GPF12:2; //5:4
        uint32_t GPF13:2; //7:6
        uint32_t GPF14:2; //9:8
        uint32_t GPF15:2; //11:10
        uint32_t GPF16:2; //13:12
        uint32_t GPF17:2; //15:14
    } bits;   
} GPF1PUDPDN;

/*
 * GPF2CON
 *  
 * Address = GPIO Base Address 1 + 0x01C0
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |       Description      |   Reset Value    | 
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF2CON[0]   |  [3:0]  |  RW  | 0x2     : LCD_VD[12]   |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT14[0] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF2CON[1]   |  [7:4]  |  RW  | 0x2     : LCD_VD[13]   |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT15[1] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF2CON[2]   |  [11:8] |  RW  | 0x2     : LCD_VD[14]   |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT15[2] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF2CON[3]   | [15:12] |  RW  | 0x2     : LCD_VD[15]   |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT15[3] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF2CON[4]   | [19:16] |  RW  | 0x2     : LCD_VD[16]   |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT15[4] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF2CON[5]   | [23:20] |  RW  | 0x2     : LCD_VD[17]   |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT15[5] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF2CON[6]   | [27:24] |  RW  | 0x2     : LCD_VD[18]   |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT15[6] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF2CON[7]   | [31:28] |  RW  | 0x2     : LCD_VD[19]   |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT15[7] |                  |
 * --------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPF2DAT
 * 
 * Address = GPIO Base Address 1 + 0x01C4
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPF2DAT[7:0] |  [7:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPF2PUD
 * 
 * Address = GPIO Base Address 1 + 0x01C8
 * Reset Value = 0x5555
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPF2PUD[n]   | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |      0x5555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPF2DRV
 *
 * Address = GPIO Base Address 1 + 0x01CC
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPF2DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 7 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4                       |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPF2CONPDN
 * 
 * Address = GPIO Base Address 1 + 0x01D0
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPF2[n]      | n = 0 ~ 7 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPF2PUDPDN
 * 
 * Address = GPIO Base Address 1 + 0x01D4
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPF2[n]      | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPF2CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF2CON0:4; //3:0
        uint32_t GPF2CON1:4; //7:4
        uint32_t GPF2CON2:4; //11:8
        uint32_t GPF2CON3:4; //15:12
        uint32_t GPF2CON4:4; //19:16
        uint32_t GPF2CON5:4; //23:20
        uint32_t GPF2CON6:4; //27:24
        uint32_t GPF2CON7:4; //28:31
    } bits;
} GPF2CON;

typedef union GPF2DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF2DAT:8; //7:0
    } bits;
} GPF2DAT;

typedef union GPF2PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF2PUD0:2; //1:0
        uint32_t GPF2PUD1:2; //3:2
        uint32_t GPF2PUD2:2; //5:4
        uint32_t GPF2PUD3:2; //7:6
        uint32_t GPF2PUD4:2; //9:8
        uint32_t GPF2PUD5:2; //11:10
        uint32_t GPF2PUD6:2; //13:12
        uint32_t GPF2PUD7:2; //15:14
    } bits;
} GPF2PUD;

typedef union GPF2DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF2DRV0:2; //1:0
        uint32_t GPF2DRV1:2; //3:2
        uint32_t GPF2DRV2:2; //5:4
        uint32_t GPF2DRV3:2; //7:6
        uint32_t GPF2DRV4:2; //9:8
        uint32_t GPF2DRV5:2; //11:10
        uint32_t GPF2DRV6:2; //13:12
        uint32_t GPF2DRV7:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPF2DRV;

typedef union GPF2CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF20:2; //1:0
        uint32_t GPF21:2; //3:2
        uint32_t GPF22:2; //5:4
        uint32_t GPF23:2; //7:6
        uint32_t GPF24:2; //9:8
        uint32_t GPF25:2; //11:10
        uint32_t GPF26:2; //13:12
        uint32_t GPF27:2; //15:14 
    } bits;   
} GPF2CONPDN;

typedef union GPF2PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPF20:2; //1:0
        uint32_t GPF21:2; //3:2
        uint32_t GPF22:2; //5:4
        uint32_t GPF23:2; //7:6
        uint32_t GPF24:2; //9:8
        uint32_t GPF25:2; //11:10
        uint32_t GPF26:2; //13:12
        uint32_t GPF27:2; //15:14
    } bits;   
} GPF2PUDPDN;

/*
 * GPF3CON
 *  
 * Address = GPIO Base Address 1 + 0x01E0
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |       Description      |   Reset Value    | 
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF3CON[0]   |  [3:0]  |  RW  | 0x2     : LCD_VD[20]   |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT16[0] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF3CON[1]   |  [7:4]  |  RW  | 0x2     : LCD_VD[21]   |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT16[1] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF3CON[2]   |  [11:8] |  RW  | 0x2     : LCD_VD[22]   |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT16[2] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF3CON[3]   | [15:12] |  RW  | 0x2     : LCD_VD[23]   |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT16[3] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF3CON[4]   | [19:16] |  RW  | 0x2     : VSYNC_LDI    |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT16[4] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPF3CON[5]   | [23:20] |  RW  | 0x2     : SYS_OE       |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT16[5] |                  |
 * --------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPF3DAT
 * 
 * Address = GPIO Base Address 1 + 0x01E4
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPF3DAT[5:0] |  [5:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPF3PUD
 * 
 * Address = GPIO Base Address 1 + 0x01E8
 * Reset Value = 0x5555
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPF3PUD[n]   | n = 0 ~ 5 |  RW  | 0x2 : Reserved                     |      0x5555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPF3DRV
 *
 * Address = GPIO Base Address 1 + 0x01EC
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPF3DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 5 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPF3CONPDN
 * 
 * Address = GPIO Base Address 1 + 0x01F0
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPF3[n]      | n = 0 ~ 5 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPF3PUDPDN
 * 
 * Address = GPIO Base Address 1 + 0x01F4
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPF3[n]      | n = 0 ~ 5 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPF3CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF3CON0:4; //3:0
        uint32_t GPF3CON1:4; //7:4
        uint32_t GPF3CON2:4; //11:8
        uint32_t GPF3CON3:4; //15:12
        uint32_t GPF3CON4:4; //19:16
        uint32_t GPF3CON5:4; //23:20
    } bits;
} GPF3CON;

typedef union GPF3DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF3DAT:6; //5:0
    } bits;
} GPF3DAT;

typedef union GPF3PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF3PUD0:2; //1:0
        uint32_t GPF3PUD1:2; //3:2
        uint32_t GPF3PUD2:2; //5:4
        uint32_t GPF3PUD3:2; //7:6
        uint32_t GPF3PUD4:2; //9:8
        uint32_t GPF3PUD5:2; //11:10
    } bits;
} GPF3PUD;

typedef union GPF3DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF3DRV0:2; //1:0
        uint32_t GPF3DRV1:2; //3:2
        uint32_t GPF3DRV2:2; //5:4
        uint32_t GPF3DRV3:2; //7:6
        uint32_t GPF3DRV4:2; //9:8
        uint32_t GPF3DRV5:2; //11:10
        uint32_t Unknown:4;  //15:12
        uint32_t Reserved:8; //23:16
    } bits;
} GPF3DRV;

typedef union GPF3CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF30:2; //1:0
        uint32_t GPF31:2; //3:2
        uint32_t GPF32:2; //5:4
        uint32_t GPF33:2; //7:6
        uint32_t GPF34:2; //9:8
        uint32_t GPF35:2; //11:10
    } bits;   
} GPF3CONPDN;

typedef union GPF3PUDPDN_u
{
    uint16_t all_val:12;
    struct
    {
        uint32_t GPF30:2; //1:0
        uint32_t GPF31:2; //3:2
        uint32_t GPF32:2; //5:4
        uint32_t GPF33:2; //7:6
        uint32_t GPF34:2; //9:8
        uint32_t GPF35:2; //11:10
    } bits;   
} GPF3PUDPDN;

/*
 * ETC1PUD
 * 
 * Address = GPIO Base Address 1 + 0x0228
 * Reset Value = 0x0005
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * ETC1PUD[n]   | n = 0 ~ 5 |  RW  | 0x2 : Reserved                     |      0x5555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 * ETC1PUD[1:0] controls XsbusData.
 * ETC1PUD[3:2] controls XsbusCLK.
 * 
 * ETC1DRV
 *
 * Address = GPIO Base Address 1 + 0x022C
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * ETC1DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 5 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 */

typedef union ETC1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ETC1PUD0:2; //1:0
        uint32_t ETC1PUD1:2; //3:2
        uint32_t ETC1PUD2:2; //5:4
        uint32_t ETC1PUD3:2; //7:6
        uint32_t ETC1PUD4:2; //9:8
        uint32_t ETC1PUD5:2; //11:10
    } bits;   
} ETC1PUD;

typedef union ETC1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ETC1DRV0:2; //1:0
        uint32_t ETC1DRV1:2; //3:2
        uint32_t ETC1DRV2:2; //5:4
        uint32_t ETC1DRV3:2; //7:6
        uint32_t ETC1DRV4:2; //9:8
        uint32_t ETC1DRV5:2; //11:10
        uint32_t Unknown:4;  //15:12
        uint32_t Reserved:8; //23:16
    } bits;   
} ETC1DRV;

/*
 * GPJ0CON
 *  
 * Address = GPIO Base Address 1 + 0x0240
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |        Description       |   Reset Value    | 
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 * GPJ0CON[0]   |  [3:0]  |  RW  | 0x2     : CAM_A_PCLK     |       0x00       |
 *              |         |      | 0x3~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT21[0]   |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 * GPJ0CON[1]   |  [7:4]  |  RW  | 0x2     : CAM_A_VSYNC    |       0x00       |
 *              |         |      | 0x3~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT21[1]   |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 * GPJ0CON[2]   |  [11:8] |  RW  | 0x2     : CAM_A_HREF     |       0x00       |
 *              |         |      | 0x3~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT21[2]   |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 * GPJ0CON[3]   | [15:12] |  RW  | 0x2     : CAM_A_DATA[0]  |       0x00       |
 *              |         |      | 0x3~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT21[3]   |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 * GPJ0CON[4]   | [19:16] |  RW  | 0x2     : CAM_A_DATA[1]  |       0x00       |
 *              |         |      | 0x3~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT21[4]   |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 * GPJ0CON[5]   | [23:20] |  RW  | 0x2     : CAM_A_DATA[2]  |       0x00       |
 *              |         |      | 0x3~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT21[5]   |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 * GPJ0CON[6]   | [27:24] |  RW  | 0x2     : CAM_A_DATA[3]  |       0x00       |
 *              |         |      | 0x3~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT21[6]   |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 * GPJ0CON[7]   | [31:28] |  RW  | 0x2     : CAM_A_DATA[4]  |       0x00       |
 *              |         |      | 0x3~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT21[7]   |                  |
 * --------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPJ0DAT
 * 
 * Address = GPIO Base Address 1 + 0x0244
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPJ0DAT[7:0] |  [7:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPJ0PUD
 * 
 * Address = GPIO Base Address 1 + 0x0248
 * Reset Value = 0x5555
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPJ0PUD[n]   | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |      0x5555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPJ0DRV
 *
 * Address = GPIO Base Address 1 + 0x024C
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPJ0DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 7 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4                       |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPJ0CONPDN
 * 
 * Address = GPIO Base Address 1 + 0x0250
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPJ0[n]      | n = 0 ~ 7 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPJ0PUDPDN
 * 
 * Address = GPIO Base Address 1 + 0x0254
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPJ0[n]      | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPJ0CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPJ0CON0:4; //3:0
        uint32_t GPJ0CON1:4; //7:4
        uint32_t GPJ0CON2:4; //11:8
        uint32_t GPJ0CON3:4; //15:12
        uint32_t GPJ0CON4:4; //19:16
        uint32_t GPJ0CON5:4; //23:20
        uint32_t GPJ0CON6:4; //27:24
        uint32_t GPJ0CON7:4; //28:31
    } bits;
} GPJ0CON;

typedef union GPJ0DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPJ0DAT:8; //7:0
    } bits;
} GPJ0DAT;

typedef union GPJ0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPJ0PUD0:2; //1:0
        uint32_t GPJ0PUD1:2; //3:2
        uint32_t GPJ0PUD2:2; //5:4
        uint32_t GPJ0PUD3:2; //7:6
        uint32_t GPJ0PUD4:2; //9:8
        uint32_t GPJ0PUD5:2; //11:10
        uint32_t GPJ0PUD6:2; //13:12
        uint32_t GPJ0PUD7:2; //15:14
    } bits;
} GPJ0PUD;

typedef union GPJ0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPJ0DRV0:2; //1:0
        uint32_t GPJ0DRV1:2; //3:2
        uint32_t GPJ0DRV2:2; //5:4
        uint32_t GPJ0DRV3:2; //7:6
        uint32_t GPJ0DRV4:2; //9:8
        uint32_t GPJ0DRV5:2; //11:10
        uint32_t GPJ0DRV6:2; //13:12
        uint32_t GPJ0DRV7:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPJ0DRV;

typedef union GPJ0CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPJ00:2; //1:0
        uint32_t GPJ01:2; //3:2
        uint32_t GPJ02:2; //5:4
        uint32_t GPJ03:2; //7:6
        uint32_t GPJ04:2; //9:8
        uint32_t GPJ05:2; //11:10
        uint32_t GPJ06:2; //13:12
        uint32_t GPJ07:2; //15:14 
    } bits;   
} GPJ0CONPDN;

typedef union GPJ0PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPJ00:2; //1:0
        uint32_t GPJ01:2; //3:2
        uint32_t GPJ02:2; //5:4
        uint32_t GPJ03:2; //7:6
        uint32_t GPJ04:2; //9:8
        uint32_t GPJ05:2; //11:10
        uint32_t GPJ06:2; //13:12
        uint32_t GPJ07:2; //15:14
    } bits;   
} GPJ0PUDPDN;

/*
 * GPJ1CON
 * 
 * Address = GPIO Base Address 1 + 0x0260
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |        Description       |   Reset Value    | 
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 * GPJ1CON[0]   |  [3:0]  |  RW  | 0x3     : CAM_A_DATA[5]  |       0x00       |
 *              |         |      | 0x5~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT22[0]   |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 * GPJ1CON[1]   |  [7:4]  |  RW  | 0x3     : CAM_A_DATA[6]  |       0x00       |
 *              |         |      | 0x5~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT22[1]   |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 * GPJ1CON[2]   |  [11:8] |  RW  | 0x3     : CAM_A_DATA[7]  |       0x00       |
 *              |         |      | 0x5~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT22[2]   |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 * GPJ1CON[3]   | [15:12] |  RW  | 0x3     : CAM_A_CLKOUT   |       0x00       |
 *              |         |      | 0x5~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT22[3]   |                  |
 * ----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input          |                  |
 *              |         |      | 0x1     : Output         |                  |
 * GPJ1CON[4]   | [19:16] |  RW  | 0x3     : CAM_A_FIELD    |       0x00       |
 *              |         |      | 0x5~0xE : Reserved       |                  |
 *              |         |      | 0xF     : EXT_INT22[4]   |                  |
 * ----------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPJ1DAT
 * 
 * Address = GPIO Base Address 1 + 0x0264
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPJ1DAT[4:0] |  [4:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPJ1PUD
 * 
 * Address = GPIO Base Address 1 + 0x0268
 * Reset Value = 0x0155
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPJ1PUD[n]   | n = 0 ~ 4 |  RW  | 0x2 : Reserved                     |      0x0155      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPJ1DRV
 * 
 * Address = GPIO Base Address 1 + 0x026C
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPJ1DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 4 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPJ1CONPDN
 * 
 * Address = GPIO Base Address 1 + 0x0270
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPJ1[n]      | n = 0 ~ 4 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPJ1PUDPDN
 * 
 * Address = GPIO Base Address 1 + 0x0274
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPJ1[n]      | n = 0 ~ 4 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPJ1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPJ1CON0:4; //3:0
        uint32_t GPJ1CON1:4; //7:4
        uint32_t GPJ1CON2:4; //11:8
        uint32_t GPJ1CON3:4; //15:12
        uint32_t GPJ1CON4:4; //19:16
    } bits;
} GPJ1CON;

typedef union GPJ1DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPJ1DAT:5; //4:0
    } bits;
} GPJ1DAT;

typedef union GPJ1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPJ1PUD0:2; //1:0
        uint32_t GPJ1PUD1:2; //3:2
        uint32_t GPJ1PUD2:2; //5:4
        uint32_t GPJ1PUD3:2; //7:6
        uint32_t GPJ1PUD4:2; //9:8
    } bits;
} GPJ1PUD;

typedef union GPJ1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPJ1DRV0:2; //1:0
        uint32_t GPJ1DRV1:2; //3:2
        uint32_t GPJ1DRV2:2; //5:4
        uint32_t GPJ1DRV3:2; //7:6
        uint32_t GPJ1DRV4:2; //9:8
        uint32_t Unknown:6;  //15:12
        uint32_t Reserved:8; //23:16
    } bits;
} GPJ1DRV;

typedef union GPJ1CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPJ10:2; //1:0
        uint32_t GPJ11:2; //3:2
        uint32_t GPJ12:2; //5:4
        uint32_t GPJ13:2; //7:6
        uint32_t GPJ14:2; //9:8
    } bits;   
} GPJ1CONPDN;

typedef union GPJ1PUDPDN_u
{
    uint16_t all_val:10;
    struct
    {
        uint32_t GPJ10:2; //1:0
        uint32_t GPJ11:2; //3:2
        uint32_t GPJ12:2; //5:4
        uint32_t GPJ13:2; //7:6
        uint32_t GPJ14:2; //9:8
    } bits;   
} GPJ1PUDPDN;

/*
 * EXT_INT1CON
 * 
 * Address = GPIO Base Address 1 + 0x0700
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description             |   Reset Value   | 
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT1[0] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT1_CON[0]  |  [2:0]  |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT1[1] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT1_CON[1]  |  [6:4]  |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT1[2] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT1_CON[2]  | [10:8]  |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [11]  |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT1[3] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT1_CON[3]  | [14:12] |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT1[4] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT1_CON[4]  | [18:16] |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [19]  |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT1[5] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT1_CON[5]  | [22:20] |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [23]  |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT1[6] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT1_CON[6]  | [26:24] |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [27]  |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT1[7] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT1_CON[7]  | [30:28] |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [31]  |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 */

typedef union EXTINT1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT1CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT1CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT1CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT1CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT1CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT1CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT1CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT1CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT1CON;

/*
 * EXT_INT2CON
 * 
 * Address = GPIO Base Address 1 + 0x0704
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description             |   Reset Value   | 
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT2[0] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT2_CON[0]  |  [2:0]  |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |  [3]    |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT2[1] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT2_CON[1]  |  [6:4]  |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |  [7]    |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT2[2] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT2_CON[2]  | [10:8]  |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |  [11]   |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT2[3] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT2_CON[3]  | [14:12] |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |  [15]   |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT2[4] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT2_CON[4]  | [18:16] |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |  [19]   |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT2[5] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT2_CON[5]  | [22:20] |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |  [23]   |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT2[6] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT2_CON[6]  | [26:24] |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |  [27]   |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 * RSVD             | [31:24] |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 */

typedef union EXTINT2CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT2CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT2CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT2CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT2CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT2CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT2CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t Reserved6:8;   //31:24
    } bits;   
} EXTINT2CON;

/*
 * EXT_INT3CON
 * 
 * Address = GPIO Base Address 1 + 0x0708
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description             |   Reset Value   | 
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT3[0] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT3_CON[0]  |  [2:0]  |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT3[1] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT3_CON[1]  |  [6:4]  |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT3[2] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT3_CON[2]  | [10:8]  |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [11]  |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT3[3] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT3_CON[3]  | [14:12] |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT3[4] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT3_CON[4]  | [18:16] |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [19]  |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT3[5] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT3_CON[5]  | [22:20] |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [23]  |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT3[6] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT3_CON[6]  | [26:24] |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [27]  |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT3[7] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT3_CON[7]  | [30:28] |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [31]  |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 */

typedef union EXTINT3CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT3CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT3CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT3CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT3CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT3CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT3CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT3CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT3CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT3CON;

/*
 * EXT_INT4CON
 * 
 * Address = GPIO Base Address 1 + 0x070C
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description             |   Reset Value   | 
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT4[0] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT4_CON[0]  |  [2:0]  |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT4[1] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT4_CON[1]  |  [6:4]  |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT4[2] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT4_CON[2]  | [10:8]  |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [11]  |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT4[3] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT4_CON[3]  | [14:12] |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT4[4] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT4_CON[4]  | [18:16] |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [19]  |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 * RSVD             | [31:20] |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 */

typedef union EXTINT4CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT4CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT4CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT4CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT4CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT4CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t Reserved5:12;  //31:20
    } bits;   
} EXTINT4CON;

/*
 * EXT_INT5CON
 * 
 * Address = GPIO Base Address 1 + 0x0710
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description             |   Reset Value   | 
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT5[0] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT5_CON[0]  |  [2:0]  |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT5[1] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT5_CON[1]  |  [6:4]  |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT5[2] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT5_CON[2]  | [10:8]  |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [11]  |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT5[3] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT5_CON[3]  | [14:12] |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT5[4] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT5_CON[4]  | [18:16] |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [19]  |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 * RSVD             | [31:20] |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 */

typedef union EXTINT5CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT5CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT5CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT5CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT5CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT5CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t Reserved5:12;  //31:20
    } bits;   
} EXTINT5CON;

/*
 * EXT_INT6CON
 * 
 * Address = GPIO Base Address 1 + 0x0714
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description             |   Reset Value   | 
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT6[0] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT6_CON[0]  |  [2:0]  |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT6[1] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT6_CON[1]  |  [6:4]  |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT6[2] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT6_CON[2]  | [10:8]  |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [11]  |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT6[3] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT6_CON[3]  | [14:12] |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 * RSVD             | [31:16] |  -   | Reserved                             |      0x0000     |
 * -------------------------------------------------------------------------------------------|
 */

typedef union EXTINT6CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT6CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT6CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT6CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT6CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t Reserved4:16;  //31:16
    } bits;   
} EXTINT6CON;

/*
 * EXT_INT7CON
 * 
 * Address = GPIO Base Address 1 + 0x0718
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description             |   Reset Value   | 
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT7[0] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT7_CON[0]  |  [2:0]  |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT7[1] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT7_CON[1]  |  [6:4]  |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT7[2] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT7_CON[2]  | [10:8]  |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [11]  |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT7[3] |                 |
 *                  |         |      | 0x0     : Low Level                  |                 |
 *                  |         |      | 0x1     : High Level                 |                 |
 * EXT_INT7_CON[3]  | [14:12] |  RW  | 0x2     : Triggers falling edge      |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge       |                 |
 *                  |         |      | 0x4     : Triggers both edge         |                 |
 *                  |         |      | 0x5~0x7 : Reserved                   |                 |
 * -------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                             |       0x0       |
 * -------------------------------------------------------------------------------------------|
 * RSVD             | [31:16] |  -   | Reserved                             |      0x0000     |
 * -------------------------------------------------------------------------------------------|
 */

typedef union EXTINT7CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT7CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT7CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT7CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT7CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t Reserved4:16;  //31:16
    } bits;   
} EXTINT7CON;

/*
 * EXT_INT13CON
 * 
 * Address = GPIO Base Address 1 + 0x0700
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description              |   Reset Value   | 
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT13[0] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT13_CON[0] |  [2:0]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT13[1] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT13_CON[1] |  [6:4]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT13[2] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT13_CON[2] | [10:8]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [11]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT13[3] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT13_CON[3] | [14:12] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT13[4] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT13_CON[4] | [18:16] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [19]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT13[5] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT13_CON[5] | [22:20] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [23]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT13[6] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT13_CON[6] | [26:24] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [27]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT13[7] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT13_CON[7] | [30:28] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [31]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 */

typedef union EXTINT13CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT13CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT13CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT13CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT13CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT13CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT13CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT13CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT13CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT13CON;

/*
 * EXT_INT14CON
 * 
 * Address = GPIO Base Address 1 + 0x0700
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description              |   Reset Value   | 
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT14[0] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT14_CON[0] |  [2:0]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT14[1] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT14_CON[1] |  [6:4]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT14[2] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT14_CON[2] | [10:8]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [11]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT14[3] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT14_CON[3] | [14:12] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT14[4] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT14_CON[4] | [18:16] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [19]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT14[5] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT14_CON[5] | [22:20] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [23]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT14[6] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT14_CON[6] | [26:24] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [27]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT14[7] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT14_CON[7] | [30:28] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [31]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 */

typedef union EXTINT14CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT14CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT14CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT14CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT14CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT14CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT14CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT14CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT14CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT14CON;

/*
 * EXT_INT15CON
 * 
 * Address = GPIO Base Address 1 + 0x0738
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description              |   Reset Value   | 
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT15[0] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT15_CON[0] |  [2:0]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT15[1] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT15_CON[1] |  [6:4]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT15[2] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT15_CON[2] | [10:8]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [11]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT15[3] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT15_CON[3] | [14:12] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT15[4] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT15_CON[4] | [18:16] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [19]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT15[5] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT15_CON[5] | [22:20] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [23]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT15[6] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT15_CON[6] | [26:24] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [27]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT15[7] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT15_CON[7] | [30:28] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [31]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 */

typedef union EXTINT15CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT15CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT15CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT15CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT15CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT15CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT15CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT15CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT15CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT15CON;

/*
 * EXT_INT16CON
 * 
 * Address = GPIO Base Address 1 + 0x073C
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description              |   Reset Value   | 
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT16[0] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT16_CON[0] |  [2:0]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |  [3]    |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT16[1] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT16_CON[1] |  [6:4]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |  [7]    |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT16[2] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT16_CON[2] | [10:8]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |  [11]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT16[3] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT16_CON[3] | [14:12] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |  [15]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT16[4] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT16_CON[4] | [18:16] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |  [19]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT16[5] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT16_CON[5] | [22:20] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |  [23]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT16[6] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT16_CON[6] | [26:24] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |  [27]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 * RSVD             | [31:24] |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 */

typedef union EXTINT16CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT16CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT16CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT16CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT16CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT16CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT16CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t Reserved6:8;   //31:24
    } bits;   
} EXTINT16CON;

/*
 * EXT_INT21CON
 * 
 * Address = GPIO Base Address 1 + 0x0740
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description              |   Reset Value   | 
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT21[0] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT21_CON[0] |  [2:0]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT21[1] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT21_CON[1] |  [6:4]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT21[2] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT21_CON[2] | [10:8]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [11]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT21[3] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT21_CON[3] | [14:12] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT21[4] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT21_CON[4] | [18:16] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [19]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT21[5] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT21_CON[5] | [22:20] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [23]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT21[6] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT21_CON[6] | [26:24] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [27]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT21[7] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT21_CON[7] | [30:28] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [31]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 */

typedef union EXTINT21CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT21CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT21CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT21CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT21CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT21CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT21CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT21CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT21CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT21CON;

/*
 * EXT_INT22CON
 * 
 * Address = GPIO Base Address 1 + 0x0744
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description              |   Reset Value   | 
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT22[0] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT22_CON[0] |  [2:0]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT22[1] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT22_CON[1] |  [6:4]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT22[2] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT22_CON[2] | [10:8]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [11]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT22[3] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT22_CON[3] | [14:12] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT22[4] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT22_CON[4] | [18:16] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [19]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT22[5] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT22_CON[5] | [22:20] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [23]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT22[6] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT22_CON[6] | [26:24] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [27]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT22[7] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT22_CON[7] | [30:28] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [31]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 */

typedef union EXTINT22CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT22CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT22CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT22CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT22CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT22CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t Reserved5:12;  //31:20
    } bits;   
} EXTINT22CON;

/*
 * EXT_INT1_FLTCON0
 * 
 * Address = GPIO Base Address 1 + 0x0800
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH1[0]     |  [6:0]  |  RW  | Filtering width of EXT_INT1[0]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT1[0]   |             |
 * FLTEN1[0]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH1[1]     |  [14:8] |  RW  | Filtering width of EXT_INT1[1]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT1[1]   |             |
 * FLTEN1[1]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH1[2]     | [22:16] |  RW  | Filtering width of EXT_INT1[2]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT1[2]   |             |
 * FLTEN1[2]        |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH1[3]     | [30:24] |  RW  | Filtering width of EXT_INT1[3]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT1[3]   |             |
 * FLTEN1[3]        |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT1_FLTCON1
 * 
 * Address = GPIO Base Address 1 + 0x0804
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH1[4]     |  [6:0]  |  RW  | Filtering width of EXT_INT1[4]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT1[4]   |             |
 * FLTEN1[4]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH1[5]     |  [14:8] |  RW  | Filtering width of EXT_INT1[5]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT1[5]   |             |
 * FLTEN1[5]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH1[6]     | [22:16] |  RW  | Filtering width of EXT_INT1[6]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT1[6]   |             |
 * FLTEN1[6]        |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH1[7]     | [30:24] |  RW  | Filtering width of EXT_INT1[7]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT1[7]   |             |
 * FLTEN1[7]        |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT1FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH10:7;  //6:0
        uint32_t FLTEN10:1;     //7
        uint32_t FLTWIDTH11:7;  //14:8
        uint32_t FLTEN11:1;     //15
        uint32_t FLTWIDTH12:7;  //22:16
        uint32_t FLTEN12:1;     //23
        uint32_t FLTWIDTH13:7;  //30:24
        uint32_t FLTEN13:1;     //31
    } bits;    
} EXTINT1FLTCON0;

typedef union EXTINT1FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH14:7;  //6:0
        uint32_t FLTEN14:1;     //7
        uint32_t FLTWIDTH15:7;  //14:8
        uint32_t FLTEN15:1;     //15
        uint32_t FLTWIDTH16:7;  //22:16
        uint32_t FLTEN16:1;     //23
        uint32_t FLTWIDTH17:7;  //30:24
        uint32_t FLTEN17:1;     //31
    } bits;    
} EXTINT1FLTCON1;

/*
 * EXT_INT2_FLTCON0
 * 
 * Address = GPIO Base Address 1 + 0x0808
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH2[0]     |  [6:0]  |  RW  | Filtering width of EXT_INT2[0]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT2[0]   |             |
 * FLTEN2[0]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH2[1]     |  [14:8] |  RW  | Filtering width of EXT_INT2[1]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT2[1]   |             |
 * FLTEN2[1]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH2[2]     | [22:16] |  RW  | Filtering width of EXT_INT2[2]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT2[2]   |             |
 * FLTEN2[2]        |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH2[3]     | [30:24] |  RW  | Filtering width of EXT_INT2[3]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT2[3]   |             |
 * FLTEN2[3]        |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT2_FLTCON1
 * 
 * Address = GPIO Base Address 1 + 0x080C
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH2[4]     |  [6:0]  |  RW  | Filtering width of EXT_INT2[4]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT2[4]   |             |
 * FLTEN2[4]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH2[5]     |  [14:8] |  RW  | Filtering width of EXT_INT2[5]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT2[5]   |             |
 * FLTEN2[5]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * RSVD             | [31:16] |  -   | Reserved                        |     0x00    |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT2FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH20:7;  //6:0
        uint32_t FLTEN20:1;     //7
        uint32_t FLTWIDTH21:7;  //14:8
        uint32_t FLTEN21:1;     //15
        uint32_t FLTWIDTH22:7;  //22:16
        uint32_t FLTEN22:1;     //23
        uint32_t FLTWIDTH23:7;  //30:24
        uint32_t FLTEN23:1;     //31
    } bits;    
} EXTINT2FLTCON0;

typedef union EXTINT2FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH24:7;  //6:0
        uint32_t FLTEN24:1;     //7
        uint32_t FLTWIDTH25:7;  //14:8
        uint32_t FLTEN25:1;     //15
        uint32_t Reserved:16;   //31:16
    } bits;    
} EXTINT2FLTCON1;

/*
 * EXT_INT3_FLTCON0
 * 
 * Address = GPIO Base Address 1 + 0x0810
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH3[0]     |  [6:0]  |  RW  | Filtering width of EXT_INT3[0]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT3[0]   |             |
 * FLTEN3[0]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH3[1]     |  [14:8] |  RW  | Filtering width of EXT_INT3[1]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT3[1]   |             |
 * FLTEN3[1]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH3[2]     | [22:16] |  RW  | Filtering width of EXT_INT3[2]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT3[2]   |             |
 * FLTEN3[2]        |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH3[3]     | [30:24] |  RW  | Filtering width of EXT_INT3[3]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT3[3]   |             |
 * FLTEN3[3]        |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT3_FLTCON1
 * 
 * Address = GPIO Base Address 1 + 0x0814
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH3[4]     |  [6:0]  |  RW  | Filtering width of EXT_INT3[4]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT3[4]   |             |
 * FLTEN3[4]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH3[5]     |  [14:8] |  RW  | Filtering width of EXT_INT3[5]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT3[5]   |             |
 * FLTEN3[5]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH3[6]     | [22:16] |  RW  | Filtering width of EXT_INT3[6]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT3[6]   |             |
 * FLTEN3[6]        |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH3[7]     | [30:24] |  RW  | Filtering width of EXT_INT3[7]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT3[7]   |             |
 * FLTEN3[7]        |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT3FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH30:7;  //6:0
        uint32_t FLTEN30:1;     //7
        uint32_t FLTWIDTH31:7;  //14:8
        uint32_t FLTEN31:1;     //15
        uint32_t FLTWIDTH32:7;  //22:16
        uint32_t FLTEN32:1;     //23
        uint32_t FLTWIDTH33:7;  //30:24
        uint32_t FLTEN33:1;     //31
    } bits;    
} EXTINT3FLTCON0;

typedef union EXTINT3FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH34:7;  //6:0
        uint32_t FLTEN34:1;     //7
        uint32_t FLTWIDTH35:7;  //14:8
        uint32_t FLTEN35:1;     //15
        uint32_t FLTWIDTH36:7;  //22:16
        uint32_t FLTEN36:1;     //23
        uint32_t FLTWIDTH37:7;  //30:24
        uint32_t FLTEN37:1;     //31
    } bits;    
} EXTINT3FLTCON1;

/*
 * EXT_INT4_FLTCON0
 * 
 * Address = GPIO Base Address 1 + 0x0818
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH4[0]     |  [6:0]  |  RW  | Filtering width of EXT_INT4[0]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT4[0]   |             |
 * FLTEN4[0]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH4[1]     |  [14:8] |  RW  | Filtering width of EXT_INT4[1]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT4[1]   |             |
 * FLTEN4[1]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH4[2]     | [22:16] |  RW  | Filtering width of EXT_INT4[2]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT4[2]   |             |
 * FLTEN4[2]        |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH4[3]     | [30:24] |  RW  | Filtering width of EXT_INT4[3]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT4[3]   |             |
 * FLTEN4[3]        |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT4_FLTCON1
 * 
 * Address = GPIO Base Address 1 + 0x081C
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH4[4]     |  [6:0]  |  RW  | Filtering width of EXT_INT4[4]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT4[4]   |             |
 * FLTEN4[4]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * RSVD             |  [31:8] |  -   | Reserved                        |     0x00    |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT4FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH40:7;  //6:0
        uint32_t FLTEN40:1;     //7
        uint32_t FLTWIDTH41:7;  //14:8
        uint32_t FLTEN41:1;     //15
        uint32_t FLTWIDTH42:7;  //22:16
        uint32_t FLTEN42:1;     //23
        uint32_t FLTWIDTH43:7;  //30:24
        uint32_t FLTEN43:1;     //31
    } bits;    
} EXTINT4FLTCON0;

typedef union EXTINT4FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH44:7;  //6:0
        uint32_t FLTEN44:1;     //7
        uint32_t Reserved:24;   //31:8
    } bits;    
} EXTINT4FLTCON1;

/*
 * EXT_INT5_FLTCON0
 * 
 * Address = GPIO Base Address 1 + 0x0820
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH5[0]     |  [6:0]  |  RW  | Filtering width of EXT_INT5[0]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT5[0]   |             |
 * FLTEN5[0]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH5[1]     |  [14:8] |  RW  | Filtering width of EXT_INT5[1]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT5[1]   |             |
 * FLTEN5[1]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH5[2]     | [22:16] |  RW  | Filtering width of EXT_INT5[2]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT5[2]   |             |
 * FLTEN5[2]        |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH5[3]     | [30:24] |  RW  | Filtering width of EXT_INT5[3]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT5[3]   |             |
 * FLTEN5[3]        |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT5_FLTCON1
 * 
 * Address = GPIO Base Address 1 + 0x0824
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH5[4]     |  [6:0]  |  RW  | Filtering width of EXT_INT5[4]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT5[4]   |             |
 * FLTEN5[4]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * RSVD             |  [31:8] |  -   | Reserved                        |     0x00    |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT5FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH50:7;  //6:0
        uint32_t FLTEN50:1;     //7
        uint32_t FLTWIDTH51:7;  //14:8
        uint32_t FLTEN51:1;     //15
        uint32_t FLTWIDTH52:7;  //22:16
        uint32_t FLTEN52:1;     //23
        uint32_t FLTWIDTH53:7;  //30:24
        uint32_t FLTEN53:1;     //31
    } bits;    
} EXTINT5FLTCON0;

typedef union EXTINT5FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH54:7;  //6:0
        uint32_t FLTEN54:1;     //7
        uint32_t Reserved:24;   //31:8
    } bits;    
} EXTINT5FLTCON1;

/*
 * EXT_INT6_FLTCON0
 * 
 * Address = GPIO Base Address 1 + 0x0828
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH6[0]     |  [6:0]  |  RW  | Filtering width of EXT_INT6[0]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT6[0]   |             |
 * FLTEN6[0]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH6[1]     |  [14:8] |  RW  | Filtering width of EXT_INT6[1]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT6[1]   |             |
 * FLTEN6[1]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH6[2]     | [22:16] |  RW  | Filtering width of EXT_INT6[2]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT6[2]   |             |
 * FLTEN6[2]        |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH6[3]     | [30:24] |  RW  | Filtering width of EXT_INT6[3]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT6[3]   |             |
 * FLTEN6[3]        |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT6_FLTCON1
 * 
 * Address = GPIO Base Address 1 + 0x082C
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * RSVD             |  [31:0] |  -   | Reserved                        |  0x00000000 |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT6FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH60:7;  //6:0
        uint32_t FLTEN60:1;     //7
        uint32_t FLTWIDTH61:7;  //14:8
        uint32_t FLTEN61:1;     //15
        uint32_t FLTWIDTH62:7;  //22:16
        uint32_t FLTEN62:1;     //23
        uint32_t FLTWIDTH63:7;  //30:24
        uint32_t FLTEN63:1;     //31
    } bits;    
} EXTINT6FLTCON0;

typedef union EXTINT6FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t Reserved;   //31:0
    } bits;    
} EXTINT6FLTCON1;

/*
 * EXT_INT7_FLTCON0
 * 
 * Address = GPIO Base Address 1 + 0x0830
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH7[0]     |  [6:0]  |  RW  | Filtering width of EXT_INT7[0]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT7[0]   |             |
 * FLTEN7[0]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH7[1]     |  [14:8] |  RW  | Filtering width of EXT_INT7[1]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT7[1]   |             |
 * FLTEN7[1]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH7[2]     | [22:16] |  RW  | Filtering width of EXT_INT7[2]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT7[2]   |             |
 * FLTEN7[2]        |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH7[3]     | [30:24] |  RW  | Filtering width of EXT_INT7[3]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT7[3]   |             |
 * FLTEN7[3]        |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT7_FLTCON1
 * 
 * Address = GPIO Base Address 1 + 0x0834
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * RSVD             |  [31:0] |  -   | Reserved                        |  0x00000000 |
 * ----------------------------------------------------------------------------------|
 */


typedef union EXTINT7FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH70:7;  //6:0
        uint32_t FLTEN70:1;     //7
        uint32_t FLTWIDTH71:7;  //14:8
        uint32_t FLTEN71:1;     //15
        uint32_t FLTWIDTH72:7;  //22:16
        uint32_t FLTEN72:1;     //23
        uint32_t FLTWIDTH73:7;  //30:24
        uint32_t FLTEN73:1;     //31
    } bits;    
} EXTINT7FLTCON0;

typedef union EXTINT7FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t Reserved;   //31:0
    } bits;    
} EXTINT7FLTCON1;

/*
 * EXT_INT13_FLTCON0
 * 
 * Address = GPIO Base Address 1 + 0x0860
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH13[0]    |  [6:0]  |  RW  | Filtering width of EXT_INT13[0] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT13[0]  |             |
 * FLTEN13[0]       |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH13[1]    |  [14:8] |  RW  | Filtering width of EXT_INT13[1] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT13[1]  |             |
 * FLTEN13[1]       |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH13[2]    | [22:16] |  RW  | Filtering width of EXT_INT13[2] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT13[2]  |             |
 * FLTEN13[2]       |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH13[3]    | [30:24] |  RW  | Filtering width of EXT_INT13[3] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT13[3]  |             |
 * FLTEN13[3]       |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT13_FLTCON1
 * 
 * Address = GPIO Base Address 1 + 0x0864
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH13[4]    |  [6:0]  |  RW  | Filtering width of EXT_INT13[4] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT13[4]  |             |
 * FLTEN13[4]       |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH13[5]    |  [14:8] |  RW  | Filtering width of EXT_INT13[5] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT13[5]  |             |
 * FLTEN13[5]       |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH13[6]    | [22:16] |  RW  | Filtering width of EXT_INT13[6] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT13[6]  |             |
 * FLTEN13[6]       |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH13[7]    | [30:24] |  RW  | Filtering width of EXT_INT13[7] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT13[7]  |             |
 * FLTEN13[7]       |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT13FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH130:7;  //6:0
        uint32_t FLTEN130:1;     //7
        uint32_t FLTWIDTH131:7;  //14:8
        uint32_t FLTEN131:1;     //15
        uint32_t FLTWIDTH132:7;  //22:16
        uint32_t FLTEN132:1;     //23
        uint32_t FLTWIDTH133:7;  //30:24
        uint32_t FLTEN133:1;     //31
    } bits;    
} EXTINT13FLTCON0;

typedef union EXTINT13FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH134:7;  //6:0
        uint32_t FLTEN134:1;     //7
        uint32_t FLTWIDTH135:7;  //14:8
        uint32_t FLTEN135:1;     //15
        uint32_t FLTWIDTH136:7;  //22:16
        uint32_t FLTEN136:1;     //23
        uint32_t FLTWIDTH137:7;  //30:24
        uint32_t FLTEN137:1;     //31
    } bits;    
} EXTINT13FLTCON1;

/*
 * EXT_INT14_FLTCON0
 * 
 * Address = GPIO Base Address 1 + 0x0868
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH14[0]    |  [6:0]  |  RW  | Filtering width of EXT_INT14[0] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT14[0]  |             |
 * FLTEN14[0]       |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH14[1]    |  [14:8] |  RW  | Filtering width of EXT_INT14[1] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT14[1]  |             |
 * FLTEN14[1]       |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH14[2]    | [22:16] |  RW  | Filtering width of EXT_INT14[2] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT14[2]  |             |
 * FLTEN14[2]       |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH14[3]    | [30:24] |  RW  | Filtering width of EXT_INT14[3] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT14[3]  |             |
 * FLTEN14[3]       |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT14_FLTCON1
 * 
 * Address = GPIO Base Address 1 + 0x086C
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH14[4]    |  [6:0]  |  RW  | Filtering width of EXT_INT14[4] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT14[4]  |             |
 * FLTEN14[4]       |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH14[5]    |  [14:8] |  RW  | Filtering width of EXT_INT14[5] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT14[5]  |             |
 * FLTEN14[5]       |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH14[6]    | [22:16] |  RW  | Filtering width of EXT_INT14[6] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT14[6]  |             |
 * FLTEN14[6]       |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH14[7]    | [30:24] |  RW  | Filtering width of EXT_INT14[7] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT14[7]  |             |
 * FLTEN14[7]       |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT14FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH140:7;  //6:0
        uint32_t FLTEN140:1;     //7
        uint32_t FLTWIDTH141:7;  //14:8
        uint32_t FLTEN141:1;     //15
        uint32_t FLTWIDTH142:7;  //22:16
        uint32_t FLTEN142:1;     //23
        uint32_t FLTWIDTH143:7;  //30:24
        uint32_t FLTEN143:1;     //31
    } bits;    
} EXTINT14FLTCON0;

typedef union EXTINT14FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH144:7;  //6:0
        uint32_t FLTEN144:1;     //7
        uint32_t FLTWIDTH145:7;  //14:8
        uint32_t FLTEN145:1;     //15
        uint32_t FLTWIDTH146:7;  //22:16
        uint32_t FLTEN146:1;     //23
        uint32_t FLTWIDTH147:7;  //30:24
        uint32_t FLTEN147:1;     //31
    } bits;    
} EXTINT14FLTCON1;

/*
 * EXT_INT15_FLTCON0
 * 
 * Address = GPIO Base Address 1 + 0x0870
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH15[0]    |  [6:0]  |  RW  | Filtering width of EXT_INT15[0] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT15[0]  |             |
 * FLTEN15[0]       |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH15[1]    |  [14:8] |  RW  | Filtering width of EXT_INT15[1] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT15[1]  |             |
 * FLTEN15[1]       |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH15[2]    | [22:16] |  RW  | Filtering width of EXT_INT15[2] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT15[2]  |             |
 * FLTEN15[2]       |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH15[3]    | [30:24] |  RW  | Filtering width of EXT_INT15[3] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT15[3]  |             |
 * FLTEN15[3]       |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT15_FLTCON1
 * 
 * Address = GPIO Base Address 1 + 0x0874
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH15[4]    |  [6:0]  |  RW  | Filtering width of EXT_INT15[4] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT15[4]  |             |
 * FLTEN15[4]       |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH15[5]    |  [14:8] |  RW  | Filtering width of EXT_INT15[5] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT15[5]  |             |
 * FLTEN15[5]       |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH15[6]    | [22:16] |  RW  | Filtering width of EXT_INT15[6] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT15[6]  |             |
 * FLTEN15[6]       |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH15[7]    | [30:24] |  RW  | Filtering width of EXT_INT15[7] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT15[7]  |             |
 * FLTEN15[7]       |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT15FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH150:7;  //6:0
        uint32_t FLTEN150:1;     //7
        uint32_t FLTWIDTH151:7;  //14:8
        uint32_t FLTEN151:1;     //15
        uint32_t FLTWIDTH152:7;  //22:16
        uint32_t FLTEN152:1;     //23
        uint32_t FLTWIDTH153:7;  //30:24
        uint32_t FLTEN153:1;     //31
    } bits;    
} EXTINT15FLTCON0;

typedef union EXTINT15FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH154:7;  //6:0
        uint32_t FLTEN154:1;     //7
        uint32_t FLTWIDTH155:7;  //14:8
        uint32_t FLTEN155:1;     //15
        uint32_t FLTWIDTH156:7;  //22:16
        uint32_t FLTEN156:1;     //23
        uint32_t FLTWIDTH157:7;  //30:24
        uint32_t FLTEN157:1;     //31
    } bits;    
} EXTINT15FLTCON1;

/*
 * EXT_INT16_FLTCON0
 * 
 * Address = GPIO Base Address 1 + 0x0878
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH16[0]    |  [6:0]  |  RW  | Filtering width of EXT_INT16[0] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT16[0]  |             |
 * FLTEN16[0]       |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH16[1]    |  [14:8] |  RW  | Filtering width of EXT_INT16[1] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT16[1]  |             |
 * FLTEN16[1]       |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH16[2]    | [22:16] |  RW  | Filtering width of EXT_INT16[2] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT16[2]  |             |
 * FLTEN16[2]       |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH16[3]    | [30:24] |  RW  | Filtering width of EXT_INT16[3] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT16[3]  |             |
 * FLTEN16[3]       |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT16_FLTCON1
 * 
 * Address = GPIO Base Address 1 + 0x087C
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH16[4]    |  [6:0]  |  RW  | Filtering width of EXT_INT16[4] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT16[4]  |             |
 * FLTEN16[4]       |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH16[5]    |  [14:8] |  RW  | Filtering width of EXT_INT16[5] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT16[5]  |             |
 * FLTEN16[5]       |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * RSVD             | [31:16] |  -   | Reserved                        |     0x00    |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT16FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH160:7;  //6:0
        uint32_t FLTEN160:1;     //7
        uint32_t FLTWIDTH161:7;  //14:8
        uint32_t FLTEN161:1;     //15
        uint32_t FLTWIDTH162:7;  //22:16
        uint32_t FLTEN162:1;     //23
        uint32_t FLTWIDTH163:7;  //30:24
        uint32_t FLTEN163:1;     //31
    } bits;    
} EXTINT16FLTCON0;

typedef union EXTINT16FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH164:7;  //6:0
        uint32_t FLTEN164:1;     //7
        uint32_t FLTWIDTH165:7;  //14:8
        uint32_t FLTEN165:1;     //15
        uint32_t Reserved:16;   //31:16
    } bits;    
} EXTINT16FLTCON1;

/*
 * EXT_INT21_FLTCON0
 * 
 * Address = GPIO Base Address 1 + 0x0880
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH21[0]    |  [6:0]  |  RW  | Filtering width of EXT_INT21[0] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT21[0]  |             |
 * FLTEN21[0]       |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH21[1]    |  [14:8] |  RW  | Filtering width of EXT_INT21[1] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT21[1]  |             |
 * FLTEN21[1]       |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH21[2]    | [22:16] |  RW  | Filtering width of EXT_INT21[2] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT21[2]  |             |
 * FLTEN21[2]       |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH21[3]    | [30:24] |  RW  | Filtering width of EXT_INT21[3] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT21[3]  |             |
 * FLTEN21[3]       |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT21_FLTCON1
 * 
 * Address = GPIO Base Address 1 + 0x0884
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH21[4]    |  [6:0]  |  RW  | Filtering width of EXT_INT21[4] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT21[4]  |             |
 * FLTEN21[4]       |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH21[5]    |  [14:8] |  RW  | Filtering width of EXT_INT21[5] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT21[5]  |             |
 * FLTEN21[5]       |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH21[6]    | [22:16] |  RW  | Filtering width of EXT_INT21[6] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT21[6]  |             |
 * FLTEN21[6]       |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH21[7]    | [30:24] |  RW  | Filtering width of EXT_INT21[7] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT21[7]  |             |
 * FLTEN21[7]       |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT21FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH210:7;  //6:0
        uint32_t FLTEN210:1;     //7
        uint32_t FLTWIDTH211:7;  //14:8
        uint32_t FLTEN211:1;     //15
        uint32_t FLTWIDTH212:7;  //22:16
        uint32_t FLTEN212:1;     //23
        uint32_t FLTWIDTH213:7;  //30:24
        uint32_t FLTEN213:1;     //31
    } bits;    
} EXTINT21FLTCON0;

typedef union EXTINT21FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH214:7;  //6:0
        uint32_t FLTEN214:1;     //7
        uint32_t FLTWIDTH215:7;  //14:8
        uint32_t FLTEN215:1;     //15
        uint32_t FLTWIDTH216:7;  //22:16
        uint32_t FLTEN216:1;     //23
        uint32_t FLTWIDTH217:7;  //30:24
        uint32_t FLTEN217:1;     //31
    } bits;    
} EXTINT21FLTCON1;

/*
 * EXT_INT22_FLTCON0
 * 
 * Address = GPIO Base Address 1 + 0x0888
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH22[0]    |  [6:0]  |  RW  | Filtering width of EXT_INT22[0] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT22[0]  |             |
 * FLTEN22[0]       |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH22[1]    |  [14:8] |  RW  | Filtering width of EXT_INT22[1] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT22[1]  |             |
 * FLTEN22[1]       |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH22[2]    | [22:16] |  RW  | Filtering width of EXT_INT22[2] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT22[2]  |             |
 * FLTEN22[2]       |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH22[3]    | [30:24] |  RW  | Filtering width of EXT_INT22[3] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT22[3]  |             |
 * FLTEN22[3]       |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT22_FLTCON1
 * 
 * Address = GPIO Base Address 1 + 0x088C
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH22[4]    |  [6:0]  |  RW  | Filtering width of EXT_INT22[4] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT22[4]  |             |
 * FLTEN21[4]       |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * RSVD             |  [31:8] |  -   | Reserved                        |     0x00    |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT22FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH220:7;  //6:0
        uint32_t FLTEN220:1;     //7
        uint32_t FLTWIDTH221:7;  //14:8
        uint32_t FLTEN221:1;     //15
        uint32_t FLTWIDTH222:7;  //22:16
        uint32_t FLTEN222:1;     //23
        uint32_t FLTWIDTH223:7;  //30:24
        uint32_t FLTEN223:1;     //31
    } bits;    
} EXTINT22FLTCON0;

typedef union EXTINT22FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH224:7;  //6:0
        uint32_t FLTEN224:1;     //7
        uint32_t Reserved:24;    //31:8
    } bits;    
} EXTINT22FLTCON1;

/*
 * EXT_INT1_MASK
 * 
 * Address = GPIO Base Address 1 + 0x0900
 * Reset Value = 0x0000_00FF
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * EXT_INT1_MASK[0] |   [0]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT1_MASK[1] |   [1]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT1_MASK[2] |   [2]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT1_MASK[3] |   [3]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT1_MASK[4] |   [4]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT1_MASK[5] |   [5]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT1_MASK[6] |   [6]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT1_MASK[7] |   [7]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * RSVD             |  [31:8] |  -   | Reserved                        |   0x000000  |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT1MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT1MASK0:1; //0
        uint32_t EXTINT1MASK1:1; //1
        uint32_t EXTINT1MASK2:1; //2
        uint32_t EXTINT1MASK3:1; //3
        uint32_t EXTINT1MASK4:1; //4
        uint32_t EXTINT1MASK5:1; //5
        uint32_t EXTINT1MASK6:1; //6
        uint32_t EXTINT1MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT1MASK;

/*
 * EXT_INT2_MASK
 * 
 * Address = GPIO Base Address 1 + 0x0904
 * Reset Value = 0x0000_003F
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * EXT_INT2_MASK[0] |   [0]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT2_MASK[1] |   [1]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT2_MASK[2] |   [2]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT2_MASK[3] |   [3]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT2_MASK[4] |   [4]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT2_MASK[5] |   [5]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * RSVD             |  [31:6] |  -   | Reserved                        |  0x0000000  |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT2MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT2MASK0:1; //0
        uint32_t EXTINT2MASK1:1; //1
        uint32_t EXTINT2MASK2:1; //2
        uint32_t EXTINT2MASK3:1; //3
        uint32_t EXTINT2MASK4:1; //4
        uint32_t EXTINT2MASK5:1; //5
        uint32_t Reserved:26;    //31:6
    } bits;
} EXTINT2MASK;

/*
 * EXT_INT3_MASK
 * 
 * Address = GPIO Base Address 1 + 0x0908
 * Reset Value = 0x0000_00FF
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * EXT_INT3_MASK[0] |   [0]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT3_MASK[1] |   [1]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT3_MASK[2] |   [2]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT3_MASK[3] |   [3]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT3_MASK[4] |   [4]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT3_MASK[5] |   [5]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT3_MASK[6] |   [6]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT3_MASK[7] |   [7]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * RSVD             |  [31:8] |  -   | Reserved                        |   0x000000  |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT3MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT3MASK0:1; //0
        uint32_t EXTINT3MASK1:1; //1
        uint32_t EXTINT3MASK2:1; //2
        uint32_t EXTINT3MASK3:1; //3
        uint32_t EXTINT3MASK4:1; //4
        uint32_t EXTINT3MASK5:1; //5
        uint32_t EXTINT3MASK6:1; //6
        uint32_t EXTINT3MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT3MASK;

/*
 * EXT_INT4_MASK
 * 
 * Address = GPIO Base Address 1 + 0x090C
 * Reset Value = 0x0000_001F
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * EXT_INT4_MASK[0] |   [0]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT4_MASK[1] |   [1]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT4_MASK[2] |   [2]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT4_MASK[3] |   [3]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT4_MASK[4] |   [4]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * RSVD             |  [31:5] |  -   | Reserved                        |  0x0000000  |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT4MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT4MASK0:1; //0
        uint32_t EXTINT4MASK1:1; //1
        uint32_t EXTINT4MASK2:1; //2
        uint32_t EXTINT4MASK3:1; //3
        uint32_t EXTINT4MASK4:1; //4
        uint32_t Reserved:27;    //31:5
    } bits;
} EXTINT4MASK;

/*
 * EXT_INT5_MASK
 * 
 * Address = GPIO Base Address 1 + 0x0910
 * Reset Value = 0x0000_001F
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * EXT_INT5_MASK[0] |   [0]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT5_MASK[1] |   [1]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT5_MASK[2] |   [2]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT5_MASK[3] |   [3]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT5_MASK[4] |   [4]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * RSVD             |  [31:5] |  -   | Reserved                        |  0x0000000  |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT5MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT5MASK0:1; //0
        uint32_t EXTINT5MASK1:1; //1
        uint32_t EXTINT5MASK2:1; //2
        uint32_t EXTINT5MASK3:1; //3
        uint32_t EXTINT5MASK4:1; //4
        uint32_t Reserved:27;    //31:5
    } bits;
} EXTINT5MASK;

/*
 * EXT_INT6_MASK
 * 
 * Address = GPIO Base Address 1 + 0x0914
 * Reset Value = 0x0000_000F
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * EXT_INT6_MASK[0] |   [0]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT6_MASK[1] |   [1]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT6_MASK[2] |   [2]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT6_MASK[3] |   [3]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * RSVD             |  [31:4] |  -   | Reserved                        |  0x0000000  |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT6MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT6MASK0:1; //0
        uint32_t EXTINT6MASK1:1; //1
        uint32_t EXTINT6MASK2:1; //2
        uint32_t EXTINT6MASK3:1; //3
        uint32_t Reserved:28;    //31:4
    } bits;
} EXTINT6MASK;

/*
 * EXT_INT7_MASK
 * 
 * Address = GPIO Base Address 1 + 0x0918
 * Reset Value = 0x0000_000F
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * EXT_INT7_MASK[0] |   [0]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT7_MASK[1] |   [1]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT7_MASK[2] |   [2]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * EXT_INT7_MASK[3] |   [3]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                  |         |      | 0x1 : Masked                    |             |
 * ----------------------------------------------------------------------------------|
 * RSVD             |  [31:4] |  -   | Reserved                        |  0x0000000  |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT7MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT7MASK0:1; //0
        uint32_t EXTINT7MASK1:1; //1
        uint32_t EXTINT7MASK2:1; //2
        uint32_t EXTINT7MASK3:1; //3
        uint32_t Reserved:28;    //31:4
    } bits;
} EXTINT7MASK;

/*
 * EXT_INT13_MASK
 * 
 * Address = GPIO Base Address 1 + 0x0930
 * Reset Value = 0x0000_00FF
 * 
 *     Name          |   Bit   | Type |            Description          | Reset Value | 
 * -----------------------------------------------------------------------------------|
 * EXT_INT13_MASK[0] |   [0]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT13_MASK[1] |   [1]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT13_MASK[2] |   [2]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT13_MASK[3] |   [3]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT13_MASK[4] |   [4]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT13_MASK[5] |   [5]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT13_MASK[6] |   [6]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT13_MASK[7] |   [7]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * RSVD              |  [31:8] |  -   | Reserved                        |   0x000000  |
 * -----------------------------------------------------------------------------------|
 */

typedef union EXTINT13MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT13MASK0:1; //0
        uint32_t EXTINT13MASK1:1; //1
        uint32_t EXTINT13MASK2:1; //2
        uint32_t EXTINT13MASK3:1; //3
        uint32_t EXTINT13MASK4:1; //4
        uint32_t EXTINT13MASK5:1; //5
        uint32_t EXTINT13MASK6:1; //6
        uint32_t EXTINT13MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT13MASK;

/*
 * EXT_INT14_MASK
 * 
 * Address = GPIO Base Address 1 + 0x0934
 * Reset Value = 0x0000_00FF
 * 
 *     Name          |   Bit   | Type |            Description          | Reset Value | 
 * -----------------------------------------------------------------------------------|
 * EXT_INT14_MASK[0] |   [0]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT14_MASK[1] |   [1]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT14_MASK[2] |   [2]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT14_MASK[3] |   [3]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT14_MASK[4] |   [4]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT14_MASK[5] |   [5]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT14_MASK[6] |   [6]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT14_MASK[7] |   [7]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * RSVD              |  [31:8] |  -   | Reserved                        |   0x000000  |
 * -----------------------------------------------------------------------------------|
 */

typedef union EXTINT14MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT14MASK0:1; //0
        uint32_t EXTINT14MASK1:1; //1
        uint32_t EXTINT14MASK2:1; //2
        uint32_t EXTINT14MASK3:1; //3
        uint32_t EXTINT14MASK4:1; //4
        uint32_t EXTINT14MASK5:1; //5
        uint32_t EXTINT14MASK6:1; //6
        uint32_t EXTINT14MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT14MASK;

/*
 * EXT_INT15_MASK
 * 
 * Address = GPIO Base Address 1 + 0x0938
 * Reset Value = 0x0000_00FF
 * 
 *     Name          |   Bit   | Type |            Description          | Reset Value | 
 * -----------------------------------------------------------------------------------|
 * EXT_INT15_MASK[0] |   [0]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT15_MASK[1] |   [1]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT15_MASK[2] |   [2]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT15_MASK[3] |   [3]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT15_MASK[4] |   [4]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT15_MASK[5] |   [5]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT15_MASK[6] |   [6]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT15_MASK[7] |   [7]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * RSVD              |  [31:8] |  -   | Reserved                        |   0x000000  |
 * -----------------------------------------------------------------------------------|
 */

typedef union EXTINT15MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT15MASK0:1; //0
        uint32_t EXTINT15MASK1:1; //1
        uint32_t EXTINT15MASK2:1; //2
        uint32_t EXTINT15MASK3:1; //3
        uint32_t EXTINT15MASK4:1; //4
        uint32_t EXTINT15MASK5:1; //5
        uint32_t EXTINT15MASK6:1; //6
        uint32_t EXTINT15MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT15MASK;

/*
 * EXT_INT16_MASK
 * 
 * Address = GPIO Base Address 1 + 0x093C
 * Reset Value = 0x0000_003F
 * 
 *     Name          |   Bit   | Type |            Description          | Reset Value | 
 * -----------------------------------------------------------------------------------|
 * EXT_INT16_MASK[0] |   [0]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT16_MASK[1] |   [1]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT16_MASK[2] |   [2]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT16_MASK[3] |   [3]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT16_MASK[4] |   [4]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT16_MASK[5] |   [5]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * RSVD              |  [31:6] |  -   | Reserved                        |  0x0000000  |
 * -----------------------------------------------------------------------------------|
 */

typedef union EXTINT16MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT16MASK0:1; //0
        uint32_t EXTINT16MASK1:1; //1
        uint32_t EXTINT16MASK2:1; //2
        uint32_t EXTINT16MASK3:1; //3
        uint32_t EXTINT16MASK4:1; //4
        uint32_t EXTINT16MASK5:1; //5
        uint32_t Reserved:26;    //31:6
    } bits;
} EXTINT16MASK;

/*
 * EXT_INT21_MASK
 * 
 * Address = GPIO Base Address 1 + 0x0940
 * Reset Value = 0x0000_00FF
 * 
 *     Name          |   Bit   | Type |            Description          | Reset Value | 
 * -----------------------------------------------------------------------------------|
 * EXT_INT21_MASK[0] |   [0]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT21_MASK[1] |   [1]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT21_MASK[2] |   [2]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT21_MASK[3] |   [3]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT21_MASK[4] |   [4]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT21_MASK[5] |   [5]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT21_MASK[6] |   [6]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT21_MASK[7] |   [7]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * RSVD              |  [31:8] |  -   | Reserved                        |   0x000000  |
 * -----------------------------------------------------------------------------------|
 */

typedef union EXTINT21MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT21MASK0:1; //0
        uint32_t EXTINT21MASK1:1; //1
        uint32_t EXTINT21MASK2:1; //2
        uint32_t EXTINT21MASK3:1; //3
        uint32_t EXTINT21MASK4:1; //4
        uint32_t EXTINT21MASK5:1; //5
        uint32_t EXTINT21MASK6:1; //6
        uint32_t EXTINT21MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT21MASK;

/*
 * EXT_INT22_MASK
 * 
 * Address = GPIO Base Address 1 + 0x0944
 * Reset Value = 0x0000_001F
 * 
 *     Name          |   Bit   | Type |            Description          | Reset Value | 
 * -----------------------------------------------------------------------------------|
 * EXT_INT22_MASK[0] |   [0]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT22_MASK[1] |   [1]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT22_MASK[2] |   [2]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT22_MASK[3] |   [3]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * EXT_INT22_MASK[4] |   [4]   |  RW  | 0x0 : Enables interrupt         |     0x1     |
 *                   |         |      | 0x1 : Masked                    |             |
 * -----------------------------------------------------------------------------------|
 * RSVD              |  [31:5] |  -   | Reserved                        |  0x0000000  |
 * -----------------------------------------------------------------------------------|
 */

typedef union EXTINT22MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT22MASK0:1; //0
        uint32_t EXTINT22MASK1:1; //1
        uint32_t EXTINT22MASK2:1; //2
        uint32_t EXTINT22MASK3:1; //3
        uint32_t EXTINT22MASK4:1; //4
        uint32_t Reserved:27;    //31:5
    } bits;
} EXTINT22MASK;

/*
 * EXT_INT1_PEND
 * 
 * Address = GPIO Base Address 1 + 0x0A00
 * Reset Value = 0x0000_0000
 * 
 *     Name          |   Bit   | Type |        Description       | Reset Value | 
 * ----------------------------------------------------------------------------|
 * EXT_INT1_PEND[0]  |   [0]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT1_PEND[1]  |   [1]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT1_PEND[2]  |   [2]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT1_PEND[3]  |   [3]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT1_PEND[4]  |   [4]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT1_PEND[5]  |   [5]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT1_PEND[6]  |   [6]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT1_PEND[7]  |   [7]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * RSVD              |  [31:8] |  -   | Reserved                 |   0x000000  |
 * ----------------------------------------------------------------------------|
 */

typedef union EXTINT1PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT1PEND0:1; //0
        uint32_t EXTINT1PEND1:1; //1
        uint32_t EXTINT1PEND2:1; //2
        uint32_t EXTINT1PEND3:1; //3
        uint32_t EXTINT1PEND4:1; //4
        uint32_t EXTINT1PEND5:1; //5
        uint32_t EXTINT1PEND6:1; //6
        uint32_t EXTINT1PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT1PEND;

/*
 * EXT_INT2_PEND
 * 
 * Address = GPIO Base Address 1 + 0x0A04
 * Reset Value = 0x0000_0000
 * 
 *     Name          |   Bit   | Type |        Description       | Reset Value | 
 * ----------------------------------------------------------------------------|
 * EXT_INT2_PEND[0]  |   [0]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT2_PEND[1]  |   [1]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT2_PEND[2]  |   [2]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT2_PEND[3]  |   [3]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT2_PEND[4]  |   [4]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT2_PEND[5]  |   [5]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * RSVD              |  [31:6] |  -   | Reserved                 |  0x0000000  |
 * ----------------------------------------------------------------------------|
 */

typedef union EXTINT2PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT2PEND0:1; //0
        uint32_t EXTINT2PEND1:1; //1
        uint32_t EXTINT2PEND2:1; //2
        uint32_t EXTINT2PEND3:1; //3
        uint32_t EXTINT2PEND4:1; //4
        uint32_t EXTINT2PEND5:1; //5
        uint32_t Reserved:26;    //31:6
    } bits;
} EXTINT2PEND;

/*
 * EXT_INT3_PEND
 * 
 * Address = GPIO Base Address 1 + 0x0A08
 * Reset Value = 0x0000_0000
 * 
 *     Name          |   Bit   | Type |        Description       | Reset Value | 
 * ----------------------------------------------------------------------------|
 * EXT_INT3_PEND[0]  |   [0]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT3_PEND[1]  |   [1]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT3_PEND[2]  |   [2]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT3_PEND[3]  |   [3]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT3_PEND[4]  |   [4]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT3_PEND[5]  |   [5]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT3_PEND[6]  |   [6]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT3_PEND[7]  |   [7]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * RSVD              |  [31:8] |  -   | Reserved                 |   0x000000  |
 * ----------------------------------------------------------------------------|
 */

typedef union EXTINT3PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT3PEND0:1; //0
        uint32_t EXTINT3PEND1:1; //1
        uint32_t EXTINT3PEND2:1; //2
        uint32_t EXTINT3PEND3:1; //3
        uint32_t EXTINT3PEND4:1; //4
        uint32_t EXTINT3PEND5:1; //5
        uint32_t EXTINT3PEND6:1; //6
        uint32_t EXTINT3PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT3PEND;

/*
 * EXT_INT4_PEND
 * 
 * Address = GPIO Base Address 1 + 0x0A0C
 * Reset Value = 0x0000_0000
 * 
 *     Name          |   Bit   | Type |        Description       | Reset Value | 
 * ----------------------------------------------------------------------------|
 * EXT_INT4_PEND[0]  |   [0]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT4_PEND[1]  |   [1]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT4_PEND[2]  |   [2]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT4_PEND[3]  |   [3]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT4_PEND[4]  |   [4]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * RSVD              |  [31:5] |  -   | Reserved                 |  0x0000000  |
 * ----------------------------------------------------------------------------|
 */

typedef union EXTINT4PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT4PEND0:1; //0
        uint32_t EXTINT4PEND1:1; //1
        uint32_t EXTINT4PEND2:1; //2
        uint32_t EXTINT4PEND3:1; //3
        uint32_t EXTINT4PEND4:1; //4
        uint32_t Reserved:27;    //31:5
    } bits;
} EXTINT4PEND;

/*
 * EXT_INT5_PEND
 * 
 * Address = GPIO Base Address 1 + 0x0A10
 * Reset Value = 0x0000_0000
 * 
 *     Name          |   Bit   | Type |        Description       | Reset Value | 
 * ----------------------------------------------------------------------------|
 * EXT_INT5_PEND[0]  |   [0]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT5_PEND[1]  |   [1]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT5_PEND[2]  |   [2]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT5_PEND[3]  |   [3]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT5_PEND[4]  |   [4]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * RSVD              |  [31:5] |  -   | Reserved                 |  0x0000000  |
 * ----------------------------------------------------------------------------|
 */

typedef union EXTINT5PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT5PEND0:1; //0
        uint32_t EXTINT5PEND1:1; //1
        uint32_t EXTINT5PEND2:1; //2
        uint32_t EXTINT5PEND3:1; //3
        uint32_t EXTINT5PEND4:1; //4
        uint32_t Reserved:27;    //31:5
    } bits;
} EXTINT5PEND;

/*
 * EXT_INT6_PEND
 * 
 * Address = GPIO Base Address 1 + 0x0A14
 * Reset Value = 0x0000_0000
 * 
 *     Name          |   Bit   | Type |        Description       | Reset Value | 
 * ----------------------------------------------------------------------------|
 * EXT_INT6_PEND[0]  |   [0]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT6_PEND[1]  |   [1]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT6_PEND[2]  |   [2]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT6_PEND[3]  |   [3]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * RSVD              |  [31:4] |  -   | Reserved                 |  0x0000000  |
 * ----------------------------------------------------------------------------|
 */

typedef union EXTINT6PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT6PEND0:1; //0
        uint32_t EXTINT6PEND1:1; //1
        uint32_t EXTINT6PEND2:1; //2
        uint32_t EXTINT6PEND3:1; //3
        uint32_t Reserved:28;    //31:5
    } bits;
} EXTINT6PEND;

/*
 * EXT_INT7_PEND
 * 
 * Address = GPIO Base Address 1 + 0x0A18
 * Reset Value = 0x0000_0000
 * 
 *     Name          |   Bit   | Type |        Description       | Reset Value | 
 * ----------------------------------------------------------------------------|
 * EXT_INT7_PEND[0]  |   [0]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT7_PEND[1]  |   [1]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT7_PEND[2]  |   [2]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT7_PEND[3]  |   [3]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * RSVD              |  [31:4] |  -   | Reserved                 |  0x0000000  |
 * ----------------------------------------------------------------------------|
 */

typedef union EXTINT7PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT7PEND0:1; //0
        uint32_t EXTINT7PEND1:1; //1
        uint32_t EXTINT7PEND2:1; //2
        uint32_t EXTINT7PEND3:1; //3
        uint32_t Reserved:28;    //31:5
    } bits;
} EXTINT7PEND;

/*
 * EXT_INT13_PEND
 * 
 * Address = GPIO Base Address 1 + 0x0A30
 * Reset Value = 0x0000_0000
 * 
 *     Name          |   Bit   | Type |        Description       | Reset Value | 
 * ----------------------------------------------------------------------------|
 * EXT_INT13_PEND[0] |   [0]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT13_PEND[1] |   [1]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT13_PEND[2] |   [2]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT13_PEND[3] |   [3]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT13_PEND[4] |   [4]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT13_PEND[5] |   [5]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT13_PEND[6] |   [6]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT13_PEND[7] |   [7]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * RSVD              |  [31:8] |  -   | Reserved                 |   0x000000  |
 * ----------------------------------------------------------------------------|
 */

typedef union EXTINT13PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT13PEND0:1; //0
        uint32_t EXTINT13PEND1:1; //1
        uint32_t EXTINT13PEND2:1; //2
        uint32_t EXTINT13PEND3:1; //3
        uint32_t EXTINT13PEND4:1; //4
        uint32_t EXTINT13PEND5:1; //5
        uint32_t EXTINT13PEND6:1; //6
        uint32_t EXTINT13PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT13PEND;

/*
 * EXT_INT14_PEND
 * 
 * Address = GPIO Base Address 1 + 0x0A34
 * Reset Value = 0x0000_0000
 * 
 *     Name          |   Bit   | Type |        Description       | Reset Value | 
 * ----------------------------------------------------------------------------|
 * EXT_INT14_PEND[0] |   [0]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT14_PEND[1] |   [1]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT14_PEND[2] |   [2]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT14_PEND[3] |   [3]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT14_PEND[4] |   [4]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT14_PEND[5] |   [5]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT14_PEND[6] |   [6]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT14_PEND[7] |   [7]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * RSVD              |  [31:8] |  -   | Reserved                 |   0x000000  |
 * ----------------------------------------------------------------------------|
 */

typedef union EXTINT14PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT14PEND0:1; //0
        uint32_t EXTINT14PEND1:1; //1
        uint32_t EXTINT14PEND2:1; //2
        uint32_t EXTINT14PEND3:1; //3
        uint32_t EXTINT14PEND4:1; //4
        uint32_t EXTINT14PEND5:1; //5
        uint32_t EXTINT14PEND6:1; //6
        uint32_t EXTINT14PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT14PEND;

/*
 * EXT_INT15_PEND
 * 
 * Address = GPIO Base Address 1 + 0x0A38
 * Reset Value = 0x0000_0000
 * 
 *     Name          |   Bit   | Type |        Description       | Reset Value | 
 * ----------------------------------------------------------------------------|
 * EXT_INT15_PEND[0] |   [0]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT15_PEND[1] |   [1]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT15_PEND[2] |   [2]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT15_PEND[3] |   [3]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT15_PEND[4] |   [4]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT15_PEND[5] |   [5]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT15_PEND[6] |   [6]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT15_PEND[7] |   [7]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * RSVD              |  [31:8] |  -   | Reserved                 |   0x000000  |
 * ----------------------------------------------------------------------------|
 */

typedef union EXTINT15PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT15PEND0:1; //0
        uint32_t EXTINT15PEND1:1; //1
        uint32_t EXTINT15PEND2:1; //2
        uint32_t EXTINT15PEND3:1; //3
        uint32_t EXTINT15PEND4:1; //4
        uint32_t EXTINT15PEND5:1; //5
        uint32_t EXTINT15PEND6:1; //6
        uint32_t EXTINT15PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT15PEND;

/*
 * EXT_INT16_PEND
 * 
 * Address = GPIO Base Address 1 + 0x0A3C
 * Reset Value = 0x0000_0000
 * 
 *     Name          |   Bit   | Type |        Description       | Reset Value | 
 * ----------------------------------------------------------------------------|
 * EXT_INT16_PEND[0] |   [0]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT16_PEND[1] |   [1]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT16_PEND[2] |   [2]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT16_PEND[3] |   [3]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT16_PEND[4] |   [4]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT16_PEND[5] |   [5]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * RSVD              |  [31:6] |  -   | Reserved                 |   0x000000  |
 * ----------------------------------------------------------------------------|
 */

typedef union EXTINT16PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT16PEND0:1; //0
        uint32_t EXTINT16PEND1:1; //1
        uint32_t EXTINT16PEND2:1; //2
        uint32_t EXTINT16PEND3:1; //3
        uint32_t EXTINT16PEND4:1; //4
        uint32_t EXTINT16PEND5:1; //5
        uint32_t Reserved:26;    //31:6
    } bits;
} EXTINT16PEND;

/*
 * EXT_INT21_PEND
 * 
 * Address = GPIO Base Address 1 + 0x0A40
 * Reset Value = 0x0000_0000
 * 
 *     Name          |   Bit   | Type |        Description       | Reset Value | 
 * ----------------------------------------------------------------------------|
 * EXT_INT21_PEND[0] |   [0]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT21_PEND[1] |   [1]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT21_PEND[2] |   [2]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT21_PEND[3] |   [3]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT21_PEND[4] |   [4]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT21_PEND[5] |   [5]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT21_PEND[6] |   [6]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT21_PEND[7] |   [7]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * RSVD              |  [31:8] |  -   | Reserved                 |   0x000000  |
 * ----------------------------------------------------------------------------|
 */

typedef union EXTINT21PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT21PEND0:1; //0
        uint32_t EXTINT21PEND1:1; //1
        uint32_t EXTINT21PEND2:1; //2
        uint32_t EXTINT21PEND3:1; //3
        uint32_t EXTINT21PEND4:1; //4
        uint32_t EXTINT21PEND5:1; //5
        uint32_t EXTINT21PEND6:1; //6
        uint32_t EXTINT21PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT21PEND;

/*
 * EXT_INT22_PEND
 * 
 * Address = GPIO Base Address 1 + 0x0A44
 * Reset Value = 0x0000_0000
 * 
 *     Name          |   Bit   | Type |        Description       | Reset Value | 
 * ----------------------------------------------------------------------------|
 * EXT_INT22_PEND[0] |   [0]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT22_PEND[1] |   [1]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT22_PEND[2] |   [2]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT22_PEND[3] |   [3]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * EXT_INT22_PEND[4] |   [4]   |  RWX | 0x0 : Not occur          |     0x0     |
 *                   |         |      | 0x1 : Interrupt occurs   |             |
 * ----------------------------------------------------------------------------|
 * RSVD              |  [31:5] |  -   | Reserved                 |   0x000000  |
 * ----------------------------------------------------------------------------|
 */

typedef union EXTINT22PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT22PEND0:1; //0
        uint32_t EXTINT22PEND1:1; //1
        uint32_t EXTINT22PEND2:1; //2
        uint32_t EXTINT22PEND3:1; //3
        uint32_t EXTINT22PEND4:1; //4
        uint32_t Reserved:27;    //31:5
    } bits;
} EXTINT22PEND;

/*
 * EXT_INT_SERVICE_XB
 * 
 * Address = GPIO Base Address 1 + 0x0B08
 * Reset Value = 0x0000_0000
 * 
 *     Name      |   Bit   | Type |           Description           | Reset Value | 
 * -------------------------------------------------------------------------------|
 * SVC_Num       |  [2:0]  |  RW  | Interrupt number to be serviced |  0x0000000  |
 * -------------------------------------------------------------------------------|
 *               |         |      | EXT_INT Service group number    |             |
 *               |         |      | 0x1 : EXT_INT1                  |             |
 *               |         |      | 0x2 : EXT_INT2                  |             |
 *               |         |      | 0x3 : EXT_INT3                  |             |
 *               |         |      | 0x4 : EXT_INT4                  |             |
 *               |         |      | 0x5 : EXT_INT5                  |             |
 *               |         |      | 0x6 : EXT_INT6                  |             |
 * SVC_Group_Num |  [7:3]  |  RW  | 0x7 : EXT_INT7                  |     0x00    |
 *               |         |      | 0x8 : EXT_INT13                 |             |
 *               |         |      | 0x9 : EXT_INT14                 |             |
 *               |         |      | 0xA : EXT_INT15                 |             |
 *               |         |      | 0xB : EXT_INT16                 |             |
 *               |         |      | 0xC : EXT_INT21                 |             |
 *               |         |      | 0xD : EXT_INT22                 |             |
 * -------------------------------------------------------------------------------|
 * RSVD          |  [31:8] |  RW  | Reserved                        |     0x0     |
 * -------------------------------------------------------------------------------|
 */

typedef union EXTINTSERVICEXB_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t SVCNUM:3;       //2:0
        uint32_t SVCGROUPNUM:5;  //7:3
        uint32_t Reserved:24;                   //31:8
    } bits;
} EXTINTSERVICEXB;

/*
 * EXT_INT_SERVICE_PEND_XB
 * 
 * Address = GPIO Base Address 1 + 0x0B0C
 * Reset Value = 0x0000_0000
 * 
 *     Name      |   Bit   | Type |       Description       | Reset Value | 
 * -----------------------------------------------------------------------|
 * SVC_PEND      |  [7:0]  |  RW  | 0x0 : Not occur         |     0x00    |
 *               |         |      | 0x1 : Interrupt occurs  |             |
 * -----------------------------------------------------------------------|
 * RSVD          |  [31:8] |  RW  | Reserved                |  0x0000000  |
 * -----------------------------------------------------------------------|
 */

typedef union EXTINTSERVICEPENDXB_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t SVCPEND:8;  //7:0
        uint32_t Reserved:24;                   //31:8
    } bits;
} EXTINTSERVICEPENDXB;

/*
 * EXT_INT_GRPFIXPRI_XB
 * 
 * Address = GPIO Base Address 1 + 0x0B10
 * Reset Value = 0x0000_0000
 * 
 *      Name       |   Bit   | Type |                   Description                   | Reset Value | 
 * -------------------------------------------------------------------------------------------------|
 *                 |         |      | When fixed group priority mode = 0 to 12, then  |             |
 *                 |         |      | group number should be of the highest priority. |             |
 *                 |         |      | 0x0 : EXT_INT1                                  |             |
 *                 |         |      | 0x1 : EXT_INT2                                  |             |
 *                 |         |      | 0x2 : EXT_INT3                                  |             |
 *                 |         |      | 0x3 : EXT_INT4                                  |             |
 *                 |         |      | 0x4 : EXT_INT5                                  |             |
 *                 |         |      | 0x5 : EXT_INT6                                  |             |
 * Highest_GRP_NUM |  [3:0]  |  RW  | 0x6 : EXT_INT7                                  |     0x00    |
 *                 |         |      | 0x7 : EXT_INT13                                 |             |
 *                 |         |      | 0x8 : EXT_INT14                                 |             |
 *                 |         |      | 0x9 : EXT_INT15                                 |             |
 *                 |         |      | 0xA : EXT_INT16                                 |             |
 *                 |         |      | 0xB : EXT_INT21                                 |             |
 *                 |         |      | 0xC : EXT_INT22                                 |             |
 * -------------------------------------------------------------------------------------------------|
 * RSVD            |  [31:4] |  RW  | Reserved                                        |     0x0     |
 * -------------------------------------------------------------------------------------------------|
 */

typedef union EXTINTGRPFIXPRIXB_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTGRPNUM:4;  //3:0
        uint32_t Reserved:28;   //31:4
    } bits;
} EXTINTGRPFIXPRIXB;

/*
 * EXT_INT1_FIXPRI
 * 
 * Address = GPIO Base Address 1 + 0x0B14
 * Reset Value = 0x0000_0000
 * 
 *      Name       |   Bit   | Type |                     Description                      | Reset Value | 
 * ------------------------------------------------------------------------------------------------------|
 *                 |         |      | Interrupt number of the highest priority in External |             |
 * Highest_GRP_NUM |  [2:0]  |  RW  | Interrupt Group 0 (EXT_INT1) when fixed priority     |     0x0     |
 *                 |         |      | mode : 0 to 7                                        |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD            |  [31:3] |  RW  | Reserved                                             |  0x0000000  |
 * ------------------------------------------------------------------------------------------------------|
 */

typedef union EXTINT1FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT1FIXPRI;

/*
 * EXT_INT2_FIXPRI
 * 
 * Address = GPIO Base Address 1 + 0x0B18
 * Reset Value = 0x0000_0000
 * 
 *      Name       |   Bit   | Type |                     Description                      | Reset Value | 
 * ------------------------------------------------------------------------------------------------------|
 *                 |         |      | Interrupt number of the highest priority in External |             |
 * Highest_GRP_NUM |  [2:0]  |  RW  | Interrupt Group 1 (EXT_INT2) when fixed priority     |     0x0     |
 *                 |         |      | mode : 0 to 7                                        |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD            |  [31:3] |  RW  | Reserved                                             |  0x0000000  |
 * ------------------------------------------------------------------------------------------------------|
 */

typedef union EXTINT2FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT2FIXPRI;

/*
 * EXT_INT3_FIXPRI
 * 
 * Address = GPIO Base Address 1 + 0x0B1C
 * Reset Value = 0x0000_0000
 * 
 *      Name       |   Bit   | Type |                     Description                      | Reset Value | 
 * ------------------------------------------------------------------------------------------------------|
 *                 |         |      | Interrupt number of the highest priority in External |             |
 * Highest_GRP_NUM |  [2:0]  |  RW  | Interrupt Group 2 (EXT_INT3) when fixed priority     |     0x0     |
 *                 |         |      | mode : 0 to 7                                        |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD            |  [31:3] |  RW  | Reserved                                             |  0x0000000  |
 * ------------------------------------------------------------------------------------------------------|
 */

typedef union EXTINT3FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT3FIXPRI;

/*
 * EXT_INT4_FIXPRI
 * 
 * Address = GPIO Base Address 1 + 0x0B20
 * Reset Value = 0x0000_0000
 * 
 *      Name       |   Bit   | Type |                     Description                      | Reset Value | 
 * ------------------------------------------------------------------------------------------------------|
 *                 |         |      | Interrupt number of the highest priority in External |             |
 * Highest_GRP_NUM |  [2:0]  |  RW  | Interrupt Group 3 (EXT_INT4) when fixed priority     |     0x0     |
 *                 |         |      | mode : 0 to 7                                        |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD            |  [31:3] |  RW  | Reserved                                             |  0x0000000  |
 * ------------------------------------------------------------------------------------------------------|
 */

typedef union EXTINT4FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT4FIXPRI;

/*
 * EXT_INT5_FIXPRI
 * 
 * Address = GPIO Base Address 1 + 0x0B24
 * Reset Value = 0x0000_0000
 * 
 *      Name       |   Bit   | Type |                     Description                      | Reset Value | 
 * ------------------------------------------------------------------------------------------------------|
 *                 |         |      | Interrupt number of the highest priority in External |             |
 * Highest_GRP_NUM |  [2:0]  |  RW  | Interrupt Group 4 (EXT_INT5) when fixed priority     |     0x0     |
 *                 |         |      | mode : 0 to 7                                        |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD            |  [31:3] |  RW  | Reserved                                             |  0x0000000  |
 * ------------------------------------------------------------------------------------------------------|
 */

typedef union EXTINT5FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT5FIXPRI;

/*
 * EXT_INT6_FIXPRI
 * 
 * Address = GPIO Base Address 1 + 0x0B28
 * Reset Value = 0x0000_0000
 * 
 *      Name       |   Bit   | Type |                     Description                      | Reset Value | 
 * ------------------------------------------------------------------------------------------------------|
 *                 |         |      | Interrupt number of the highest priority in External |             |
 * Highest_GRP_NUM |  [2:0]  |  RW  | Interrupt Group 5 (EXT_INT6) when fixed priority     |     0x0     |
 *                 |         |      | mode : 0 to 7                                        |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD            |  [31:3] |  RW  | Reserved                                             |  0x0000000  |
 * ------------------------------------------------------------------------------------------------------|
 */

typedef union EXTINT6FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT6FIXPRI;

/*
 * EXT_INT7_FIXPRI
 * 
 * Address = GPIO Base Address 1 + 0x0B2C
 * Reset Value = 0x0000_0000
 * 
 *      Name       |   Bit   | Type |                     Description                      | Reset Value | 
 * ------------------------------------------------------------------------------------------------------|
 *                 |         |      | Interrupt number of the highest priority in External |             |
 * Highest_GRP_NUM |  [2:0]  |  RW  | Interrupt Group 6 (EXT_INT7) when fixed priority     |     0x0     |
 *                 |         |      | mode : 0 to 7                                        |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD            |  [31:3] |  RW  | Reserved                                             |  0x0000000  |
 * ------------------------------------------------------------------------------------------------------|
 */

typedef union EXTINT7FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT7FIXPRI;

/*
 * EXT_INT13_FIXPRI
 * 
 * Address = GPIO Base Address 1 + 0x0B44
 * Reset Value = 0x0000_0000
 * 
 *      Name       |   Bit   | Type |                     Description                      | Reset Value | 
 * ------------------------------------------------------------------------------------------------------|
 *                 |         |      | Interrupt number of the highest priority in External |             |
 * Highest_GRP_NUM |  [2:0]  |  RW  | Interrupt Group 7 (EXT_INT13) when fixed priority    |     0x0     |
 *                 |         |      | mode : 0 to 7                                        |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD            |  [31:3] |  RW  | Reserved                                             |  0x0000000  |
 * ------------------------------------------------------------------------------------------------------|
 */

typedef union EXTINT13FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HHIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT13FIXPRI;

/*
 * EXT_INT14_FIXPRI
 * 
 * Address = GPIO Base Address 1 + 0x0B48
 * Reset Value = 0x0000_0000
 * 
 *      Name       |   Bit   | Type |                     Description                      | Reset Value | 
 * ------------------------------------------------------------------------------------------------------|
 *                 |         |      | Interrupt number of the highest priority in External |             |
 * Highest_GRP_NUM |  [2:0]  |  RW  | Interrupt Group 8 (EXT_INT14) when fixed priority    |     0x0     |
 *                 |         |      | mode : 0 to 7                                        |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD            |  [31:3] |  RW  | Reserved                                             |  0x0000000  |
 * ------------------------------------------------------------------------------------------------------|
 */

typedef union EXTINT14FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT14FIXPRI;

/*
 * EXT_INT15_FIXPRI
 * 
 * Address = GPIO Base Address 1 + 0x0B4C
 * Reset Value = 0x0000_0000
 * 
 *      Name       |   Bit   | Type |                     Description                      | Reset Value | 
 * ------------------------------------------------------------------------------------------------------|
 *                 |         |      | Interrupt number of the highest priority in External |             |
 * Highest_GRP_NUM |  [2:0]  |  RW  | Interrupt Group 9 (EXT_INT15) when fixed priority    |     0x0     |
 *                 |         |      | mode : 0 to 7                                        |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD            |  [31:3] |  RW  | Reserved                                             |  0x0000000  |
 * ------------------------------------------------------------------------------------------------------|
 */

typedef union EXTINT15FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT15FIXPRI;

/*
 * EXT_INT16_FIXPRI
 * 
 * Address = GPIO Base Address 1 + 0x0B50
 * Reset Value = 0x0000_0000
 * 
 *      Name       |   Bit   | Type |                     Description                      | Reset Value | 
 * ------------------------------------------------------------------------------------------------------|
 *                 |         |      | Interrupt number of the highest priority in External |             |
 * Highest_GRP_NUM |  [2:0]  |  RW  | Interrupt Group 10 (EXT_INT16) when fixed priority   |     0x0     |
 *                 |         |      | mode : 0 to 7                                        |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD            |  [31:3] |  RW  | Reserved                                             |  0x0000000  |
 * ------------------------------------------------------------------------------------------------------|
 */

typedef union EXTINT16FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT16FIXPRI;

/*
 * EXT_INT21_FIXPRI
 * 
 * Address = GPIO Base Address 1 + 0x0B54
 * Reset Value = 0x0000_0000
 * 
 *      Name       |   Bit   | Type |                     Description                      | Reset Value | 
 * ------------------------------------------------------------------------------------------------------|
 *                 |         |      | Interrupt number of the highest priority in External |             |
 * Highest_GRP_NUM |  [2:0]  |  RW  | Interrupt Group 11 (EXT_INT21) when fixed priority   |     0x0     |
 *                 |         |      | mode : 0 to 7                                        |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD            |  [31:3] |  RW  | Reserved                                             |  0x0000000  |
 * ------------------------------------------------------------------------------------------------------|
 */

typedef union EXTINT21FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT21FIXPRI;

/*
 * EXT_INT22_FIXPRI
 * 
 * Address = GPIO Base Address 1 + 0x0B58
 * Reset Value = 0x0000_0000
 * 
 *      Name       |   Bit   | Type |                     Description                      | Reset Value | 
 * ------------------------------------------------------------------------------------------------------|
 *                 |         |      | Interrupt number of the highest priority in External |             |
 * Highest_GRP_NUM |  [2:0]  |  RW  | Interrupt Group 12 (EXT_INT22) when fixed priority   |     0x0     |
 *                 |         |      | mode : 0 to 7                                        |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD            |  [31:3] |  RW  | Reserved                                             |  0x0000000  |
 * ------------------------------------------------------------------------------------------------------|
 */

typedef union EXTINT22FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT22FIXPRI;

/*
 * PDNEN
 * 
 * Address = GPIO Base Address 1 + 0x0F80
 * Reset Value = 0x00
 * 
 *      Name       |   Bit   | Type |                     Description                      | Reset Value | 
 * ------------------------------------------------------------------------------------------------------|
 *                 |         |      | Power down mode pad state enable register.           |             |
 *                 |         |      | 0 : PADs Controlled by normal mode                   |             |
 *                 |         |      | 1 : PADs Controlled by Power Down mode               |             |
 *                 |         |      | control registers                                    |             |
 * PDNEN           |   [0]   |  RW  | This bit is set to "1" automaticially when system    |     0x0     |
 *                 |         |      | enters into Power down mode and can be cleared       |             |
 *                 |         |      | by writing "0" to this bit or cold reset. After wake |             |
 *                 |         |      | up from Power down mode, this bit maintains          |             |
 *                 |         |      | value "1" until writing "0"                          |             |
 * ------------------------------------------------------------------------------------------------------|
 * PDNEN_CFG       |   [1]   |  RW  | 0 : Automatically by power down mode                 |     0x0     |
 *                 |         |      | 1 : by PDNEN bit                                     |             |
 * ------------------------------------------------------------------------------------------------------|
 * RSVD            |  [7:2]  |  RW  | Reserved                                             |     0x00    |
 * ------------------------------------------------------------------------------------------------------|
 */

typedef union BASEADDR1PDNEN_u
{
    uint8_t all_val;
    struct 
    {
        uint32_t PDNEN:1; //0
        uint32_t PDNENCFG:1; //1
        uint32_t Reserved:6; //7:2
    } bits;
} BASEADDR1PDNEN;

/*
 * GPK0CON
 * 
 * Address = GPIO Base Address 2 + 0x0040
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |      Description       |    Reset Value   | 
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPK0CON[0]   |  [3:0]  |  RW  | 0x2     : SD_0_CLK     |       0x00       |
 *              |         |      | 0x3     : SD_4_CLK     |                  |
 *              |         |      | 0x4~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT23[0] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPK0CON[1]   |  [7:4]  |  RW  | 0x2     : SD_0_CMD     |       0x00       |
 *              |         |      | 0x3     : SD_4_CMD     |                  |
 *              |         |      | 0x4~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT23[1] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 *              |         |      | 0x2     : SD_0_CDn     |                  |
 * GPK0CON[2]   |  [11:8] |  RW  | 0x3     : SD_4_CDn     |       0x00       |
 *              |         |      | 0x4     : GNSS_GPIO[8] |                  |
 *              |         |      | 0x5~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT23[2] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPK0CON[3]   | [15:12] |  RW  | 0x2     : SD_0_DATA[0] |       0x00       |
 *              |         |      | 0x3     : SD_4_DATA[0] |                  |
 *              |         |      | 0x4~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT23[3] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPK0CON[4]   | [19:16] |  RW  | 0x2     : SD_0_DATA[1] |       0x00       |
 *              |         |      | 0x3     : SD_4_DATA[1] |                  |
 *              |         |      | 0x4~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT23[4] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPK0CON[5]   | [23:20] |  RW  | 0x2     : SD_0_DATA[2] |       0x00       |
 *              |         |      | 0x3     : SD_4_DATA[2] |                  |
 *              |         |      | 0x4~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT23[5] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 *              |         |      | 0x2     : SD_0_DATA[3] |                  |
 * GPK0CON[6]   | [27:24] |  RW  | 0x3     : SD_4_DATA[3] |       0x00       |
 *              |         |      | 0x4~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT23[6] |                  |
 * --------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPK0DAT
 * 
 * Address = GPIO Base Address 2 + 0x0044
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPK0DAT[6:0] |  [6:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPK0PUD
 * 
 * Address = GPIO Base Address 2 + 0x0048
 * Reset Value = 0x1555
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPK0PUD[n]   | n = 0 ~ 6 |  RW  | 0x2 : Reserved                     |      0x1555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPK0DRV
 * 
 * Address = GPIO Base Address 2 + 0x004C
 * Reset Value = 0x00_2AAA
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPK0DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 6 |  RW  | 0x2 : 3x                      |      0x2AAA      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPK0CONPDN
 * 
 * Address = GPIO Base Address 2 + 0x0050
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPK0[n]      | n = 0 ~ 6 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPK0PUDPDN
 * 
 * Address = GPIO Base Address 2 + 0x0054
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPK0[n]      | n = 0 ~ 6 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPK0CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK0CON0:4; //3:0
        uint32_t GPK0CON1:4; //7:4
        uint32_t GPK0CON2:4; //11:8
        uint32_t GPK0CON3:4; //15:12
        uint32_t GPK0CON4:4; //19:16
        uint32_t GPK0CON5:4; //23:20
        uint32_t GPK0CON6:4; //27:24
    } bits;
} GPK0CON;

typedef union GPK0DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK0DAT:8; //7:0
    } bits;
} GPK0DAT;

typedef union GPK0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK0PUD0:2; //1:0
        uint32_t GPK0PUD1:2; //3:2
        uint32_t GPK0PUD2:2; //5:4
        uint32_t GPK0PUD3:2; //7:6
        uint32_t GPK0PUD4:2; //9:8
        uint32_t GPK0PUD5:2; //11:10
        uint32_t GPK0PUD6:2; //13:12
    } bits;
} GPK0PUD;

typedef union GPK0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK0DRV0:2; //1:0
        uint32_t GPK0DRV1:2; //3:2
        uint32_t GPK0DRV2:2; //5:4
        uint32_t GPK0DRV3:2; //7:6
        uint32_t GPK0DRV4:2; //9:8
        uint32_t GPK0DRV5:2; //11:10
        uint32_t GPK0DRV6:2; //13:12
        uint32_t Unknown:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPK0DRV;

typedef union GPK0CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK00:2; //1:0
        uint32_t GPK01:2; //3:2
        uint32_t GPK02:2; //5:4
        uint32_t GPK03:2; //7:6
        uint32_t GPK04:2; //9:8
        uint32_t GPK05:2; //11:10
        uint32_t GPK06:2; //13:12
    } bits;   
} GPK0CONPDN;

typedef union GPK0PUDPDN_u
{
    uint16_t all_val:14;
    struct
    {
        uint32_t GPK00:2; //1:0
        uint32_t GPK01:2; //3:2
        uint32_t GPK02:2; //5:4
        uint32_t GPK03:2; //7:6
        uint32_t GPK04:2; //9:8
        uint32_t GPK05:2; //11:10
        uint32_t GPK06:2; //13:12
    } bits;   
} GPK0PUDPDN;

/*
 * GPK1CON
 * 
 * Address = GPIO Base Address 2 + 0x0060
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |      Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPK1CON[0]   |  [3:0]  |  RW  | 0x2     : SD_1_CLK        |       0x00       |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT24[0]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPK1CON[1]   |  [7:4]  |  RW  | 0x2     : SD_1_CMD        |       0x00       |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT24[1]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : SD_1_CDn        |                  |
 * GPK1CON[2]   |  [11:8] |  RW  | 0x3     : GNSS_GPIO[9]    |       0x00       |
 *              |         |      | 0x4     : SD_4_nRESET_OUT |                  |
 *              |         |      | 0x5~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT24[2]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : SD_1_DATA[0]    |                  |
 * GPK1CON[3]   | [15:12] |  RW  | 0x3     : SD_0_DATA[4]    |       0x00       |
 *              |         |      | 0x4     : SD_4_DATA[4]    |                  |
 *              |         |      | 0x5~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT24[3]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : SD_1_DATA[1]    |                  |
 * GPK1CON[4]   | [19:16] |  RW  | 0x3     : SD_0_DATA[5]    |       0x00       |
 *              |         |      | 0x4     : SD_4_DATA[5]    |                  |
 *              |         |      | 0x5~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT24[4]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : SD_1_DATA[2]    |                  |
 * GPK1CON[5]   | [23:20] |  RW  | 0x3     : SD_0_DATA[6]    |       0x00       |
 *              |         |      | 0x4     : SD_4_DATA[6]    |                  |
 *              |         |      | 0x5~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT24[5]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : SD_1_DATA[3]    |                  |
 * GPK1CON[6]   | [27:24] |  RW  | 0x3     : SD_0_DATA[7]    |       0x00       |
 *              |         |      | 0x4     : SD_4_DATA[7]    |                  |
 *              |         |      | 0x5~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT24[6]    |                  |
 * -----------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPK1DAT
 * 
 * Address = GPIO Base Address 2 + 0x0064
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPK1DAT[6:0] |  [6:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPK1PUD
 * 
 * Address = GPIO Base Address 2 + 0x0068
 * Reset Value = 0x1555
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPK1PUD[n]   | n = 0 ~ 6 |  RW  | 0x2 : Reserved                     |      0x1555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPK1DRV
 * 
 * Address = GPIO Base Address 2 + 0x006C
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPK1DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 6 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPK1CONPDN
 * 
 * Address = GPIO Base Address 2 + 0x0070
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPK1[n]      | n = 0 ~ 6 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPK1PUDPDN
 * 
 * Address = GPIO Base Address 2 + 0x0074
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPK1[n]      | n = 0 ~ 6 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPK1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK1CON0:4; //3:0
        uint32_t GPK1CON1:4; //7:4
        uint32_t GPK1CON2:4; //11:8
        uint32_t GPK1CON3:4; //15:12
        uint32_t GPK1CON4:4; //19:16
        uint32_t GPK1CON5:4; //23:20
        uint32_t GPK1CON6:4; //27:24
    } bits;
} GPK1CON;

typedef union GPK1DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK1DAT:7; //6:0
    } bits;
} GPK1DAT;

typedef union GPK1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK1PUD0:2; //1:0
        uint32_t GPK1PUD1:2; //3:2
        uint32_t GPK1PUD2:2; //5:4
        uint32_t GPK1PUD3:2; //7:6
        uint32_t GPK1PUD4:2; //9:8
        uint32_t GPK1PUD5:2; //11:10
        uint32_t GPK1PUD6:2; //13:12
    } bits;
} GPK1PUD;

typedef union GPK1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK1DRV0:2; //1:0
        uint32_t GPK1DRV1:2; //3:2
        uint32_t GPK1DRV2:2; //5:4
        uint32_t GPK1DRV3:2; //7:6
        uint32_t GPK1DRV4:2; //9:8
        uint32_t GPK1DRV5:2; //11:10
        uint32_t GPK1DRV6:2; //13:12
        uint32_t Unknown:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPK1DRV;

typedef union GPK1CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK10:2; //1:0
        uint32_t GPK11:2; //3:2
        uint32_t GPK12:2; //5:4
        uint32_t GPK13:2; //7:6
        uint32_t GPK14:2; //9:8
        uint32_t GPK15:2; //11:10
        uint32_t GPK16:2; //13:12
    } bits;   
} GPK1CONPDN;

typedef union GPK1PUDPDN_u
{
    uint16_t all_val:14;
    struct
    {
        uint32_t GPK10:2; //1:0
        uint32_t GPK11:2; //3:2
        uint32_t GPK12:2; //5:4
        uint32_t GPK13:2; //7:6
        uint32_t GPK14:2; //9:8
        uint32_t GPK15:2; //11:10
        uint32_t GPK16:2; //13:12
    } bits;   
} GPK1PUDPDN;

/*
 * GPK2CON
 * 
 * Address = GPIO Base Address 2 + 0x0080
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |      Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPK2CON[0]   |  [3:0]  |  RW  | 0x2     : SD_2_CLK        |       0x00       |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT25[0]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPK2CON[1]   |  [7:4]  |  RW  | 0x2     : SD_2_CMD        |       0x00       |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT25[1]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPK2CON[2]   |  [11:8] |  RW  | 0x2     : SD_2_CDn        |       0x00       |
 *              |         |      | 0x3     : GNSS_GPIO[10]   |                  |
 *              |         |      | 0x4~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT25[2]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPK2CON[3]   | [15:12] |  RW  | 0x2     : SD_2_DATA[0]    |       0x00       |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT25[3]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPK2CON[4]   | [19:16] |  RW  | 0x2     : SD_2_DATA[1]    |       0x00       |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT25[4]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPK2CON[5]   | [23:20] |  RW  | 0x2     : SD_2_DATA[2]    |       0x00       |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT25[5]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPK2CON[6]   | [27:24] |  RW  | 0x2     : SD_2_DATA[3]    |       0x00       |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT25[6]    |                  |
 * -----------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPK2DAT
 * 
 * Address = GPIO Base Address 2 + 0x0084
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPK2DAT[6:0] |  [6:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPK2PUD
 * 
 * Address = GPIO Base Address 2 + 0x0088
 * Reset Value = 0x1555
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPK2PUD[n]   | n = 0 ~ 6 |  RW  | 0x2 : Reserved                     |      0x1555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPK2DRV
 * 
 * Address = GPIO Base Address 2 + 0x008C
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPK2DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 6 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPK2CONPDN
 * 
 * Address = GPIO Base Address 2 + 0x0090
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPK2[n]      | n = 0 ~ 6 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPK2PUDPDN
 * 
 * Address = GPIO Base Address 2 + 0x0094
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPK2[n]      | n = 0 ~ 6 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPK2CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK2CON0:4; //3:0
        uint32_t GPK2CON1:4; //7:4
        uint32_t GPK2CON2:4; //11:8
        uint32_t GPK2CON3:4; //15:12
        uint32_t GPK2CON4:4; //19:16
        uint32_t GPK2CON5:4; //23:20
        uint32_t GPK2CON6:4; //27:24
    } bits;
} GPK2CON;

typedef union GPK2DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK2DAT:7; //6:0
    } bits;
} GPK2DAT;

typedef union GPK2PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK2PUD0:2; //1:0
        uint32_t GPK2PUD1:2; //3:2
        uint32_t GPK2PUD2:2; //5:4
        uint32_t GPK2PUD3:2; //7:6
        uint32_t GPK2PUD4:2; //9:8
        uint32_t GPK2PUD5:2; //11:10
        uint32_t GPK2PUD6:2; //13:12
    } bits;
} GPK2PUD;

typedef union GPK2DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK2DRV0:2; //1:0
        uint32_t GPK2DRV1:2; //3:2
        uint32_t GPK2DRV2:2; //5:4
        uint32_t GPK2DRV3:2; //7:6
        uint32_t GPK2DRV4:2; //9:8
        uint32_t GPK2DRV5:2; //11:10
        uint32_t GPK2DRV6:2; //13:12
        uint32_t Unknown:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPK2DRV;

typedef union GPK2CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK20:2; //1:0
        uint32_t GPK21:2; //3:2
        uint32_t GPK22:2; //5:4
        uint32_t GPK23:2; //7:6
        uint32_t GPK24:2; //9:8
        uint32_t GPK25:2; //11:10
        uint32_t GPK26:2; //13:12
    } bits;   
} GPK2CONPDN;

typedef union GPK2PUDPDN_u
{
    uint16_t all_val:14;
    struct
    {
        uint32_t GPK20:2; //1:0
        uint32_t GPK21:2; //3:2
        uint32_t GPK22:2; //5:4
        uint32_t GPK23:2; //7:6
        uint32_t GPK24:2; //9:8
        uint32_t GPK25:2; //11:10
        uint32_t GPK26:2; //13:12
    } bits;   
} GPK2PUDPDN;

/*
 * GPK3CON
 * 
 * Address = GPIO Base Address 2 + 0x00A0
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |      Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPK3CON[0]   |  [3:0]  |  RW  | 0x2     : SD_3_CLK        |       0x00       |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT26[0]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPK3CON[1]   |  [7:4]  |  RW  | 0x2     : SD_3_CMD        |       0x00       |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT26[1]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPK3CON[2]   |  [11:8] |  RW  | 0x2     : SD_3_CDn        |       0x00       |
 *              |         |      | 0x3     : GNSS_GPIO[11]   |                  |
 *              |         |      | 0x4~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT26[2]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPK3CON[3]   | [15:12] |  RW  | 0x2     : SD_3_DATA[0]    |       0x00       |
 *              |         |      | 0x3     : SD_2_DATA[4]    |                  |
 *              |         |      | 0x4~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT26[3]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPK3CON[4]   | [19:16] |  RW  | 0x2     : SD_3_DATA[1]    |       0x00       |
 *              |         |      | 0x3     : SD_2_DATA[5]    |                  |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT26[4]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPK3CON[5]   | [23:20] |  RW  | 0x2     : SD_3_DATA[2]    |       0x00       |
 *              |         |      | 0x3     : SD_2_DATA[6]    |                  |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT26[5]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPK3CON[6]   | [27:24] |  RW  | 0x2     : SD_3_DATA[3]    |       0x00       |
 *              |         |      | 0x3     : SD_2_DATA[7]    |                  |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT26[6]    |                  |
 * -----------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPK3DAT
 * 
 * Address = GPIO Base Address 2 + 0x00A4
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPK3DAT[6:0] |  [6:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPK3PUD
 * 
 * Address = GPIO Base Address 2 + 0x00A8
 * Reset Value = 0x1555
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPK3PUD[n]   | n = 0 ~ 6 |  RW  | 0x2 : Reserved                     |      0x1555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPK3DRV
 * 
 * Address = GPIO Base Address 2 + 0x00AC
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPK3DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 6 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPK3CONPDN
 * 
 * Address = GPIO Base Address 2 + 0x00B0
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPK3[n]      | n = 0 ~ 6 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPK3PUDPDN
 * 
 * Address = GPIO Base Address 2 + 0x00B4
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPK3[n]      | n = 0 ~ 6 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPK3CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK3CON0:4; //3:0
        uint32_t GPK3CON1:4; //7:4
        uint32_t GPK3CON2:4; //11:8
        uint32_t GPK3CON3:4; //15:12
        uint32_t GPK3CON4:4; //19:16
        uint32_t GPK3CON5:4; //23:20
        uint32_t GPK3CON6:4; //27:24
    } bits;
} GPK3CON;

typedef union GPK3DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK2DAT:7; //6:0
    } bits;
} GPK3DAT;

typedef union GPK3PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK3PUD0:2; //1:0
        uint32_t GPK3PUD1:2; //3:2
        uint32_t GPK3PUD2:2; //5:4
        uint32_t GPK3PUD3:2; //7:6
        uint32_t GPK3PUD4:2; //9:8
        uint32_t GPK3PUD5:2; //11:10
        uint32_t GPK3PUD6:2; //13:12
    } bits;
} GPK3PUD;

typedef union GPK3DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK3DRV0:2; //1:0
        uint32_t GPK3DRV1:2; //3:2
        uint32_t GPK3DRV2:2; //5:4
        uint32_t GPK3DRV3:2; //7:6
        uint32_t GPK3DRV4:2; //9:8
        uint32_t GPK3DRV5:2; //11:10
        uint32_t GPK3DRV6:2; //13:12
        uint32_t Unknown:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPK3DRV;

typedef union GPK3CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK30:2; //1:0
        uint32_t GPK31:2; //3:2
        uint32_t GPK32:2; //5:4
        uint32_t GPK33:2; //7:6
        uint32_t GPK34:2; //9:8
        uint32_t GPK35:2; //11:10
        uint32_t GPK36:2; //13:12
    } bits;   
} GPK3CONPDN;

typedef union GPK3PUDPDN_u
{
    uint16_t all_val:14;
    struct
    {
        uint32_t GPK30:2; //1:0
        uint32_t GPK31:2; //3:2
        uint32_t GPK32:2; //5:4
        uint32_t GPK33:2; //7:6
        uint32_t GPK34:2; //9:8
        uint32_t GPK35:2; //11:10
        uint32_t GPK36:2; //13:12
    } bits;   
} GPK3PUDPDN;

/*
 * GPL0CON
 * 
 * Address = GPIO Base Address 2 + 0x00C0
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |      Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPL0CON[0]   |  [3:0]  |  RW  | 0x2     : GNSS_SYNC       |       0x00       |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT27[0]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPL0CON[1]   |  [7:4]  |  RW  | 0x2     : GNSS_ISIGN      |       0x00       |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT27[1]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPL0CON[2]   |  [11:8] |  RW  | 0x2     : GNSS_IMAG       |       0x00       |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT27[2]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPL0CON[3]   | [15:12] |  RW  | 0x2     : GNSS_QSIGN      |       0x00       |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT27[3]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPL0CON[4]   | [19:16] |  RW  | 0x2     : GNSS_QMAG       |       0x00       |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT27[4]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 * GPL0CON[5]   | [23:20] |  RW  | 0x1     : Output          |       0x00       |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT27[5]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPL0CON[6]   | [27:24] |  RW  | 0x2     : GNSS_RF_RSTN    |       0x00       |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT27[6]    |                  |
 * -----------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPL0DAT
 * 
 * Address = GPIO Base Address 2 + 0x00C4
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPL0DAT[6:0] |  [6:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPL0PUD
 * 
 * Address = GPIO Base Address 2 + 0x00C8
 * Reset Value = 0x1555
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPL0PUD[n]   | n = 0 ~ 6 |  RW  | 0x2 : Reserved                     |      0x1555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPL0DRV
 * 
 * Address = GPIO Base Address 2 + 0x00CC
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPL0DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 6 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPL0CONPDN
 * 
 * Address = GPIO Base Address 2 + 0x00D0
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPL0[n]      | n = 0 ~ 6 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPL0PUDPDN
 * 
 * Address = GPIO Base Address 2 + 0x00D4
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPL0[n]      | n = 0 ~ 6 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPL0CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL0CON0:4; //3:0
        uint32_t GPL0CON1:4; //7:4
        uint32_t GPL0CON2:4; //11:8
        uint32_t GPL0CON3:4; //15:12
        uint32_t GPL0CON4:4; //19:16
        uint32_t GPL0CON5:4; //23:20
        uint32_t GPL0CON6:4; //27:24
    } bits;
} GPL0CON;

typedef union GPL0DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL0DAT:7; //6:0
    } bits;
} GPL0DAT;

typedef union GPL0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL0PUD0:2; //1:0
        uint32_t GPL0PUD1:2; //3:2
        uint32_t GPL0PUD2:2; //5:4
        uint32_t GPL0PUD3:2; //7:6
        uint32_t GPL0PUD4:2; //9:8
        uint32_t GPL0PUD5:2; //11:10
        uint32_t GPL0PUD6:2; //13:12
    } bits;
} GPL0PUD;

typedef union GPL0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL0DRV0:2; //1:0
        uint32_t GPL0DRV1:2; //3:2
        uint32_t GPL0DRV2:2; //5:4
        uint32_t GPL0DRV3:2; //7:6
        uint32_t GPL0DRV4:2; //9:8
        uint32_t GPL0DRV5:2; //11:10
        uint32_t GPL0DRV6:2; //13:12
        uint32_t Unknown:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPL0DRV;

typedef union GPL0CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL00:2; //1:0
        uint32_t GPL01:2; //3:2
        uint32_t GPL02:2; //5:4
        uint32_t GPL03:2; //7:6
        uint32_t GPL04:2; //9:8
        uint32_t GPL05:2; //11:10
        uint32_t GPL06:2; //13:12
    } bits;   
} GPL0CONPDN;

typedef union GPL0PUDPDN_u
{
    uint16_t all_val:14;
    struct
    {
        uint32_t GPL00:2; //1:0
        uint32_t GPL01:2; //3:2
        uint32_t GPL02:2; //5:4
        uint32_t GPL03:2; //7:6
        uint32_t GPL04:2; //9:8
        uint32_t GPL05:2; //11:10
        uint32_t GPL06:2; //13:12
    } bits;   
} GPL0PUDPDN;

/*
 * GPL1CON
 * 
 * Address = GPIO Base Address 2 + 0x00E0
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |      Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPL1CON[0]   |  [3:0]  |  RW  | 0x2     : GNSS_SCL        |       0x00       |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT28[0]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPL1CON[1]   |  [7:4]  |  RW  | 0x2     : GNSS_SDA        |       0x00       |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT28[1]    |                  |
 * -----------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPL1DAT
 * 
 * Address = GPIO Base Address 2 + 0x00E4
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPL1DAT[1:0] |  [1:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPL1PUD
 * 
 * Address = GPIO Base Address 2 + 0x00E8
 * Reset Value = 0x0005
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPL1PUD[n]   | n = 0 ~ 1 |  RW  | 0x2 : Reserved                     |      0x0005      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPL1DRV
 * 
 * Address = GPIO Base Address 2 + 0x00EC
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPL1DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 1 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPL1CONPDN
 * 
 * Address = GPIO Base Address 2 + 0x00F0
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPL1[n]      | n = 0 ~ 1 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPL1PUDPDN
 * 
 * Address = GPIO Base Address 2 + 0x00F4
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPL1[n]      | n = 0 ~ 1 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPL1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL1CON0:4; //3:0
        uint32_t GPL1CON1:4; //7:4
    } bits;
} GPL1CON;

typedef union GPL1DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL1DAT:2; //1:0
    } bits;
} GPL1DAT;

typedef union GPL1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL1PUD0:2; //1:0
        uint32_t GPL1PUD1:2; //3:2
    } bits;
} GPL1PUD;

typedef union GPL1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL1DRV0:2; //1:0
        uint32_t GPL1DRV1:2; //3:2
        uint32_t Unknown:2; //15:4 
        uint32_t Reserved:8; //23:16
    } bits;
} GPL1DRV;

typedef union GPL1CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL10:2; //1:0
        uint32_t GPL11:2; //3:2
    } bits;   
} GPL1CONPDN;

typedef union GPL1PUDPDN_u
{
    uint16_t all_val:4;
    struct
    {
        uint32_t GPL10:2; //1:0
        uint32_t GPL11:2; //3:2
    } bits;   
} GPL1PUDPDN;

/*
 * GPL2CON
 * 
 * Address = GPIO Base Address 2 + 0x0100
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |       Description      |   Reset Value    | 
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPL2CON[0]   |  [3:0]  |  RW  | 0x2     : GNSS_GPIO[0] |       0x00       |
 *              |         |      | 0x3     : KP_COL[0]    |                  |
 *              |         |      | 0x4~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT29[0] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPL2CON[1]   |  [7:4]  |  RW  | 0x2     : GNSS_GPIO[1] |       0x00       |
 *              |         |      | 0x3     : KP_COL[1]    |                  |
 *              |         |      | 0x4~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT29[1] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPL2CON[2]   |  [11:8] |  RW  | 0x2     : GNSS_GPIO[2] |       0x00       |
 *              |         |      | 0x3     : KP_COL[2]    |                  |
 *              |         |      | 0x4~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT29[2] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPL2CON[3]   | [15:12] |  RW  | 0x2     : GNSS_GPIO[3] |       0x00       |
 *              |         |      | 0x3     : KP_COL[3]    |                  |
 *              |         |      | 0x4~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT29[3] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPL2CON[4]   | [19:16] |  RW  | 0x2     : GNSS_GPIO[4] |       0x00       |
 *              |         |      | 0x3     : KP_COL[4]    |                  |
 *              |         |      | 0x4~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT29[4] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPL2CON[5]   | [23:20] |  RW  | 0x2     : GNSS_GPIO[5] |       0x00       |
 *              |         |      | 0x3     : KP_COL[5]    |                  |
 *              |         |      | 0x4~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT29[5] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 *              |         |      | 0x2     : GNSS_GPIO[6] |                  |
 * GPL2CON[6]   | [27:24] |  RW  | 0x3     : KP_COL[6]    |       0x00       |
 *              |         |      | 0x4~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT29[6] |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 *              |         |      | 0x2     : GNSS_GPIO[7] |                  |
 * GPL2CON[7]   | [31:28] |  RW  | 0x3     : KP_COL[7]    |       0x00       |
 *              |         |      | 0x4~0xE : Reserved     |                  |
 *              |         |      | 0xF     : EXT_INT29[7] |                  |
 * --------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPL2DAT
 * 
 * Address = GPIO Base Address 1 + 0x0104
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPL2DAT[7:0] |  [7:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPL2PUD
 * 
 * Address = GPIO Base Address 1 + 0x0108
 * Reset Value = 0x5555
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPL2PUD[n]   | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |      0x5555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPL2DRV
 * 
 * Address = GPIO Base Address 1 + 0x010C
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPL2DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 7 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPL2CONPDN
 * 
 * Address = GPIO Base Address 1 + 0x0110
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPL2[n]      | n = 0 ~ 7 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPL2PUDPDN
 * 
 * Address = GPIO Base Address 1 + 0x0114
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPL2[n]      | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPL2CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL2CON0:4; //3:0
        uint32_t GPL2CON1:4; //7:4
        uint32_t GPL2CON2:4; //11:8
        uint32_t GPL2CON3:4; //15:12
        uint32_t GPL2CON4:4; //19:16
        uint32_t GPL2CON5:4; //23:20
        uint32_t GPL2CON6:4; //27:24
        uint32_t GPL2CON7:4; //31:28
    } bits;
} GPL2CON;

typedef union GPL2DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL2DAT:8; //7:0
    } bits;
} GPL2DAT;

typedef union GPL2PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL2PUD0:2; //1:0
        uint32_t GPL2PUD1:2; //3:2
        uint32_t GPL2PUD2:2; //5:4
        uint32_t GPL2PUD3:2; //7:6
        uint32_t GPL2PUD4:2; //9:8
        uint32_t GPL2PUD5:2; //11:10
        uint32_t GPL2PUD6:2; //13:12
        uint32_t GPL2PUD7:2; //15:14
    } bits;
} GPL2PUD;

typedef union GPL2DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL2DRV0:2; //1:0
        uint32_t GPL2DRV1:2; //3:2
        uint32_t GPL2DRV2:2; //5:4
        uint32_t GPL2DRV3:2; //7:6
        uint32_t GPL2DRV4:2; //9:8
        uint32_t GPL2DRV5:2; //11:10
        uint32_t GPL2DRV6:2; //13:12
        uint32_t GPL2DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPL2DRV;

typedef union GPL2CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL20:2; //1:0
        uint32_t GPL21:2; //3:2
        uint32_t GPL22:2; //5:4
        uint32_t GPL23:2; //7:6
        uint32_t GPL24:2; //9:8
        uint32_t GPL25:2; //11:10
        uint32_t GPL26:2; //13:12
        uint32_t GPL27:2; //15:14
    } bits;   
} GPL2CONPDN;

typedef union GPL2PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPL20:2; //1:0
        uint32_t GPL21:2; //3:2
        uint32_t GPL22:2; //5:4
        uint32_t GPL23:2; //7:6
        uint32_t GPL24:2; //9:8
        uint32_t GPL25:2; //11:10
        uint32_t GPL26:2; //13:12
        uint32_t GPL27:2; //15:14
    } bits;   
} GPL2PUDPDN;

/*
 * GPY0CON
 * 
 * Address = GPIO Base Address 2 + 0x0120
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |      Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPY0CON[0]   |  [3:0]  |  RW  | 0x2     : SROM_CSn[0]     |       0x00       |
 *              |         |      | 0x3     : NF_CSn[2]       |                  |
 *              |         |      | 0x4~0xF : Reserved        |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPY0CON[1]   |  [7:4]  |  RW  | 0x2     : SROM_CSn[1]     |       0x00       |
 *              |         |      | 0x3     : NF_CSn[3]       |                  |
 *              |         |      | 0x4~0xF : Reserved        |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : SROM_CSn[2]     |                  |
 * GPY0CON[2]   |  [11:8] |  RW  | 0x3     : NF_CSn[0]       |       0x00       |
 *              |         |      | 0x4     : Reserved        |                  |
 *              |         |      | 0x5     : OND_CSn[0]      |                  |
 *              |         |      | 0x4~0xF : Reserved        |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : SROM_CSn[3]     |                  |
 * GPY0CON[3]   | [15:12] |  RW  | 0x3     : NF_CSn[1]       |       0x00       |
 *              |         |      | 0x4     : Reserved        |                  |
 *              |         |      | 0x5     : OND_CSn[1]      |                  |
 *              |         |      | 0x4~0xF : Reserved        |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 * GPY0CON[4]   | [19:16] |  RW  | 0x1     : Output          |       0x00       |
 *              |         |      | 0x2     : EBI_OEn         |                  |
 *              |         |      | 0x3~0xF : Reserved        |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 * GPY0CON[5]   | [23:20] |  RW  | 0x1     : Output          |       0x00       |
 *              |         |      | 0x2     : EBI_WEn         |                  |
 *              |         |      | 0x3~0xF : Reserved        |                  |
 * -----------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY0DAT
 * 
 * Address = GPIO Base Address 2 + 0x0124
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPY0DAT[5:0] |  [5:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY0PUD
 * 
 * Address = GPIO Base Address 2 + 0x0128
 * Reset Value = 0x0FFF
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPY0PUD[n]   | n = 0 ~ 5 |  RW  | 0x2 : Reserved                     |      0x0FFF      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPY0DRV
 * 
 * Address = GPIO Base Address 2 + 0x012C
 * Reset Value = 0x00_0AAA
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPY0DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 5 |  RW  | 0x2 : 3x                      |      0x0AAA      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY0CONPDN
 * 
 * Address = GPIO Base Address 2 + 0x0130
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPY0[n]      | n = 0 ~ 6 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY0PUDPDN
 * 
 * Address = GPIO Base Address 2 + 0x0134
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPY0[n]      | n = 0 ~ 6 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPY0CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY0CON0:4; //3:0
        uint32_t GPY0CON1:4; //7:4
        uint32_t GPY0CON2:4; //11:8
        uint32_t GPY0CON3:4; //15:12
        uint32_t GPY0CON4:4; //19:16
        uint32_t GPY0CON5:4; //23:20
    } bits;
} GPY0CON;

typedef union GPY0DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY0DAT:6; //5:0
    } bits;
} GPY0DAT;

typedef union GPY0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY0PUD0:2; //1:0
        uint32_t GPY0PUD1:2; //3:2
        uint32_t GPY0PUD2:2; //5:4
        uint32_t GPY0PUD3:2; //7:6
        uint32_t GPY0PUD4:2; //9:8
        uint32_t GPY0PUD5:2; //11:10
    } bits;
} GPY0PUD;

typedef union GPY0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY0DRV0:2; //1:0
        uint32_t GPY0DRV1:2; //3:2
        uint32_t GPY0DRV2:2; //5:4
        uint32_t GPY0DRV3:2; //7:6
        uint32_t GPY0DRV4:2; //9:8
        uint32_t GPY0DRV5:2; //11:10
        uint32_t Unknown:4; //15:12 
        uint32_t Reserved:8; //23:16
    } bits;
} GPY0DRV;

typedef union GPY0CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY00:2; //1:0
        uint32_t GPY01:2; //3:2
        uint32_t GPY02:2; //5:4
        uint32_t GPY03:2; //7:6
        uint32_t GPY04:2; //9:8
        uint32_t GPY05:2; //11:10
    } bits;   
} GPY0CONPDN;

typedef union GPY0PUDPDN_u
{
    uint16_t all_val:12;
    struct
    {
        uint32_t GPY00:2; //1:0
        uint32_t GPY01:2; //3:2
        uint32_t GPY02:2; //5:4
        uint32_t GPY03:2; //7:6
        uint32_t GPY04:2; //9:8
        uint32_t GPY05:2; //11:10
    } bits;   
} GPY0PUDPDN;

/*
 * GPY1CON
 * 
 * Address = GPIO Base Address 2 + 0x0140
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |      Description       |    Reset Value   | 
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 * GPY1CON[0]   |  [3:0]  |  RW  | 0x1     : Output       |       0x00       |
 *              |         |      | 0x2     : EBI_BEn[0]   |                  |
 *              |         |      | 0x3~0xF : Reserved     |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 * GPY1CON[1]   |  [7:4]  |  RW  | 0x1     : Output       |       0x00       |
 *              |         |      | 0x2     : EBI_BEn[1]   |                  |
 *              |         |      | 0x3~0xF : Reserved     |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 * GPY1CON[2]   |  [11:8] |  RW  | 0x1     : Output       |       0x00       |
 *              |         |      | 0x2     : SROM_WAITn   |                  |
 *              |         |      | 0x3~0xF : Reserved     |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 * GPY1CON[3]   | [15:12] |  RW  | 0x1     : Output       |       0x00       |
 *              |         |      | 0x2     : EBI_DATA_RDn |                  |
 *              |         |      | 0x3~0xF : Reserved     |                  |
 * --------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY1DAT
 * 
 * Address = GPIO Base Address 2 + 0x0144
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPY1DAT[3:0] |  [3:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY1PUD
 * 
 * Address = GPIO Base Address 2 + 0x0148
 * Reset Value = 0x00FF
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPY1PUD[n]   | n = 0 ~ 3 |  RW  | 0x2 : Reserved                     |      0x0FFF      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPY1DRV
 * 
 * Address = GPIO Base Address 2 + 0x014C
 * Reset Value = 0x00_00AA
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPY1DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 3 |  RW  | 0x2 : 3x                      |      0x00AA      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY1CONPDN
 * 
 * Address = GPIO Base Address 2 + 0x0150
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPY1[n]      | n = 0 ~ 3 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY1PUDPDN
 * 
 * Address = GPIO Base Address 2 + 0x0154
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPY1[n]      | n = 0 ~ 3 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPY1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY1CON0:4; //3:0
        uint32_t GPY1CON1:4; //7:4
        uint32_t GPY1CON2:4; //11:8
        uint32_t GPY1CON3:4; //15:12
    } bits;
} GPY1CON;

typedef union GPY1DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY1DAT:4; //3:0
    } bits;
} GPY1DAT;

typedef union GPY1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY1PUD0:2; //1:0
        uint32_t GPY1PUD1:2; //3:2
        uint32_t GPY1PUD2:2; //5:4
        uint32_t GPY1PUD3:2; //7:6
    } bits;
} GPY1PUD;

typedef union GPY1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY1DRV0:2; //1:0
        uint32_t GPY1DRV1:2; //3:2
        uint32_t GPY1DRV2:2; //5:4
        uint32_t GPY1DRV3:2; //7:6
        uint32_t Unknown:8; //15:8 
        uint32_t Reserved:8; //23:16
    } bits;
} GPY1DRV;

typedef union GPY1CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY10:2; //1:0
        uint32_t GPY11:2; //3:2
        uint32_t GPY12:2; //5:4
        uint32_t GPY13:2; //7:6
    } bits;   
} GPY1CONPDN;

typedef union GPY1PUDPDN_u
{
    uint16_t all_val:8;
    struct
    {
        uint32_t GPY10:2; //1:0
        uint32_t GPY11:2; //3:2
        uint32_t GPY12:2; //5:4
        uint32_t GPY13:2; //7:6
    } bits;   
} GPY1PUDPDN;

/*
 * GPY2CON
 * 
 * Address = GPIO Base Address 2 + 0x0160
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |      Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : NF_CLE          |                  |
 * GPY2CON[0]   |  [3:0]  |  RW  | 0x3     : Reserved        |       0x00       |
 *              |         |      | 0x4     : Reserved        |                  |
 *              |         |      | 0x5     : OND_ADDRVALID   |                  |
 *              |         |      | 0x6~0xE : Reserved        |                  |
 *              |         |      | 0xF     : -               |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : NF_ALE          |                  |
 * GPY2CON[1]   |  [7:4]  |  RW  | 0x3     : Reserved        |       0x00       |
 *              |         |      | 0x4     : Reserved        |                  |
 *              |         |      | 0x5     : OND_SMCLK       |                  |
 *              |         |      | 0x6~0xE : Reserved        |                  |
 *              |         |      | 0xF     : -               |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : NF_RnB[0]       |                  |
 * GPY2CON[2]   |  [11:8] |  RW  | 0x3     : Reserved        |       0x00       |
 *              |         |      | 0x4     : Reserved        |                  |
 *              |         |      | 0x5     : OND_INT[0]      |                  |
 *              |         |      | 0x6~0xE : Reserved        |                  |
 *              |         |      | 0xF     : -               |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : NF_RnB[1]       |                  |
 * GPY2CON[3]   | [15:12] |  RW  | 0x3     : Reserved        |       0x00       |
 *              |         |      | 0x4     : Reserved        |                  |
 *              |         |      | 0x5     : OND_INT[1]      |                  |
 *              |         |      | 0x6~0xE : Reserved        |                  |
 *              |         |      | 0xF     : -               |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : NF_RnB[2]       |                  |
 * GPY2CON[4]   | [19:16] |  RW  | 0x3     : Reserved        |       0x00       |
 *              |         |      | 0x4     : Reserved        |                  |
 *              |         |      | 0x5     : OND_INT[2]      |                  |
 *              |         |      | 0x6~0xE : Reserved        |                  |
 *              |         |      | 0xF     : -               |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPY2CON[5]   | [23:20] |  RW  | 0x2     : NF_RnB[3]       |       0x00       |
 *              |         |      | 0x3~0xE : Reserved        |                  |
 *              |         |      | 0xF     : -               |                  |
 * -----------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY2DAT
 * 
 * Address = GPIO Base Address 2 + 0x0164
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPY2DAT[5:0] |  [5:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY2PUD
 * 
 * Address = GPIO Base Address 2 + 0x0168
 * Reset Value = 0x0FFF
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPY2PUD[n]   | n = 0 ~ 5 |  RW  | 0x2 : Reserved                     |      0x0FFF      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPY2DRV
 * 
 * Address = GPIO Base Address 2 + 0x016C
 * Reset Value = 0x00_0AAA
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPY2DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 5 |  RW  | 0x2 : 3x                      |      0x0AAA      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY2CONPDN
 * 
 * Address = GPIO Base Address 2 + 0x0170
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPY2[n]      | n = 0 ~ 6 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY2PUDPDN
 * 
 * Address = GPIO Base Address 2 + 0x0174
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPY2[n]      | n = 0 ~ 6 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */


typedef union GPY2CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY2CON0:4; //3:0
        uint32_t GPY2CON1:4; //7:4
        uint32_t GPY2CON2:4; //11:8
        uint32_t GPY2CON3:4; //15:12
        uint32_t GPY2CON4:4; //19:16
        uint32_t GPY2CON5:4; //23:20
    } bits;
} GPY2CON;

typedef union GPY2DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY2DAT:6; //5:0
    } bits;
} GPY2DAT;

typedef union GPY2PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY2PUD0:2; //1:0
        uint32_t GPY2PUD1:2; //3:2
        uint32_t GPY2PUD2:2; //5:4
        uint32_t GPY2PUD3:2; //7:6
        uint32_t GPY2PUD4:2; //9:8
        uint32_t GPY2PUD5:2; //11:10
    } bits;
} GPY2PUD;

typedef union GPY2DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY2DRV0:2; //1:0
        uint32_t GPY2DRV1:2; //3:2
        uint32_t GPY2DRV2:2; //5:4
        uint32_t GPY2DRV3:2; //7:6
        uint32_t GPY2DRV4:2; //9:8
        uint32_t GPY2DRV5:2; //11:10
        uint32_t Unknown:4; //15:12 
        uint32_t Reserved:8; //23:16
    } bits;
} GPY2DRV;

typedef union GPY2CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY20:2; //1:0
        uint32_t GPY21:2; //3:2
        uint32_t GPY22:2; //5:4
        uint32_t GPY23:2; //7:6
        uint32_t GPY24:2; //9:8
        uint32_t GPY25:2; //11:10
    } bits;   
} GPY2CONPDN;

typedef union GPY2PUDPDN_u
{
    uint16_t all_val:12;
    struct
    {
        uint32_t GPY20:2; //1:0
        uint32_t GPY21:2; //3:2
        uint32_t GPY22:2; //5:4
        uint32_t GPY23:2; //7:6
        uint32_t GPY24:2; //9:8
        uint32_t GPY25:2; //11:10
    } bits;   
} GPY2PUDPDN;

/*
 * GPY3CON
 * 
 * Address = GPIO Base Address 2 + 0x0180
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |       Description      |   Reset Value    | 
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY3CON[0]   |  [3:0]  |  RW  | 0x2     : EBI_ADDR[0]  |       0x00       |
 *              |         |      | 0x4~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY3CON[1]   |  [7:4]  |  RW  | 0x2     : EBI_ADDR[1]  |       0x00       |
 *              |         |      | 0x4~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY3CON[2]   |  [11:8] |  RW  | 0x2     : EBI_ADDR[2]  |       0x00       |
 *              |         |      | 0x4~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY3CON[3]   | [15:12] |  RW  | 0x2     : EBI_ADDR[3]  |       0x00       |
 *              |         |      | 0x4~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY3CON[4]   | [19:16] |  RW  | 0x2     : EBI_ADDR[4]  |       0x00       |
 *              |         |      | 0x4~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY3CON[5]   | [23:20] |  RW  | 0x2     : EBI_ADDR[5]  |       0x00       |
 *              |         |      | 0x4~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY3CON[6]   | [27:24] |  RW  | 0x2     : EBI_ADDR[6]  |       0x00       |
 *              |         |      | 0x4~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY3CON[7]   | [31:28] |  RW  | 0x2     : EBI_ADDR[7]  |       0x00       |
 *              |         |      | 0x4~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY3DAT
 * 
 * Address = GPIO Base Address 2 + 0x0184
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPY3DAT[7:0] |  [7:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY3PUD
 * 
 * Address = GPIO Base Address 2 + 0x0188
 * Reset Value = 0x5555
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPY3PUD[n]   | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |      0x5555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPY3DRV
 * 
 * Address = GPIO Base Address 2 + 0x018C
 * Reset Value = 0x00_AAAA
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPY3DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 7 |  RW  | 0x2 : 3x                      |      0xAAAA      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY3CONPDN
 * 
 * Address = GPIO Base Address 2 + 0x0190
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPY3[n]      | n = 0 ~ 7 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY3PUDPDN
 * 
 * Address = GPIO Base Address 2 + 0x0194
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPY3[n]      | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPY3CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY3CON0:4; //3:0
        uint32_t GPY3CON1:4; //7:4
        uint32_t GPY3CON2:4; //11:8
        uint32_t GPY3CON3:4; //15:12
        uint32_t GPY3CON4:4; //19:16
        uint32_t GPY3CON5:4; //23:20
        uint32_t GPY3CON6:4; //27:24
        uint32_t GPY3CON7:4; //31:28
    } bits;
} GPY3CON;

typedef union GPY3DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY3DAT:8; //7:0
    } bits;
} GPY3DAT;

typedef union GPY3PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY3PUD0:2; //1:0
        uint32_t GPY3PUD1:2; //3:2
        uint32_t GPY3PUD2:2; //5:4
        uint32_t GPY3PUD3:2; //7:6
        uint32_t GPY3PUD4:2; //9:8
        uint32_t GPY3PUD5:2; //11:10
        uint32_t GPY3PUD6:2; //13:12
        uint32_t GPY3PUD7:2; //15:14
    } bits;
} GPY3PUD;

typedef union GPY3DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY3DRV0:2; //1:0
        uint32_t GPY3DRV1:2; //3:2
        uint32_t GPY3DRV2:2; //5:4
        uint32_t GPY3DRV3:2; //7:6
        uint32_t GPY3DRV4:2; //9:8
        uint32_t GPY3DRV5:2; //11:10
        uint32_t GPY3DRV6:2; //13:12
        uint32_t GPY3DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPY3DRV;

typedef union GPY3CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY30:2; //1:0
        uint32_t GPY31:2; //3:2
        uint32_t GPY32:2; //5:4
        uint32_t GPY33:2; //7:6
        uint32_t GPY34:2; //9:8
        uint32_t GPY35:2; //11:10
        uint32_t GPY36:2; //13:12
        uint32_t GPY37:2; //15:14
    } bits;   
} GPY3CONPDN;

typedef union GPY3PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPY30:2; //1:0
        uint32_t GPY31:2; //3:2
        uint32_t GPY32:2; //5:4
        uint32_t GPY33:2; //7:6
        uint32_t GPY34:2; //9:8
        uint32_t GPY35:2; //11:10
        uint32_t GPY36:2; //13:12
        uint32_t GPY37:2; //15:14
    } bits;   
} GPY3PUDPDN;

/*
 * GPY4CON
 * 
 * Address = GPIO Base Address 2 + 0x01A0
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |       Description      |   Reset Value    | 
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 *              |         |      | 0x2     : EBI_ADDR[8]  |                  |
 * GPY4CON[0]   |  [3:0]  |  RW  | 0x3     : Reserved     |       0x00       |
 *              |         |      | 0x4     : XhsiCAWAKE   |                  |
 *              |         |      | 0x5~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 *              |         |      | 0x2     : EBI_ADDR[9]  |                  |
 * GPY4CON[1]   |  [7:4]  |  RW  | 0x3     : Reserved     |       0x00       |
 *              |         |      | 0x4     : XhsiCADATA   |                  |
 *              |         |      | 0x5~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 *              |         |      | 0x2     : EBI_ADDR[10] |                  |
 * GPY4CON[2]   |  [11:8] |  RW  | 0x3     : Reserved     |       0x00       |
 *              |         |      | 0x4     : XhsiCAFLAG   |                  |
 *              |         |      | 0x5~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 *              |         |      | 0x2     : EBI_ADDR[11] |                  |
 * GPY4CON[3]   | [15:12] |  RW  | 0x3     : Reserved     |       0x00       |
 *              |         |      | 0x4     : XhsiACREADY  |                  |
 *              |         |      | 0x5~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 *              |         |      | 0x2     : EBI_ADDR[12] |                  |
 * GPY4CON[4]   | [19:16] |  RW  | 0x3     : Reserved     |       0x00       |
 *              |         |      | 0x4     : XhsiACWAKE   |                  |
 *              |         |      | 0x5~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 *              |         |      | 0x2     : EBI_ADDR[13] |                  |
 * GPY4CON[5]   | [23:20] |  RW  | 0x3     : Reserved     |       0x00       |
 *              |         |      | 0x4     : XhsiACDATA   |                  |
 *              |         |      | 0x5~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 *              |         |      | 0x2     : EBI_ADDR[14] |                  |
 * GPY4CON[6]   | [27:24] |  RW  | 0x3     : Reserved     |       0x00       |
 *              |         |      | 0x4     : XhsiACFLAG   |                  |
 *              |         |      | 0x5~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 *              |         |      | 0x2     : EBI_ADDR[15] |                  |
 * GPY4CON[7]   | [31:28] |  RW  | 0x3     : Reserved     |       0x00       |
 *              |         |      | 0x4     : XhsiACREADY  |                  |
 *              |         |      | 0x5~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY4DAT
 * 
 * Address = GPIO Base Address 2 + 0x01A4
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPY4DAT[7:0] |  [7:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY4PUD
 * 
 * Address = GPIO Base Address 2 + 0x01A8
 * Reset Value = 0x5555
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPY4PUD[n]   | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |      0x5555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPY4DRV
 * 
 * Address = GPIO Base Address 2 + 0x01AC
 * Reset Value = 0x00_AAAA
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPY4DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 7 |  RW  | 0x2 : 3x                      |      0xAAAA      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY4CONPDN
 * 
 * Address = GPIO Base Address 2 + 0x01B0
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPY4[n]      | n = 0 ~ 7 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY4PUDPDN
 * 
 * Address = GPIO Base Address 2 + 0x01B4
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPY4[n]      | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPY4CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY4CON0:4; //3:0
        uint32_t GPY4CON1:4; //7:4
        uint32_t GPY4CON2:4; //11:8
        uint32_t GPY4CON3:4; //15:12
        uint32_t GPY4CON4:4; //19:16
        uint32_t GPY4CON5:4; //23:20
        uint32_t GPY4CON6:4; //27:24
        uint32_t GPY4CON7:4; //31:28
    } bits;
} GPY4CON;

typedef union GPY4DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY4DAT:8; //7:0
    } bits;
} GPY4DAT;

typedef union GPY4PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY4PUD0:2; //1:0
        uint32_t GPY4PUD1:2; //3:2
        uint32_t GPY4PUD2:2; //5:4
        uint32_t GPY4PUD3:2; //7:6
        uint32_t GPY4PUD4:2; //9:8
        uint32_t GPY4PUD5:2; //11:10
        uint32_t GPY4PUD6:2; //13:12
        uint32_t GPY4PUD7:2; //15:14
    } bits;
} GPY4PUD;

typedef union GPY4DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY4DRV0:2; //1:0
        uint32_t GPY4DRV1:2; //3:2
        uint32_t GPY4DRV2:2; //5:4
        uint32_t GPY4DRV3:2; //7:6
        uint32_t GPY4DRV4:2; //9:8
        uint32_t GPY4DRV5:2; //11:10
        uint32_t GPY4DRV6:2; //13:12
        uint32_t GPY4DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPY4DRV;

typedef union GPY4CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY40:2; //1:0
        uint32_t GPY41:2; //3:2
        uint32_t GPY42:2; //5:4
        uint32_t GPY43:2; //7:6
        uint32_t GPY44:2; //9:8
        uint32_t GPY45:2; //11:10
        uint32_t GPY46:2; //13:12
        uint32_t GPY47:2; //15:14
    } bits;   
} GPY4CONPDN;

typedef union GPY4PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPY40:2; //1:0
        uint32_t GPY41:2; //3:2
        uint32_t GPY42:2; //5:4
        uint32_t GPY43:2; //7:6
        uint32_t GPY44:2; //9:8
        uint32_t GPY45:2; //11:10
        uint32_t GPY46:2; //13:12
        uint32_t GPY47:2; //15:14
    } bits;   
} GPY4PUDPDN;

/*
 * GPY5CON
 * 
 * Address = GPIO Base Address 2 + 0x01C0
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |       Description      |   Reset Value    | 
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY5CON[0]   |  [3:0]  |  RW  | 0x2     : EBI_DATA[0]  |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY5CON[1]   |  [7:4]  |  RW  | 0x2     : EBI_DATA[1]  |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY5CON[2]   |  [11:8] |  RW  | 0x2     : EBI_DATA[2]  |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY5CON[3]   | [15:12] |  RW  | 0x2     : EBI_DATA[3]  |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY5CON[4]   | [19:16] |  RW  | 0x2     : EBI_DATA[4]  |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY5CON[5]   | [23:20] |  RW  | 0x2     : EBI_DATA[5]  |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY5CON[6]   | [27:24] |  RW  | 0x2     : EBI_DATA[6]  |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY5CON[7]   | [31:28] |  RW  | 0x2     : EBI_DATA[7]  |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY5DAT
 * 
 * Address = GPIO Base Address 2 + 0x01C4
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPY5DAT[7:0] |  [7:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY5PUD
 * 
 * Address = GPIO Base Address 2 + 0x01C8
 * Reset Value = 0x5555
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPY5PUD[n]   | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |      0x5555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPY5DRV
 * 
 * Address = GPIO Base Address 2 + 0x01CC
 * Reset Value = 0x00_AAAA
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPY5DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 7 |  RW  | 0x2 : 3x                      |      0xAAAA      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY5CONPDN
 * 
 * Address = GPIO Base Address 2 + 0x01D0
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPY5[n]      | n = 0 ~ 7 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY5PUDPDN
 * 
 * Address = GPIO Base Address 2 + 0x01D4
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPY5[n]      | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPY5CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY5CON0:4; //3:0
        uint32_t GPY5CON1:4; //7:4
        uint32_t GPY5CON2:4; //11:8
        uint32_t GPY5CON3:4; //15:12
        uint32_t GPY5CON4:4; //19:16
        uint32_t GPY5CON5:4; //23:20
        uint32_t GPY5CON6:4; //27:24
        uint32_t GPY5CON7:4; //31:28
    } bits;
} GPY5CON;

typedef union GPY5DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY5DAT:8; //7:0
    } bits;
} GPY5DAT;

typedef union GPY5PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY5PUD0:2; //1:0
        uint32_t GPY5PUD1:2; //3:2
        uint32_t GPY5PUD2:2; //5:4
        uint32_t GPY5PUD3:2; //7:6
        uint32_t GPY5PUD4:2; //9:8
        uint32_t GPY5PUD5:2; //11:10
        uint32_t GPY5PUD6:2; //13:12
        uint32_t GPY5PUD7:2; //15:14
    } bits;
} GPY5PUD;

typedef union GPY5DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY5DRV0:2; //1:0
        uint32_t GPY5DRV1:2; //3:2
        uint32_t GPY5DRV2:2; //5:4
        uint32_t GPY5DRV3:2; //7:6
        uint32_t GPY5DRV4:2; //9:8
        uint32_t GPY5DRV5:2; //11:10
        uint32_t GPY5DRV6:2; //13:12
        uint32_t GPY5DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPY5DRV;

typedef union GPY5CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY50:2; //1:0
        uint32_t GPY51:2; //3:2
        uint32_t GPY52:2; //5:4
        uint32_t GPY53:2; //7:6
        uint32_t GPY54:2; //9:8
        uint32_t GPY55:2; //11:10
        uint32_t GPY56:2; //13:12
        uint32_t GPY57:2; //15:14
    } bits;   
} GPY5CONPDN;

typedef union GPY5PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPY50:2; //1:0
        uint32_t GPY51:2; //3:2
        uint32_t GPY52:2; //5:4
        uint32_t GPY53:2; //7:6
        uint32_t GPY54:2; //9:8
        uint32_t GPY55:2; //11:10
        uint32_t GPY56:2; //13:12
        uint32_t GPY57:2; //15:14
    } bits;   
} GPY5PUDPDN;

/*
 * GPY6CON
 * 
 * Address = GPIO Base Address 2 + 0x01E0
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |       Description      |   Reset Value    | 
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY6CON[0]   |  [3:0]  |  RW  | 0x2     : EBI_DATA[8]  |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY6CON[1]   |  [7:4]  |  RW  | 0x2     : EBI_DATA[9]  |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY6CON[2]   |  [11:8] |  RW  | 0x2     : EBI_DATA[10] |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY6CON[3]   | [15:12] |  RW  | 0x2     : EBI_DATA[11] |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY6CON[4]   | [19:16] |  RW  | 0x2     : EBI_DATA[12] |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY6CON[5]   | [23:20] |  RW  | 0x2     : EBI_DATA[13] |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY6CON[6]   | [27:24] |  RW  | 0x2     : EBI_DATA[14] |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input        |                  |
 *              |         |      | 0x1     : Output       |                  |
 * GPY6CON[7]   | [31:28] |  RW  | 0x2     : EBI_DATA[15] |       0x00       |
 *              |         |      | 0x3~0xE : Reserved     |                  |
 *              |         |      | 0xF     : -            |                  |
 * --------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY6DAT
 * 
 * Address = GPIO Base Address 2 + 0x01E4
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPY6DAT[7:0] |  [7:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY6PUD
 * 
 * Address = GPIO Base Address 2 + 0x01E8
 * Reset Value = 0x5555
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPY6PUD[n]   | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |      0x5555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPY6DRV
 * 
 * Address = GPIO Base Address 2 + 0x01EC
 * Reset Value = 0x00_AAAA
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPY6DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 7 |  RW  | 0x2 : 3x                      |      0xAAAA      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY6CONPDN
 * 
 * Address = GPIO Base Address 2 + 0x01F0
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPY6[n]      | n = 0 ~ 7 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPY6PUDPDN
 * 
 * Address = GPIO Base Address 2 + 0x01F4
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPY6[n]      | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPY6CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY6CON0:4; //3:0
        uint32_t GPY6CON1:4; //7:4
        uint32_t GPY6CON2:4; //11:8
        uint32_t GPY6CON3:4; //15:12
        uint32_t GPY6CON4:4; //19:16
        uint32_t GPY6CON5:4; //23:20
        uint32_t GPY6CON6:4; //27:24
        uint32_t GPY6CON7:4; //31:28
    } bits;
} GPY6CON;

typedef union GPY6DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY6DAT:8; //7:0
    } bits;
} GPY6DAT;

typedef union GPY6PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY6PUD0:2; //1:0
        uint32_t GPY6PUD1:2; //3:2
        uint32_t GPY6PUD2:2; //5:4
        uint32_t GPY6PUD3:2; //7:6
        uint32_t GPY6PUD4:2; //9:8
        uint32_t GPY6PUD5:2; //11:10
        uint32_t GPY6PUD6:2; //13:12
        uint32_t GPY6PUD7:2; //15:14
    } bits;
} GPY6PUD;

typedef union GPY6DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY6DRV0:2; //1:0
        uint32_t GPY6DRV1:2; //3:2
        uint32_t GPY6DRV2:2; //5:4
        uint32_t GPY6DRV3:2; //7:6
        uint32_t GPY6DRV4:2; //9:8
        uint32_t GPY6DRV5:2; //11:10
        uint32_t GPY6DRV6:2; //13:12
        uint32_t GPY6DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPY6DRV;

typedef union GPY6CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY60:2; //1:0
        uint32_t GPY61:2; //3:2
        uint32_t GPY62:2; //5:4
        uint32_t GPY63:2; //7:6
        uint32_t GPY64:2; //9:8
        uint32_t GPY65:2; //11:10
        uint32_t GPY66:2; //13:12
        uint32_t GPY67:2; //15:14
    } bits;   
} GPY6CONPDN;

typedef union GPY6PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPY60:2; //1:0
        uint32_t GPY61:2; //3:2
        uint32_t GPY62:2; //5:4
        uint32_t GPY63:2; //7:6
        uint32_t GPY64:2; //9:8
        uint32_t GPY65:2; //11:10
        uint32_t GPY66:2; //13:12
        uint32_t GPY67:2; //15:14
    } bits;   
} GPY6PUDPDN;

/*
 * ETC0PUD
 * 
 * Address = GPIO Base Address 2 + 0x0208
 * Reset Value = 0x0400
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * ETC0PUD[n]   | n = 0 ~ 5 |  RW  | 0x2 : Reserved                     |      0x0400      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 *
 * ETC0DRV
 * 
 * Address = GPIO Base Address 2 + 0x020C
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * ETC0DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 5 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 * ETC0PUD[1:0] & ETC0PUD[1:0] controls XjTRSTn.
 * ETC0PUD[3:2] & ETC0PUD[3:2] controls XjTMS.
 * ETC0PUD[5:4] & ETC0PUD[5:4] controls XjTCK.
 * ETC0PUD[7:6] & ETC0PUD[7:6] controls XjTDI.
 * ETC0PUD[9:8] & ETC0PUD[9:8] controls XjTDO.
 * ETC0PUD[11:10] & ETC0PUD[11:10] controls XjDBGSEL.
 */

typedef union ETC0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ETC0PUD0:2; //1:0
        uint32_t ETC0PUD1:2; //3:2
        uint32_t ETC0PUD2:2; //5:4
        uint32_t ETC0PUD3:2; //7:6
        uint32_t ETC0PUD4:2; //9:8
        uint32_t ETC0PUD5:2; //11:10
    } bits;
} ETC0PUD;

typedef union ETC0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ETC0DRV0:2; //1:0
        uint32_t ETC0DRV1:2; //3:2
        uint32_t ETC0DRV2:2; //5:4
        uint32_t ETC0DRV3:2; //7:6
        uint32_t ETC0DRV4:2; //9:8
        uint32_t ETC0DRV5:2; //11:10
        uint32_t Unknown:4; //15:12
        uint32_t Reserved:8; //23:16
    } bits;
} ETC0DRV;

/*
 * ETC6PUD
 * 
 * Address = GPIO Base Address 2 + 0x0228
 * Reset Value = 0x0400
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * ETC6PUD[n]   | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |      0xC000      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 *
 * ETC6DRV
 * 
 * Address = GPIO Base Address 2 + 0x022C
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * ETC6DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 7 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 * ETC0PUD[1:0] & ETC0PUD[1:0] controls XnRESET.
 * ETC0PUD[3:2] & ETC0PUD[3:2] controls XCLKOUT.
 * ETC0PUD[5:4] & ETC0PUD[5:4] controls XnRSTOUT.
 * ETC0PUD[7:6] & ETC0PUD[7:6] controls XnWRESET.
 * ETC0PUD[9:8] & ETC0PUD[9:8] controls XRTCCLKO.
 * ETC0PUD[11:10] & ETC0PUD[11:10] controls XuotgDRVVBUS.
 * ETC0PUD[13:12] & ETC0PUD[13:12] controls XuhostPWREN.
 * ETC0PUD[15:14] & ETC0PUD[15:14] controls XuhostOVERCUR.
 */

typedef union ETC6PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ETC6PUD0:2; //1:0
        uint32_t ETC6PUD1:2; //3:2
        uint32_t ETC6PUD2:2; //5:4
        uint32_t ETC6PUD3:2; //7:6
        uint32_t ETC6PUD4:2; //9:8
        uint32_t ETC6PUD5:2; //11:10
        uint32_t ETC6PUD6:2; //13:12
        uint32_t ETC6PUD7:2; //15:14
    } bits;
} ETC6PUD;

typedef union ETC6DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ETC6DRV0:2; //1:0
        uint32_t ETC6DRV1:2; //3:2
        uint32_t ETC6DRV2:2; //5:4
        uint32_t ETC6DRV3:2; //7:6
        uint32_t ETC6DRV4:2; //9:8
        uint32_t ETC6DRV5:2; //11:10
        uint32_t ETC6DRV6:2; //13:12
        uint32_t ETC6DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} ETC6DRV;

/*
 * GPM0CON
 * 
 * Address = GPIO Base Address 2 + 0x0260
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |       Description       |   Reset Value    | 
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 *              |         |      | 0x2     : Reserved      |                  |
 * GPM0CON[0]   |  [3:0]  |  RW  | 0x3     : CAM_B_PCLK    |       0x00       |
 *              |         |      | 0x4     : TS_CLK        |                  |
 *              |         |      | 0x5     : TraceClk      |                  |
 *              |         |      | 0x6~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT8[0]   |                  |
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 *              |         |      | 0x2     : Reserved      |                  |
 * GPM0CON[1]   |  [7:4]  |  RW  | 0x3     : CAM_B_DATA[0] |       0x00       |
 *              |         |      | 0x4     : TS_SYNC       |                  |
 *              |         |      | 0x5     : TraceData[0]  |                  |
 *              |         |      | 0x6~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT8[1]   |                  |
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 *              |         |      | 0x2     : Reserved      |                  |
 * GPM0CON[2]   |  [11:8] |  RW  | 0x3     : CAM_B_DATA[1] |       0x00       |
 *              |         |      | 0x4     : TS_VAL        |                  |
 *              |         |      | 0x5     : TraceData[1]  |                  |
 *              |         |      | 0x6~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT8[2]   |                  |
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 *              |         |      | 0x2     : Reserved      |                  |
 * GPM0CON[3]   | [15:12] |  RW  | 0x3     : CAM_B_DATA[2] |       0x00       |
 *              |         |      | 0x4     : TS_DATA       |                  |
 *              |         |      | 0x5     : TraceData[2]  |                  |
 *              |         |      | 0x6~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT8[3]   |                  |
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 *              |         |      | 0x2     : Reserved      |                  |
 * GPM0CON[4]   | [19:16] |  RW  | 0x3     : CAM_B_DATA[3] |       0x00       |
 *              |         |      | 0x4     : TS_ERROR      |                  |
 *              |         |      | 0x5     : TraceData[3]  |                  |
 *              |         |      | 0x6~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT8[4]   |                  |
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 *              |         |      | 0x2     : Reserved      |                  |
 * GPM0CON[5]   | [23:20] |  RW  | 0x3     : CAM_B_DATA[4] |       0x00       |
 *              |         |      | 0x4     : XhsiCAWAKE    |                  |
 *              |         |      | 0x5     : TraceData[4]  |                  |
 *              |         |      | 0x6~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT8[5]   |                  |
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 *              |         |      | 0x2     : Reserved      |                  |
 * GPM0CON[6]   | [27:24] |  RW  | 0x3     : CAM_B_DATA[5] |       0x00       |
 *              |         |      | 0x4     : XhsiCADATA    |                  |
 *              |         |      | 0x5     : TraceData[5]  |                  |
 *              |         |      | 0x6~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT8[6]   |                  |
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 *              |         |      | 0x2     : Reserved      |                  |
 * GPM0CON[7]   | [31:28] |  RW  | 0x3     : CAM_B_DATA[6] |       0x00       |
 *              |         |      | 0x4     : XhsiCAFLAG    |                  |
 *              |         |      | 0x5     : TraceData[6]  |                  |
 *              |         |      | 0x6~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT8[7]   |                  |
 * ---------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPM0DAT
 * 
 * Address = GPIO Base Address 2 + 0x0264
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPM0DAT[7:0] |  [7:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPM0PUD
 * 
 * Address = GPIO Base Address 2 + 0x0268
 * Reset Value = 0x5555
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPM0PUD[n]   | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |      0x5555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPM0DRV
 * 
 * Address = GPIO Base Address 2 + 0x026C
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPM0DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 7 |  RW  | 0x2 : 3x                      |      0x0000     |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPM0CONPDN
 * 
 * Address = GPIO Base Address 2 + 0x0270
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPM0[n]      | n = 0 ~ 7 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPM0PUDPDN
 * 
 * Address = GPIO Base Address 2 + 0x0274
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPM0[n]      | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPM0CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM0CON0:4; //3:0
        uint32_t GPM0CON1:4; //7:4
        uint32_t GPM0CON2:4; //11:8
        uint32_t GPM0CON3:4; //15:12
        uint32_t GPM0CON4:4; //19:16
        uint32_t GPM0CON5:4; //23:20
        uint32_t GPM0CON6:4; //27:24
        uint32_t GPM0CON7:4; //31:28
    } bits;
} GPM0CON;

typedef union GPM0DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM0DAT:8; //7:0
    } bits;
} GPM0DAT;

typedef union GPM0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM0PUD0:2; //1:0
        uint32_t GPM0PUD1:2; //3:2
        uint32_t GPM0PUD2:2; //5:4
        uint32_t GPM0PUD3:2; //7:6
        uint32_t GPM0PUD4:2; //9:8
        uint32_t GPM0PUD5:2; //11:10
        uint32_t GPM0PUD6:2; //13:12
        uint32_t GPM0PUD7:2; //15:14
    } bits;
} GPM0PUD;

typedef union GPM0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM0DRV0:2; //1:0
        uint32_t GPM0DRV1:2; //3:2
        uint32_t GPM0DRV2:2; //5:4
        uint32_t GPM0DRV3:2; //7:6
        uint32_t GPM0DRV4:2; //9:8
        uint32_t GPM0DRV5:2; //11:10
        uint32_t GPM0DRV6:2; //13:12
        uint32_t GPM0DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPM0DRV;

typedef union GPM0CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM00:2; //1:0
        uint32_t GPM01:2; //3:2
        uint32_t GPM02:2; //5:4
        uint32_t GPM03:2; //7:6
        uint32_t GPM04:2; //9:8
        uint32_t GPM05:2; //11:10
        uint32_t GPM06:2; //13:12
        uint32_t GPM07:2; //15:14
    } bits;   
} GPM0CONPDN;

typedef union GPM0PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPM00:2; //1:0
        uint32_t GPM01:2; //3:2
        uint32_t GPM02:2; //5:4
        uint32_t GPM03:2; //7:6
        uint32_t GPM04:2; //9:8
        uint32_t GPM05:2; //11:10
        uint32_t GPM06:2; //13:12
        uint32_t GPM07:2; //15:14
    } bits;   
} GPM0PUDPDN;

/*
 * GPM1CON
 * 
 * Address = GPIO Base Address 2 + 0x0280
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |      Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : Reserved        |                  |
 * GPM1CON[0]   |  [3:0]  |  RW  | 0x3     : CAM_B_DATA[7]   |       0x00       |
 *              |         |      | 0x4     : XhsiACREADY     |                  |
 *              |         |      | 0x5     : TraceData[7]    |                  |
 *              |         |      | 0x6~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT9[0]     |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : CAM_BAY_RGB[8]  |                  |
 * GPM1CON[1]   |  [7:4]  |  RW  | 0x3     : CAM_B_FIELD     |       0x00       |
 *              |         |      | 0x4     : XhsiACWAKE      |                  |
 *              |         |      | 0x5     : TraceCtl        |                  |
 *              |         |      | 0x6~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT9[1]     |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : CAM_BAY_RGB[9]  |                  |
 * GPM1CON[2]   |  [11:8] |  RW  | 0x3     : Reserved        |       0x00       |
 *              |         |      | 0x4     : XhsiACDATA      |                  |
 *              |         |      | 0x5     : TraceData[8]    |                  |
 *              |         |      | 0x6~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT9[2]     |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : CAM_BAY_RGB[10] |                  |
 * GPM1CON[3]   | [15:12] |  RW  | 0x3     : Reserved        |       0x00       |
 *              |         |      | 0x4     : XhsiACFLAG      |                  |
 *              |         |      | 0x5     : TraceData[9]    |                  |
 *              |         |      | 0x6~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT9[3]     |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : CAM_BAY_RGB[11] |                  |
 * GPM1CON[4]   | [19:16] |  RW  | 0x3     : Reserved        |       0x00       |
 *              |         |      | 0x4     : XhsiCAREADY     |                  |
 *              |         |      | 0x5     : TraceData[10]   |                  |
 *              |         |      | 0x6~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT9[4]     |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : CAM_BAY_RGB[12] |                  |
 * GPM1CON[5]   | [23:20] |  RW  | 0x3     : Reserved        |       0x00       |
 *              |         |      | 0x4     : Reserved        |                  |
 *              |         |      | 0x5     : TraceData[11]   |                  |
 *              |         |      | 0x6~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT9[5]     |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : CAM_BAY_RGB[13] |                  |
 * GPM1CON[6]   | [27:24] |  RW  | 0x3     : Reserved        |       0x00       |
 *              |         |      | 0x4     : Reserved        |                  |
 *              |         |      | 0x5     : TraceData[12]   |                  |
 *              |         |      | 0x6~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT9[6]     |                  |
 * -----------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPM1DAT
 * 
 * Address = GPIO Base Address 2 + 0x0284
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPM1DAT[6:0] |  [6:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPM1PUD
 * 
 * Address = GPIO Base Address 2 + 0x0288
 * Reset Value = 0x1555
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPM1PUD[n]   | n = 0 ~ 6 |  RW  | 0x2 : Reserved                     |      0x1555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPM1DRV
 * 
 * Address = GPIO Base Address 2 + 0x028C
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPM1DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 6 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPM1CONPDN
 * 
 * Address = GPIO Base Address 2 + 0x0290
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPM1[n]      | n = 0 ~ 6 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPM1PUDPDN
 * 
 * Address = GPIO Base Address 2 + 0x0294
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPM1[n]      | n = 0 ~ 6 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPM1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM1CON0:4; //3:0
        uint32_t GPM1CON1:4; //7:4
        uint32_t GPM1CON2:4; //11:8
        uint32_t GPM1CON3:4; //15:12
        uint32_t GPM1CON4:4; //19:16
        uint32_t GPM1CON5:4; //23:20
        uint32_t GPM1CON6:4; //27:24
    } bits;
} GPM1CON;

typedef union GPM1DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM1DAT:7; //6:0
    } bits;
} GPM1DAT;

typedef union GPM1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM1PUD0:2; //1:0
        uint32_t GPM1PUD1:2; //3:2
        uint32_t GPM1PUD2:2; //5:4
        uint32_t GPM1PUD3:2; //7:6
        uint32_t GPM1PUD4:2; //9:8
        uint32_t GPM1PUD5:2; //11:10
        uint32_t GPM1PUD6:2; //13:12
    } bits;
} GPM1PUD;

typedef union GPM1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM1DRV0:2; //1:0
        uint32_t GPM1DRV1:2; //3:2
        uint32_t GPM1DRV2:2; //5:4
        uint32_t GPM1DRV3:2; //7:6
        uint32_t GPM1DRV4:2; //9:8
        uint32_t GPM1DRV5:2; //11:10
        uint32_t GPM1DRV6:2; //13:12
        uint32_t Unknown:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPM1DRV;

typedef union GPM1CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM10:2; //1:0
        uint32_t GPM11:2; //3:2
        uint32_t GPM12:2; //5:4
        uint32_t GPM13:2; //7:6
        uint32_t GPM14:2; //9:8
        uint32_t GPM15:2; //11:10
        uint32_t GPM16:2; //13:12
    } bits;   
} GPM1CONPDN;

typedef union GPM1PUDPDN_u
{
    uint16_t all_val:14;
    struct
    {
        uint32_t GPM10:2; //1:0
        uint32_t GPM11:2; //3:2
        uint32_t GPM12:2; //5:4
        uint32_t GPM13:2; //7:6
        uint32_t GPM14:2; //9:8
        uint32_t GPM15:2; //11:10
        uint32_t GPM16:2; //13:12
    } bits;   
} GPM1PUDPDN;

/*
 * GPM2CON
 * 
 * Address = GPIO Base Address 2 + 0x02A0
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |      Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : Reserved        |                  |
 * GPM2CON[0]   |  [3:0]  |  RW  | 0x3     : CAM_B_VSYNC     |       0x00       |
 *              |         |      | 0x4     : Reserved        |                  |
 *              |         |      | 0x5     : TraceData[13]   |                  |
 *              |         |      | 0x6~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT10[0]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : Reserved        |                  |
 * GPM2CON[1]   |  [7:4]  |  RW  | 0x3     : CAM_B_HREF      |       0x00       |
 *              |         |      | 0x4     : Reserved        |                  |
 *              |         |      | 0x5     : TraceData[14]   |                  |
 *              |         |      | 0x6~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT10[1]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : Reserved        |                  |
 * GPM2CON[2]   |  [11:8] |  RW  | 0x3     : CAM_B_CLKOUT    |       0x00       |
 *              |         |      | 0x4     : Reserved        |                  |
 *              |         |      | 0x5     : TraceData[15]   |                  |
 *              |         |      | 0x6~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT10[2]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 * GPM2CON[3]   | [15:12] |  RW  | 0x2     : CAM_GPIO[0]     |       0x00       |
 *              |         |      | 0x3     : MPWM1_OUT_ISP   |                  |
 *              |         |      | 0x4~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT10[3]    |                  |
 * -----------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input           |                  |
 *              |         |      | 0x1     : Output          |                  |
 *              |         |      | 0x2     : CAM_GPIO[1]     |                  |
 * GPM2CON[4]   | [19:16] |  RW  | 0x3     : MPWM2_OUT_ISP   |       0x00       |
 *              |         |      | 0x4~0xE : Reserved        |                  |
 *              |         |      | 0xF     : EXT_INT10[4]     |                  |
 * -----------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPM2DAT
 * 
 * Address = GPIO Base Address 2 + 0x02A4
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPM2DAT[4:0] |  [4:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPM2PUD
 * 
 * Address = GPIO Base Address 2 + 0x02A8
 * Reset Value = 0x0155
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPM2PUD[n]   | n = 0 ~ 4 |  RW  | 0x2 : Reserved                     |      0x1555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPM2DRV
 * 
 * Address = GPIO Base Address 2 + 0x02AC
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPM2DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 4 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPM2CONPDN
 * 
 * Address = GPIO Base Address 2 + 0x02B0
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPM2[n]      | n = 0 ~ 4 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPM2PUDPDN
 * 
 * Address = GPIO Base Address 2 + 0x02B4
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPM2[n]      | n = 0 ~ 4 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPM2CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM2CON0:4; //3:0
        uint32_t GPM2CON1:4; //7:4
        uint32_t GPM2CON2:4; //11:8
        uint32_t GPM2CON3:4; //15:12
        uint32_t GPM2CON4:4; //19:16
    } bits;
} GPM2CON;

typedef union GPM2DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM2DAT:5; //4:0
    } bits;
} GPM2DAT;

typedef union GPM2PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM2PUD0:2; //1:0
        uint32_t GPM2PUD1:2; //3:2
        uint32_t GPM2PUD2:2; //5:4
        uint32_t GPM2PUD3:2; //7:6
        uint32_t GPM2PUD4:2; //9:8
    } bits;
} GPM2PUD;

typedef union GPM2DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM2DRV0:2; //1:0
        uint32_t GPM2DRV1:2; //3:2
        uint32_t GPM2DRV2:2; //5:4
        uint32_t GPM2DRV3:2; //7:6
        uint32_t GPM2DRV4:2; //9:8
        uint32_t Unknown:6; //15:10
        uint32_t Reserved:8; //23:16
    } bits;
} GPM2DRV;

typedef union GPM2CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM20:2; //1:0
        uint32_t GPM21:2; //3:2
        uint32_t GPM22:2; //5:4
        uint32_t GPM23:2; //7:6
        uint32_t GPM24:2; //9:8
    } bits;   
} GPM2CONPDN;

typedef union GPM2PUDPDN_u
{
    uint16_t all_val:10;
    struct
    {
        uint32_t GPM20:2; //1:0
        uint32_t GPM21:2; //3:2
        uint32_t GPM22:2; //5:4
        uint32_t GPM23:2; //7:6
        uint32_t GPM24:2; //9:8
    } bits;   
} GPM2PUDPDN;

/*
 * GPM3CON
 * 
 * Address = GPIO Base Address 2 + 0x02C0
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |       Description       |   Reset Value    | 
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 * GPM3CON[0]   |  [3:0]  |  RW  | 0x2     : CAM_GPIO[2]   |       0x00       |
 *              |         |      | 0x3     : MPWM3_OUT_ISP |                  |
 *              |         |      | 0x4~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT11[0]  |                  |
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 * GPM3CON[1]   |  [7:4]  |  RW  | 0x2     : CAM_GPIO[3]   |       0x00       |
 *              |         |      | 0x3     : MPWM4_OUT_ISP |                  |
 *              |         |      | 0x4~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT11[1]  |                  |
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 *              |         |      | 0x2     : CAM_GPIO[4]   |                  |
 * GPM3CON[2]   |  [11:8] |  RW  | 0x3     : MPWM5_OUT_ISP |       0x00       |
 *              |         |      | 0x4     : CAM_SPI1_MISO |                  |
 *              |         |      | 0x5~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT11[2]  |                  |
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 *              |         |      | 0x2     : CAM_GPIO[5]   |                  |
 * GPM3CON[3]   | [15:12] |  RW  | 0x3     : MPWM6_OUT_ISP |       0x00       |
 *              |         |      | 0x4     : CAM_SPI1_MOSI |                  |
 *              |         |      | 0x5~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT11[3]  |                  |
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 * GPM3CON[4]   | [19:16] |  RW  | 0x2     : CAM_GPIO[6]   |       0x00       |
 *              |         |      | 0x3     : nRTS_UART_ISP |                  |
 *              |         |      | 0x4~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT11[4]  |                  |
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 * GPM3CON[5]   | [23:20] |  RW  | 0x2     : CAM_GPIO[7]   |       0x00       |
 *              |         |      | 0x3     : TXD_UART_ISP  |                  |
 *              |         |      | 0x4~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT11[5]  |                  |
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 * GPM3CON[6]   | [27:24] |  RW  | 0x2     : CAM_GPIO[8]   |       0x00       |
 *              |         |      | 0x3     : nCTS_UART_ISP |                  |
 *              |         |      | 0x4~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT11[6]  |                  |
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 * GPM3CON[7]   | [31:28] |  RW  | 0x2     : CAM_GPIO[9]   |       0x00       |
 *              |         |      | 0x3     : RXD_UART_ISP  |                  |
 *              |         |      | 0x4~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT11[7]  |                  |
 * ---------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPM3DAT
 * 
 * Address = GPIO Base Address 2 + 0x02C4
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPM3DAT[7:0] |  [7:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPM3PUD
 * 
 * Address = GPIO Base Address 2 + 0x02C8
 * Reset Value = 0x5555
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPM3PUD[n]   | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |      0x5555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPM3DRV
 * 
 * Address = GPIO Base Address 2 + 0x02CC
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPM3DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 7 |  RW  | 0x2 : 3x                      |      0x0000      |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPM3CONPDN
 * 
 * Address = GPIO Base Address 2 + 0x02D0
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPM3[n]      | n = 0 ~ 7 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPM3PUDPDN
 * 
 * Address = GPIO Base Address 2 + 0x02D4
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPM3[n]      | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPM3CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM3CON0:4; //3:0
        uint32_t GPM3CON1:4; //7:4
        uint32_t GPM3CON2:4; //11:8
        uint32_t GPM3CON3:4; //15:12
        uint32_t GPM3CON4:4; //19:16
        uint32_t GPM3CON5:4; //23:20
        uint32_t GPM3CON6:4; //27:24
        uint32_t GPM3CON7:4; //31:28
    } bits;
} GPM3CON;

typedef union GPM3DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM3DAT:8; //7:0
    } bits;
} GPM3DAT;

typedef union GPM3PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM3PUD0:2; //1:0
        uint32_t GPM3PUD1:2; //3:2
        uint32_t GPM3PUD2:2; //5:4
        uint32_t GPM3PUD3:2; //7:6
        uint32_t GPM3PUD4:2; //9:8
        uint32_t GPM3PUD5:2; //11:10
        uint32_t GPM3PUD6:2; //13:12
        uint32_t GPM3PUD7:2; //15:14
    } bits;
} GPM3PUD;

typedef union GPM3DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM3DRV0:2; //1:0
        uint32_t GPM3DRV1:2; //3:2
        uint32_t GPM3DRV2:2; //5:4
        uint32_t GPM3DRV3:2; //7:6
        uint32_t GPM3DRV4:2; //9:8
        uint32_t GPM3DRV5:2; //11:10
        uint32_t GPM3DRV6:2; //13:12
        uint32_t GPM3DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPM3DRV;

typedef union GPM3CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM30:2; //1:0
        uint32_t GPM31:2; //3:2
        uint32_t GPM32:2; //5:4
        uint32_t GPM33:2; //7:6
        uint32_t GPM34:2; //9:8
        uint32_t GPM35:2; //11:10
        uint32_t GPM36:2; //13:12
        uint32_t GPM37:2; //15:14
    } bits;   
} GPM3CONPDN;

typedef union GPM3PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPM30:2; //1:0
        uint32_t GPM31:2; //3:2
        uint32_t GPM32:2; //5:4
        uint32_t GPM33:2; //7:6
        uint32_t GPM34:2; //9:8
        uint32_t GPM35:2; //11:10
        uint32_t GPM36:2; //13:12
        uint32_t GPM37:2; //15:14
    } bits;   
} GPM3PUDPDN;

/*
 * GPM4CON
 * 
 * Address = GPIO Base Address 2 + 0x02E0
 * Reset Value = 0x0000_0000
 * 
 *     Name     |   Bit   | Type |       Description       |   Reset Value    | 
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 * GPM4CON[0]   |  [3:0]  |  RW  | 0x2     : CAM_I2C0_SCL  |       0x00       |
 *              |         |      | 0x3     : CAM_GPIO[10]  |                  |
 *              |         |      | 0x4~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT12[0]  |                  |
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 * GPM4CON[1]   |  [7:4]  |  RW  | 0x2     : CAM_I2C0_SDA  |       0x00       |
 *              |         |      | 0x3     : CAM_GPIO[11]  |                  |
 *              |         |      | 0x4~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT12[1]  |                  |
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 *              |         |      | 0x2     : CAM_I2C1_SCL  |                  |
 * GPM4CON[2]   |  [11:8] |  RW  | 0x3     : CAM_GPIO[12]  |       0x00       |
 *              |         |      | 0x4     : CAM_SPI1_CLK  |                  |
 *              |         |      | 0x5~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT12[2]  |                  |
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 *              |         |      | 0x2     : CAM_I2C1_SDA  |                  |
 * GPM4CON[3]   | [15:12] |  RW  | 0x3     : CAM_GPIO[13]  |       0x00       |
 *              |         |      | 0x4     : CAM_SPI1_nSS  |                  |
 *              |         |      | 0x5~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT12[3]  |                  |
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 * GPM4CON[4]   | [19:16] |  RW  | 0x2     : CAM_SPI_CLK   |       0x00       |
 *              |         |      | 0x3     : CAM_GPIO[14]  |                  |
 *              |         |      | 0x4~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT12[4]  |                  |
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 * GPM4CON[5]   | [23:20] |  RW  | 0x2     : CAM_SPI_nSS   |       0x00       |
 *              |         |      | 0x3     : CAMP_GPIO[15] |                  |
 *              |         |      | 0x4~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT12[5]  |                  |
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 * GPM4CON[6]   | [27:24] |  RW  | 0x2     : CAM_SPI_MISO  |       0x00       |
 *              |         |      | 0x3     : CAM_GPIO[16]  |                  |
 *              |         |      | 0x4~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT12[6]  |                  |
 * ---------------------------------------------------------------------------|
 *              |         |      | 0x0     : Input         |                  |
 *              |         |      | 0x1     : Output        |                  |
 * GPM4CON[7]   | [31:28] |  RW  | 0x2     : CAM_SPI_MOSI  |       0x00       |
 *              |         |      | 0x3     : CAM_GPIO[17]  |                  |
 *              |         |      | 0x4~0xE : Reserved      |                  |
 *              |         |      | 0xF     : EXT_INT12[7]  |                  |
 * ---------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPM4DAT
 * 
 * Address = GPIO Base Address 2 + 0x02E4
 * Reset Value = 0x00
 * 
 *     Name     |   Bit   | Type |                       Description                    |    Reset Value   | 
 * --------------------------------------------------------------------------------------------------------|
 *              |         |      | When you configure port as input port, then          |                  |
 *              |         |      | corresponding bit is pin state. When configureing as |                  |
 * GPM4DAT[7:0] |  [7:0]  |  RWX | output port the pin state should be same as the      |       0x00       |
 *              |         |      | corresponding bit. When the port is configured as    |                  |
 *              |         |      | functional pin, the undefined value will be read     |                  |
 * --------------------------------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPM4PUD
 * 
 * Address = GPIO Base Address 2 + 0x02E8
 * Reset Value = 0x5555
 * 
 *     Name     |    Bit    | Type |            Description             |    Reset Value   | 
 * ----------------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |                  |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |                  |
 * GPM4PUD[n]   | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |      0x5555      |
 *              |           |      | 0x3 : Enables Pull-up              |                  |
 * ----------------------------------------------------------------------------------------|
 * 
 *****************************************************************************
 *
 * GPM4DRV
 * 
 * Address = GPIO Base Address 2 + 0x02EC
 * Reset Value = 0x00_0000
 * 
 *     Name     |    Bit    | Type |          Description          |    Reset Value   | 
 * -----------------------------------------------------------------------------------|
 *              |  [23:16]  |  RW  | Reserved (Should be zero)     |       0x00       |
 *              |---------------------------------------------------------------------|
 *              |           |      | 0x0 : 1x                      |                  |
 * GPM4DRV[n]   | [2n+1:2n] |      | 0x1 : 2x                      |                  |
 *              | n = 0 ~ 7 |  RW  | 0x2 : 3x                      |      0x0000     |
 *              |           |      | 0x3 : 4x                      |                  |
 * -----------------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPM4CONPDN
 * 
 * Address = GPIO Base Address 2 + 0x02F0
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |       Description       | Reset Value | 
 * ------------------------------------------------------------------------|
 *              |           |      | 0x0 : Outputs 0         |             |
 *              | [2n+1:2n] |      | 0x1 : Outputs 1         |             |
 * GPM4[n]      | n = 0 ~ 7 |  RW  | 0x2 : Input             |     0x00    |
 *              |           |      | 0x3 : Previous state    |             |
 * ------------------------------------------------------------------------|
 * 
 ****************************************************************************
 *
 * GPM4PUDPDN
 * 
 * Address = GPIO Base Address 2 + 0x02F4
 * Reset Value = 0x0000
 * 
 *     Name     |    Bit    | Type |            Description             | Reset Value | 
 * -----------------------------------------------------------------------------------|
 *              |           |      | 0x0 : Disalbes Pull-up/Pull-down   |             |
 *              | [2n+1:2n] |      | 0x1 : Enables Pull-down            |             |
 * GPM4[n]      | n = 0 ~ 7 |  RW  | 0x2 : Reserved                     |    0x00     |
 *              |           |      | 0x3 : Enables Pull-up              |             |
 * -----------------------------------------------------------------------------------| 
 */

typedef union GPM4CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM4CON0:4; //3:0
        uint32_t GPM4CON1:4; //7:4
        uint32_t GPM4CON2:4; //11:8
        uint32_t GPM4CON3:4; //15:12
        uint32_t GPM4CON4:4; //19:16
        uint32_t GPM4CON5:4; //23:20
        uint32_t GPM4CON6:4; //27:24
        uint32_t GPM4CON7:4; //31:28
    } bits;
} GPM4CON;

typedef union GPM4DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM4DAT:8; //7:0
    } bits;
} GPM4DAT;

typedef union GPM4PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM4PUD0:2; //1:0
        uint32_t GPM4PUD1:2; //3:2
        uint32_t GPM4PUD2:2; //5:4
        uint32_t GPM4PUD3:2; //7:6
        uint32_t GPM4PUD4:2; //9:8
        uint32_t GPM4PUD5:2; //11:10
        uint32_t GPM4PUD6:2; //13:12
        uint32_t GPM4PUD7:2; //15:14
    } bits;
} GPM4PUD;

typedef union GPM4DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM4DRV0:2; //1:0
        uint32_t GPM4DRV1:2; //3:2
        uint32_t GPM4DRV2:2; //5:4
        uint32_t GPM4DRV3:2; //7:6
        uint32_t GPM4DRV4:2; //9:8
        uint32_t GPM4DRV5:2; //11:10
        uint32_t GPM4DRV6:2; //13:12
        uint32_t GPM4DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPM4DRV;

typedef union GPM4CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM40:2; //1:0
        uint32_t GPM41:2; //3:2
        uint32_t GPM42:2; //5:4
        uint32_t GPM43:2; //7:6
        uint32_t GPM44:2; //9:8
        uint32_t GPM45:2; //11:10
        uint32_t GPM46:2; //13:12
        uint32_t GPM47:2; //15:14
    } bits;   
} GPM4CONPDN;

typedef union GPM4PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPM40:2; //1:0
        uint32_t GPM41:2; //3:2
        uint32_t GPM42:2; //5:4
        uint32_t GPM43:2; //7:6
        uint32_t GPM44:2; //9:8
        uint32_t GPM45:2; //11:10
        uint32_t GPM46:2; //13:12
        uint32_t GPM47:2; //15:14
    } bits;   
} GPM4PUDPDN;

/*
 * EXT_INT23CON
 * 
 * Address = GPIO Base Address 2 + 0x0708
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description              |   Reset Value   | 
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT23[0] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT23_CON[0] |  [2:0]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT23[1] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT23_CON[1] |  [6:4]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT23[2] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT23_CON[2] | [10:8]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [11]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT23[3] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT23_CON[3] | [14:12] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT23[4] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT23_CON[4] | [18:16] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [19]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT23[5] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT23_CON[5] | [22:20] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [23]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT23[6] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT23_CON[6] | [26:24] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [27]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 * RSVD             | [31:28] |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 */

typedef union EXTINT23CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT23CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT23CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT23CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT23CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT23CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT23CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT23CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t Reserved7:4;   //31:28
    } bits;   
} EXTINT23CON;

/*
 * EXT_INT24CON
 * 
 * Address = GPIO Base Address 2 + 0x070C
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description              |   Reset Value   | 
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT24[0] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT24_CON[0] |  [2:0]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT24[1] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT24_CON[1] |  [6:4]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT24[2] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT24_CON[2] | [10:8]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [11]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT24[3] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT24_CON[3] | [14:12] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT24[4] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT24_CON[4] | [18:16] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [19]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT24[5] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT24_CON[5] | [22:20] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [23]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT24[6] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT24_CON[6] | [26:24] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [27]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 * RSVD             | [31:28] |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 */

typedef union EXTINT24CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT24CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT24CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT24CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT24CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT24CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT24CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT24CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t Reserved7:4;   //31:28
    } bits;   
} EXTINT24CON;

/*
 * EXT_INT25CON
 * 
 * Address = GPIO Base Address 2 + 0x0710
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description              |   Reset Value   | 
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT25[0] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT25_CON[0] |  [2:0]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT25[1] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT25_CON[1] |  [6:4]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT25[2] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT25_CON[2] | [10:8]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [11]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT25[3] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT25_CON[3] | [14:12] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT25[4] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT25_CON[4] | [18:16] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [19]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT25[5] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT25_CON[5] | [22:20] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [23]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT25[6] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT25_CON[6] | [26:24] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [27]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 * RSVD             | [31:28] |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 */

typedef union EXTINT25CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT25CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT25CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT25CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT25CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT25CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT25CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT25CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t Reserved7:4;   //31:28
    } bits;   
} EXTINT25CON;

/*
 * EXT_INT26CON
 * 
 * Address = GPIO Base Address 2 + 0x0714
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description              |   Reset Value   | 
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT26[0] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT26_CON[0] |  [2:0]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT26[1] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT26_CON[1] |  [6:4]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT26[2] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT26_CON[2] | [10:8]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [11]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT26[3] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT26_CON[3] | [14:12] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT26[4] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT26_CON[4] | [18:16] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [19]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT26[5] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT26_CON[5] | [22:20] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [23]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT26[6] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT26_CON[6] | [26:24] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [27]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 * RSVD             | [31:28] |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 */

typedef union EXTINT26CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT26CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT26CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT26CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT26CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT26CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT26CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT26CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t Reserved7:4;   //31:28
    } bits;   
} EXTINT26CON;

/*
 * EXT_INT27CON
 * 
 * Address = GPIO Base Address 2 + 0x0718
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description              |   Reset Value   | 
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT27[0] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT27_CON[0] |  [2:0]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT27[1] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT27_CON[1] |  [6:4]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT27[2] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT27_CON[2] | [10:8]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [11]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT27[3] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT27_CON[3] | [14:12] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT27[4] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT27_CON[4] | [18:16] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [19]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT27[5] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT27_CON[5] | [22:20] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [23]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT27[6] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT27_CON[6] | [26:24] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [27]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 * RSVD             | [31:28] |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 */

typedef union EXTINT27CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT27CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT27CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT27CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT27CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT27CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT27CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT27CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t Reserved7:4;   //31:28
    } bits;   
} EXTINT27CON;

/*
 * EXT_INT28CON
 * 
 * Address = GPIO Base Address 2 + 0x071C
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description              |   Reset Value   | 
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT28[0] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT28_CON[0] |  [2:0]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT28[1] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT28_CON[1] |  [6:4]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 * RSVD             | [31:8] |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 */

typedef union EXTINT28CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT28CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT28CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t Reserved2:24;   //31:8
    } bits;   
} EXTINT28CON;

/*
 * EXT_INT29CON
 * 
 * Address = GPIO Base Address 2 + 0x0720
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description              |   Reset Value   | 
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT29[0] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT29_CON[0] |  [2:0]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT29[1] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT29_CON[1] |  [6:4]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT29[2] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT29_CON[2] | [10:8]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [11]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT29[3] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT29_CON[3] | [14:12] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT29[4] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT29_CON[4] | [18:16] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [19]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT29[5] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT29_CON[5] | [22:20] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [23]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT29[6] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT29_CON[6] | [26:24] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [27]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT29[6] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT29_CON[6] | [30:28] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [31]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 */

typedef union EXTINT29CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT29CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT29CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT29CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT29CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT29CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT29CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT29CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT29CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT29CON;

/*
 * EXT_INT8CON
 * 
 * Address = GPIO Base Address 2 + 0x0724
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description              |   Reset Value   | 
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT8[0]  |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT8_CON[0]  |  [2:0]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT8[1]  |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT8_CON[1]  |  [6:4]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT8[2]  |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT8_CON[2]  | [10:8]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [11]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT8[3]  |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT8_CON[3]  | [14:12] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT8[4]  |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT8_CON[4]  | [18:16] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [19]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT8[5]  |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT8_CON[5]  | [22:20] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [23]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT8[6]  |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT8_CON[6]  | [26:24] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [27]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT8[6]  |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT8_CON[6]  | [30:28] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [31]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 */

typedef union EXTINT8CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT8CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT8CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT8CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT8CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT8CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT8CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT8CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT8CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT8CON;

/*
 * EXT_INT9CON
 * 
 * Address = GPIO Base Address 2 + 0x0728
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description              |   Reset Value   | 
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT9[0]  |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT9_CON[0]  |  [2:0]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT9[1]  |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT9_CON[1]  |  [6:4]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT9[2]  |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT9_CON[2]  | [10:8]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [11]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT9[3]  |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT9_CON[3]  | [14:12] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT9[4]  |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT9_CON[4]  | [18:16] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [19]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT9[5]  |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT9_CON[5]  | [22:20] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [23]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT9[6]  |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT9_CON[6]  | [26:24] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [27]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 * RSVD             | [31:28] |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 */

typedef union EXTINT9CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT9CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT9CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT9CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT9CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT9CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT9CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT9CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t Reserved7:4;   //31:28
    } bits;   
} EXTINT9CON;

/*
 * EXT_INT10CON
 * 
 * Address = GPIO Base Address 2 + 0x072C
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description              |   Reset Value   | 
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT10[0] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT10_CON[0] |  [2:0]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT10[1] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT10_CON[1] |  [6:4]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT10[2] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT10_CON[2] | [10:8]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [11]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT10[3] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT10_CON[3] | [14:12] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT10[4] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT10_CON[4] | [18:16] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [19]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 * RSVD             | [31:20] |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 */

typedef union EXTINT10CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT10CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT10CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT10CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT10CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT10CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t Reserved5:12; //31:20
    } bits;   
} EXTINT10CON;

/*
 * EXT_INT11CON
 * 
 * Address = GPIO Base Address 2 + 0x0730
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description              |   Reset Value   | 
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT11[0] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT11_CON[0] |  [2:0]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT11[1] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT11_CON[1] |  [6:4]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT11[2] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT11_CON[2] | [10:8]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [11]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT11[3] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT11_CON[3] | [14:12] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT11[4] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT11_CON[4] | [18:16] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [19]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT11[5] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT11_CON[5] | [22:20] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [23]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT11[6] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT11_CON[6] | [26:24] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [27]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT11[7] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT11_CON[7] | [30:28] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [31]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 */

typedef union EXTINT11CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT11CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT11CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT11CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT11CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT11CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT11CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT11CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT11CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT11CON;

/*
 * EXT_INT12CON
 * 
 * Address = GPIO Base Address 2 + 0x0734
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |              Description              |   Reset Value   | 
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT12[0] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT12_CON[0] |  [2:0]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [3]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT12[1] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT12_CON[1] |  [6:4]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [7]   |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT12[2] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT12_CON[2] | [10:8]  |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [11]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT12[3] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT12_CON[3] | [14:12] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [15]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT12[4] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT12_CON[4] | [18:16] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [19]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT12[5] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT12_CON[5] | [22:20] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [23]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT12[6] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT12_CON[6] | [26:24] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [27]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 *                  |         |      | Sets signaling method of EXT_INT12[7] |                 |
 *                  |         |      | 0x0     : Low Level                   |                 |
 *                  |         |      | 0x1     : High Level                  |                 |
 * EXT_INT12_CON[7] | [30:28] |  RW  | 0x2     : Triggers falling edge       |       0x0       |
 *                  |         |      | 0x3     : Triggers rising edge        |                 |
 *                  |         |      | 0x4     : Triggers both edge          |                 |
 *                  |         |      | 0x5~0x7 : Reserved                    |                 |
 * --------------------------------------------------------------------------------------------|
 * RSVD             |   [31]  |  -   | Reserved                              |       0x0       |
 * --------------------------------------------------------------------------------------------|
 */

typedef union EXTINT12CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT12CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT12CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT12CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT12CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT12CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT12CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT12CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT12CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT12CON;

/*
 * EXT_INT23_FLTCON0
 * 
 * Address = GPIO Base Address 2 + 0x0810
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH3[0]     |  [6:0]  |  RW  | Filtering width of EXT_INT23[0] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT23[0]  |             |
 * FLTEN3[0]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH3[1]     |  [14:8] |  RW  | Filtering width of EXT_INT23[1] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT23[1]  |             |
 * FLTEN3[1]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH3[2]     | [22:16] |  RW  | Filtering width of EXT_INT23[2] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT23[2]  |             |
 * FLTEN3[2]        |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH3[3]     | [30:24] |  RW  | Filtering width of EXT_INT23[3] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT23[3]  |             |
 * FLTEN3[3]        |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT23_FLTCON1
 * 
 * Address = GPIO Base Address 2 + 0x0814
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH3[4]     |  [6:0]  |  RW  | Filtering width of EXT_INT23[4] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT23[4]  |             |
 * FLTEN3[4]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH3[5]     |  [14:8] |  RW  | Filtering width of EXT_INT23[5] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT23[5]  |             |
 * FLTEN3[5]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH3[6]     | [22:16] |  RW  | Filtering width of EXT_INT23[6] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT23[6]  |             |
 * FLTEN3[6]        |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * RSVD             | [31:24] |  -   | Reserved                        |     0x00    |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT23FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH30:7;  //6:0
        uint32_t FLTEN30:1;     //7
        uint32_t FLTWIDTH31:7;  //14:8
        uint32_t FLTEN31:1;     //15
        uint32_t FLTWIDTH32:7;  //22:16
        uint32_t FLTEN32:1;     //23
        uint32_t FLTWIDTH33:7;  //30:24
        uint32_t FLTEN33:1;     //31
    } bits;    
} EXTINT23FLTCON0;

typedef union EXTINT23FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH34:7;  //6:0
        uint32_t FLTEN34:1;     //7
        uint32_t FLTWIDTH35:7;  //14:8
        uint32_t FLTEN35:1;     //15
        uint32_t FLTWIDTH36:7;  //22:16
        uint32_t FLTEN36:1;     //23
        uint32_t FLTWIDTH37:7;  //30:24
        uint32_t FLTEN37:1;     //31
    } bits;    
} EXTINT23FLTCON1;

/*
 * EXT_INT24_FLTCON0
 * 
 * Address = GPIO Base Address 2 + 0x0818
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH4[0]     |  [6:0]  |  RW  | Filtering width of EXT_INT24[0] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT24[0]  |             |
 * FLTEN4[0]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH4[1]     |  [14:8] |  RW  | Filtering width of EXT_INT24[1] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT24[1]  |             |
 * FLTEN4[1]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH4[2]     | [22:16] |  RW  | Filtering width of EXT_INT24[2] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT24[2]  |             |
 * FLTEN4[2]        |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH4[3]     | [30:24] |  RW  | Filtering width of EXT_INT24[3] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT24[3]  |             |
 * FLTEN4[3]        |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT24_FLTCON1
 * 
 * Address = GPIO Base Address 2 + 0x081C
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH4[4]     |  [6:0]  |  RW  | Filtering width of EXT_INT24[4] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT24[4]  |             |
 * FLTEN4[4]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH4[5]     |  [14:8] |  RW  | Filtering width of EXT_INT24[5] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT24[5]  |             |
 * FLTEN4[5]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH4[6]     | [22:16] |  RW  | Filtering width of EXT_INT24[6] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT24[6]  |             |
 * FLTEN4[6]        |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * RSVD             | [31:24] |  -   | Reserved                        |     0x00    |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT24FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH40:7;  //6:0
        uint32_t FLTEN40:1;     //7
        uint32_t FLTWIDTH41:7;  //14:8
        uint32_t FLTEN41:1;     //15
        uint32_t FLTWIDTH42:7;  //22:16
        uint32_t FLTEN42:1;     //23
        uint32_t FLTWIDTH43:7;  //30:24
        uint32_t FLTEN43:1;     //31
    } bits;    
} EXTINT24FLTCON0;

typedef union EXTINT24FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH44:7;  //6:0
        uint32_t FLTEN44:1;     //7
        uint32_t FLTWIDTH45:7;  //14:8
        uint32_t FLTEN45:1;     //15
        uint32_t FLTWIDTH46:7;  //22:16
        uint32_t FLTEN46:1;     //23
        uint32_t FLTWIDTH47:7;  //30:24
        uint32_t FLTEN47:1;     //31
    } bits;    
} EXTINT24FLTCON1;

/*
 * EXT_INT25_FLTCON0
 * 
 * Address = GPIO Base Address 2 + 0x0820
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH5[0]     |  [6:0]  |  RW  | Filtering width of EXT_INT25[0] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT25[0]  |             |
 * FLTEN5[0]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH5[1]     |  [14:8] |  RW  | Filtering width of EXT_INT25[1] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT25[1]  |             |
 * FLTEN5[1]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH5[2]     | [22:16] |  RW  | Filtering width of EXT_INT25[2] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT25[2]  |             |
 * FLTEN5[2]        |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH5[3]     | [30:24] |  RW  | Filtering width of EXT_INT25[3] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT25[3]  |             |
 * FLTEN5[3]        |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT25_FLTCON1
 * 
 * Address = GPIO Base Address 2 + 0x0824
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH5[4]     |  [6:0]  |  RW  | Filtering width of EXT_INT25[4] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT25[4]  |             |
 * FLTEN5[4]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH5[5]     |  [14:8] |  RW  | Filtering width of EXT_INT25[5] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT25[5]  |             |
 * FLTEN5[5]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH5[6]     | [22:16] |  RW  | Filtering width of EXT_INT25[6] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT25[6]  |             |
 * FLTEN5[6]        |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * RSVD             | [31:24] |  -   | Reserved                        |     0x00    |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT25FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH50:7;  //6:0
        uint32_t FLTEN50:1;     //7
        uint32_t FLTWIDTH51:7;  //14:8
        uint32_t FLTEN51:1;     //15
        uint32_t FLTWIDTH52:7;  //22:16
        uint32_t FLTEN52:1;     //23
        uint32_t FLTWIDTH53:7;  //30:24
        uint32_t FLTEN53:1;     //31
    } bits;    
} EXTINT25FLTCON0;

typedef union EXTINT25FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH54:7;  //6:0
        uint32_t FLTEN54:1;     //7
        uint32_t FLTWIDTH55:7;  //14:8
        uint32_t FLTEN55:1;     //15
        uint32_t FLTWIDTH56:7;  //22:16
        uint32_t FLTEN56:1;     //23
        uint32_t FLTWIDTH57:7;  //30:24
        uint32_t FLTEN57:1;     //31
    } bits;    
} EXTINT25FLTCON1;

/*
 * EXT_INT26_FLTCON0
 * 
 * Address = GPIO Base Address 2 + 0x0828
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH6[0]     |  [6:0]  |  RW  | Filtering width of EXT_INT26[0] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT26[0]  |             |
 * FLTEN6[0]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH6[1]     |  [14:8] |  RW  | Filtering width of EXT_INT26[1] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT26[1]  |             |
 * FLTEN6[1]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH6[2]     | [22:16] |  RW  | Filtering width of EXT_INT26[2] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT26[2]  |             |
 * FLTEN6[2]        |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH6[3]     | [30:24] |  RW  | Filtering width of EXT_INT26[3] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT26[3]  |             |
 * FLTEN6[3]        |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT26_FLTCON1
 * 
 * Address = GPIO Base Address 2 + 0x082C
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH6[4]     |  [6:0]  |  RW  | Filtering width of EXT_INT26[4] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT26[4]  |             |
 * FLTEN6[4]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH6[5]     |  [14:8] |  RW  | Filtering width of EXT_INT26[5] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT26[5]  |             |
 * FLTEN6[5]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH6[6]     | [22:16] |  RW  | Filtering width of EXT_INT26[6] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT26[6]  |             |
 * FLTEN6[6]        |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * RSVD             | [31:24] |  -   | Reserved                        |     0x00    |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT26FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH60:7;  //6:0
        uint32_t FLTEN60:1;     //7
        uint32_t FLTWIDTH61:7;  //14:8
        uint32_t FLTEN61:1;     //15
        uint32_t FLTWIDTH62:7;  //22:16
        uint32_t FLTEN62:1;     //23
        uint32_t FLTWIDTH63:7;  //30:24
        uint32_t FLTEN63:1;     //31
    } bits;    
} EXTINT26FLTCON0;

typedef union EXTINT26FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH64:7;  //6:0
        uint32_t FLTEN64:1;     //7
        uint32_t FLTWIDTH65:7;  //14:8
        uint32_t FLTEN65:1;     //15
        uint32_t FLTWIDTH66:7;  //22:16
        uint32_t FLTEN66:1;     //23
        uint32_t FLTWIDTH67:7;  //30:24
        uint32_t FLTEN67:1;     //31
    } bits;    
} EXTINT26FLTCON1;

/*
 * EXT_INT27_FLTCON0
 * 
 * Address = GPIO Base Address 2 + 0x0830
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH7[0]     |  [6:0]  |  RW  | Filtering width of EXT_INT27[0] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT27[0]  |             |
 * FLTEN7[0]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH7[1]     |  [14:8] |  RW  | Filtering width of EXT_INT27[1] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT27[1]  |             |
 * FLTEN7[1]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH7[2]     | [22:16] |  RW  | Filtering width of EXT_INT27[2] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT27[2]  |             |
 * FLTEN7[2]        |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH7[3]     | [30:24] |  RW  | Filtering width of EXT_INT27[3] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT27[3]  |             |
 * FLTEN7[3]        |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT27_FLTCON1
 * 
 * Address = GPIO Base Address 2 + 0x0834
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH7[4]     |  [6:0]  |  RW  | Filtering width of EXT_INT27[4] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT27[4]  |             |
 * FLTEN7[4]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH7[5]     |  [14:8] |  RW  | Filtering width of EXT_INT27[5] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT27[5]  |             |
 * FLTEN7[5]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH7[6]     | [22:16] |  RW  | Filtering width of EXT_INT27[6] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT27[6]  |             |
 * FLTEN7[6]        |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * RSVD             | [31:24] |  -   | Reserved                        |     0x00    |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT27FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH70:7;  //6:0
        uint32_t FLTEN70:1;     //7
        uint32_t FLTWIDTH71:7;  //14:8
        uint32_t FLTEN71:1;     //15
        uint32_t FLTWIDTH72:7;  //22:16
        uint32_t FLTEN72:1;     //23
        uint32_t FLTWIDTH73:7;  //30:24
        uint32_t FLTEN73:1;     //31
    } bits;    
} EXTINT27FLTCON0;

typedef union EXTINT27FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH74:7;  //6:0
        uint32_t FLTEN74:1;     //7
        uint32_t FLTWIDTH75:7;  //14:8
        uint32_t FLTEN75:1;     //15
        uint32_t FLTWIDTH76:7;  //22:16
        uint32_t FLTEN76:1;     //23
        uint32_t FLTWIDTH77:7;  //30:24
        uint32_t FLTEN77:1;     //31
    } bits;    
} EXTINT27FLTCON1;

/*
 * EXT_INT26_FLTCON0
 * 
 * Address = GPIO Base Address 2 + 0x0838
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH6[0]     |  [6:0]  |  RW  | Filtering width of EXT_INT26[0] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT26[0]  |             |
 * FLTEN6[0]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH6[1]     |  [14:8] |  RW  | Filtering width of EXT_INT26[1] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT26[1]  |             |
 * FLTEN6[1]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * RSVD             | [31:16] |  -   | Reserved                        |     0x00    |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT26_FLTCON1
 * 
 * Address = GPIO Base Address 2 + 0x083C
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * RSVD             | [31:0]  |  -   | Reserved                        | 0x00000000  |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT28FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH80:7;  //6:0
        uint32_t FLTEN80:1;     //7
        uint32_t FLTWIDTH81:7;  //14:8
        uint32_t FLTEN81:1;     //15
        uint32_t Reserved:16;   //31:16
    } bits;    
} EXTINT28FLTCON0;

typedef union EXTINT28FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t Reserved;
    } bits;    
} EXTINT28FLTCON1;

/*
 * EXT_INT29_FLTCON0
 * 
 * Address = GPIO Base Address 2 + 0x0840
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH9[0]     |  [6:0]  |  RW  | Filtering width of EXT_INT29[0] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT29[0]  |             |
 * FLTEN9[0]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH9[1]     |  [14:8] |  RW  | Filtering width of EXT_INT29[1] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT29[1]  |             |
 * FLTEN9[1]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH9[2]     | [22:16] |  RW  | Filtering width of EXT_INT29[2] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT29[2]  |             |
 * FLTEN9[2]        |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH9[3]     | [30:24] |  RW  | Filtering width of EXT_INT29[3] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT29[3]  |             |
 * FLTEN9[3]        |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT29_FLTCON1
 * 
 * Address = GPIO Base Address 2 + 0x0844
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH9[4]     |  [6:0]  |  RW  | Filtering width of EXT_INT29[4] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT29[4]  |             |
 * FLTEN9[4]        |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH9[5]     |  [14:8] |  RW  | Filtering width of EXT_INT29[5] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT29[5]  |             |
 * FLTEN9[5]        |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH9[6]     | [22:16] |  RW  | Filtering width of EXT_INT29[6] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT29[6]  |             |
 * FLTEN9[6]        |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH9[7]     | [30:24] |  RW  | Filtering width of EXT_INT29[6] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT29[6]  |             |
 * FLTEN9[7]        |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT29FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH90:7;  //6:0
        uint32_t FLTEN90:1;     //7
        uint32_t FLTWIDTH91:7;  //14:8
        uint32_t FLTEN91:1;     //15
        uint32_t FLTWIDTH92:7;  //22:16
        uint32_t FLTEN92:1;     //23
        uint32_t FLTWIDTH93:7;  //30:24
        uint32_t FLTEN93:1;     //31
    } bits;    
} EXTINT29FLTCON0;

typedef union EXTINT29FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH94:7;  //6:0
        uint32_t FLTEN94:1;     //7
        uint32_t FLTWIDTH95:7;  //14:8
        uint32_t FLTEN95:1;     //15
        uint32_t FLTWIDTH96:7;  //22:16
        uint32_t FLTEN96:1;     //23
        uint32_t FLTWIDTH97:7;  //30:24
        uint32_t FLTEN97:1;     //31
    } bits;    
} EXTINT29FLTCON1;

/*
 * EXT_INT8_FLTCON0
 * 
 * Address = GPIO Base Address 2 + 0x0848
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH10[0]    |  [6:0]  |  RW  | Filtering width of EXT_INT8[0]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT8[0]   |             |
 * FLTEN10[0]       |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH10[1]    |  [14:8] |  RW  | Filtering width of EXT_INT8[1]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT8[1]   |             |
 * FLTEN10[1]       |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH10[2]    | [22:16] |  RW  | Filtering width of EXT_INT8[2]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT8[2]   |             |
 * FLTEN10[2]       |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH10[3]    | [30:24] |  RW  | Filtering width of EXT_INT8[3]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT8[3]   |             |
 * FLTEN10[3]       |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT8_FLTCON1
 * 
 * Address = GPIO Base Address 2 + 0x084C
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH10[4]    |  [6:0]  |  RW  | Filtering width of EXT_INT8[4]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT8[4]   |             |
 * FLTEN10[4]       |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH10[5]    |  [14:8] |  RW  | Filtering width of EXT_INT8[5]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT8[5]   |             |
 * FLTEN10[5]       |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH10[6]    | [22:16] |  RW  | Filtering width of EXT_INT8[6]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT8[6]   |             |
 * FLTEN10[6]       |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH10[7]    | [30:24] |  RW  | Filtering width of EXT_INT8[7]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT8[7]   |             |
 * FLTEN10[7]       |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT8FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH100:7;  //6:0
        uint32_t FLTEN100:1;     //7
        uint32_t FLTWIDTH101:7;  //14:8
        uint32_t FLTEN101:1;     //15
        uint32_t FLTWIDTH102:7;  //22:16
        uint32_t FLTEN102:1;     //23
        uint32_t FLTWIDTH103:7;  //30:24
        uint32_t FLTEN103:1;     //31
    } bits;    
} EXTINT8FLTCON0;

typedef union EXTINT8FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH104:7;  //6:0
        uint32_t FLTEN104:1;     //7
        uint32_t FLTWIDTH105:7;  //14:8
        uint32_t FLTEN105:1;     //15
        uint32_t FLTWIDTH106:7;  //22:16
        uint32_t FLTEN106:1;     //23
        uint32_t FLTWIDTH107:7;  //30:24
        uint32_t FLTEN107:1;     //31
    } bits;    
} EXTINT8FLTCON1;

/*
 * EXT_INT9_FLTCON0
 * 
 * Address = GPIO Base Address 2 + 0x0850
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH11[0]    |  [6:0]  |  RW  | Filtering width of EXT_INT9[0]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT9[0]   |             |
 * FLTEN11[0]       |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH11[1]    |  [14:8] |  RW  | Filtering width of EXT_INT9[1]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT9[1]   |             |
 * FLTEN11[1]       |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH11[2]    | [22:16] |  RW  | Filtering width of EXT_INT9[2]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT9[2]   |             |
 * FLTEN11[2]       |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH11[3]    | [30:24] |  RW  | Filtering width of EXT_INT9[3]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT9[3]   |             |
 * FLTEN11[3]       |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT9_FLTCON1
 * 
 * Address = GPIO Base Address 2 + 0x0854
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH11[4]    |  [6:0]  |  RW  | Filtering width of EXT_INT9[4]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT9[4]   |             |
 * FLTEN11[4]       |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH11[5]    |  [14:8] |  RW  | Filtering width of EXT_INT9[5]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT9[5]   |             |
 * FLTEN11[5]       |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH11[6]    | [22:16] |  RW  | Filtering width of EXT_INT9[6]  |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT9[6]   |             |
 * FLTEN11[6]       |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * RSVD             | [31:24] |  -   | Reserved                        |     0x00    |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT9FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH110:7;  //6:0
        uint32_t FLTEN110:1;     //7
        uint32_t FLTWIDTH111:7;  //14:8
        uint32_t FLTEN111:1;     //15
        uint32_t FLTWIDTH112:7;  //22:16
        uint32_t FLTEN112:1;     //23
        uint32_t FLTWIDTH113:7;  //30:24
        uint32_t FLTEN113:1;     //31
    } bits;    
} EXTINT9FLTCON0;

typedef union EXTINT9FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH114:7;  //6:0
        uint32_t FLTEN114:1;     //7
        uint32_t FLTWIDTH115:7;  //14:8
        uint32_t FLTEN115:1;     //15
        uint32_t FLTWIDTH116:7;  //22:16
        uint32_t FLTEN116:1;     //23
        uint32_t FLTWIDTH117:7;  //30:24
        uint32_t FLTEN117:1;     //31
    } bits;    
} EXTINT9FLTCON1;

/*
 * EXT_INT10_FLTCON0
 * 
 * Address = GPIO Base Address 2 + 0x0858
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH12[0]    |  [6:0]  |  RW  | Filtering width of EXT_INT10[0] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT10[0]  |             |
 * FLTEN12[0]       |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH12[1]    |  [14:8] |  RW  | Filtering width of EXT_INT10[1] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT10[1]  |             |
 * FLTEN12[1]       |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH12[2]    | [22:16] |  RW  | Filtering width of EXT_INT10[2] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT10[2]  |             |
 * FLTEN12[2]       |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH12[3]    | [30:24] |  RW  | Filtering width of EXT_INT10[3] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT10[3]  |             |
 * FLTEN12[3]       |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT10_FLTCON1
 * 
 * Address = GPIO Base Address 2 + 0x085C
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH12[4]    |  [6:0]  |  RW  | Filtering width of EXT_INT10[4] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT10[4]  |             |
 * FLTEN12[4]       |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * RSVD             | [31:8]  |  -   | Reserved                        |     0x00    |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT10FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH120:7;  //6:0
        uint32_t FLTEN120:1;     //7
        uint32_t FLTWIDTH121:7;  //14:8
        uint32_t FLTEN121:1;     //15
        uint32_t FLTWIDTH122:7;  //22:16
        uint32_t FLTEN122:1;     //23
        uint32_t FLTWIDTH123:7;  //30:24
        uint32_t FLTEN123:1;     //31
    } bits;    
} EXTINT10FLTCON0;

typedef union EXTINT10FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH124:7;  //6:0
        uint32_t FLTEN124:1;     //7
        uint32_t Reserved:24;    //31:8
    } bits;    
} EXTINT10FLTCON1;

typedef union EXTINT11FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH130:7;  //6:0
        uint32_t FLTEN130:1;     //7
        uint32_t FLTWIDTH131:7;  //14:8
        uint32_t FLTEN131:1;     //15
        uint32_t FLTWIDTH132:7;  //22:16
        uint32_t FLTEN132:1;     //23
        uint32_t FLTWIDTH133:7;  //30:24
        uint32_t FLTEN133:1;     //31
    } bits;    
} EXTINT11FLTCON0;

/*
 * EXT_INT11_FLTCON0
 * 
 * Address = GPIO Base Address 2 + 0x0860
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH13[0]    |  [6:0]  |  RW  | Filtering width of EXT_INT11[0] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT11[0]  |             |
 * FLTEN13[0]       |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH13[1]    |  [14:8] |  RW  | Filtering width of EXT_INT11[1] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT11[1]  |             |
 * FLTEN13[1]       |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH13[2]    | [22:16] |  RW  | Filtering width of EXT_INT11[2] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT11[2]  |             |
 * FLTEN13[2]       |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH13[3]    | [30:24] |  RW  | Filtering width of EXT_INT11[3] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT11[3]  |             |
 * FLTEN13[3]       |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT11_FLTCON1
 * 
 * Address = GPIO Base Address 2 + 0x0864
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH13[4]    |  [6:0]  |  RW  | Filtering width of EXT_INT11[4] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT11[4]  |             |
 * FLTEN13[4]       |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH13[5]    |  [14:8] |  RW  | Filtering width of EXT_INT11[5] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT11[5]  |             |
 * FLTEN13[5]       |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH13[6]    | [22:16] |  RW  | Filtering width of EXT_INT11[6] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT11[6]  |             |
 * FLTEN13[6]       |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH13[7]    | [30:24] |  RW  | Filtering width of EXT_INT11[7] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT11[7]  |             |
 * FLTEN13[7]       |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT11FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH134:7;  //6:0
        uint32_t FLTEN134:1;     //7
        uint32_t FLTWIDTH135:7;  //14:8
        uint32_t FLTEN135:1;     //15
        uint32_t FLTWIDTH136:7;  //22:16
        uint32_t FLTEN136:1;     //23
        uint32_t FLTWIDTH137:7;  //30:24
        uint32_t FLTEN137:1;     //31
    } bits;    
} EXTINT11FLTCON1;

/*
 * EXT_INT12_FLTCON0
 * 
 * Address = GPIO Base Address 2 + 0x0868
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH14[0]    |  [6:0]  |  RW  | Filtering width of EXT_INT12[0] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT12[0]  |             |
 * FLTEN14[0]       |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH14[1]    |  [14:8] |  RW  | Filtering width of EXT_INT12[1] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT12[1]  |             |
 * FLTEN14[1]       |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH14[2]    | [22:16] |  RW  | Filtering width of EXT_INT12[2] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT12[2]  |             |
 * FLTEN14[2]       |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH14[3]    | [30:24] |  RW  | Filtering width of EXT_INT12[3] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT12[3]  |             |
 * FLTEN14[3]       |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * 
 * EXT_INT12_FLTCON1
 * 
 * Address = GPIO Base Address 2 + 0x086C
 * Reset Value = 0x0000_0000
 * 
 *     Name         |   Bit   | Type |            Description          | Reset Value | 
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH14[4]    |  [6:0]  |  RW  | Filtering width of EXT_INT12[4] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT12[4]  |             |
 * FLTEN14[4]       |   [7]   |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH14[5]    |  [14:8] |  RW  | Filtering width of EXT_INT12[5] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT12[5]  |             |
 * FLTEN14[5]       |   [15]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH14[6]    | [22:16] |  RW  | Filtering width of EXT_INT12[6] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT12[6]  |             |
 * FLTEN14[6]       |   [23]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 * FLTWIDTH14[7]    | [30:24] |  RW  | Filtering width of EXT_INT12[7] |     0x00    |
 * ----------------------------------------------------------------------------------|
 *                  |         |      | Filter Enable for EXT_INT12[7]  |             |
 * FLTEN14[7]       |   [31]  |  RW  | 0x0 = Disable Filter            |     0x0     |
 *                  |         |      | 0x1 = Enable Filter             |             |
 * ----------------------------------------------------------------------------------|
 */

typedef union EXTINT12FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH140:7;  //6:0
        uint32_t FLTEN140:1;     //7
        uint32_t FLTWIDTH141:7;  //14:8
        uint32_t FLTEN141:1;     //15
        uint32_t FLTWIDTH142:7;  //22:16
        uint32_t FLTEN142:1;     //23
        uint32_t FLTWIDTH143:7;  //30:24
        uint32_t FLTEN143:1;     //31
    } bits;    
} EXTINT12FLTCON0;

typedef union EXTINT12FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH144:7;  //6:0
        uint32_t FLTEN144:1;     //7
        uint32_t FLTWIDTH145:7;  //14:8
        uint32_t FLTEN145:1;     //15
        uint32_t FLTWIDTH146:7;  //22:16
        uint32_t FLTEN146:1;     //23
        uint32_t FLTWIDTH147:7;  //30:24
        uint32_t FLTEN147:1;     //31
    } bits;    
} EXTINT12FLTCON1;

///////////////////////////////////////////////////

typedef union EXTINT23MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT23MASK0:1; //0
        uint32_t EXTINT23MASK1:1; //1
        uint32_t EXTINT23MASK2:1; //2
        uint32_t EXTINT23MASK3:1; //3
        uint32_t EXTINT23MASK4:1; //4
        uint32_t EXTINT23MASK5:1; //5
        uint32_t EXTINT23MASK6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT23MASK;

typedef union EXTINT24MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT24MASK0:1; //0
        uint32_t EXTINT24MASK1:1; //1
        uint32_t EXTINT24MASK2:1; //2
        uint32_t EXTINT24MASK3:1; //3
        uint32_t EXTINT24MASK4:1; //4
        uint32_t EXTINT24MASK5:1; //5
        uint32_t EXTINT24MASK6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT24MASK;

typedef union EXTINT25MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT25MASK0:1; //0
        uint32_t EXTINT25MASK1:1; //1
        uint32_t EXTINT25MASK2:1; //2
        uint32_t EXTINT25MASK3:1; //3
        uint32_t EXTINT25MASK4:1; //4
        uint32_t EXTINT25MASK5:1; //5
        uint32_t EXTINT25MASK6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT25MASK;

typedef union EXTINT26MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT26MASK0:1; //0
        uint32_t EXTINT26MASK1:1; //1
        uint32_t EXTINT26MASK2:1; //2
        uint32_t EXTINT26MASK3:1; //3
        uint32_t EXTINT26MASK4:1; //4
        uint32_t EXTINT26MASK5:1; //5
        uint32_t EXTINT26MASK6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT26MASK;

typedef union EXTINT27MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT27MASK0:1; //0
        uint32_t EXTINT27MASK1:1; //1
        uint32_t EXTINT27MASK2:1; //2
        uint32_t EXTINT27MASK3:1; //3
        uint32_t EXTINT27MASK4:1; //4
        uint32_t EXTINT27MASK5:1; //5
        uint32_t EXTINT27MASK6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT27MASK;

typedef union EXTINT28MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT28MASK0:1; //0
        uint32_t EXTINT28MASK1:1; //1
        uint32_t Reserved:30;    //31:2
    } bits;
} EXTINT28MASK;

typedef union EXTINT29MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT29MASK0:1; //0
        uint32_t EXTINT29MASK1:1; //1
        uint32_t EXTINT29MASK2:1; //2
        uint32_t EXTINT29MASK3:1; //3
        uint32_t EXTINT29MASK4:1; //4
        uint32_t EXTINT29MASK5:1; //5
        uint32_t EXTINT29MASK6:1; //6
        uint32_t EXTINT29MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT29MASK;

typedef union EXTINT8MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT8MASK0:1; //0
        uint32_t EXTINT8MASK1:1; //1
        uint32_t EXTINT8MASK2:1; //2
        uint32_t EXTINT8MASK3:1; //3
        uint32_t EXTINT8MASK4:1; //4
        uint32_t EXTINT8MASK5:1; //5
        uint32_t EXTINT8MASK6:1; //6
        uint32_t EXTINT8MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT8MASK;

typedef union EXTINT9MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT9MASK0:1; //0
        uint32_t EXTINT9MASK1:1; //1
        uint32_t EXTINT9MASK2:1; //2
        uint32_t EXTINT9MASK3:1; //3
        uint32_t EXTINT9MASK4:1; //4
        uint32_t EXTINT9MASK5:1; //5
        uint32_t EXTINT9MASK6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT9MASK;

typedef union EXTINT10MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT10MASK0:1; //0
        uint32_t EXTINT10MASK1:1; //1
        uint32_t EXTINT10MASK2:1; //2
        uint32_t EXTINT10MASK3:1; //3
        uint32_t EXTINT10MASK4:1; //4
        uint32_t Reserved:27;    //31:5
    } bits;
} EXTINT10MASK;

typedef union EXTINT11MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT11MASK0:1; //0
        uint32_t EXTINT11MASK1:1; //1
        uint32_t EXTINT11MASK2:1; //2
        uint32_t EXTINT11MASK3:1; //3
        uint32_t EXTINT11MASK4:1; //4
        uint32_t EXTINT11MASK5:1; //5
        uint32_t EXTINT11MASK6:1; //6
        uint32_t EXTINT11MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT11MASK;

typedef union EXTINT12MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT12MASK0:1; //0
        uint32_t EXTINT12MASK1:1; //1
        uint32_t EXTINT12MASK2:1; //2
        uint32_t EXTINT12MASK3:1; //3
        uint32_t EXTINT12MASK4:1; //4
        uint32_t EXTINT12MASK5:1; //5
        uint32_t EXTINT12MASK6:1; //6
        uint32_t EXTINT12MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT12MASK;

///////////////////////////////////////////////////////////

typedef union EXTINT23PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT23PEND0:1; //0
        uint32_t EXTINT23PEND1:1; //1
        uint32_t EXTINT23PEND2:1; //2
        uint32_t EXTINT23PEND3:1; //3
        uint32_t EXTINT23PEND4:1; //4
        uint32_t EXTINT23PEND5:1; //5
        uint32_t EXTINT23PEND6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT23PEND;

typedef union EXTINT24PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT24PEND0:1; //0
        uint32_t EXTINT24PEND1:1; //1
        uint32_t EXTINT24PEND2:1; //2
        uint32_t EXTINT24PEND3:1; //3
        uint32_t EXTINT24PEND4:1; //4
        uint32_t EXTINT24PEND5:1; //5
        uint32_t EXTINT24PEND6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT24PEND;

typedef union EXTINT25PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT25PEND0:1; //0
        uint32_t EXTINT25PEND1:1; //1
        uint32_t EXTINT25PEND2:1; //2
        uint32_t EXTINT25PEND3:1; //3
        uint32_t EXTINT25PEND4:1; //4
        uint32_t EXTINT25PEND5:1; //5
        uint32_t EXTINT25PEND6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT25PEND;

typedef union EXTINT26PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT26PEND0:1; //0
        uint32_t EXTINT26PEND1:1; //1
        uint32_t EXTINT26PEND2:1; //2
        uint32_t EXTINT26PEND3:1; //3
        uint32_t EXTINT26PEND4:1; //4
        uint32_t EXTINT26PEND5:1; //5
        uint32_t EXTINT26PEND6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT23PEND;

typedef union EXTINT27PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT27PEND0:1; //0
        uint32_t EXTINT27PEND1:1; //1
        uint32_t EXTINT27PEND2:1; //2
        uint32_t EXTINT27PEND3:1; //3
        uint32_t EXTINT27PEND4:1; //4
        uint32_t EXTINT27PEND5:1; //5
        uint32_t EXTINT27PEND6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT27PEND;

typedef union EXTINT28PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT28PEND0:1; //0
        uint32_t EXTINT28PEND1:1; //1
        uint32_t Reserved:30;    //31:2
    } bits;
} EXTINT28PEND;

typedef union EXTINT29PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT29PEND0:1; //0
        uint32_t EXTINT29PEND1:1; //1
        uint32_t EXTINT29PEND2:1; //2
        uint32_t EXTINT29PEND3:1; //3
        uint32_t EXTINT29PEND4:1; //4
        uint32_t EXTINT29PEND5:1; //5
        uint32_t EXTINT29PEND6:1; //6
        uint32_t EXTINT29PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT29PEND;

typedef union EXTINT8PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT8PEND0:1; //0
        uint32_t EXTINT8PEND1:1; //1
        uint32_t EXTINT8PEND2:1; //2
        uint32_t EXTINT8PEND3:1; //3
        uint32_t EXTINT8PEND4:1; //4
        uint32_t EXTINT8PEND5:1; //5
        uint32_t EXTINT8PEND6:1; //6
        uint32_t EXTINT8PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT8PEND;

typedef union EXTINT9PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT9PEND0:1; //0
        uint32_t EXTINT9PEND1:1; //1
        uint32_t EXTINT9PEND2:1; //2
        uint32_t EXTINT9PEND3:1; //3
        uint32_t EXTINT9PEND4:1; //4
        uint32_t EXTINT9PEND5:1; //5
        uint32_t EXTINT9PEND6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT9PEND;

typedef union EXTINT10PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT10PEND0:1; //0
        uint32_t EXTINT10PEND1:1; //1
        uint32_t EXTINT10PEND2:1; //2
        uint32_t EXTINT10PEND3:1; //3
        uint32_t EXTINT10PEND4:1; //4
        uint32_t Reserved:27;    //31:5
    } bits;
} EXTINT10PEND;

typedef union EXTINT11PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT11PEND0:1; //0
        uint32_t EXTINT11PEND1:1; //1
        uint32_t EXTINT11PEND2:1; //2
        uint32_t EXTINT11PEND3:1; //3
        uint32_t EXTINT11PEND4:1; //4
        uint32_t EXTINT11PEND5:1; //5
        uint32_t EXTINT11PEND6:1; //6
        uint32_t EXTINT11PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT11PEND;

typedef union EXTINT12PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT12PEND0:1; //0
        uint32_t EXTINT12PEND1:1; //1
        uint32_t EXTINT12PEND2:1; //2
        uint32_t EXTINT12PEND3:1; //3
        uint32_t EXTINT12PEND4:1; //4
        uint32_t EXTINT12PEND5:1; //5
        uint32_t EXTINT12PEND6:1; //6
        uint32_t EXTINT12PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT12PEND;

////////////////////////////////////////////

typedef union EXTINTSERVICEXA_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t SVCNUM:3;       //2:0
        uint32_t SVCGROUPNUM:5;  //7:3
        uint32_t Reserved:24;                   //31:8
    } bits;
} EXTINTSERVICEXA;

typedef union EXTINTSERVICEPENDXA_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t SVCPEND:8;  //7:0
        uint32_t Reserved:24;                   //31:8
    } bits;
} EXTINTSERVICEPENDXA;

typedef union EXTINTGRPFIXPRIXA_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTGRPNUM:4;  //3:0
        uint32_t Reserved:28;   //31:4
    } bits;
} EXTINTGRPFIXPRIXA;

///////////////////////////////////////////////////

typedef union EXTINT23FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT23FIXPRI;

typedef union EXTINT24FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT24FIXPRI;

typedef union EXTINT25FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT25FIXPRI;

typedef union EXTINT26FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT26FIXPRI;

typedef union EXTINT27FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT27FIXPRI;

typedef union EXTINT28FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT28FIXPRI;

typedef union EXTINT29FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT29FIXPRI;

typedef union EXTINT8FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT8FIXPRI;

typedef union EXTINT9FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT9FIXPRI;

typedef union EXTINT10FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT10FIXPRI;

typedef union EXTINT11FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT11FIXPRI;

typedef union EXTINT12FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT12FIXPRI;

/////////////////////////////////////////////////

typedef union GPX0CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX0CON0:4; //3:0
        uint32_t GPX0CON1:4; //7:4
        uint32_t GPX0CON2:4; //11:8
        uint32_t GPX0CON3:4; //15:12
        uint32_t GPX0CON4:4; //19:16
        uint32_t GPX0CON5:4; //23:20
        uint32_t GPX0CON6:4; //27:24
        uint32_t GPX0CON7:4; //31:28
    } bits;
} GPX0CON;

typedef union GPX0DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX0DAT:8; //7:0
    } bits;
} GPX0DAT;

typedef union GPX0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX0PUD0:2; //1:0
        uint32_t GPX0PUD1:2; //3:2
        uint32_t GPX0PUD2:2; //5:4
        uint32_t GPX0PUD3:2; //7:6
        uint32_t GPX0PUD4:2; //9:8
        uint32_t GPX0PUD5:2; //11:10
        uint32_t GPX0PUD6:2; //13:12
        uint32_t GPX0PUD7:2; //15:14
    } bits;
} GPX0PUD;

typedef union GPX0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX0DRV0:2; //1:0
        uint32_t GPX0DRV1:2; //3:2
        uint32_t GPX0DRV2:2; //5:4
        uint32_t GPX0DRV3:2; //7:6
        uint32_t GPX0DRV4:2; //9:8
        uint32_t GPX0DRV5:2; //11:10
        uint32_t GPX0DRV6:2; //13:12
        uint32_t GPX0DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPX0DRV;

/////////////////////////////////////////////////

typedef union GPX1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX1CON0:4; //3:0
        uint32_t GPX1CON1:4; //7:4
        uint32_t GPX1CON2:4; //11:8
        uint32_t GPX1CON3:4; //15:12
        uint32_t GPX1CON4:4; //19:16
        uint32_t GPX1CON5:4; //23:20
        uint32_t GPX1CON6:4; //27:24
        uint32_t GPX1CON7:4; //31:28
    } bits;
} GPX1CON;

typedef union GPX1DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX1DAT:8; //7:0
    } bits;
} GPX1DAT;

typedef union GPX1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX1PUD0:2; //1:0
        uint32_t GPX1PUD1:2; //3:2
        uint32_t GPX1PUD2:2; //5:4
        uint32_t GPX1PUD3:2; //7:6
        uint32_t GPX1PUD4:2; //9:8
        uint32_t GPX1PUD5:2; //11:10
        uint32_t GPX1PUD6:2; //13:12
        uint32_t GPX1PUD7:2; //15:14
    } bits;
} GPX1PUD;

typedef union GPX1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX1DRV0:2; //1:0
        uint32_t GPX1DRV1:2; //3:2
        uint32_t GPX1DRV2:2; //5:4
        uint32_t GPX1DRV3:2; //7:6
        uint32_t GPX1DRV4:2; //9:8
        uint32_t GPX1DRV5:2; //11:10
        uint32_t GPX1DRV6:2; //13:12
        uint32_t GPX1DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPX1DRV;

/////////////////////////////////////////////////

typedef union GPX2CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX2CON0:4; //3:0
        uint32_t GPX2CON1:4; //7:4
        uint32_t GPX2CON2:4; //11:8
        uint32_t GPX2CON3:4; //15:12
        uint32_t GPX2CON4:4; //19:16
        uint32_t GPX2CON5:4; //23:20
        uint32_t GPX2CON6:4; //27:24
        uint32_t GPX2CON7:4; //31:28
    } bits;
} GPX2CON;

typedef union GPX2DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX2DAT:8; //7:0
    } bits;
} GPX2DAT;

typedef union GPX2PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX2PUD0:2; //1:0
        uint32_t GPX2PUD1:2; //3:2
        uint32_t GPX2PUD2:2; //5:4
        uint32_t GPX2PUD3:2; //7:6
        uint32_t GPX2PUD4:2; //9:8
        uint32_t GPX2PUD5:2; //11:10
        uint32_t GPX2PUD6:2; //13:12
        uint32_t GPX2PUD7:2; //15:14
    } bits;
} GPX2PUD;

typedef union GPX2DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX2DRV0:2; //1:0
        uint32_t GPX2DRV1:2; //3:2
        uint32_t GPX2DRV2:2; //5:4
        uint32_t GPX2DRV3:2; //7:6
        uint32_t GPX2DRV4:2; //9:8
        uint32_t GPX2DRV5:2; //11:10
        uint32_t GPX2DRV6:2; //13:12
        uint32_t GPX2DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPX2DRV;

/////////////////////////////////////////////////

typedef union GPX3CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX3CON0:4; //3:0
        uint32_t GPX3CON1:4; //7:4
        uint32_t GPX3CON2:4; //11:8
        uint32_t GPX3CON3:4; //15:12
        uint32_t GPX3CON4:4; //19:16
        uint32_t GPX3CON5:4; //23:20
        uint32_t GPX3CON6:4; //27:24
        uint32_t GPX3CON7:4; //31:28
    } bits;
} GPX3CON;

typedef union GPX3DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX3DAT:8; //7:0
    } bits;
} GPX3DAT;

typedef union GPX3PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX3PUD0:2; //1:0
        uint32_t GPX3PUD1:2; //3:2
        uint32_t GPX3PUD2:2; //5:4
        uint32_t GPX3PUD3:2; //7:6
        uint32_t GPX3PUD4:2; //9:8
        uint32_t GPX3PUD5:2; //11:10
        uint32_t GPX3PUD6:2; //13:12
        uint32_t GPX3PUD7:2; //15:14
    } bits;
} GPX3PUD;

typedef union GPX3DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX3DRV0:2; //1:0
        uint32_t GPX3DRV1:2; //3:2
        uint32_t GPX3DRV2:2; //5:4
        uint32_t GPX3DRV3:2; //7:6
        uint32_t GPX3DRV4:2; //9:8
        uint32_t GPX3DRV5:2; //11:10
        uint32_t GPX3DRV6:2; //13:12
        uint32_t GPX3DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPX3DRV;

/////////////////////////////////////////////////

typedef union EXTINT40CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT40CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT40CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT40CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT40CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT40CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT40CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT40CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT40CON6:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT40CON;

typedef union EXTINT41CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT41CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT41CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT41CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT41CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT41CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT41CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT41CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT41CON6:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT41CON;

typedef union EXTINT42CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT42CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT42CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT42CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT42CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT42CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT42CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT42CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT42CON6:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT42CON;

typedef union EXTINT43CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT43CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT43CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT43CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT43CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT43CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT43CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT43CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT43CON6:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT43CON;

/////////////////////////////////////////////////

typedef union EXTINT40FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH150:6; //5:0
        uint32_t FLTSEL150:1;   //6
        uint32_t FLTEN150:1;    //7
        uint32_t FLTWIDTH151:6; //13:8
        uint32_t FLTSEL151:1;   //14
        uint32_t FLTEN151:1;    //15
        uint32_t FLTWIDTH152:6; //21:16
        uint32_t FLTSEL152:1;   //22
        uint32_t FLTEN152:1;    //23
        uint32_t FLTWIDTH153:6; //29:24
        uint32_t FLTSEL153:1;   //30
        uint32_t FLTEN153:1;    //31
    } bits;    
} EXTINT40FLTCON0;

typedef union EXTINT40FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH154:6; //5:0
        uint32_t FLTSEL154:1;   //6
        uint32_t FLTEN154:1;    //7
        uint32_t FLTWIDTH155:6; //13:8
        uint32_t FLTSEL155:1;   //14
        uint32_t FLTEN155:1;    //15
        uint32_t FLTWIDTH156:6; //21:16
        uint32_t FLTSEL156:1;   //22
        uint32_t FLTEN156:1;    //23
        uint32_t FLTWIDTH157:6; //29:24
        uint32_t FLTSEL157:1;   //30
        uint32_t FLTEN157:1;    //31
    } bits;    
} EXTINT40FLTCON1;

typedef union EXTINT41FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH160:6; //5:0
        uint32_t FLTSEL160:1;   //6
        uint32_t FLTEN160:1;    //7
        uint32_t FLTWIDTH161:6; //13:8
        uint32_t FLTSEL161:1;   //14
        uint32_t FLTEN161:1;    //15
        uint32_t FLTWIDTH162:6; //21:16
        uint32_t FLTSEL162:1;   //22
        uint32_t FLTEN162:1;    //23
        uint32_t FLTWIDTH163:6; //29:24
        uint32_t FLTSEL163:1;   //30
        uint32_t FLTEN163:1;    //31
    } bits;    
} EXTINT41FLTCON0;

typedef union EXTINT41FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH164:6; //5:0
        uint32_t FLTSEL164:1;   //6
        uint32_t FLTEN164:1;    //7
        uint32_t FLTWIDTH165:6; //13:8
        uint32_t FLTSEL165:1;   //14
        uint32_t FLTEN165:1;    //15
        uint32_t FLTWIDTH166:6; //21:16
        uint32_t FLTSEL166:1;   //22
        uint32_t FLTEN166:1;    //23
        uint32_t FLTWIDTH167:6; //29:24
        uint32_t FLTSEL167:1;   //30
        uint32_t FLTEN167:1;    //31
    } bits;    
} EXTINT41FLTCON1;

typedef union EXTINT42FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH170:6; //5:0
        uint32_t FLTSEL170:1;   //6
        uint32_t FLTEN170:1;    //7
        uint32_t FLTWIDTH171:6; //13:8
        uint32_t FLTSEL171:1;   //14
        uint32_t FLTEN171:1;    //15
        uint32_t FLTWIDTH172:6; //21:16
        uint32_t FLTSEL172:1;   //22
        uint32_t FLTEN172:1;    //23
        uint32_t FLTWIDTH173:6; //29:24
        uint32_t FLTSEL173:1;   //30
        uint32_t FLTEN173:1;    //31
    } bits;    
} EXTINT42FLTCON0;

typedef union EXTINT42FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH174:6; //5:0
        uint32_t FLTSEL174:1;   //6
        uint32_t FLTEN174:1;    //7
        uint32_t FLTWIDTH175:6; //13:8
        uint32_t FLTSEL175:1;   //14
        uint32_t FLTEN175:1;    //15
        uint32_t FLTWIDTH176:6; //21:16
        uint32_t FLTSEL176:1;   //22
        uint32_t FLTEN176:1;    //23
        uint32_t FLTWIDTH177:6; //29:24
        uint32_t FLTSEL177:1;   //30
        uint32_t FLTEN177:1;    //31
    } bits;    
} EXTINT42FLTCON1;

typedef union EXTINT43FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH180:6; //5:0
        uint32_t FLTSEL180:1;   //6
        uint32_t FLTEN180:1;    //7
        uint32_t FLTWIDTH181:6; //13:8
        uint32_t FLTSEL181:1;   //14
        uint32_t FLTEN181:1;    //15
        uint32_t FLTWIDTH182:6; //21:16
        uint32_t FLTSEL182:1;   //22
        uint32_t FLTEN182:1;    //23
        uint32_t FLTWIDTH183:6; //29:24
        uint32_t FLTSEL183:1;   //30
        uint32_t FLTEN183:1;    //31
    } bits;    
} EXTINT43FLTCON0;

typedef union EXTINT43FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH184:6; //5:0
        uint32_t FLTSEL184:1;   //6
        uint32_t FLTEN184:1;    //7
        uint32_t FLTWIDTH185:6; //13:8
        uint32_t FLTSEL185:1;   //14
        uint32_t FLTEN185:1;    //15
        uint32_t FLTWIDTH186:6; //21:16
        uint32_t FLTSEL186:1;   //22
        uint32_t FLTEN186:1;    //23
        uint32_t FLTWIDTH187:6; //29:24
        uint32_t FLTSEL187:1;   //30
        uint32_t FLTEN187:1;    //31
    } bits;    
} EXTINT43FLTCON1;

///////////////////////////////////////////////////

typedef union EXTINT40MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT40MASK0:1; //0
        uint32_t EXTINT40MASK1:1; //1
        uint32_t EXTINT40MASK2:1; //2
        uint32_t EXTINT40MASK3:1; //3
        uint32_t EXTINT40MASK4:1; //4
        uint32_t EXTINT40MASK5:1; //5
        uint32_t EXTINT40MASK6:1; //6
        uint32_t EXTINT40MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT40MASK;

typedef union EXTINT41MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT41MASK0:1; //0
        uint32_t EXTINT41MASK1:1; //1
        uint32_t EXTINT41MASK2:1; //2
        uint32_t EXTINT41MASK3:1; //3
        uint32_t EXTINT41MASK4:1; //4
        uint32_t EXTINT41MASK5:1; //5
        uint32_t EXTINT41MASK6:1; //6
        uint32_t EXTINT41MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT41MASK;

typedef union EXTINT42MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT42MASK0:1; //0
        uint32_t EXTINT42MASK1:1; //1
        uint32_t EXTINT42MASK2:1; //2
        uint32_t EXTINT42MASK3:1; //3
        uint32_t EXTINT42MASK4:1; //4
        uint32_t EXTINT42MASK5:1; //5
        uint32_t EXTINT42MASK6:1; //6
        uint32_t EXTINT42MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT42MASK;

typedef union EXTINT43MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT43MASK0:1; //0
        uint32_t EXTINT43MASK1:1; //1
        uint32_t EXTINT43MASK2:1; //2
        uint32_t EXTINT43MASK3:1; //3
        uint32_t EXTINT43MASK4:1; //4
        uint32_t EXTINT43MASK5:1; //5
        uint32_t EXTINT43MASK6:1; //6
        uint32_t EXTINT43MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT43MASK;

///////////////////////////////////////////////////////////

typedef union EXTINT40PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT40PEND0:1; //0
        uint32_t EXTINT40PEND1:1; //1
        uint32_t EXTINT40PEND2:1; //2
        uint32_t EXTINT40PEND3:1; //3
        uint32_t EXTINT40PEND4:1; //4
        uint32_t EXTINT40PEND5:1; //5
        uint32_t EXTINT40PEND6:1; //6
        uint32_t EXTINT40PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT40PEND;

typedef union EXTINT41PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT41PEND0:1; //0
        uint32_t EXTINT41PEND1:1; //1
        uint32_t EXTINT41PEND2:1; //2
        uint32_t EXTINT41PEND3:1; //3
        uint32_t EXTINT41PEND4:1; //4
        uint32_t EXTINT41PEND5:1; //5
        uint32_t EXTINT41PEND6:1; //6
        uint32_t EXTINT41PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT41PEND;

typedef union EXTINT42PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT42PEND0:1; //0
        uint32_t EXTINT42PEND1:1; //1
        uint32_t EXTINT42PEND2:1; //2
        uint32_t EXTINT42PEND3:1; //3
        uint32_t EXTINT42PEND4:1; //4
        uint32_t EXTINT42PEND5:1; //5
        uint32_t EXTINT42PEND6:1; //6
        uint32_t EXTINT42PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT42PEND;

typedef union EXTINT43PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT43PEND0:1; //0
        uint32_t EXTINT43PEND1:1; //1
        uint32_t EXTINT43PEND2:1; //2
        uint32_t EXTINT43PEND3:1; //3
        uint32_t EXTINT43PEND4:1; //4
        uint32_t EXTINT43PEND5:1; //5
        uint32_t EXTINT43PEND6:1; //6
        uint32_t EXTINT43PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT43PEND;

////////////////////////////////////////////////

typedef union BASEADDR2PDNEN_u
{
    uint8_t all_val;
    struct 
    {
        uint32_t PDNEN:1; //0
        uint32_t PDNENCFG:1; //1
        uint32_t Reserved:6; //7:2
    } bits;
} BASEADDR2PDNEN;

/////////////////////////////////////////////////

typedef union GPZCON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPZCON0:4; //3:0
        uint32_t GPZCON1:4; //7:4
        uint32_t GPZCON2:4; //11:8
        uint32_t GPZCON3:4; //15:12
        uint32_t GPZCON4:4; //19:16
        uint32_t GPZCON5:4; //23:20
        uint32_t GPZCON6:4; //27:24
    } bits;
} GPZCON;

typedef union GPZDAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPZDAT:7; //6:0
    } bits;
} GPZDAT;

typedef union GPZPUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPZPUD0:2; //1:0
        uint32_t GPZPUD1:2; //3:2
        uint32_t GPZPUD2:2; //5:4
        uint32_t GPZPUD3:2; //7:6
        uint32_t GPZPUD4:2; //9:8
        uint32_t GPZPUD5:2; //11:10
        uint32_t GPZPUD6:2; //13:12
    } bits;
} GPZPUD;

typedef union GPZDRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPZDRV0:2; //1:0
        uint32_t GPZDRV1:2; //3:2
        uint32_t GPZDRV2:2; //5:4
        uint32_t GPZDRV3:2; //7:6
        uint32_t GPZDRV4:2; //9:8
        uint32_t GPZDRV5:2; //11:10
        uint32_t GPZDRV6:2; //13:12
        uint32_t Unknown:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPZDRV;

typedef union GPZCONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPZ0:2; //1:0
        uint32_t GPZ1:2; //3:2
        uint32_t GPZ2:2; //5:4
        uint32_t GPZ3:2; //7:6
        uint32_t GPZ4:2; //9:8
        uint32_t GPZ5:2; //11:10
        uint32_t GPZ6:2; //13:12
    } bits;   
} GPZCONPDN;

typedef union GPZPUDPDN_u
{
    uint16_t all_val:14;
    struct
    {
        uint32_t GPZ0:2; //1:0
        uint32_t GPZ1:2; //3:2
        uint32_t GPZ2:2; //5:4
        uint32_t GPZ3:2; //7:6
        uint32_t GPZ4:2; //9:8
        uint32_t GPZ5:2; //11:10
        uint32_t GPZ6:2; //13:12
    } bits;   
} GPZPUDPDN;

/////////////////////////////////////////////////

typedef union EXTINT50CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT50CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT50CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT50CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT50CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT50CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT50CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT50CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t Reserved7:4;   //31:28
    } bits;   
} EXTINT50CON;

////////////////////////////////////////////////////////

typedef union EXTINT50FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH10:7;  //6:0
        uint32_t FLTEN10:1;     //7
        uint32_t FLTWIDTH11:7;  //14:8
        uint32_t FLTEN11:1;     //15
        uint32_t FLTWIDTH12:7;  //22:16
        uint32_t FLTEN12:1;     //23
        uint32_t FLTWIDTH13:7;  //30:24
        uint32_t FLTEN13:1;     //31
    } bits;    
} EXTINT50FLTCON0;

typedef union EXTINT50FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH14:7;  //6:0
        uint32_t FLTEN14:1;     //7
        uint32_t FLTWIDTH15:7;  //14:8
        uint32_t FLTEN15:1;     //15
        uint32_t FLTWIDTH16:7;  //22:16
        uint32_t FLTEN16:1;     //23
        uint32_t Reserved:8;    //31:24
    } bits;    
} EXTINT50FLTCON1;

///////////////////////////////////////////////////

typedef union EXTINT50MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT50MASK0:1; //0
        uint32_t EXTINT50MASK1:1; //1
        uint32_t EXTINT50MASK2:1; //2
        uint32_t EXTINT50MASK3:1; //3
        uint32_t EXTINT50MASK4:1; //4
        uint32_t EXTINT50MASK5:1; //5
        uint32_t EXTINT50MASK6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT50MASK;

///////////////////////////////////////////////////////////

typedef union EXTINT50PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT50PEND0:1; //0
        uint32_t EXTINT50PEND1:1; //1
        uint32_t EXTINT50PEND2:1; //2
        uint32_t EXTINT50PEND3:1; //3
        uint32_t EXTINT50PEND4:1; //4
        uint32_t EXTINT50PEND5:1; //5
        uint32_t EXTINT50PEND6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT50PEND;

////////////////////////////////////////////

typedef union EXTINTSERVICEXD_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t SVCNUM:3;       //2:0
        uint32_t SVCGROUPNUM:5;  //7:3
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINTSERVICEXD;

typedef union EXTINTSERVICEPENDXD_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t SVCPEND:8;   //7:0
        uint32_t Reserved:24; //31:8
    } bits;
} EXTINTSERVICEPENDXD;

typedef union EXTINTGRPFIXPRIXD_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTGRPNUM:4;  //3:0
        uint32_t Reserved:28;      //31:4
    } bits;
} EXTINTGRPFIXPRIXD;

///////////////////////////////////////////////////

typedef union EXTINT50FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT50FIXPRI;

////////////////////////////////////////////////

typedef union BASEADDR3PDNEN_u
{
    uint8_t all_val;
    struct 
    {
        uint32_t PDNEN:1; //0
        uint32_t PDNENCFG:1; //1
        uint32_t Reserved:6; //7:2
    } bits;
} BASEADDR3PDNEN;

////////////////////////////////////////////////

typedef union GPV0CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV0CON0:4; //3:0
        uint32_t GPV0CON1:4; //7:4
        uint32_t GPV0CON2:4; //11:8
        uint32_t GPV0CON3:4; //15:12
        uint32_t GPV0CON4:4; //19:16
        uint32_t GPV0CON5:4; //23:20
        uint32_t GPV0CON6:4; //27:24
        uint32_t GPV0CON7:4; //28:31
    } bits;
} GPV0CON;

typedef union GPV0DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV0DAT:8; //7:0
    } bits;
} GPV0DAT;

typedef union GPV0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV0PUD0:2; //1:0
        uint32_t GPV0PUD1:2; //3:2
        uint32_t GPV0PUD2:2; //5:4
        uint32_t GPV0PUD3:2; //7:6
        uint32_t GPV0PUD4:2; //9:8
        uint32_t GPV0PUD5:2; //11:10
        uint32_t GPV0PUD6:2; //13:12
        uint32_t GPV0PUD7:2; //15:14
    } bits;
} GPV0PUD;

typedef union GPV0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV0DRV0:2; //1:0
        uint32_t GPV0DRV1:2; //3:2
        uint32_t GPV0DRV2:2; //5:4
        uint32_t GPV0DRV3:2; //7:6
        uint32_t GPV0DRV4:2; //9:8
        uint32_t GPV0DRV5:2; //11:10
        uint32_t GPV0DRV6:2; //13:12
        uint32_t GPV0DRV7:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPV0DRV;

typedef union GPV0CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV00:2; //1:0
        uint32_t GPV01:2; //3:2
        uint32_t GPV02:2; //5:4
        uint32_t GPV03:2; //7:6
        uint32_t GPV04:2; //9:8
        uint32_t GPV05:2; //11:10
        uint32_t GPV06:2; //13:12
        uint32_t GPV07:2; //15:14 
    } bits;   
} GPV0CONPDN;

typedef union GPV0PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPV00:2; //1:0
        uint32_t GPV01:2; //3:2
        uint32_t GPV02:2; //5:4
        uint32_t GPV03:2; //7:6
        uint32_t GPV04:2; //9:8
        uint32_t GPV05:2; //11:10
        uint32_t GPV06:2; //13:12
        uint32_t GPV07:2; //15:14
    } bits;   
} GPV0PUDPDN;

////////////////////////////////////////////////

typedef union GPV1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV1CON0:4; //3:0
        uint32_t GPV1CON1:4; //7:4
        uint32_t GPV1CON2:4; //11:8
        uint32_t GPV1CON3:4; //15:12
        uint32_t GPV1CON4:4; //19:16
        uint32_t GPV1CON5:4; //23:20
        uint32_t GPV1CON6:4; //27:24
        uint32_t GPV1CON7:4; //28:31
    } bits;
} GPV1CON;

typedef union GPV1DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV1DAT:8; //7:0
    } bits;
} GPV1DAT;

typedef union GPV1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV1PUD0:2; //1:0
        uint32_t GPV1PUD1:2; //3:2
        uint32_t GPV1PUD2:2; //5:4
        uint32_t GPV1PUD3:2; //7:6
        uint32_t GPV1PUD4:2; //9:8
        uint32_t GPV1PUD5:2; //11:10
        uint32_t GPV1PUD6:2; //13:12
        uint32_t GPV1PUD7:2; //15:14
    } bits;
} GPV1PUD;

typedef union GPV1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV1DRV0:2; //1:0
        uint32_t GPV1DRV1:2; //3:2
        uint32_t GPV1DRV2:2; //5:4
        uint32_t GPV1DRV3:2; //7:6
        uint32_t GPV1DRV4:2; //9:8
        uint32_t GPV1DRV5:2; //11:10
        uint32_t GPV1DRV6:2; //13:12
        uint32_t GPV1DRV7:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPV1DRV;

typedef union GPV1CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV10:2; //1:0
        uint32_t GPV11:2; //3:2
        uint32_t GPV12:2; //5:4
        uint32_t GPV13:2; //7:6
        uint32_t GPV14:2; //9:8
        uint32_t GPV15:2; //11:10
        uint32_t GPV16:2; //13:12
        uint32_t GPV17:2; //15:14 
    } bits;   
} GPV1CONPDN;

typedef union GPV1PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPV10:2; //1:0
        uint32_t GPV11:2; //3:2
        uint32_t GPV12:2; //5:4
        uint32_t GPV13:2; //7:6
        uint32_t GPV14:2; //9:8
        uint32_t GPV15:2; //11:10
        uint32_t GPV16:2; //13:12
        uint32_t GPV17:2; //15:14
    } bits;   
} GPV1PUDPDN;

/////////////////////////////////////////

typedef union ETC7PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ETC7PUD0:2; //1:0
        uint32_t ETC7PUD1:2; //3:2
    } bits;   
} ETC7PUD;

typedef union ETC7DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ETC7DRV0:2; //1:0
        uint32_t ETC7DRV1:2; //3:2
        uint32_t Unknown:12;  //15:4
        uint32_t Reserved:8; //23:16
    } bits;   
} ETC7DRV;

////////////////////////////////////////////////

typedef union GPV2CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV2CON0:4; //3:0
        uint32_t GPV2CON1:4; //7:4
        uint32_t GPV2CON2:4; //11:8
        uint32_t GPV2CON3:4; //15:12
        uint32_t GPV2CON4:4; //19:16
        uint32_t GPV2CON5:4; //23:20
        uint32_t GPV2CON6:4; //27:24
        uint32_t GPV2CON7:4; //28:31
    } bits;
} GPV2CON;

typedef union GPV2DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV2DAT:8; //7:0
    } bits;
} GPV2DAT;

typedef union GPV2PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV2PUD0:2; //1:0
        uint32_t GPV2PUD1:2; //3:2
        uint32_t GPV2PUD2:2; //5:4
        uint32_t GPV2PUD3:2; //7:6
        uint32_t GPV2PUD4:2; //9:8
        uint32_t GPV2PUD5:2; //11:10
        uint32_t GPV2PUD6:2; //13:12
        uint32_t GPV2PUD7:2; //15:14
    } bits;
} GPV2PUD;

typedef union GPV2DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV2DRV0:2; //1:0
        uint32_t GPV2DRV1:2; //3:2
        uint32_t GPV2DRV2:2; //5:4
        uint32_t GPV2DRV3:2; //7:6
        uint32_t GPV2DRV4:2; //9:8
        uint32_t GPV2DRV5:2; //11:10
        uint32_t GPV2DRV6:2; //13:12
        uint32_t GPV2DRV7:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPV2DRV;

typedef union GPV2CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV20:2; //1:0
        uint32_t GPV21:2; //3:2
        uint32_t GPV22:2; //5:4
        uint32_t GPV23:2; //7:6
        uint32_t GPV24:2; //9:8
        uint32_t GPV25:2; //11:10
        uint32_t GPV26:2; //13:12
        uint32_t GPV27:2; //15:14 
    } bits;   
} GPV2CONPDN;

typedef union GPV2PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPV20:2; //1:0
        uint32_t GPV21:2; //3:2
        uint32_t GPV22:2; //5:4
        uint32_t GPV23:2; //7:6
        uint32_t GPV24:2; //9:8
        uint32_t GPV25:2; //11:10
        uint32_t GPV26:2; //13:12
        uint32_t GPV27:2; //15:14
    } bits;   
} GPV2PUDPDN;

////////////////////////////////////////////////

typedef union GPV3CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV3CON0:4; //3:0
        uint32_t GPV3CON1:4; //7:4
        uint32_t GPV3CON2:4; //11:8
        uint32_t GPV3CON3:4; //15:12
        uint32_t GPV3CON4:4; //19:16
        uint32_t GPV3CON5:4; //23:20
        uint32_t GPV3CON6:4; //27:24
        uint32_t GPV3CON7:4; //28:31
    } bits;
} GPV3CON;

typedef union GPV3DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV3DAT:8; //7:0
    } bits;
} GPV3DAT;

typedef union GPV3PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV3PUD0:2; //1:0
        uint32_t GPV3PUD1:2; //3:2
        uint32_t GPV3PUD2:2; //5:4
        uint32_t GPV3PUD3:2; //7:6
        uint32_t GPV3PUD4:2; //9:8
        uint32_t GPV3PUD5:2; //11:10
        uint32_t GPV3PUD6:2; //13:12
        uint32_t GPV3PUD7:2; //15:14
    } bits;
} GPV3PUD;

typedef union GPV3DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV3DRV0:2; //1:0
        uint32_t GPV3DRV1:2; //3:2
        uint32_t GPV3DRV2:2; //5:4
        uint32_t GPV3DRV3:2; //7:6
        uint32_t GPV3DRV4:2; //9:8
        uint32_t GPV3DRV5:2; //11:10
        uint32_t GPV3DRV6:2; //13:12
        uint32_t GPV3DRV7:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPV3DRV;

typedef union GPV3CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV30:2; //1:0
        uint32_t GPV31:2; //3:2
        uint32_t GPV32:2; //5:4
        uint32_t GPV33:2; //7:6
        uint32_t GPV34:2; //9:8
        uint32_t GPV35:2; //11:10
        uint32_t GPV36:2; //13:12
        uint32_t GPV37:2; //15:14 
    } bits;   
} GPV3CONPDN;

typedef union GPV3PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPV30:2; //1:0
        uint32_t GPV31:2; //3:2
        uint32_t GPV32:2; //5:4
        uint32_t GPV33:2; //7:6
        uint32_t GPV34:2; //9:8
        uint32_t GPV35:2; //11:10
        uint32_t GPV36:2; //13:12
        uint32_t GPV37:2; //15:14
    } bits;   
} GPV3PUDPDN;

/////////////////////////////////////////

typedef union ETC8PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ETC8PUD0:2; //1:0
        uint32_t ETC8PUD1:2; //3:2
    } bits;   
} ETC8PUD;

typedef union ETC8DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ETC8DRV0:2; //1:0
        uint32_t ETC8DRV1:2; //3:2
        uint32_t Unknown:12;  //15:4
        uint32_t Reserved:8; //23:16
    } bits;   
} ETC8DRV;

////////////////////////////////////////////////

typedef union GPV4CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV4CON0:4; //3:0
        uint32_t GPV4CON1:4; //7:4
    } bits;
} GPV4CON;

typedef union GPV4DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV4DAT:2; //1:0
    } bits;
} GPV4DAT;

typedef union GPV4PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV4PUD0:2; //1:0
        uint32_t GPV4PUD1:2; //3:2
    } bits;
} GPV4PUD;

typedef union GPV4DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV4DRV0:2; //1:0
        uint32_t GPV4DRV1:2; //3:2
        uint32_t Unknown:12; //15:4
        uint32_t Reserved:8; //23:16
    } bits;
} GPV4DRV;

typedef union GPV4CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV40:2; //1:0
        uint32_t GPV41:2; //3:2
    } bits;   
} GPV4CONPDN;

typedef union GPV4PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPV40:2; //1:0
        uint32_t GPV41:2; //3:2
    } bits;   
} GPV4PUDPDN;

/////////////////////////////////////////////////

typedef union EXTINT30CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT30CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT30CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT30CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT30CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT30CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT30CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT30CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT30CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT30CON;

typedef union EXTINT31CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT31CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT31CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT31CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT31CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT31CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT31CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT31CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT31CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT31CON;

typedef union EXTINT32CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT32CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT32CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT32CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT32CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT32CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT32CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT32CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT32CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT32CON;

typedef union EXTINT33CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT33CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT33CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT33CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT33CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT33CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT33CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT33CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT33CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT33CON;

#endif 