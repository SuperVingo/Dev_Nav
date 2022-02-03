#ifndef __NAND_NAND_ADDR_H__    
#define __NAND_NAND_ADDR_H__  

#include "ustdint.h"

/*
 * NFCONF
 * 
 * Address = NAND Base Address + 0x0000
 * Reset Value = 0x0000_1000
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                |   [0]   |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | This bit indicates the number of address cycle of NAND flash |             |
 *                     |         |      | memory.                                                      |             |
 *                     |         |      | When Page Size is 512 Bytes:                                 |             |
 *                     |         |      | 0 = 3 Address Cycle                                          |             |
 *                     |         |      | 1 = 4 Address Cycle                                          |             |
 * AddrCycle           |   [1]   |  RW  | When page size is 2K or 4K:                                  |      0      |
 *                     |         |      | 0 = 4 Address Cycle                                          |             |
 *                     |         |      | 1 = 5 Address Cycle                                          |             |
 *                     |         |      | NOTE: It is only used for Lock scheme. Refer to section      |             |
 *                     |         |      | 10.4.12 Lock Scheme for Data Protection, for more            |             |
 *                     |         |      | information.                                                 |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | This bit indicates the page size of NAND flash memory        |             |
 *                     |         |      | 00 = 2048 bytes                                              |             |
 *                     |         |      | 01 = 512 bytes                                               |             |
 *                     |         |      | 10 = 4096 bytes                                              |             |
 * PageSize            |  [3:2]  |  RW  | 11 = 2048 bytes                                              |      0      |
 *                     |         |      | NOTE: Using 1-bit ECC it determines the message length. It   |             |
 *                     |         |      | does not determine the message length using MsgLength        |             |
 *                     |         |      | (NFCONF[25] field. NFCON does not consider the actual        |             |
 *                     |         |      | page size of external NAND. Software handles the page        |             |
 *                     |         |      | size.                                                        |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * TWRPH1              |  [7:4]  |  RW  | TWRPH1 duration setting value (0-15)                         |      0      |
 *                     |         |      | - Duration = HCLK x (TWRPH1 + 1)                             |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | TWRPH0 duration setting value (0-15)                         |             |
 * TWRPH0              |  [11:8] |  RW  | - Duration = HCLK x (TWRPH0 + 1)                             |      0      |
 *                     |         |      | NOTE: You should add addtional cycles about 10ns for page    |             |
 *                     |         |      | read because of addtional signal delay on PCB pattern.       |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * TACLS               | [15:12] |  RW  | CLE and ALE duration setting value (0-15)                    |     0x1     |
 *                     |         |      | - Duration = HCLK x TACLS                                    |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [22:16] |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | This bit indicates the type of ECC to use.                   |             |
 * ECCType0            | [24:23] |  RW  | 00 = 1-bit ECC                                               |      0      |
 *                     |         |      | 10 = 4-Bit ECC                                               |             |
 *                     |         |      | 01 = 11 = Disables 1-bit and 4-bit ECC                       |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * MsgLength           |   [25]  |  RW  | 0 = 512 bytes message length                                 |     0x0     |
 *                     |         |      | 1 = 24 bytes message length                                  |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:26] |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 */

typedef union NFCONF_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Reserved0:1;       //0
        uint32_t AddrCycle:1;       //1
        uint32_t PageSize:2;        //3:2
        uint32_t TWRPH1:4;          //7:4
        uint32_t TWRPH0:4;          //11:8
        uint32_t TACLS:4;           //15:12
        uint32_t Reserved1:7;       //22:16
        uint32_t ECCType0:2;        //24:23
        uint32_t MsgLength:1;       //25
        uint32_t Reserved2:6;       //31:26
    } bits;
} NFCONF;

