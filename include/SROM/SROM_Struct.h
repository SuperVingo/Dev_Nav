#ifndef __SROM_SROM_ADDR_H__    
#define __SROM_SROM_ADDR_H__  

#include "ustdint.h"

/*
 * SROM_BW
 * 
 * Address = SROM Base Address + 0x0000
 * Reset Value = 0x0000_0009
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Data bus width control for memory bank 0                     |             |
 * DataWidth0          |   [0]   |  RW  | 0 : 8-bit                                                    |      1      |
 *                     |         |      | 1 : 16-bit                                                   |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Select SROM ADDR base for memory bank 0                      |             |
 *                     |         |      | 0 = SROM_ADDR is half-word base address.                     |             |
 *                     |         |      | (SROM_ADDR[22:0] <- HADDR[23:1])                             |             |
 * AddrMode0           |   [1]   |  RW  | 1 = SROM_ADDR is byte base address                           |      0      |
 *                     |         |      | (SROM_ADDR[22:0] <- HADDR[22:0])                             |             |
 *                     |         |      | NOTE: When DataWidth0 is "0", SROM_ADDR is byte base         |             |
 *                     |         |      | address. (It ignores this bit)                               |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Wait enable control for memory bank 0                        |             |
 * WaitEnable0         |   [2]   |  RW  | 0 = Disables WAIT                                            |      0      |
 *                     |         |      | 1 = Enables WAIT                                             |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | nWBE/nBE(for UB/LB) control for memory bank 0                |             |
 * ByteEnable0         |   [3]   |  RW  | 0 = Does not use UB/LB (XrnWBE[1:0] is dedicated             |      1      |
 *                     |         |      | nWBE[1:0])                                                   |             |
 *                     |         |      | 1 = Uses UB/LB (XrnWBE[1:0] is dedicated nBE[1:0])           |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Data bus width control for memory bank 1                     |             |
 * DataWidth1          |   [4]   |  RW  | 0 : 8-bit                                                    |      0      |
 *                     |         |      | 1 : 16-bit                                                   |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Select SROM ADDR base for memory bank 1                      |             |
 *                     |         |      | 0 = SROM_ADDR is half-word base address.                     |             |
 *                     |         |      | (SROM_ADDR[22:0] <- HADDR[23:1])                             |             |
 * AddrMode1           |   [5]   |  RW  | 1 = SROM_ADDR is byte base address                           |      0      |
 *                     |         |      | (SROM_ADDR[22:0] <- HADDR[22:0])                             |             |
 *                     |         |      | NOTE: When DataWidth1 is "0", SROM_ADDR is byte base         |             |
 *                     |         |      | address. (It ignores this bit)                               |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Wait enable control for memory bank 1                        |             |
 * WaitEnable1         |   [6]   |  RW  | 0 = Disables WAIT                                            |      0      |
 *                     |         |      | 1 = Enables WAIT                                             |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | nWBE/nBE(for UB/LB) control for memory bank 1                |             |
 * ByteEnable1         |   [7]   |  RW  | 0 = Does not use UB/LB (XrnWBE[1:0] is dedicated             |      0      |
 *                     |         |      | nWBE[1:0])                                                   |             |
 *                     |         |      | 1 = Uses UB/LB (XrnWBE[1:0] is dedicated nBE[1:0])           |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Data bus width control for memory bank 2                     |             |
 * DataWidth2          |   [8]   |  RW  | 0 : 8-bit                                                    |      0      |
 *                     |         |      | 1 : 16-bit                                                   |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Select SROM ADDR base for memory bank 2                      |             |
 *                     |         |      | 0 = SROM_ADDR is half-word base address.                     |             |
 *                     |         |      | (SROM_ADDR[22:0] <- HADDR[23:1])                             |             |
 * AddrMode2           |   [9]   |  RW  | 1 = SROM_ADDR is byte base address                           |      0      |
 *                     |         |      | (SROM_ADDR[22:0] <- HADDR[22:0])                             |             |
 *                     |         |      | NOTE: When DataWidth2 is "0", SROM_ADDR is byte base         |             |
 *                     |         |      | address. (It ignores this bit)                               |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Wait enable control for memory bank 2                        |             |
 * WaitEnable2         |   [10]  |  RW  | 0 = Disables WAIT                                            |      0      |
 *                     |         |      | 1 = Enables WAIT                                             |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | nWBE/nBE(for UB/LB) control for memory bank 2                |             |
 * ByteEnable2         |   [11]  |  RW  | 0 = Does not use UB/LB (XrnWBE[1:0] is dedicated             |      0      |
 *                     |         |      | nWBE[1:0])                                                   |             |
 *                     |         |      | 1 = Uses UB/LB (XrnWBE[1:0] is dedicated nBE[1:0])           |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Data bus width control for memory bank 3                     |             |
 * DataWidth3          |   [12]  |  RW  | 0 : 8-bit                                                    |      0      |
 *                     |         |      | 1 : 16-bit                                                   |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Select SROM ADDR base for memory bank 3                      |             |
 *                     |         |      | 0 = SROM_ADDR is half-word base address.                     |             |
 *                     |         |      | (SROM_ADDR[22:0] <- HADDR[23:1])                             |             |
 * AddrMode3           |   [13]  |  RW  | 1 = SROM_ADDR is byte base address                           |      0      |
 *                     |         |      | (SROM_ADDR[22:0] <- HADDR[22:0])                             |             |
 *                     |         |      | NOTE: When DataWidth3 is "0", SROM_ADDR is byte base         |             |
 *                     |         |      | address. (It ignores this bit)                               |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Wait enable control for memory bank 3                        |             |
 * WaitEnable3         |   [14]  |  RW  | 0 = Disables WAIT                                            |      0      |
 *                     |         |      | 1 = Enables WAIT                                             |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | nWBE/nBE(for UB/LB) control for memory bank 3                |             |
 * ByteEnable3         |   [15]  |  RW  | 0 = Does not use UB/LB (XrnWBE[1:0] is dedicated             |      0      |
 *                     |         |      | nWBE[1:0])                                                   |             |
 *                     |         |      | 1 = Uses UB/LB (XrnWBE[1:0] is dedicated nBE[1:0])           |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:16] |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 */

