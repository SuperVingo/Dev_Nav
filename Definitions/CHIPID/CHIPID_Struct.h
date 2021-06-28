#ifndef __GPIO_GPIO_STRUCTURE_H__     
#define __GPIO_GPIO_STRUCTURE_H__    

#include "ustdint.h"

/*
 * PRO_ID
 *
 * Address = CHIPID Base Address + 0x0000
 * Reset Value = 0xE441_2XXX
 * 
 *     Name     |   Bit   | Type |     Description      | Reset Value      | 
 * ------------------------------------------------------------------------|
 * SubRev       |  [3:0]  |   R  | Sub Revision Number  | 0x4412           |
 * MainRev      |  [7:4]  |   R  | Main Revision Number | 0x0              |
 * Package      |  [9:8]  |   R  | Package Information  | Exynos 4412: 0x2 |
 * RSVD         | [11:10] |   R  | Reserved             | 0x0              |
 * ProductID    | [31:12] |   R  | Product ID           | 0x0              |
 */

typedef union PRO_ID_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SubRev:4;      //3:0
        uint32_t MainRev:4;     //7:4
        uint32_t Package:2;     //9:8
        uint32_t Reserved:2;    //11:10
        uint32_t ProductID:20;  //31:12
    } bits;
} PRO_ID;

/*
 * PACKAGE_ID
 *
 * Address = CHIPID Base Address + 0x0004
 * Reset Value = 0xXXXX_XXXX
 * 
 *     Name     |   Bit    | Type |                  Description              | Reset Value | 
 * -----------------------------------------------------------------------------------------|
 * Package ID   |  [31:0]  |  R   | Package information(POP Type and Package) | 0xXXXX_XXXX |
 */

typedef union PACKAGE_ID_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PackageID; //31:0
    } bits;
} PACKAGE_ID;

#endif