/*
 * NFCONT
 * 
 * Address = NAND Base Address + 0x0004
 * Reset Value = 0x00C1_00C6
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | NAND flash controller operating mode                         |             |
 * MODE                |   [0]   |  RW  | 0 = Disables NAND flash controller                           |      0      |
 *                     |         |      | 0 = Enables NAND flash controller                            |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | NAND flash memory nRCS[0] signal control                     |             |
 *                     |         |      | 0 = Force nRCS[0] to low (enables chip select)               |             |
 *                     |         |      | 1 = Force nRCS[0] to high (disables chip select)             |             |
 * Reg_nCE0            |   [1]   |  RW  | NOTE: The setting all nCE[3:0] zero connect be allowed.      |      1      |
 *                     |         |      | Only one nCE can be asserted to enable external NAND         |             |
 *                     |         |      | flash memory. The lower bit has more priority when user      |             |
 *                     |         |      | set all nCE[3:0] zeros.                                      |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * Reg_nCE1            |   [2]   |  RW  | NAND flash memory nRCS[1] signal control                     |      1      |
 * ------------------------------------------------------------------------------------------------------------------|
 * HW_nCE              |   [3]   |  RW  | Reserved (HW_nCE)                                            |      0      |
 * ------------------------------------------------------------------------------------------------------------------|
 * InitSECC            |   [4]   |  RW  | 1 = Initializes spare area ECC decoder/encoder (Write-       |      0      |
 *                     |         |      | only)                                                        |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * InitMECC            |   [5]   |  RW  | 1 = Initializes main area ECC decoder/encoder (Write-        |      0      |
 *                     |         |      | only)                                                        |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Lock Spare area ECC generation                               |             |
 *                     |         |      | 0 = Unlocks Spare ECC                                        |             |
 * SECCLock            |   [6]   |  RW  | 1 = Locks Spare ECC                                          |     0x1     |
 *                     |         |      | Spare area ECC status register is NFSECC                     |             |
 *                     |         |      | (0xB0E0_003C)                                                |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Lock Main area ECC generation                                |             |
 *                     |         |      | 0 = Unlocks Main area ECC                                    |             |
 * MECCLock            |   [7]   |  RW  | 1 = Locks Main area ECC                                      |     0x1     |
 *                     |         |      | Main area ECC status register is NFMECC0/NFMECC1             |             |
 *                     |         |      | (0xB0E0_0034/0xB0E0_0038)                                    |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | RnB transition detection configuration                       |             |
 * RnB_TransMode       |   [8]   |  RW  | 0 = Detects rising edge                                      |      0      |
 *                     |         |      | 1 = Detects falling edge                                     |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | RnB status input signal transition interrupt control         |             |
 * EnbRnINT            |   [9]   |  RW  | 0 = Disables RnB interrupt                                   |      0      |
 *                     |         |      | 1 = Enables RnB interrupt                                    |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Illegal access interrupt control                             |             |
 *                     |         |      | 0 = Disables interrupt                                       |             |
 * EnbIllegalAccINT    |   [10]  |  RW  | 1 = Enables interrupt                                        |      0      |
 *                     |         |      | Illegal access interrupt occurs when CPU tries to program    |             |
 *                     |         |      | or erase locking area (the area setting in NFSBLK)           |             |
 *                     |         |      | (0xB0E0_0020) to NFEBLK (0xB0E0_0024) - 1.                   |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                |   [11]  |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | 4-bit ECC decoding completion interrupt control              |             |
 * EnbMLCDecInt        |   [12]  |  RW  | 0 = Disables interrupt                                       |     0x0     |
 *                     |         |      | 0 = Enables interrupt                                        |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | 4-bit ECC decoding completion interrupt control              |             |
 * EnbMLCEecInt        |   [13]  |  RW  | 0 = Disables interrupt                                       |     0x0     |
 *                     |         |      | 0 = Enables interrupt                                        |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [15:14] |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Soft Lock configuration                                      |             |
 *                     |         |      | 0 = Disables lock                                            |             |
 * LOCK                |   [16]  |  RW  | 1 = Enables lock                                             |      1      |
 *                     |         |      | Software can modify soft lock area any time.                 |             |
 *                     |         |      | Refer to 10.4.12 Lock Scheme for Data Protection, for        |             |
 *                     |         |      | more information                                             |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Lock-tight configuration                                     |             |
 *                     |         |      | 0 = Disables lock-tight                                      |             |
 * LockTight           |   [17]  |  RW  | 1 = Enables lock-tight                                       |      1      |
 *                     |         |      | If this bit is set to 1, you cannot clear this bit.          |             |
 *                     |         |      | Refer to 10.4.12 Lock Scheme for Data Protection, for        |             |
 *                     |         |      | more information                                             |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | 4-bit, ECC encoding/decoding control                         |             |
 * MLCEccDirection     |   [18]  |  RW  | 0 = Decoding 4-bit ECC. It is used for page read             |     0x0     |
 *                     |         |      | 1 = Encoding 4-bit ECC. It is used for page program          |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [21:19] |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | NAND flash memory nRCS[2] signal control                     |             |
 * Reg_nCE2            |   [22]  |  RW  | 0 = Force nRCS[2] to low (Enable chip select)                |     0x1     |
 *                     |         |      | 1 = Force nRCS[2] to high (Disable chip select)              |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | NAND flash memory nRCS[3] signal control                     |             |
 * Reg_nCE3            |   [23]  |  RW  | 0 = Force nRCS[3] to low (Enable chip select)                |     0x1     |
 *                     |         |      | 1 = Force nRCS[3] to high (Disable chip select)              |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:24] |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 */