typedef union SROM_BW_u
{
    uint32_t all_val;
    struct
    {
        uint32_t DataWidth0:1;      //0
        uint32_t AddrMode0:1;       //1
        uint32_t WaitEnable0:1;     //2
        uint32_t ByteEnable0:1;     //3
        uint32_t DataWidth1:1;      //4
        uint32_t AddrMode1:1;       //5
        uint32_t WaitEnable1:1;     //6
        uint32_t ByteEnable1:1;     //7
        uint32_t DataWidth2:1;      //8
        uint32_t AddrMode2:1;       //9
        uint32_t WaitEnable2:1;     //10
        uint32_t ByteEnable2:1;     //11
        uint32_t DataWidth3:1;      //12
        uint32_t AddrMode3:1;       //13
        uint32_t WaitEnable3:1;     //14
        uint32_t ByteEnable3:1;     //15
        uint32_t Reserved0:25;      //31:16
    } bits;
} SROM_BW;

/*
 * SROM_BCn
 * 
 * Address = SROM Base Address + 0x0004
 * Address = SROM Base Address + 0x0008
 * Address = SROM Base Address + 0x000C
 * Address = SROM Base Address + 0x0010
 * Reset Value = 0x000F_0000
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Page mode configuration                                      |             |
 *                     |         |      | 00 = Normal                                                  |             |
 * PMC                 |  [1:0]  |  RW  | 01 = 4 Data                                                  |      0      |
 *                     |         |      | 10 = Reserved                                                |             |
 *                     |         |      | 11 = Reserved                                                |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [3:2]  |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Page mode access cycle at Page mode                          |             |
 *                     |         |      | 0000 = 0 Clock                                               |             |
 *                     |         |      | 0001 = 1 Clock                                               |             |
 *                     |         |      | 0010 = 2 Clocks                                              |             |
 * Tacp                |  [7:4]  |  RW  | 0011 = 3 Clocks                                              |      0      |
 *                     |         |      | ..............                                               |             |
 *                     |         |      | 1100 = 12 Clocks                                             |             |
 *                     |         |      | 1101 = 13 Clocks                                             |             |
 *                     |         |      | 1110 = 14 Clocks                                             |             |
 *                     |         |      | 1111 = 15 Clocks                                             |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Address holding time after nGCSn                             |             |
 *                     |         |      | 0000 = 0 Clock                                               |             |
 *                     |         |      | 0001 = 1 Clock                                               |             |
 *                     |         |      | 0010 = 2 Clocks                                              |             |
 *                     |         |      | 0011 = 3 Clocks                                              |             |
 * Tach                |  [11:8] |  RW  | ..............                                               |      0      |
 *                     |         |      | 1100 = 12 Clocks                                             |             |
 *                     |         |      | 1101 = 13 Clocks                                             |             |
 *                     |         |      | 1110 = 14 Clocks                                             |             |
 *                     |         |      | 1111 = 15 Clocks                                             |             |
 *                     |         |      | NOTE: More 1~2 cycles according to bus i/f status            |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Chip selection hold on nOE                                   |             |
 *                     |         |      | 0000 = 0 Clock                                               |             |
 *                     |         |      | 0001 = 1 Clock                                               |             |
 *                     |         |      | 0010 = 2 Clocks                                              |             |
 * Tcoh                | [15:12] |  RW  | 0011 = 3 Clocks                                              |      0      |
 *                     |         |      | ..............                                               |             |
 *                     |         |      | 1100 = 12 Clocks                                             |             |
 *                     |         |      | 1101 = 13 Clocks                                             |             |
 *                     |         |      | 1110 = 14 Clocks                                             |             |
 *                     |         |      | 1111 = 15 Clocks                                             |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Access Cycle                                                 |             |
 *                     |         |      | 00000 = 0 Clock                                              |             |
 *                     |         |      | 00001 = 1 Clock                                              |             |
 *                     |         |      | 00010 = 2 Clocks                                             |             |
 * Tacc                | [20:16] |  RW  | 00011 = 3 Clocks                                             |    01111    |
 *                     |         |      | ..............                                               |             |
 *                     |         |      | 11100 = 28 Clocks                                            |             |
 *                     |         |      | 11101 = 29 Clocks                                            |             |
 *                     |         |      | 11110 = 30 Clocks                                            |             |
 *                     |         |      | 11111 = 31 Clocks                                            |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [23:21] |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Chip selection set-up before nOE                             |             |
 *                     |         |      | 0000 = 0 Clock                                               |             |
 *                     |         |      | 0001 = 1 Clock                                               |             |
 *                     |         |      | 0010 = 2 Clocks                                              |             |
 * Tcos                | [27:24] |  RW  | 0011 = 3 Clocks                                              |      0      |
 *                     |         |      | ..............                                               |             |
 *                     |         |      | 1100 = 12 Clocks                                             |             |
 *                     |         |      | 1101 = 13 Clocks                                             |             |
 *                     |         |      | 1110 = 14 Clocks                                             |             |
 *                     |         |      | 1111 = 15 Clocks                                             |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Address set-up before nGCS                                   |             |
 *                     |         |      | 0000 = 0 Clock                                               |             |
 *                     |         |      | 0001 = 1 Clock                                               |             |
 *                     |         |      | 0010 = 2 Clocks                                              |             |
 *                     |         |      | 0011 = 3 Clocks                                              |             |
 * Tach                | [31:28] |  RW  | ..............                                               |      0      |
 *                     |         |      | 1100 = 12 Clocks                                             |             |
 *                     |         |      | 1101 = 13 Clocks                                             |             |
 *                     |         |      | 1110 = 14 Clocks                                             |             |
 *                     |         |      | 1111 = 15 Clocks                                             |             |
 *                     |         |      | NOTE: More 1~2 cycles according to bus i/f status            |             |
 * ------------------------------------------------------------------------------------------------------------------|
 */

typedef union SROM_BCn_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PMC:2;             //1:0
        uint32_t Reserved0:2;       //3:2
        uint32_t Tacp:4;            //7:4
        uint32_t Tcah:4;            //11:8
        uint32_t Tcoh:4;            //15:12
        uint32_t Tacc:5;            //20:16
        uint32_t Reserved1:3;       //23:21
        uint32_t Tcos:4;            //27:24
        uint32_t Tacs:4;            //31:28
    } bits;
} SROM_BCn;

#endif