typedef union NFCONT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MODE:1;                //0
        uint32_t Reg_nCE0:1;            //1
        uint32_t Reg_nCE1:1;            //2
        uint32_t HW_nCE:1;              //3
        uint32_t InitSECC:1;            //4
        uint32_t InitMECC:1;            //5
        uint32_t SECCLock:1;            //6
        uint32_t MECCLock:1;            //7
        uint32_t RnB_TransMode:1;       //8
        uint32_t EnbRnINT:1;            //9
        uint32_t EnbIllegalAccINT:1;    //10
        uint32_t Reserved0:1;           //11
        uint32_t EnbMLCDecInt:1;        //12
        uint32_t EnbMLCEecInt:1;        //13
        uint32_t Reserved1:2;           //15:14
        uint32_t LOCK:1;                //16
        uint32_t LockTight:1;           //17
        uint32_t MLCEccDirection:1;     //18
        uint32_t Reserved2:3;           //21:19
        uint32_t Reg_nCE2:1;            //22
        uint32_t Reg_nCE3:1;            //23
        uint32_t Reserved3:8;           //31:24
    } bits;
} NFCONT;

/*
 * NFCMMD
 * 
 * Address = NAND Base Address + 0x0008
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 * REG_CMMD            |  [7:0]  |  RW  | NAND flash memory command value                              |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [31:8] |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 */

typedef union NFCMMD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t REG_CMMD:8;        //7:0
        uint32_t Reserved0:24;      //31:8
    } bits;
} NFCMMD;

/*
 * NFADDR
 * 
 * Address = NAND Base Address + 0x000C
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 * REG_ADDR            |  [7:0]  |  RW  | NAND flash memory address value                              |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [31:8] |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 */

typedef union NFADDR_u
{
    uint32_t all_val;
    struct
    {
        uint32_t REG_ADDR:8;        //7:0
        uint32_t Reserved0:24;      //31:8
    } bits;
} NFADDR;

/*
 * NFDATA
 * 
 * Address = NAND Base Address + 0x0010
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | NAND flash Read/program data value for I/O                   |             |
 * NFDATA              |  [31:0] |  RW  | NOTE: Refer to 10.4.1 Data Register Configuration, for more  |     0x0     |
 *                     |         |      | information                                                  |             |
 * ------------------------------------------------------------------------------------------------------------------|
 */

typedef union NFDATA_u
{
    uint32_t all_val;
    struct
    {
        uint32_t NFDATA;        //31:0
    } bits;
} NFDATA;

/*
 * NFMECCD0
 * 
 * Address = NAND Base Address + 0x0014
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | 1st ECC.                                                     |             |
 * ECC_DATA0           |  [7:0]  |  RW  | NOTE: In software mode, read this register when you need to  |     0x0     |
 * (ECC0)              |         |      | read 1st ECC value from NAND flash memroy. This register     |             |
 *                     |         |      | has the similar Read function as NFDATA.                     |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [15:8] |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 * ECC_DATA1           |         |      | 2nd ECC.                                                     |             |
 * (ECC1)              | [23:16] |  RW  | NOTE: In software mode, read this register when you need to  |     0x0     |
 *                     |         |      | read 2nd ECC value from NAND flash memory.                   |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:24] |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 * NOTE: It allows only word access.
 */

typedef union NFMECCD0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ECC_DATA0:8;       //7:0
        uint32_t Reserved0:8;       //15:8
        uint32_t ECC_DATA1:8;       //23:16
        uint32_t Reserved1:8;       //31:24
    } bits;
} NFMECCD0;

/*
 * NFMECCD1
 * 
 * Address = NAND Base Address + 0x0018
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | 3rd ECC.                                                     |             |
 * ECC_DATA2           |  [7:0]  |  RW  | NOTE: In software mode, read this register when you need to  |     0x0     |
 * (ECC2)              |         |      | read 3rd ECC value from NAND flash memroy. This register     |             |
 *                     |         |      | has the similar Read function as NFDATA.                     |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [15:8] |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 * ECC_DATA3           |         |      | 4th ECC.                                                     |             |
 * (ECC3)              | [23:16] |  RW  | NOTE: In software mode, read this register when you need to  |     0x0     |
 *                     |         |      | read 4th ECC value from NAND flash memory.                   |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:24] |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 * NOTE: It allows only word access.
 */

typedef union NFMECCD1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ECC_DATA2:8;       //7:0
        uint32_t Reserved0:8;       //15:8
        uint32_t ECC_DATA3:8;       //23:16
        uint32_t Reserved1:8;       //31:24
    } bits;
} NFMECCD1;

/*
 * NFSECCD
 * 
 * Address = NAND Base Address + 0x001C
 * Reset Value = 0x00FF_00FF
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | 1st ECC.                                                     |             |
 * SECCData0           |  [7:0]  |  RW  | NOTE: In software mode, read this register when you need to  |     0xFF    |
 *                     |         |      | read 1st ECC value from NAND flash memroy. This register     |             |
 *                     |         |      | has the similar Read function as NFDATA.                     |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [15:8] |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | 2nd ECC.                                                     |             |
 * SECCData1           | [23:16] |  RW  | NOTE: In software mode, read this register when you need to  |     0xFF    |
 *                     |         |      | read 2nd ECC value from NAND flash memory.                   |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:24] |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 * NOTE: It allows only word access.
 */

typedef union NFSECCD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SECCData0:8;       //7:0
        uint32_t Reserved0:8;       //15:8
        uint32_t SECCData1:8;       //23:16
        uint32_t Reserved1:8;       //31:24
    } bits;
} NFSECCD;

/*
 * NFSBLK
 * 
 * Address = NAND Base Address + 0x0020
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 * SBLK_ADDR0          |  [7:0]  |  RW  | The 1st block address of the block erase operation           |     0x00    |
 *                     |         |      | (Only bit[7:5] are valid.)                                   |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * SBLK_ADDR1          |  [15:8] |  RW  | The 2nd block address of the block erase operation           |     0x00    |
 * ------------------------------------------------------------------------------------------------------------------|
 * SBLK_ADDR2          | [23:16] |  RW  | The 3rd block address of the block erase operation           |     0x00    |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:24] |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 * NOTE: Address of Advance Flash block starts from 3-address cycle. So block address register only requires 3-bytes.
 * Refer to 10.4.12 Lock Scheme for Data Protection, for more information on lock scheme
 */

typedef union NFSBLK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SBLK_ADDR0:8;       //7:0
        uint32_t SBLK_ADDR1:8;       //7:0
        uint32_t SBLK_ADDR2:8;       //7:0
        uint32_t Reserved0:8;        //31:24
    } bits;
} NFSBLK;

/*
 * NFEBLK
 * 
 * Address = NAND Base Address + 0x0024
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 * EBLK_ADDR0          |  [7:0]  |  RW  | The 1st block address of the block erase operation           |     0x00    |
 *                     |         |      | (Only bit[7:5] are valid.)                                   |             |
 * ------------------------------------------------------------------------------------------------------------------|
        uint32_t Reserved0:8;        //31:24
 * ------------------------------------------------------------------------------------------------------------------|
 * EBLK_ADDR2          | [23:16] |  RW  | The 3rd block address of the block erase operation           |     0x00    |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:24] |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 * NOTE: Address of Advance Flash block starts from 3-address cycle. So block address register only requires 3-bytes.
 * Refer to 10.4.12 Lock Scheme for Data Protection, for more information on lock scheme
 */

typedef union NFEBLK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EBLK_ADDR0:8;       //7:0
        uint32_t Reserved0:8;        //31:24
        uint32_t EBLK_ADDR2:8;       //7:0
        uint32_t Reserved0:8;        //31:24
    } bits;
} NFEBLK;

/*
 * NFSTAT
 * 
 * Address = NAND Base Address + 0x0028
 * Reset Value = 0xF080_0F0D
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | The status of RnB[0] input pin                               |             |
 * Flash_RnB           |   [0]   |  RW  | 0 = NAND flash memory busy                                   |      1      |
 * (Read-only)         |         |      | 1 = NAND flash memory ready to operate                       |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                |   [1]   |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 * Flash_nCE[0]        |   [2]   |  RW  | The status of nCE[0] output pin                              |     0x1     |
 * (Read-only)         |         |      |                                                              |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * Flash_nCE[1]        |   [3]   |  RW  | The status of nCE[1] output pin                              |     0x1     |
 * (Read-only)         |         |      |                                                              |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | When RnB[0] low to high transition occurs, this bit is set   |             |
 *                     |         |      | and an interrupt is issued if RnB_TransDetect is enabled.    |             |
 *                     |         |      | To clear this, write "1".                                    |             |
 * RnB_TransDetect     |   [4]   |  RW  | 0 = It does not detect RnB transition                        |      0      |
 *                     |         |      | 1 = It detects RnB transition                                |             |
 *                     |         |      | Transition configuration is set in                           |             |
 *                     |         |      | RnB_TransMode(NFCONT[8])                                     |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Once Soft Lock or Lock-tight is enabled and any illegal      |             |
 *                     |         |      | access (program, erase) to the memory takes place,           |             |
 * Illegal Access      |   [5]   |  RW  | then this bit is set.                                        |      0      |
 *                     |         |      | 0 = It does not detect illegal access                        |             |
 *                     |         |      | 1 = It detects illegal access                                |             |
 *                     |         |      | To clear this value, write 1 to this bit                     |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | When it completes 4-bit ECC decoding, this bit is set and    |             |
 *                     |         |      | it issues an interrupt if it enables MLCDecodeDone. The      |             |
 * MLCDecodeDone       |   [6]   |  RW  | NFMLCBITPT, NFMLCL0, and NFMLCEL1 have vaild                 |      0      |
 *                     |         |      | values. To clear this, write "1"                             |             |
 *                     |         |      | 1 = Completes 4-bit ECC decoding                             |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | When it completes 4-bit ECC encoding, this bit is set and    |             |
 *                     |         |      | it issues an interrupt if it enables MLCEncodeDone. The      |             |
 * MLCEncodeDone       |   [7]   |  RW  | NFMLCECC0, and NFMLCECC1 have vaild values. To               |      0      |
 *                     |         |      | clear this, write "1"                                        |             |
 *                     |         |      | 1 = Completes 4-bit ECC encoding                             |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * Flash_nCE[3:0]      |  [11:8] |  RW  | The status of nCE[1] output pin                              |     0xF     |
 * (Read-only)         |         |      |                                                              |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [23:12] |  -   | Reserved                                                     |    0x800    |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | When RnB[3:0] low to high transition occurs, this bit is     |             |
 *                     |         |      | set and an interrupt is issued if RnB_TransDetect_GRP        |             |
 *                     |         |      | is enabled. To clear this, write "1".                        |             |
 * RnB_TransDetect_    | [27:24] |  RW  | 0 = RnB transition is not detected.                          |      -      |
 * GRP                 |         |      | 1 = RnB transition is detected                               |             |
 *                     |         |      | Transition configuration is set in                           |             |
 *                     |         |      | RnB_TransMode(NFCONT[8])                                     |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | The status of RnB[3:0] input pin                             |             |
 * Flash_RnB_GRP       | [31:28] |  RW  | 0 = NAND flash memory busy                                   |     0xF     |
 *                     |         |      | 1 = NAND flash memory ready to operate                       |             |
 * ------------------------------------------------------------------------------------------------------------------|
 */

typedef union NFSTAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Flash_RnB:1;               //0
        uint32_t Reserved0:1;               //1
        uint32_t Flash_nCE_0:1;             //2
        uint32_t Flash_nCE_0:1;             //3
        uint32_t RnB_TransDetect:1;         //4
        uint32_t Illegal_Access:1;          //5
        uint32_t MLCDecodeDone:1;           //6
        uint32_t MLCEncodeDone:1;           //7
        uint32_t Flash_nCE_3_0:4;           //11:8
        uint32_t Reserved1:12;              //23:12
        uint32_t RnB_TransDetect_GRP:4;     //27:24
        uint32_t Flash_RnB_GRP:4;           //31:28
    } bits;
} NFSTAT;

/*
 * NFECCERR0
 * 
 * Address = NAND Base Address + 0x002C
 * Reset Value = 0x0003_FFF2
 * 
 * When ECC Type is 1-bit ECC
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Indicates whether main data area bit fail error occurred     |             |
 *                     |         |      | 00 = No Error                                                |             |
 * ECCMainErrNo        |  [1:0]  |   R  | 01 = 1-bit Error (Correctable)                               |     0x10    |
 *                     |         |      | 10 = Multiple Error                                          |             |
 *                     |         |      | 11 = ECC area Error                                          |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Indicates whether spare area bit fail error occurred         |             |
 *                     |         |      | 00 = No Error                                                |             |
 * ECCSprErrNO         |  [3:2]  |   R  | 01 = 1-bit Error (Correctable)                               |     0x00    |
 *                     |         |      | 10 = Multiple Error                                          |             |
 *                     |         |      | 11 = ECC area Error                                          |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * ECCBitAddr          |  [6:4]  |   R  | In main data area, indicates which bit is error              |     111     |
 * ------------------------------------------------------------------------------------------------------------------|
 * ECCDataAddr         |  [17:7] |   R  | In main data area, indicates which number data is error      |    0x7FF    |
 * ------------------------------------------------------------------------------------------------------------------|
 * ECCSBitAddr         | [20:18] |   R  | In spare area, indicates which bit is error                  |     000     |
 * ------------------------------------------------------------------------------------------------------------------|
 * ECCSDataAddr        | [24:21] |   R  | In main data area, indicates which number data is error      |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:25] |  -   | Reserved                                                     |     0x00    |
 * ------------------------------------------------------------------------------------------------------------------|
 * NOTE: The above values are valid only when both ECC register and ECC status register have valid value.
 * 
 * When ECC Type is 4-bit ECC
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 * MLCErrLocation1     |  [9:0]  |   R  | Error byte location of 1st bit error                         |    0x000    |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [15:10] |  -   | Reserved                                                     |     0x00    |
 * ------------------------------------------------------------------------------------------------------------------|
 * MLCErrLocation2     | [25:16] |   R  | Error byte location of 2nd bit error                         |    0x000    |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | 4-bit ECC decoding result                                    |             |
 *                     |         |      | 000 = No error                                               |             |
 *                     |         |      | 001 = 1-bit error                                            |             |
 * MLCECCErr           | [28:26] |   R  | 010 = 2-bit error                                            |     000     |
 *                     |         |      | 011 = 3-bit error                                            |             |
 *                     |         |      | 100 = 4-bit error                                            |             |
 *                     |         |      | 101 = Uncorrectable                                          |             |
 *                     |         |      | 11x = Reserved                                               |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * MLCFreePage         |   [29]  |   R  | Indicates the page data read from NAND flash has all         |      0      |
 *                     |         |      | "FF" value                                                   |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * MLCECCReady         |   [30]  |   R  | ECC Ready bit                                                |      1      |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Indicates the 4-bit ECC decoding engine is searching         |             |
 * MLCECCBusy          |   [31]  |   R  | whether a error exists or not                                |     0x0     |
 *                     |         |      | 0 = Idle                                                     |             |
 *                     |         |      | 1 = Busy                                                     |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * NOTE: These values are updated when ECCDecodeDone (NFSTAT[6]) is set("1")
 */

typedef union NFECCERR0_1B_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ECCMainErrNo:2;        //1:0
        uint32_t ECCSprErrNO:2;         //3:2
        uint32_t ECCBitAddr:3;          //6:4
        uint32_t ECCDataAddr:11;        //17:7
        uint32_t ECCSBitAddr:3;         //20:18
        uint32_t ECCSDataAddr:4;        //24:21
        uint32_t Reserved0:7;           //31:25
    } bits;
} NFECCERR0_1B;

typedef union NFECCERR0_4B_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MLCErrLocation1:10;    //9:0
        uint32_t Reserved0:6;           //15:10
        uint32_t MLCErrLocation2:10;    //25:16
        uint32_t MLCECCErr:3;           //28:26
        uint32_t MLCFreePage:1;         //29
        uint32_t MLCECCReady:1;         //30
        uint32_t MLCECCBusy:1;          //31
    } bits;
} NFECCERR0_4B;

/*
 * NFECCERR1
 * 
 * Address = NAND Base Address + 0x0030
 * Reset Value = 0x0000_0000
 * 
 * When ECC Type is 4-bit ECC
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 * MLCErrLocation3     |  [9:0]  |   R  | Error byte location of 3rd bit error                         |     0x00    |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [15:10] |  -   | Reserved                                                     |     0x00    |
 * ------------------------------------------------------------------------------------------------------------------|
 * MLCErrLocation4     | [25:16] |   R  | Error byte location of 4th bit error                         |     0x00    |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:26] |  -   | Reserved                                                     |    0x000    |
 * ------------------------------------------------------------------------------------------------------------------|
 * NOTE: These values are updated when ECCDecodeDone (NFSTAT[6]) is set ("1").
 */

typedef union NFECCERR1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MLCErrLocation3:10;    //9:0
        uint32_t Reserved0:6;           //15:10
        uint32_t MLCErrLocation4:10;    //25:16
        uint32_t Reserved1:6;           //31:26
    } bits;
} NFECCERR1;

/*
 * NFMECC0
 * 
 * Address = NAND Base Address + 0x0034
 * Reset Value = 0xFFFF_FFFF
 * 
 * When ECC Type is 1-bit ECC
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 * MECC0               |  [7:0]  |   R  | ECC0 for data                                                |     0xFF    |
 * ------------------------------------------------------------------------------------------------------------------|
 * MECC1               |  [15:8] |   R  | ECC1 for data                                                |     0xFF    |
 * ------------------------------------------------------------------------------------------------------------------|
 * MECC2               | [23:16] |   R  | ECC2 for data                                                |     0xFF    |
 * ------------------------------------------------------------------------------------------------------------------|
 * MECC3               | [31:24] |   R  | ECC3 for data                                                |     0xFF    |
 * ------------------------------------------------------------------------------------------------------------------|
 * NOTE: The NAND flash controller generate NFMECC0/1 when read or write main area data while the MainECCLock
 * (NFCONT[7]) bit is "0" (Unlock).
 * 
 * When ECC Type is 4-bit ECC
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 * 1st Parity          |  [7:0]  |   R  | 1st Check parity generated from main area (512 bytes)        |     0x00    |
 * ------------------------------------------------------------------------------------------------------------------|
 * 2nd Parity          |  [15:8] |   R  | 2nd Check parity generated from main area (512 bytes)        |     0x00    |
 * ------------------------------------------------------------------------------------------------------------------|
 * 3rd Parity          | [23:16] |   R  | 3rd Check parity generated from main area (512 bytes)        |     0x00    |
 * ------------------------------------------------------------------------------------------------------------------|
 * 4th Parity          | [31:24] |   R  | 4th Check parity generated from main area (512 bytes)        |     0x00    |
 * ------------------------------------------------------------------------------------------------------------------|
 * NOTE: The NAND flash controller generate these ECC parity code when write main area data while the MainECCLock
 * (NFCONT[7]) bit is "0" (Unlock).
 */

typedef union NFMECC0_1B_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MECC0:8;       //7:0
        uint32_t MECC1:8;       //15:8
        uint32_t MECC2:8;       //23:16
        uint32_t MECC3:8;       //31:24
    } bits;
} NFMECC0_1B;

typedef union NFMECC0_4B_u
{
    uint32_t all_val;
    struct
    {
        uint32_t first_Parity:8;       //7:0
        uint32_t second_Parity:8;      //15:8
        uint32_t third_Parity:8;       //23:16
        uint32_t fourth_Parity:8;      //31:24
    } bits;
} NFMECC0_4B;

/*
 * NFMECC1
 * 
 * Address = NAND Base Address + 0x0038
 * Reset Value = 0xFFFF_FFFF
 * 
 * When ECC Type is 4-bit ECC
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 * 5th Parity          |  [7:0]  |   R  | 5th Check parity generated from main area (512 bytes)        |     0x00    |
 * ------------------------------------------------------------------------------------------------------------------|
 * 6th Parity          |  [15:8] |   R  | 6th Check parity generated from main area (512 bytes)        |     0x00    |
 * ------------------------------------------------------------------------------------------------------------------|
 * 7th Parity          | [23:16] |   R  | 7th Check parity generated from main area (512 bytes)        |     0x00    |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:24] |  -   | Reserved                                                     |     0x00    |
 * ------------------------------------------------------------------------------------------------------------------|
 * NOTE: The NAND flash controller generate these ECC parity code when write main area data while the MainECCLock
 * (NFCONT[7]) bit is "0" (Unlock).
 */

typedef union NFMECC1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t fifth_Parity:8;        //7:0
        uint32_t sixth_Parity:8;        //15:8
        uint32_t seventh_Parity:8;      //23:16
        uint32_t Reserved0:8;           //31:24
    } bits;
} NFMECC1;
#endif
