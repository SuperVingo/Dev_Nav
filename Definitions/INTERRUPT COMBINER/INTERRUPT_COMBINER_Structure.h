#ifndef __INTERRUPT_COMBINER_INTERRUPT_COMBINER_STRUCTURE_H__     
#define __INTERRUPT_COMBINER_INTERRUPT_COMBINER_STRUCTURE_H__   
   
#include "ustdint.h"

/*
 * IESR0
 * 
 * Address = Interrupt Combiner Base Address 1 + 0x0000
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                      Description                       | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------|
 * MDNIE_LCD0[0]       |   [0]   |  RW  | Sets the corresponding interrupt enable bit to "1". If |     0x0     |
 * -------------------------------------| you set the interrupt enable bit, interrupt combiner   |-------------|
 * MDNIE_LCD0[1]       |   [1]   |  RW  | serves the interrupt request.                          |     0x0     |
 * -------------------------------------| Write) 0 = Does not change the current settings.       |-------------|
 * MDNIE_LCD0[2]       |   [2]   |  RW  |        1 = Sets the interrupt enable bit to "1".       |     0x0     |
 * -------------------------------------| Read)  The current interrupt enable bit.               |-------------|
 * MDNIE_LCD0[3]       |   [3]   |  RW  |        0 = Masks.                                      |     0x0     |
 *                     |         |      |        1 = Enables.                                    |             |
 * ------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [7:4]  |  -   | Reserved                                               |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * TZASC0[0]           |   [8]   |  RW  | Sets the corresponding interrupt enable bit to "1". If |     0x0     |
 * -------------------------------------| you set the interrupt enable bit, interrupt combiner   |-------------|
 * TZASC0[1]           |   [9]   |  RW  | serves the interrupt request.                          |     0x0     |
 * -------------------------------------| Write) 0 = Does not change the current settings.       |-------------|
 * TZASC1[0]           |  [10]   |  RW  |        1 = Sets the interrupt enable bit to "1".       |     0x0     |
 * -------------------------------------| Read)  The current interrupt enable bit.               |-------------|
 * TZASC1[1]           |  [11]   |  RW  |        0 = Masks.                                      |     0x0     |
 *                     |         |      |        1 = Enables.                                    |             |
 * ------------------------------------------------------------------------------------------------------------|
 * RSVD                | [15:12] |  -   | Reserved                                               |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * PARITYFAIL0         |  [16]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PARITYFAILSCU[0]    |  [17]   |  RW  | Sets the corresponding interrupt enable bit to "1". If |     0x0     |
 * -------------------------------------| you set the interrupt enable bit, interrupt combiner   |-------------|
 * PMUIRQ[0]           |  [18]   |  RW  | serves the interrupt request.                          |     0x0     |
 * -------------------------------------| Write) 0 = Does not change the current settings.       |-------------|
 * nCTIIRQ[0]          |  [19]   |  RW  |        1 = Sets the interrupt enable bit to "1".       |     0x0     |
 * -------------------------------------| Read)  The current interrupt enable bit.               |-------------|
 * TMU                 |  [20]   |  RW  |        0 = Masks.                                      |     0x0     |
 * -------------------------------------|        1 = Enables.                                    |-------------|
 * PARRDINTR           |  [21]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PARRINTR            |  [22]   |  RW  |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [23]   |  -   | Reserved                                               |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * PARITYFAIL1         |  [24]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PARITYFAILSC[1]     |  [25]   |  RW  | Sets the corresponding interrupt enable bit to "1". If |     0x0     |
 * -------------------------------------| you set the interrupt enable bit, interrupt combiner   |-------------|
 * PMUIR[1]            |  [26]   |  RW  | serves the interrupt request.                          |     0x0     |
 * -------------------------------------| Write) 0 = Does not change the current settings.       |-------------|
 * nCTIIRQ[1]          |  [27]   |  RW  |        1 = Sets the interrupt enable bit to "1".       |     0x0     |
 * -------------------------------------| Read)  The current interrupt enable bit.               |-------------|
 * TMU                 |  [28]   |  RW  |        0 = Masks.                                      |     0x0     |
 * -------------------------------------|        1 = Enables.                                    |-------------|
 * PMUIRQ_ISP          |  [29]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * nCTIIRQ_ISP         |  [30]   |  RW  |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [31]   |  -   | Reserved                                               |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 */

typedef union IESR0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MDNIE_LCD0_0:1;        //0
        uint32_t MDNIE_LCD0_1:1;        //1
        uint32_t MDNIE_LCD0_2:1;        //2
        uint32_t MDNIE_LCD0_3:1;        //3
        uint32_t Reserved0:4;           //7:4
        uint32_t TZASC0_0:1;            //8
        uint32_t TZASC0_1:1;            //9
        uint32_t TZASC1_0:1;            //10
        uint32_t TZASC1_1:1;            //11
        uint32_t Reserved1:4;           //15:12
        uint32_t PARITYFAIL0:1;         //16
        uint32_t PARITYFAILSCU_0:1;     //17
        uint32_t PMUIRQ_0:1;            //18
        uint32_t nCTIIRQ_0:1;           //19
        uint32_t TMU_0:1;               //20
        uint32_t PARRDINTR_0:1;         //21
        uint32_t PARRINTR_0:1;          //22
        uint32_t Reserved2:1;           //23
        uint32_t PARITYFAIL1:1;         //24
        uint32_t PARITYFAILSC_1:1;      //25
        uint32_t PMUIR_1:1;             //26
        uint32_t nCTIIRQ_1:1;           //27
        uint32_t TMU_1:1;               //28
        uint32_t PMUIRQ_ISP_1:1;        //29
        uint32_t nCTIIRQ_ISP_1:1;       //30
        uint32_t Reserved3:1;           //31
    } bits;
} IESR0;

/*
 * IECR0
 * 
 * Address = Interrupt Combiner Base Address 1 + 0x0004
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                       Description                        | Reset Value | 
 * --------------------------------------------------------------------------------------------------------------|
 * MDNIE_LCD0[0]       |   [0]   |  RW  | Clears the corresponding interrupt enable bit to "1". If |     0x0     |
 * -------------------------------------| you set the interrupt enable bit, interrupt combiner     |-------------|
 * MDNIE_LCD0[1]       |   [1]   |  RW  | serves the interrupt request.                            |     0x0     |
 * -------------------------------------| Write) 0 = Does not change the current settings.         |-------------|
 * MDNIE_LCD0[2]       |   [2]   |  RW  |        1 = Sets the interrupt enable bit to "1".         |     0x0     |
 * -------------------------------------| Read)  The current interrupt enable bit.                 |-------------|
 * MDNIE_LCD0[3]       |   [3]   |  RW  |        0 = Masks.                                        |     0x0     |
 *                     |         |      |        1 = Enables.                                      |             |
 * --------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [7:4]  |  -   | Reserved                                                 |     0x0     |
 * --------------------------------------------------------------------------------------------------------------|
 * TZASC0[0]           |   [8]   |  RW  | Clears the corresponding interrupt enable bit to "1". If |     0x0     |
 * -------------------------------------| you set the interrupt enable bit, interrupt combiner     |-------------|
 * TZASC0[1]           |   [9]   |  RW  | serves the interrupt request.                            |     0x0     |
 * -------------------------------------| Write) 0 = Does not change the current settings.         |-------------|
 * TZASC1[0]           |  [10]   |  RW  |        1 = Sets the interrupt enable bit to "1".         |     0x0     |
 * -------------------------------------| Read)  The current interrupt enable bit.                 |-------------|
 * TZASC1[1]           |  [11]   |  RW  |        0 = Masks.                                        |     0x0     |
 *                     |         |      |        1 = Enables.                                      |             |
 * --------------------------------------------------------------------------------------------------------------|
 * RSVD                | [15:12] |  -   | Reserved                                                 |     0x0     |
 * --------------------------------------------------------------------------------------------------------------|
 * PARITYFAIL0         |  [16]   |  RW  |                                                          |     0x0     |
 * -------------------------------------|                                                          |-------------|
 * PARITYFAILSCU[0]    |  [17]   |  RW  | Clears the corresponding interrupt enable bit to "1". If |     0x0     |
 * -------------------------------------| you set the interrupt enable bit, interrupt combiner     |-------------|
 * PMUIRQ[0]           |  [18]   |  RW  | serves the interrupt request.                            |     0x0     |
 * -------------------------------------| Write) 0 = Does not change the current settings.         |-------------|
 * nCTIIRQ[0]          |  [19]   |  RW  |        1 = Sets the interrupt enable bit to "1".         |     0x0     |
 * -------------------------------------| Read)  The current interrupt enable bit.                 |-------------|
 * TMU                 |  [20]   |  RW  |        0 = Masks.                                        |     0x0     |
 * -------------------------------------|        1 = Enables.                                      |-------------|
 * PARRDINTR           |  [21]   |  RW  |                                                          |     0x0     |
 * -------------------------------------|                                                          |-------------|
 * PARRINTR            |  [22]   |  RW  |                                                          |     0x0     |
 * --------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [23]   |  -   | Reserved                                                 |     0x0     |
 * --------------------------------------------------------------------------------------------------------------|
 * PARITYFAIL1         |  [24]   |  RW  |                                                          |     0x0     |
 * -------------------------------------|                                                          |-------------|
 * PARITYFAILSC[1]     |  [25]   |  RW  | Clears the corresponding interrupt enable bit to "1". If |     0x0     |
 * -------------------------------------| you set the interrupt enable bit, interrupt combiner     |-------------|
 * PMUIR[1]            |  [26]   |  RW  | serves the interrupt request.                            |     0x0     |
 * -------------------------------------| Write) 0 = Does not change the current settings.         |-------------|
 * nCTIIRQ[1]          |  [27]   |  RW  |        1 = Sets the interrupt enable bit to "1".         |     0x0     |
 * -------------------------------------| Read)  The current interrupt enable bit.                 |-------------|
 * TMU                 |  [28]   |  RW  |        0 = Masks.                                        |     0x0     |
 * -------------------------------------|        1 = Enables.                                      |-------------|
 * PMUIRQ_ISP          |  [29]   |  RW  |                                                          |     0x0     |
 * -------------------------------------|                                                          |-------------|
 * nCTIIRQ_ISP         |  [30]   |  RW  |                                                          |     0x0     |
 * --------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [31]   |  -   | Reserved                                                 |     0x0     |
 * --------------------------------------------------------------------------------------------------------------|
 */  

typedef union IECR0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MDNIE_LCD0_0:1;        //0
        uint32_t MDNIE_LCD0_1:1;        //1
        uint32_t MDNIE_LCD0_2:1;        //2
        uint32_t MDNIE_LCD0_3:1;        //3
        uint32_t Reserved0:4;           //7:4
        uint32_t TZASC0_0:1;            //8
        uint32_t TZASC0_1:1;            //9
        uint32_t TZASC1_0:1;            //10
        uint32_t TZASC1_1:1;            //11
        uint32_t Reserved1:4;           //15:12
        uint32_t PARITYFAIL0:1;         //16
        uint32_t PARITYFAILSCU_0:1;     //17
        uint32_t PMUIRQ_0:1;            //18
        uint32_t nCTIIRQ_0:1;           //19
        uint32_t TMU_0:1;               //20
        uint32_t PARRDINTR_0:1;         //21
        uint32_t PARRINTR_0:1;          //22
        uint32_t Reserved2:1;           //23
        uint32_t PARITYFAIL1:1;         //24
        uint32_t PARITYFAILSC_1:1;      //25
        uint32_t PMUIR_1:1;             //26
        uint32_t nCTIIRQ_1:1;           //27
        uint32_t TMU_1:1;               //28
        uint32_t PMUIRQ_ISP_1:1;        //29
        uint32_t nCTIIRQ_ISP_1:1;       //30
        uint32_t Reserved3:1;           //31
    } bits;
} IECR0;

/*
 * ISTR0
 * 
 * Address = Interrupt Combiner Base Address 1 + 0x0008
 * Reset Value = Undefined
 * 
 *         Name        |   Bit   | Type |                       Description                        | Reset Value | 
 * --------------------------------------------------------------------------------------------------------------|
 * MDNIE_LCD0[0]       |   [0]   |  R   |                                                          |      -      |
 * -------------------------------------| Interrupt pending status                                 |-------------|
 * MDNIE_LCD0[1]       |   [1]   |  R   | The corresponding interrupt enable bit does not          |      -      |
 * -------------------------------------| affect this pending status.                              |-------------|
 * MDNIE_LCD0[2]       |   [2]   |  R   | 0 = The interrupt is not pending.                        |      -      |
 * -------------------------------------| 1 = The interrupt is pending.                            |-------------|
 * MDNIE_LCD0[3]       |   [3]   |  R   |                                                          |      -      |
 * --------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [7:4]  |  -   | Reserved                                                 |     0x0     |
 * --------------------------------------------------------------------------------------------------------------|
 * TZASC0[0]           |   [8]   |  R   |                                                          |      -      |
 * -------------------------------------| Interrupt pending status                                 |-------------|
 * TZASC0[1]           |   [9]   |  R   | The corresponding interrupt enable bit does not          |      -      |
 * -------------------------------------| affect this pending status.                              |-------------|
 * TZASC1[0]           |  [10]   |  R   | 0 = The interrupt is not pending.                        |      -      |
 * -------------------------------------| 1 = The interrupt is pending.                            |-------------|
 * TZASC1[1]           |  [11]   |  R   |                                                          |      -      |
 * --------------------------------------------------------------------------------------------------------------|
 * RSVD                | [15:12] |  -   | Reserved                                                 |     0x0     |
 * --------------------------------------------------------------------------------------------------------------|
 * PARITYFAIL0         |  [16]   |  R   |                                                          |      -      |
 * -------------------------------------|                                                          |-------------|
 * PARITYFAILSCU[0]    |  [17]   |  R   |                                                          |      -      |
 * -------------------------------------|                                                          |-------------|
 * PMUIRQ[0]           |  [18]   |  R   | Interrupt pending status                                 |      -      |
 * -------------------------------------| The corresponding interrupt enable bit does not          |-------------|
 * nCTIIRQ[0]          |  [19]   |  R   | affect this pending status.                              |      -      |
 * -------------------------------------| 0 = The interrupt is not pending.                        |-------------|
 * TMU                 |  [20]   |  R   | 1 = The interrupt is pending.                            |      -      |
 * -------------------------------------|                                                          |-------------|
 * PARRDINTR           |  [21]   |  R   |                                                          |      -      |
 * -------------------------------------|                                                          |-------------|
 * PARRINTR            |  [22]   |  R   |                                                          |      -      |
 * --------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [23]   |  -   | Reserved                                                 |     0x0     |
 * --------------------------------------------------------------------------------------------------------------|
 * PARITYFAIL1         |  [24]   |  R   |                                                          |      -      |
 * -------------------------------------|                                                          |-------------|
 * PARITYFAILSC[1]     |  [25]   |  R   |                                                          |      -      |
 * -------------------------------------|                                                          |-------------|
 * PMUIR[1]            |  [26]   |  R   | Interrupt pending status                                 |      -      |
 * -------------------------------------| The corresponding interrupt enable bit does not          |-------------|
 * nCTIIRQ[1]          |  [27]   |  R   | affect this pending status.                              |      -      |
 * -------------------------------------| 0 = The interrupt is not pending.                        |-------------|
 * TMU                 |  [28]   |  R   | 1 = The interrupt is pending.                            |      -      |
 * -------------------------------------|                                                          |-------------|
 * PMUIRQ_ISP          |  [29]   |  R   |                                                          |      -      |
 * -------------------------------------|                                                          |-------------|
 * nCTIIRQ_ISP         |  [30]   |  R   |                                                          |      -      |
 * --------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [31]   |  -   | Reserved                                                 |     0x0     |
 * --------------------------------------------------------------------------------------------------------------|
 */  

typedef union ISTR0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MDNIE_LCD0_0:1;        //0
        uint32_t MDNIE_LCD0_1:1;        //1
        uint32_t MDNIE_LCD0_2:1;        //2
        uint32_t MDNIE_LCD0_3:1;        //3
        uint32_t Reserved0:4;           //7:4
        uint32_t TZASC0_0:1;            //8
        uint32_t TZASC0_1:1;            //9
        uint32_t TZASC1_0:1;            //10
        uint32_t TZASC1_1:1;            //11
        uint32_t Reserved1:4;           //15:12
        uint32_t PARITYFAIL0:1;         //16
        uint32_t PARITYFAILSCU_0:1;     //17
        uint32_t PMUIRQ_0:1;            //18
        uint32_t nCTIIRQ_0:1;           //19
        uint32_t TMU_0:1;               //20
        uint32_t PARRDINTR_0:1;         //21
        uint32_t PARRINTR_0:1;          //22
        uint32_t Reserved2:1;           //23
        uint32_t PARITYFAIL1:1;         //24
        uint32_t PARITYFAILSC_1:1;      //25
        uint32_t PMUIR_1:1;             //26
        uint32_t nCTIIRQ_1:1;           //27
        uint32_t TMU_1:1;               //28
        uint32_t PMUIRQ_ISP_1:1;        //29
        uint32_t nCTIIRQ_ISP_1:1;       //30
        uint32_t Reserved3:1;           //31
    } bits;
} ISTR0;

/*
 * IMSR0
 * 
 * Address = Interrupt Combiner Base Address 1 + 0x000C
 * Reset Value = Undefined
 * 
 *         Name        |   Bit   | Type |                       Description                        | Reset Value | 
 * --------------------------------------------------------------------------------------------------------------|
 * MDNIE_LCD0[0]       |   [0]   |  R   |                                                          |      -      |
 * -------------------------------------| Masked interrupt pending status.                         |-------------|
 * MDNIE_LCD0[1]       |   [1]   |  R   | If the corresponding interrupt enable bit is "0", the    |      -      |
 * -------------------------------------| IMSR bit reads as "0".                                   |-------------|
 * MDNIE_LCD0[2]       |   [2]   |  R   | 0 = The interrupt is not pending.                        |      -      |
 * -------------------------------------| 1 = The interrupt is pending.                            |-------------|
 * MDNIE_LCD0[3]       |   [3]   |  R   |                                                          |      -      |
 * --------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [7:4]  |  -   | Reserved                                                 |     0x0     |
 * --------------------------------------------------------------------------------------------------------------|
 * TZASC0[0]           |   [8]   |  R   |                                                          |      -      |
 * -------------------------------------| Masked interrupt pending status.                         |-------------|
 * TZASC0[1]           |   [9]   |  R   | If the corresponding interrupt enable bit is "0", the    |      -      |
 * -------------------------------------| IMSR bit reads as "0".                                   |-------------|
 * TZASC1[0]           |  [10]   |  R   | 0 = The interrupt is not pending.                        |      -      |
 * -------------------------------------| 1 = The interrupt is pending.                            |-------------|
 * TZASC1[1]           |  [11]   |  R   |                                                          |      -      |
 * --------------------------------------------------------------------------------------------------------------|
 * RSVD                | [15:12] |  -   | Reserved                                                 |     0x0     |
 * --------------------------------------------------------------------------------------------------------------|
 * PARITYFAIL0         |  [16]   |  R   |                                                          |      -      |
 * -------------------------------------|                                                          |-------------|
 * PARITYFAILSCU[0]    |  [17]   |  R   |                                                          |      -      |
 * -------------------------------------|                                                          |-------------|
 * PMUIRQ[0]           |  [18]   |  R   | Masked interrupt pending status.                         |      -      |
 * -------------------------------------| If the corresponding interrupt enable bit is "0", the    |-------------|
 * nCTIIRQ[0]          |  [19]   |  R   | IMSR bit reads as "0".                                   |      -      |
 * -------------------------------------| 0 = The interrupt is not pending.                        |-------------|
 * TMU                 |  [20]   |  R   | 1 = The interrupt is pending.                            |      -      |
 * -------------------------------------|                                                          |-------------|
 * PARRDINTR           |  [21]   |  R   |                                                          |      -      |
 * -------------------------------------|                                                          |-------------|
 * PARRINTR            |  [22]   |  R   |                                                          |      -      |
 * --------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [23]   |  -   | Reserved                                                 |     0x0     |
 * --------------------------------------------------------------------------------------------------------------|
 * PARITYFAIL1         |  [24]   |  R   |                                                          |      -      |
 * -------------------------------------|                                                          |-------------|
 * PARITYFAILSC[1]     |  [25]   |  R   |                                                          |      -      |
 * -------------------------------------|                                                          |-------------|
 * PMUIR[1]            |  [26]   |  R   | Masked interrupt pending status.                         |      -      |
 * -------------------------------------| If the corresponding interrupt enable bit is "0", the    |-------------|
 * nCTIIRQ[1]          |  [27]   |  R   | IMSR bit reads as "0".                                   |      -      |
 * -------------------------------------| 0 = The interrupt is not pending.                        |-------------|
 * TMU                 |  [28]   |  R   | 1 = The interrupt is pending.                            |      -      |
 * -------------------------------------|                                                          |-------------|
 * PMUIRQ_ISP          |  [29]   |  R   |                                                          |      -      |
 * -------------------------------------|                                                          |-------------|
 * nCTIIRQ_ISP         |  [30]   |  R   |                                                          |      -      |
 * --------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [31]   |  -   | Reserved                                                 |     0x0     |
 * --------------------------------------------------------------------------------------------------------------|
 */  

typedef union IMSR0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t MDNIE_LCD0_0:1;        //0
        uint32_t MDNIE_LCD0_1:1;        //1
        uint32_t MDNIE_LCD0_2:1;        //2
        uint32_t MDNIE_LCD0_3:1;        //3
        uint32_t Reserved0:4;           //7:4
        uint32_t TZASC0_0:1;            //8
        uint32_t TZASC0_1:1;            //9
        uint32_t TZASC1_0:1;            //10
        uint32_t TZASC1_1:1;            //11
        uint32_t Reserved1:4;           //15:12
        uint32_t PARITYFAIL0:1;         //16
        uint32_t PARITYFAILSCU_0:1;     //17
        uint32_t PMUIRQ_0:1;            //18
        uint32_t nCTIIRQ_0:1;           //19
        uint32_t TMU_0:1;               //20
        uint32_t PARRDINTR_0:1;         //21
        uint32_t PARRINTR_0:1;          //22
        uint32_t Reserved2:1;           //23
        uint32_t PARITYFAIL1:1;         //24
        uint32_t PARITYFAILSC_1:1;      //25
        uint32_t PMUIR_1:1;             //26
        uint32_t nCTIIRQ_1:1;           //27
        uint32_t TMU_1:1;               //28
        uint32_t PMUIRQ_ISP_1:1;        //29
        uint32_t nCTIIRQ_ISP_1:1;       //30
        uint32_t Reserved3:1;           //31
    } bits;
} IMSR0;

/*
 * IESR1
 * 
 * Address = Interrupt Combiner Base Address 1 + 0x0010
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                      Description                       | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------|
 * SYSMMU_MDMA[0]      |   [0]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_SSS[0]       |   [1]   |  RW  |                                                        |     0x0     |
 * -------------------------------------| Sets the corresponding interrupt enable bit to "1". If |-------------|
 * SYSMMU_FIMC0[0]     |   [2]   |  RW  | you set the interrupt enable bit, interrupt combiner   |     0x0     |
 * -------------------------------------| serves the interrupt request.                          |-------------|
 * SYSMMU_FIMC1[0]     |   [3]   |  RW  | Write) 0 = Does not change the current settings.       |     0x0     |
 * -------------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * SYSMMU_FIMC2[0]     |   [4]   |  RW  | Read)  The current interrupt enable bit.               |     0x0     |
 * -------------------------------------|        0 = Masks.                                      |-------------|
 * SYSMMU_FIMC3[0]     |   [5]   |  RW  |        1 = Enables.                                    |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_JPEG[0]      |   [6]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_2D[0]        |   [7]   |  RW  |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * SYSMMU_ROTATOR[0]   |   [8]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_GPS[0]       |   [9]   |  RW  |                                                        |     0x0     |
 * -------------------------------------| Sets the corresponding interrupt enable bit to "1". If |-------------|
 * SYSMMU_LCD0_M0[0]   |  [10]   |  RW  | you set the interrupt enable bit, interrupt combiner   |     0x0     |
 * -------------------------------------| serves the interrupt request.                          |-------------|
 * RSVD                |  [11]   |  -   | Write) 0 = Does not change the current settings.       |     0x0     |
 * -------------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * SYSMMU_TV_M0[0]     |  [12]   |  RW  | Read)  The current interrupt enable bit.               |     0x0     |
 * -------------------------------------|        0 = Masks.                                      |-------------|
 * SYSMMU_MFC_M0[0]    |  [13]   |  RW  |        1 = Enables.                                    |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_MFC_M1[0]    |  [14]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * RSVD                |  [15]   |  -   |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * SYSMMU_MDMA[1]      |  [16]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_SSS[1]       |  [17]   |  RW  |                                                        |     0x0     |
 * -------------------------------------| Sets the corresponding interrupt enable bit to "1". If |-------------|
 * SYSMMU_FIMC0[1]     |  [18]   |  RW  | you set the interrupt enable bit, interrupt combiner   |     0x0     |
 * -------------------------------------| serves the interrupt request.                          |-------------|
 * SYSMMU_FIMC1[1]     |  [19]   |  RW  | Write) 0 = Does not change the current settings.       |     0x0     |
 * -------------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * SYSMMU_FIMC2[1]     |  [20]   |  RW  | Read)  The current interrupt enable bit.               |     0x0     |
 * -------------------------------------|        0 = Masks.                                      |-------------|
 * SYSMMU_FIMC3[1]     |  [21]   |  RW  |        1 = Enables.                                    |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_JPEG[1]      |  [22]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_2D[1]        |  [23]   |  RW  |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * SYSMMU_ROTATOR[1]   |  [24]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_GPS[1]       |  [25]   |  RW  |                                                        |     0x0     |
 * -------------------------------------| Sets the corresponding interrupt enable bit to "1". If |-------------|
 * SYSMMU_LCD0_M0[1]   |  [26]   |  RW  | you set the interrupt enable bit, interrupt combiner   |     0x0     |
 * -------------------------------------| serves the interrupt request.                          |-------------|
 * RSVD                |  [27]   |  -   | Write) 0 = Does not change the current settings.       |     0x0     |
 * -------------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * SYSMMU_TV_M0[1]     |  [28]   |  RW  | Read)  The current interrupt enable bit.               |     0x0     |
 * -------------------------------------|        0 = Masks.                                      |-------------|
 * SYSMMU_MFC_M0[1]    |  [29]   |  RW  |        1 = Enables.                                    |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_MFC_M1[1]    |  [30]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * RSVD                |  [31]   |  -   |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 */

typedef union IESR1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYSMMU_MDMA_0:1;           //0
        uint32_t SYSMMU_SSS_0:1;            //1
        uint32_t SYSMMU_FIMC0_0:1;          //2
        uint32_t SYSMMU_FIMC1_0:1;          //3
        uint32_t SYSMMU_FIMC2_0:1;          //4
        uint32_t SYSMMU_FIMC3_0:1;          //5
        uint32_t SYSMMU_JPEG_0:1;           //6
        uint32_t SYSMMU_2D_0:1;             //7
        uint32_t SYSMMU_ROTATOR_0:1;        //8
        uint32_t SYSMMU_GPS_0:1;            //9
        uint32_t SYSMMU_LCD0_M0_0:1;        //10
        uint32_t Reserved0:1;               //11
        uint32_t SYSMMU_TV_M0_0:1;          //12
        uint32_t SYSMMU_MFC_M0_0:1;         //13
        uint32_t SYSMMU_MFC_M1_0:1;         //14
        uint32_t Reserved1:1;               //15
        uint32_t SYSMMU_MDMA_1:1;           //16
        uint32_t SYSMMU_SSS_1:1;            //17
        uint32_t SYSMMU_FIMC0_1:1;          //18
        uint32_t SYSMMU_FIMC1_1:1;          //19
        uint32_t SYSMMU_FIMC2_1:1;          //20
        uint32_t SYSMMU_FIMC3_1:1;          //21
        uint32_t SYSMMU_JPEG_1:1;           //22
        uint32_t SYSMMU_2D_1:1;             //23
        uint32_t SYSMMU_ROTATOR_1:1;        //24
        uint32_t SYSMMU_GPS_1:1;            //25
        uint32_t SYSMMU_LCD0_M0_1:1;        //26
        uint32_t Reserved2:1;               //27
        uint32_t SYSMMU_TV_M0_1:1;          //28
        uint32_t SYSMMU_MFC_M0_1:1;         //29
        uint32_t SYSMMU_MFC_M1_1:1;         //30
        uint32_t Reserved3:1;               //31
    } bits;
} IESR1;

/*
 * IECR1
 * 
 * Address = Interrupt Combiner Base Address 1 + 0x0014
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                      Description                       | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------|
 * SYSMMU_MDMA[0]      |   [0]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_SSS[0]       |   [1]   |  RW  |                                                        |     0x0     |
 * -------------------------------------| Clears the corresponding interrupt enable bit to "1".  |-------------|
 * SYSMMU_FIMC0[0]     |   [2]   |  RW  | If you set the interrupt enable bit, interrupt         |     0x0     |
 * -------------------------------------| combiner will mask the interrupt.                      |-------------|
 * SYSMMU_FIMC1[0]     |   [3]   |  RW  | Write) 0 = Does not change the current settings.       |     0x0     |
 * -------------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * SYSMMU_FIMC2[0]     |   [4]   |  RW  | Read)  The current interrupt enable bit.               |     0x0     |
 * -------------------------------------|        0 = Masks.                                      |-------------|
 * SYSMMU_FIMC3[0]     |   [5]   |  RW  |        1 = Enables.                                    |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_JPEG[0]      |   [6]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_2D[0]        |   [7]   |  RW  |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * SYSMMU_ROTATOR[0]   |   [8]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_GPS[0]       |   [9]   |  RW  |                                                        |     0x0     |
 * -------------------------------------| Clears the corresponding interrupt enable bit to "1".  |-------------|
 * SYSMMU_LCD0_M0[0]   |  [10]   |  RW  | If you set the interrupt enable bit, interrupt         |     0x0     |
 * -------------------------------------| combiner will mask the interrupt.                      |-------------|
 * RSVD                |  [11]   |  -   | Write) 0 = Does not change the current settings.       |     0x0     |
 * -------------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * SYSMMU_TV_M0[0]     |  [12]   |  RW  | Read)  The current interrupt enable bit.               |     0x0     |
 * -------------------------------------|        0 = Masks.                                      |-------------|
 * SYSMMU_MFC_M0[0]    |  [13]   |  RW  |        1 = Enables.                                    |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_MFC_M1[0]    |  [14]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * RSVD                |  [15]   |  -   |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * SYSMMU_MDMA[1]      |  [16]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_SSS[1]       |  [17]   |  RW  |                                                        |     0x0     |
 * -------------------------------------| Clears the corresponding interrupt enable bit to "1".  |-------------|
 * SYSMMU_FIMC0[1]     |  [18]   |  RW  | If you set the interrupt enable bit, interrupt         |     0x0     |
 * -------------------------------------| combiner will mask the interrupt.                      |-------------|
 * SYSMMU_FIMC1[1]     |  [19]   |  RW  | Write) 0 = Does not change the current settings.       |     0x0     |
 * -------------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * SYSMMU_FIMC2[1]     |  [20]   |  RW  | Read)  The current interrupt enable bit.               |     0x0     |
 * -------------------------------------|        0 = Masks.                                      |-------------|
 * SYSMMU_FIMC3[1]     |  [21]   |  RW  |        1 = Enables.                                    |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_JPEG[1]      |  [22]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_2D[1]        |  [23]   |  RW  |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * SYSMMU_ROTATOR[1]   |  [24]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_GPS[1]       |  [25]   |  RW  |                                                        |     0x0     |
 * -------------------------------------| Clears the corresponding interrupt enable bit to "1".  |-------------|
 * SYSMMU_LCD0_M0[1]   |  [26]   |  RW  | If you set the interrupt enable bit, interrupt         |     0x0     |
 * -------------------------------------| combiner will mask the interrupt.                      |-------------|
 * RSVD                |  [27]   |  -   | Write) 0 = Does not change the current settings.       |     0x0     |
 * -------------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * SYSMMU_TV_M0[1]     |  [28]   |  RW  | Read)  The current interrupt enable bit.               |     0x0     |
 * -------------------------------------|        0 = Masks.                                      |-------------|
 * SYSMMU_MFC_M0[1]    |  [29]   |  RW  |        1 = Enables.                                    |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_MFC_M1[1]    |  [30]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * RSVD                |  [31]   |  -   |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 */

typedef union IECR1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYSMMU_MDMA_0:1;           //0
        uint32_t SYSMMU_SSS_0:1;            //1
        uint32_t SYSMMU_FIMC0_0:1;          //2
        uint32_t SYSMMU_FIMC1_0:1;          //3
        uint32_t SYSMMU_FIMC2_0:1;          //4
        uint32_t SYSMMU_FIMC3_0:1;          //5
        uint32_t SYSMMU_JPEG_0:1;           //6
        uint32_t SYSMMU_2D_0:1;             //7
        uint32_t SYSMMU_ROTATOR_0:1;        //8
        uint32_t SYSMMU_GPS_0:1;            //9
        uint32_t SYSMMU_LCD0_M0_0:1;        //10
        uint32_t Reserved0:1;               //11
        uint32_t SYSMMU_TV_M0_0:1;          //12
        uint32_t SYSMMU_MFC_M0_0:1;         //13
        uint32_t SYSMMU_MFC_M1_0:1;         //14
        uint32_t Reserved1:1;               //15
        uint32_t SYSMMU_MDMA_1:1;           //16
        uint32_t SYSMMU_SSS_1:1;            //17
        uint32_t SYSMMU_FIMC0_1:1;          //18
        uint32_t SYSMMU_FIMC1_1:1;          //19
        uint32_t SYSMMU_FIMC2_1:1;          //20
        uint32_t SYSMMU_FIMC3_1:1;          //21
        uint32_t SYSMMU_JPEG_1:1;           //22
        uint32_t SYSMMU_2D_1:1;             //23
        uint32_t SYSMMU_ROTATOR_1:1;        //24
        uint32_t SYSMMU_GPS_1:1;            //25
        uint32_t SYSMMU_LCD0_M0_1:1;        //26
        uint32_t Reserved2:1;               //27
        uint32_t SYSMMU_TV_M0_1:1;          //28
        uint32_t SYSMMU_MFC_M0_1:1;         //29
        uint32_t SYSMMU_MFC_M1_1:1;         //30
        uint32_t Reserved3:1;               //31
    } bits;
} IECR1;

/*
 * ISTR1
 * 
 * Address = Interrupt Combiner Base Address 1 + 0x0018
 * Reset Value = Undefined
 * 
 *         Name        |   Bit   | Type |                      Description                       | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------|
 * SYSMMU_MDMA[0]      |   [0]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_SSS[0]       |   [1]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_FIMC0[0]     |   [2]   |  R   |                                                        |     0x0     |
 * -------------------------------------| Interrupt pending status                               |-------------|
 * SYSMMU_FIMC1[0]     |   [3]   |  R   | The corresponding interrupt enable bit does not        |     0x0     |
 * -------------------------------------| affect this pending status.                            |-------------|
 * SYSMMU_FIMC2[0]     |   [4]   |  R   | 0 = The interrupt is not pending.                      |     0x0     |
 * -------------------------------------| 1 = The interrupt is pending.                          |-------------|
 * SYSMMU_FIMC3[0]     |   [5]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_JPEG[0]      |   [6]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_2D[0]        |   [7]   |  R   |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * SYSMMU_ROTATOR[0]   |   [8]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_GPS[0]       |   [9]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_LCD0_M0[0]   |  [10]   |  R   |                                                        |     0x0     |
 * -------------------------------------| Interrupt pending status                               |-------------|
 * RSVD                |  [11]   |  -   | The corresponding interrupt enable bit does not        |     0x0     |
 * -------------------------------------| affect this pending status.                            |-------------|
 * SYSMMU_TV_M0[0]     |  [12]   |  R   | 0 = The interrupt is not pending.                      |     0x0     |
 * -------------------------------------| 1 = The interrupt is pending.                          |-------------|
 * SYSMMU_MFC_M0[0]    |  [13]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_MFC_M1[0]    |  [14]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * RSVD                |  [15]   |  -   |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * SYSMMU_MDMA[1]      |  [16]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_SSS[1]       |  [17]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_FIMC0[1]     |  [18]   |  R   |                                                        |     0x0     |
 * -------------------------------------| Interrupt pending status                               |-------------|
 * SYSMMU_FIMC1[1]     |  [19]   |  R   | The corresponding interrupt enable bit does not        |     0x0     |
 * -------------------------------------| affect this pending status.                            |-------------|
 * SYSMMU_FIMC2[1]     |  [20]   |  R   | 0 = The interrupt is not pending.                      |     0x0     |
 * -------------------------------------| 1 = The interrupt is pending.                          |-------------|
 * SYSMMU_FIMC3[1]     |  [21]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_JPEG[1]      |  [22]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_2D[1]        |  [23]   |  R   |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * SYSMMU_ROTATOR[1]   |  [24]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_GPS[1]       |  [25]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_LCD0_M0[1]   |  [26]   |  R   |                                                        |     0x0     |
 * -------------------------------------| Interrupt pending status                               |-------------|
 * RSVD                |  [27]   |  -   | The corresponding interrupt enable bit does not        |     0x0     |
 * -------------------------------------| affect this pending status.                            |-------------|
 * SYSMMU_TV_M0[1]     |  [28]   |  R   | 0 = The interrupt is not pending.                      |     0x0     |
 * -------------------------------------| 1 = The interrupt is pending.                          |-------------|
 * SYSMMU_MFC_M0[1]    |  [29]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_MFC_M1[1]    |  [30]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * RSVD                |  [31]   |  -   |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 */

typedef union ISTR1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYSMMU_MDMA_0:1;           //0
        uint32_t SYSMMU_SSS_0:1;            //1
        uint32_t SYSMMU_FIMC0_0:1;          //2
        uint32_t SYSMMU_FIMC1_0:1;          //3
        uint32_t SYSMMU_FIMC2_0:1;          //4
        uint32_t SYSMMU_FIMC3_0:1;          //5
        uint32_t SYSMMU_JPEG_0:1;           //6
        uint32_t SYSMMU_2D_0:1;             //7
        uint32_t SYSMMU_ROTATOR_0:1;        //8
        uint32_t SYSMMU_GPS_0:1;            //9
        uint32_t SYSMMU_LCD0_M0_0:1;        //10
        uint32_t Reserved0:1;               //11
        uint32_t SYSMMU_TV_M0_0:1;          //12
        uint32_t SYSMMU_MFC_M0_0:1;         //13
        uint32_t SYSMMU_MFC_M1_0:1;         //14
        uint32_t Reserved1:1;               //15
        uint32_t SYSMMU_MDMA_1:1;           //16
        uint32_t SYSMMU_SSS_1:1;            //17
        uint32_t SYSMMU_FIMC0_1:1;          //18
        uint32_t SYSMMU_FIMC1_1:1;          //19
        uint32_t SYSMMU_FIMC2_1:1;          //20
        uint32_t SYSMMU_FIMC3_1:1;          //21
        uint32_t SYSMMU_JPEG_1:1;           //22
        uint32_t SYSMMU_2D_1:1;             //23
        uint32_t SYSMMU_ROTATOR_1:1;        //24
        uint32_t SYSMMU_GPS_1:1;            //25
        uint32_t SYSMMU_LCD0_M0_1:1;        //26
        uint32_t Reserved2:1;               //27
        uint32_t SYSMMU_TV_M0_1:1;          //28
        uint32_t SYSMMU_MFC_M0_1:1;         //29
        uint32_t SYSMMU_MFC_M1_1:1;         //30
        uint32_t Reserved3:1;               //31
    } bits;
} ISTR1;

/*
 * IMSR1
 * 
 * Address = Interrupt Combiner Base Address 1 + 0x001C
 * Reset Value = Undefined
 * 
 *         Name        |   Bit   | Type |                      Description                       | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------|
 * SYSMMU_MDMA[0]      |   [0]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_SSS[0]       |   [1]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_FIMC0[0]     |   [2]   |  R   |                                                        |     0x0     |
 * -------------------------------------| Masked interrupt pending status.                       |-------------|
 * SYSMMU_FIMC1[0]     |   [3]   |  R   | If the corresponding interrupt enable bit is "0", the  |     0x0     |
 * -------------------------------------| IMSR bit reads as "0".                                 |-------------|
 * SYSMMU_FIMC2[0]     |   [4]   |  R   | 0 = The interrupt is not pending.                      |     0x0     |
 * -------------------------------------| 1 = The interrupt is pending.                          |-------------|
 * SYSMMU_FIMC3[0]     |   [5]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_JPEG[0]      |   [6]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_2D[0]        |   [7]   |  R   |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * SYSMMU_ROTATOR[0]   |   [8]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_GPS[0]       |   [9]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_LCD0_M0[0]   |  [10]   |  R   |                                                        |     0x0     |
 * -------------------------------------| Masked interrupt pending status.                       |-------------|
 * RSVD                |  [11]   |  -   | If the corresponding interrupt enable bit is "0", the  |     0x0     |
 * -------------------------------------| IMSR bit reads as "0".                                 |-------------|
 * SYSMMU_TV_M0[0]     |  [12]   |  R   | 0 = The interrupt is not pending.                      |     0x0     |
 * -------------------------------------| 1 = The interrupt is pending.                          |-------------|
 * SYSMMU_MFC_M0[0]    |  [13]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_MFC_M1[0]    |  [14]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * RSVD                |  [15]   |  -   |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * SYSMMU_MDMA[1]      |  [16]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_SSS[1]       |  [17]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_FIMC0[1]     |  [18]   |  R   |                                                        |     0x0     |
 * -------------------------------------| Masked interrupt pending status.                       |-------------|
 * SYSMMU_FIMC1[1]     |  [19]   |  R   | If the corresponding interrupt enable bit is "0", the  |     0x0     |
 * -------------------------------------| IMSR bit reads as "0".                                 |-------------|
 * SYSMMU_FIMC2[1]     |  [20]   |  R   | 0 = The interrupt is not pending.                      |     0x0     |
 * -------------------------------------| 1 = The interrupt is pending.                          |-------------|
 * SYSMMU_FIMC3[1]     |  [21]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_JPEG[1]      |  [22]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_2D[1]        |  [23]   |  R   |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * SYSMMU_ROTATOR[1]   |  [24]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_GPS[1]       |  [25]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_LCD0_M0[1]   |  [26]   |  R   |                                                        |     0x0     |
 * -------------------------------------| Masked interrupt pending status.                       |-------------|
 * RSVD                |  [27]   |  -   | If the corresponding interrupt enable bit is "0", the  |     0x0     |
 * -------------------------------------| IMSR bit reads as "0".                                 |-------------|
 * SYSMMU_TV_M0[1]     |  [28]   |  R   | 0 = The interrupt is not pending.                      |     0x0     |
 * -------------------------------------| 1 = The interrupt is pending.                          |-------------|
 * SYSMMU_MFC_M0[1]    |  [29]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * SYSMMU_MFC_M1[1]    |  [30]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * RSVD                |  [31]   |  -   |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 */

typedef union IMSR1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYSMMU_MDMA_0:1;           //0
        uint32_t SYSMMU_SSS_0:1;            //1
        uint32_t SYSMMU_FIMC0_0:1;          //2
        uint32_t SYSMMU_FIMC1_0:1;          //3
        uint32_t SYSMMU_FIMC2_0:1;          //4
        uint32_t SYSMMU_FIMC3_0:1;          //5
        uint32_t SYSMMU_JPEG_0:1;           //6
        uint32_t SYSMMU_2D_0:1;             //7
        uint32_t SYSMMU_ROTATOR_0:1;        //8
        uint32_t SYSMMU_GPS_0:1;            //9
        uint32_t SYSMMU_LCD0_M0_0:1;        //10
        uint32_t Reserved0:1;               //11
        uint32_t SYSMMU_TV_M0_0:1;          //12
        uint32_t SYSMMU_MFC_M0_0:1;         //13
        uint32_t SYSMMU_MFC_M1_0:1;         //14
        uint32_t Reserved1:1;               //15
        uint32_t SYSMMU_MDMA_1:1;           //16
        uint32_t SYSMMU_SSS_1:1;            //17
        uint32_t SYSMMU_FIMC0_1:1;          //18
        uint32_t SYSMMU_FIMC1_1:1;          //19
        uint32_t SYSMMU_FIMC2_1:1;          //20
        uint32_t SYSMMU_FIMC3_1:1;          //21
        uint32_t SYSMMU_JPEG_1:1;           //22
        uint32_t SYSMMU_2D_1:1;             //23
        uint32_t SYSMMU_ROTATOR_1:1;        //24
        uint32_t SYSMMU_GPS_1:1;            //25
        uint32_t SYSMMU_LCD0_M0_1:1;        //26
        uint32_t Reserved2:1;               //27
        uint32_t SYSMMU_TV_M0_1:1;          //28
        uint32_t SYSMMU_MFC_M0_1:1;         //29
        uint32_t SYSMMU_MFC_M1_1:1;         //30
        uint32_t Reserved3:1;               //31
    } bits;
} IMSR1;

/*
 * IESR2
 * 
 * Address = Interrupt Combiner Base Address 1 + 0x0020
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                      Description                       | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------|
 * PPMU_XIU_L          |   [0]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_XIU_R          |   [1]   |  RW  |                                                        |     0x0     |
 * -------------------------------------| Sets the corresponding interrupt enable bit to "1". If |-------------|
 * PPMU_XIU_R_S1       |   [2]   |  RW  | you set the interrupt enable bit, interrupt combiner   |     0x0     |
 * -------------------------------------| serves the interrupt request.                          |-------------|
 * PPMU_ACP0_M0        |   [3]   |  RW  | Write) 0 = Does not change the current settings.       |     0x0     |
 * -------------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * PPMU_D_LEFT_M0      |   [4]   |  RW  | Read)  The current interrupt enable bit.               |     0x0     |
 * -------------------------------------|        0 = Masks.                                      |-------------|
 * PPMU_D_RIGHT_M0     |   [5]   |  RW  |        1 = Enables.                                    |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_CAMIF_M0       |   [6]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_IMAGE_M0       |   [7]   |  RW  |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * PPMU_LCD0           |   [8]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_ISP_MX         |   [9]   |  RW  | Sets the corresponding interrupt enable bit to "1". If |     0x0     |
 * -------------------------------------| you set the interrupt enable bit, interrupt combiner   |-------------|
 * PPMU_FILE_D_M0      |  [10]   |  RW  | serves the interrupt request.                          |     0x0     |
 * -------------------------------------| Write) 0 = Does not change the current settings.       |-------------|
 * PPMU_TV_M0          |  [11]   |  -   |        1 = Sets the interrupt enable bit to "1".       |     0x0     |
 * -------------------------------------| Read)  The current interrupt enable bit.               |-------------|
 * PPMU_3D             |  [12]   |  RW  |        0 = Masks.                                      |     0x0     |
 * -------------------------------------|        1 = Enables.                                    |-------------|
 * PPMU_MFC_M0         |  [13]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_MFC_M1         |  [14]   |  RW  |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [15]   |  -   | Reserved                                               |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * GPIO_AUDIO          |  [16]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * RP_TIMER            |  [17]   |  RW  |                                                        |     0x0     |
 * -------------------------------------| Sets the corresponding interrupt enable bit to "1". If |-------------|
 * L2CACHE             |  [18]   |  RW  | you set the interrupt enable bit, interrupt combiner   |     0x0     |
 * -------------------------------------| serves the interrupt request.                          |-------------|
 * ADC                 |  [19]   |  RW  | Write) 0 = Does not change the current settings.       |     0x0     |
 * -------------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * DMC0_PPC_PEREV_A    |  [20]   |  RW  | Read)  The current interrupt enable bit.               |     0x0     |
 * -------------------------------------|        0 = Masks.                                      |-------------|
 * DMC0_PPC_PEREV_M    |  [21]   |  RW  |        1 = Enables.                                    |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * DMC1_PPC_PEREV_A    |  [22]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * DMC1_PPC_PEREV_M    |  [23]   |  RW  |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * LCD0[0]             |  [24]   |  RW  | Sets the corresponding interrupt enable bit to "1". If |     0x0     |
 * -------------------------------------| you set the interrupt enable bit, interrupt combiner   |-------------|
 * LCD0[1]             |  [25]   |  RW  | serves the interrupt request.                          |     0x0     |
 * -------------------------------------| Write) 0 = Does not change the current settings.       |-------------|
 * LCD0[2]             |  [26]   |  RW  |        1 = Sets the interrupt enable bit to "1".       |     0x0     |
 * -------------------------------------| Read)  The current interrupt enable bit.               |-------------|
 * LCD0[3]             |  [27]   |  RW  |        0 = Masks.                                      |     0x0     |
 *                     |         |      |        1 = Enables.                                    |             |
 * ------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:28] |  -   | Reserved                                               |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 */

typedef union IESR1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PPMU_XIU_L:1;              //0
        uint32_t PPMU_XIU_R:1;              //1
        uint32_t PPMU_XIU_R_S1:1;           //2
        uint32_t PPMU_ACP0_M0:1;            //3
        uint32_t PPMU_D_LEFT_M0:1;          //4
        uint32_t PPMU_D_RIGHT_M0:1;         //5
        uint32_t PPMU_CAMIF_M0:1;           //6
        uint32_t PPMU_IMAGE_M0:1;           //7
        uint32_t PPMU_LCD0:1;               //8
        uint32_t PPMU_ISP_MX:1;             //9
        uint32_t PPMU_FILE_D_M0:1;          //10
        uint32_t PPMU_TV_M0:1;              //11
        uint32_t PPMU_3D:1;                 //12
        uint32_t PPMU_MFC_M0:1;             //13
        uint32_t PPMU_MFC_M1:1;             //14
        uint32_t Reserved0:1;               //15
        uint32_t GPIO_AUDIO:1;              //16
        uint32_t RP_TIMER:1;                //17
        uint32_t L2CACHE:1;                 //18
        uint32_t ADC:1;                     //19
        uint32_t DMC0_PPC_PEREV_A:1;        //20
        uint32_t DMC0_PPC_PEREV_M:1;        //21
        uint32_t DMC1_PPC_PEREV_A:1;        //22
        uint32_t DMC1_PPC_PEREV_M:1;        //23
        uint32_t LCD0_0:1;                  //24
        uint32_t LCD0_1:1;                  //25
        uint32_t LCD0_2:1;                  //26
        uint32_t LCD0_3:1;                  //27
        uint32_t Reserved1:4;               //31:28
    } bits;
} IESR1;

/*
 * IECR2
 * 
 * Address = Interrupt Combiner Base Address 1 + 0x0024
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                      Description                       | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------|
 * PPMU_XIU_L          |   [0]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_XIU_R          |   [1]   |  RW  |                                                        |     0x0     |
 * -------------------------------------| Clears the corresponding interrupt enable bit to "1".  |-------------|
 * PPMU_XIU_R_S1       |   [2]   |  RW  | If you set the interrupt enable bit, interrupt         |     0x0     |
 * -------------------------------------| combiner will mask the interrupt.                      |-------------|
 * PPMU_ACP0_M0        |   [3]   |  RW  | Write) 0 = Does not change the current settings.       |     0x0     |
 * -------------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * PPMU_D_LEFT_M0      |   [4]   |  RW  | Read)  The current interrupt enable bit.               |     0x0     |
 * -------------------------------------|        0 = Masks.                                      |-------------|
 * PPMU_D_RIGHT_M0     |   [5]   |  RW  |        1 = Enables.                                    |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_CAMIF_M0       |   [6]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_IMAGE_M0       |   [7]   |  RW  |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * PPMU_LCD0           |   [8]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_ISP_MX         |   [9]   |  RW  | Clears the corresponding interrupt enable bit to "1".  |     0x0     |
 * -------------------------------------| If you set the interrupt enable bit, interrupt         |-------------|
 * PPMU_FILE_D_M0      |  [10]   |  RW  | combiner will mask the interrupt.                      |     0x0     |
 * -------------------------------------| Write) 0 = Does not change the current settings.       |-------------|
 * PPMU_TV_M0          |  [11]   |  -   |        1 = Sets the interrupt enable bit to "1".       |     0x0     |
 * -------------------------------------| Read)  The current interrupt enable bit.               |-------------|
 * PPMU_3D             |  [12]   |  RW  |        0 = Masks.                                      |     0x0     |
 * -------------------------------------|        1 = Enables.                                    |-------------|
 * PPMU_MFC_M0         |  [13]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_MFC_M1         |  [14]   |  RW  |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [15]   |  -   | Reserved                                               |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * GPIO_AUDIO          |  [16]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * RP_TIMER            |  [17]   |  RW  |                                                        |     0x0     |
 * -------------------------------------| Clears the corresponding interrupt enable bit to "1".  |-------------|
 * L2CACHE             |  [18]   |  RW  | If you set the interrupt enable bit, interrupt         |     0x0     |
 * -------------------------------------| combiner will mask the interrupt.                      |-------------|
 * ADC                 |  [19]   |  RW  | Write) 0 = Does not change the current settings.       |     0x0     |
 * -------------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * DMC0_PPC_PEREV_A    |  [20]   |  RW  | Read)  The current interrupt enable bit.               |     0x0     |
 * -------------------------------------|        0 = Masks.                                      |-------------|
 * DMC0_PPC_PEREV_M    |  [21]   |  RW  |        1 = Enables.                                    |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * DMC1_PPC_PEREV_A    |  [22]   |  RW  |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * DMC1_PPC_PEREV_M    |  [23]   |  RW  |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * LCD0[0]             |  [24]   |  RW  | Clears the corresponding interrupt enable bit to "1".  |     0x0     |
 * -------------------------------------| If you set the interrupt enable bit, interrupt         |-------------|
 * LCD0[1]             |  [25]   |  RW  | combiner will mask the interrupt.                      |     0x0     |
 * -------------------------------------| Write) 0 = Does not change the current settings.       |-------------|
 * LCD0[2]             |  [26]   |  RW  |        1 = Sets the interrupt enable bit to "1".       |     0x0     |
 * -------------------------------------| Read)  The current interrupt enable bit.               |-------------|
 * LCD0[3]             |  [27]   |  RW  |        0 = Masks.                                      |     0x0     |
 *                     |         |      |        1 = Enables.                                    |             |
 * ------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:28] |  -   | Reserved                                               |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 */

typedef union IECR2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PPMU_XIU_L:1;              //0
        uint32_t PPMU_XIU_R:1;              //1
        uint32_t PPMU_XIU_R_S1:1;           //2
        uint32_t PPMU_ACP0_M0:1;            //3
        uint32_t PPMU_D_LEFT_M0:1;          //4
        uint32_t PPMU_D_RIGHT_M0:1;         //5
        uint32_t PPMU_CAMIF_M0:1;           //6
        uint32_t PPMU_IMAGE_M0:1;           //7
        uint32_t PPMU_LCD0:1;               //8
        uint32_t PPMU_ISP_MX:1;             //9
        uint32_t PPMU_FILE_D_M0:1;          //10
        uint32_t PPMU_TV_M0:1;              //11
        uint32_t PPMU_3D:1;                 //12
        uint32_t PPMU_MFC_M0:1;             //13
        uint32_t PPMU_MFC_M1:1;             //14
        uint32_t Reserved0:1;               //15
        uint32_t GPIO_AUDIO:1;              //16
        uint32_t RP_TIMER:1;                //17
        uint32_t L2CACHE:1;                 //18
        uint32_t ADC:1;                     //19
        uint32_t DMC0_PPC_PEREV_A:1;        //20
        uint32_t DMC0_PPC_PEREV_M:1;        //21
        uint32_t DMC1_PPC_PEREV_A:1;        //22
        uint32_t DMC1_PPC_PEREV_M:1;        //23
        uint32_t LCD0_0:1;                  //24
        uint32_t LCD0_1:1;                  //25
        uint32_t LCD0_2:1;                  //26
        uint32_t LCD0_3:1;                  //27
        uint32_t Reserved1:4;               //31:28
    } bits;
} IECR2;

/*
 * ISTR2
 * 
 * Address = Interrupt Combiner Base Address 1 + 0x0028
 * Reset Value = Undefined
 * 
 *         Name        |   Bit   | Type |                      Description                       | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------|
 * PPMU_XIU_L          |   [0]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_XIU_R          |   [1]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_XIU_R_S1       |   [2]   |  R   |                                                        |     0x0     |
 * -------------------------------------| Interrupt pending status                               |-------------|
 * PPMU_ACP0_M0        |   [3]   |  R   | The corresponding interrupt enable bit does not        |     0x0     |
 * -------------------------------------| affect this pending status.                            |-------------|
 * PPMU_D_LEFT_M0      |   [4]   |  R   | 0 = The interrupt is not pending.                      |     0x0     |
 * -------------------------------------| 1 = The interrupt is pending.                          |-------------|
 * PPMU_D_RIGHT_M0     |   [5]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_CAMIF_M0       |   [6]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_IMAGE_M0       |   [7]   |  R   |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * PPMU_LCD0           |   [8]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_ISP_MX         |   [9]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_FILE_D_M0      |  [10]   |  R   | Interrupt pending status                               |     0x0     |
 * -------------------------------------| The corresponding interrupt enable bit does not        |-------------|
 * PPMU_TV_M0          |  [11]   |  -   | affect this pending status.                            |     0x0     |
 * -------------------------------------| 0 = The interrupt is not pending.                      |-------------|
 * PPMU_3D             |  [12]   |  R   | 1 = The interrupt is pending.                          |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_MFC_M0         |  [13]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_MFC_M1         |  [14]   |  R   |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [15]   |  -   | Reserved                                               |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * GPIO_AUDIO          |  [16]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * RP_TIMER            |  [17]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * L2CACHE             |  [18]   |  R   |                                                        |     0x0     |
 * -------------------------------------| Interrupt pending status                               |-------------|
 * ADC                 |  [19]   |  R   | The corresponding interrupt enable bit does not        |     0x0     |
 * -------------------------------------| affect this pending status.                            |-------------|
 * DMC0_PPC_PEREV_A    |  [20]   |  R   | 0 = The interrupt is not pending.                      |     0x0     |
 * -------------------------------------| 1 = The interrupt is pending.                          |-------------|
 * DMC0_PPC_PEREV_M    |  [21]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * DMC1_PPC_PEREV_A    |  [22]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * DMC1_PPC_PEREV_M    |  [23]   |  R   |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * LCD0[0]             |  [24]   |  R   |                                                        |     0x0     |
 * -------------------------------------| Interrupt pending status                               |-------------|
 * LCD0[1]             |  [25]   |  R   | The corresponding interrupt enable bit does not        |     0x0     |
 * -------------------------------------| affect this pending status.                            |-------------|
 * LCD0[2]             |  [26]   |  R   | 0 = The interrupt is not pending.                      |     0x0     |
 * -------------------------------------| 1 = The interrupt is pending.                          |-------------|
 * LCD0[3]             |  [27]   |  R   |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:28] |  -   | Reserved                                               |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 */

typedef union ISTR2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PPMU_XIU_L:1;              //0
        uint32_t PPMU_XIU_R:1;              //1
        uint32_t PPMU_XIU_R_S1:1;           //2
        uint32_t PPMU_ACP0_M0:1;            //3
        uint32_t PPMU_D_LEFT_M0:1;          //4
        uint32_t PPMU_D_RIGHT_M0:1;         //5
        uint32_t PPMU_CAMIF_M0:1;           //6
        uint32_t PPMU_IMAGE_M0:1;           //7
        uint32_t PPMU_LCD0:1;               //8
        uint32_t PPMU_ISP_MX:1;             //9
        uint32_t PPMU_FILE_D_M0:1;          //10
        uint32_t PPMU_TV_M0:1;              //11
        uint32_t PPMU_3D:1;                 //12
        uint32_t PPMU_MFC_M0:1;             //13
        uint32_t PPMU_MFC_M1:1;             //14
        uint32_t Reserved0:1;               //15
        uint32_t GPIO_AUDIO:1;              //16
        uint32_t RP_TIMER:1;                //17
        uint32_t L2CACHE:1;                 //18
        uint32_t ADC:1;                     //19
        uint32_t DMC0_PPC_PEREV_A:1;        //20
        uint32_t DMC0_PPC_PEREV_M:1;        //21
        uint32_t DMC1_PPC_PEREV_A:1;        //22
        uint32_t DMC1_PPC_PEREV_M:1;        //23
        uint32_t LCD0_0:1;                  //24
        uint32_t LCD0_1:1;                  //25
        uint32_t LCD0_2:1;                  //26
        uint32_t LCD0_3:1;                  //27
        uint32_t Reserved1:4;               //31:28
    } bits;
} ISTR2;

/*
 * IMSR2
 * 
 * Address = Interrupt Combiner Base Address 1 + 0x002C
 * Reset Value = Undefined
 * 
 *         Name        |   Bit   | Type |                      Description                       | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------|
 * PPMU_XIU_L          |   [0]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_XIU_R          |   [1]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_XIU_R_S1       |   [2]   |  R   |                                                        |     0x0     |
 * -------------------------------------| Masked interrupt pending status.                       |-------------|
 * PPMU_ACP0_M0        |   [3]   |  R   | If the corresponding interrupt enable bit is "0", the  |     0x0     |
 * -------------------------------------| IMSR bit reads as "0".                                 |-------------|
 * PPMU_D_LEFT_M0      |   [4]   |  R   | 0 = The interrupt is not pending.                      |     0x0     |
 * -------------------------------------| 1 = The interrupt is pending.                          |-------------|
 * PPMU_D_RIGHT_M0     |   [5]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_CAMIF_M0       |   [6]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_IMAGE_M0       |   [7]   |  R   |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * PPMU_LCD0           |   [8]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_ISP_MX         |   [9]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_FILE_D_M0      |  [10]   |  R   | Masked interrupt pending status.                       |     0x0     |
 * -------------------------------------| If the corresponding interrupt enable bit is "0", the  |-------------|
 * PPMU_TV_M0          |  [11]   |  -   | IMSR bit reads as "0".                                 |     0x0     |
 * -------------------------------------| 0 = The interrupt is not pending.                      |-------------|
 * PPMU_3D             |  [12]   |  R   | 1 = The interrupt is pending.                          |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_MFC_M0         |  [13]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * PPMU_MFC_M1         |  [14]   |  R   |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [15]   |  -   | Reserved                                               |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * GPIO_AUDIO          |  [16]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * RP_TIMER            |  [17]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * L2CACHE             |  [18]   |  R   |                                                        |     0x0     |
 * -------------------------------------| Masked interrupt pending status.                       |-------------|
 * ADC                 |  [19]   |  R   | If the corresponding interrupt enable bit is "0", the  |     0x0     |
 * -------------------------------------| IMSR bit reads as "0".                                 |-------------|
 * DMC0_PPC_PEREV_A    |  [20]   |  R   | 0 = The interrupt is not pending.                      |     0x0     |
 * -------------------------------------| 1 = The interrupt is pending.                          |-------------|
 * DMC0_PPC_PEREV_M    |  [21]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * DMC1_PPC_PEREV_A    |  [22]   |  R   |                                                        |     0x0     |
 * -------------------------------------|                                                        |-------------|
 * DMC1_PPC_PEREV_M    |  [23]   |  R   |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * LCD0[0]             |  [24]   |  R   |                                                        |     0x0     |
 * -------------------------------------| Masked interrupt pending status.                       |-------------|
 * LCD0[1]             |  [25]   |  R   | If the corresponding interrupt enable bit is "0", the  |     0x0     |
 * -------------------------------------| IMSR bit reads as "0".                                 |-------------|
 * LCD0[2]             |  [26]   |  R   | 0 = The interrupt is not pending.                      |     0x0     |
 * -------------------------------------| 1 = The interrupt is pending.                          |-------------|
 * LCD0[3]             |  [27]   |  R   |                                                        |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:28] |  -   | Reserved                                               |     0x0     |
 * ------------------------------------------------------------------------------------------------------------|
 */

typedef union IMSR2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PPMU_XIU_L:1;              //0
        uint32_t PPMU_XIU_R:1;              //1
        uint32_t PPMU_XIU_R_S1:1;           //2
        uint32_t PPMU_ACP0_M0:1;            //3
        uint32_t PPMU_D_LEFT_M0:1;          //4
        uint32_t PPMU_D_RIGHT_M0:1;         //5
        uint32_t PPMU_CAMIF_M0:1;           //6
        uint32_t PPMU_IMAGE_M0:1;           //7
        uint32_t PPMU_LCD0:1;               //8
        uint32_t PPMU_ISP_MX:1;             //9
        uint32_t PPMU_FILE_D_M0:1;          //10
        uint32_t PPMU_TV_M0:1;              //11
        uint32_t PPMU_3D:1;                 //12
        uint32_t PPMU_MFC_M0:1;             //13
        uint32_t PPMU_MFC_M1:1;             //14
        uint32_t Reserved0:1;               //15
        uint32_t GPIO_AUDIO:1;              //16
        uint32_t RP_TIMER:1;                //17
        uint32_t L2CACHE:1;                 //18
        uint32_t ADC:1;                     //19
        uint32_t DMC0_PPC_PEREV_A:1;        //20
        uint32_t DMC0_PPC_PEREV_M:1;        //21
        uint32_t DMC1_PPC_PEREV_A:1;        //22
        uint32_t DMC1_PPC_PEREV_M:1;        //23
        uint32_t LCD0_0:1;                  //24
        uint32_t LCD0_1:1;                  //25
        uint32_t LCD0_2:1;                  //26
        uint32_t LCD0_3:1;                  //27
        uint32_t Reserved1:4;               //31:28
    } bits;
} IMSR2;

/*
 * IESR3
 * 
 * Address = Interrupt Combiner Base Address 1 + 0x0030
 * Reset Value = 0x0000_0000
 * 
 *       Name       |   Bit   | Type |                      Description                       | Reset Value | 
 * ---------------------------------------------------------------------------------------------------------|
 * UART4            |   [0]   |  RW  |                                                        |     0x0     |
 * ----------------------------------|                                                        |-------------|
 * MIPI_HSI         |   [1]   |  RW  | Sets the corresponding interrupt enable bit to "1". If |     0x0     |
 * ----------------------------------| you set the interrupt enable bit, interrupt combiner   |-------------|
 * RSVD             |  [3:2]  |  RW  | serves the interrupt request.                          |     0x0     |
 * ----------------------------------| Write) 0 = Does not change the current settings.       |-------------|
 * MCT_G0           |   [4]   |  RW  |        1 = Sets the interrupt enable bit to "1".       |     0x0     |
 * ----------------------------------| Read)  The current interrupt enable bit.               |-------------|
 * MCT_G1           |   [5]   |  RW  |        0 = Masks.                                      |     0x0     |
 * ----------------------------------|        1 = Enables.                                    |-------------|
 * MCT_G2           |   [6]   |  RW  |                                                        |     0x0     |
 * ----------------------------------|                                                        |-------------|
 * MCT_G3           |   [7]   |  RW  |                                                        |     0x0     |
 * ---------------------------------------------------------------------------------------------------------|
 * RSVD             |   [8]   |  -   |                                                        |     0x0     |
 * ----------------------------------|                                                        |-------------|
 * RSVD             |   [9]   |  -   | Sets the corresponding interrupt enable bit to "1". If |     0x0     |
 * ----------------------------------| you set the interrupt enable bit, interrupt combiner   |-------------|
 * RSVD             |  [10]   |  -   | serves the interrupt request.                          |     0x0     |
 * ----------------------------------| Write) 0 = Does not change the current settings.       |-------------|
 * RSVD             |  [11]   |  -   |        1 = Sets the interrupt enable bit to "1".       |     0x0     |
 * ----------------------------------| Read)  The current interrupt enable bit.               |-------------|
 * RSVD             |  [12]   |  -   |        0 = Masks.                                      |     0x0     |
 * ----------------------------------|        1 = Enables.                                    |-------------|
 * CPU_nIRPOUT_0    |  [13]   |  RW  |                                                        |     0x0     |
 * ----------------------------------|                                                        |-------------|
 * RSVD             | [15:14] |  -   |                                                        |     0x0     |
 * ---------------------------------------------------------------------------------------------------------|
 * RSVD             |  [16]   |  -   |                                                        |     0x0     |
 * ----------------------------------|                                                        |-------------|
 * RSVD             |  [17]   |  -   |                                                        |     0x0     |
 * ----------------------------------| Sets the corresponding interrupt enable bit to "1". If |-------------|
 * RSVD             |  [18]   |  -   | you set the interrupt enable bit, interrupt combiner   |     0x0     |
 * ----------------------------------| serves the interrupt request.                          |-------------|
 * RSVD             |  [19]   |  -   | Write) 0 = Does not change the current settings.       |     0x0     |
 * ----------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * RSVD             |  [20]   |  -   | Read)  The current interrupt enable bit.               |     0x0     |
 * ----------------------------------|        0 = Masks.                                      |-------------|
 * RSVD             |  [21]   |  -   |        1 = Enables.                                    |     0x0     |
 * ----------------------------------|                                                        |-------------|
 * CPU_nIRPOUT_1    |  [22]   |  RW  |                                                        |     0x0     |
 * ----------------------------------|                                                        |-------------|
 * RSVD             |  [23]   |  -   |                                                        |     0x0     |
 * ---------------------------------------------------------------------------------------------------------|
 * SCUEVABORT       |  [22]   |  RW  |                                                        |     0x0     |
 * ----------------------------------|                                                        |-------------|
 * ECNTRINTR        |  [23]   |  RW  |                                                        |     0x0     |
 * ----------------------------------| Sets the corresponding interrupt enable bit to "1". If |-------------|
 * ERRWTINTR        |  [24]   |  RW  | you set the interrupt enable bit, interrupt combiner   |     0x0     |
 * ----------------------------------| serves the interrupt request.                          |-------------|
 * ERRWDINTR        |  [25]   |  RW  | Write) 0 = Does not change the current settings.       |     0x0     |
 * ----------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * ERRRTINTR        |  [26]   |  RW  | Read)  The current interrupt enable bit.               |     0x0     |
 * ----------------------------------|        0 = Masks.                                      |-------------|
 * ERRRDINTR        |  [27]   |  RW  |        1 = Enables.                                    |     0x0     |
 * ----------------------------------|                                                        |-------------|
 * SLVERRINTR       | [31:28] |  RW  |                                                        |     0x0     |
 * ----------------------------------|                                                        |-------------|
 * DECERRINTR       | [31:28] |  RW  |                                                        |     0x0     |
 * ---------------------------------------------------------------------------------------------------------|
 */

typedef union IESR3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t UART4:1;               //0
        uint32_t MIPI_HSI:1;            //1
        uint32_t Reserved0:2;           //3:2
        uint32_t MCT_G0:1;              //4
        uint32_t MCT_G1:1;              //5
        uint32_t MCT_G2:1;              //6
        uint32_t MCT_G3:1;              //7
        uint32_t Reserved1:1;           //8
        uint32_t Reserved2:1;           //9
        uint32_t Reserved3:1;           //10
        uint32_t Reserved4:1;           //11
        uint32_t Reserved5:1;           //12
        uint32_t CPU_nIRPOUT_0:1;       //13
        uint32_t Reserved6:2;           //15:14
        uint32_t Reserved7:1;           //16
        uint32_t Reserved8:1;           //17
        uint32_t Reserved9:1;           //18
        uint32_t Reserved10:1;          //19
        uint32_t Reserved11:1;          //20
        uint32_t Reserved12:1;          //21
        uint32_t CPU_nIRPOUT_1:1;       //22
        uint32_t Reserved13:1;          //23
        uint32_t SCUEVABORT:1;          //24
        uint32_t ECNTRINTR:1;           //25
        uint32_t ERRWTINTR:1;           //26
        uint32_t ERRWDINTR:1;           //27
        uint32_t ERRRTINTR:1;           //28
        uint32_t ERRRDINTR:1;           //29
        uint32_t SLVERRINTR:1;          //30
        uint32_t DECERRINTR:1;          //31
    } bits;
} IESR3;

/*
 * IECR3
 * 
 * Address = Interrupt Combiner Base Address 1 + 0x0034
 * Reset Value = 0x0000_0000
 * 
 *       Name       |   Bit   | Type |                      Description                       | Reset Value | 
 * ---------------------------------------------------------------------------------------------------------|
 * UART4            |   [0]   |  RW  |                                                        |     0x0     |
 * ----------------------------------|                                                        |-------------|
 * MIPI_HSI         |   [1]   |  RW  | Clears the corresponding interrupt enable bit to "1".  |     0x0     |
 * ----------------------------------| If you set the interrupt enable bit, interrupt         |-------------|
 * RSVD             |  [3:2]  |  RW  | combiner will mask the interrupt.                      |     0x0     |
 * ----------------------------------| Write) 0 = Does not change the current settings.       |-------------|
 * MCT_G0           |   [4]   |  RW  |        1 = Sets the interrupt enable bit to "1".       |     0x0     |
 * ----------------------------------| Read)  The current interrupt enable bit.               |-------------|
 * MCT_G1           |   [5]   |  RW  |        0 = Masks.                                      |     0x0     |
 * ----------------------------------|        1 = Enables.                                    |-------------|
 * MCT_G2           |   [6]   |  RW  |                                                        |     0x0     |
 * ----------------------------------|                                                        |-------------|
 * MCT_G3           |   [7]   |  RW  |                                                        |     0x0     |
 * ---------------------------------------------------------------------------------------------------------|
 * RSVD             |   [8]   |  -   |                                                        |     0x0     |
 * ----------------------------------|                                                        |-------------|
 * RSVD             |   [9]   |  -   | Clears the corresponding interrupt enable bit to "1".  |     0x0     |
 * ----------------------------------| If you set the interrupt enable bit, interrupt         |-------------|
 * RSVD             |  [10]   |  -   | combiner will mask the interrupt.                      |     0x0     |
 * ----------------------------------| Write) 0 = Does not change the current settings.       |-------------|
 * RSVD             |  [11]   |  -   |        1 = Sets the interrupt enable bit to "1".       |     0x0     |
 * ----------------------------------| Read)  The current interrupt enable bit.               |-------------|
 * RSVD             |  [12]   |  -   |        0 = Masks.                                      |     0x0     |
 * ----------------------------------|        1 = Enables.                                    |-------------|
 * CPU_nIRPOUT_0    |  [13]   |  RW  |                                                        |     0x0     |
 * ----------------------------------|                                                        |-------------|
 * RSVD             | [15:14] |  -   |                                                        |     0x0     |
 * ---------------------------------------------------------------------------------------------------------|
 * RSVD             |  [16]   |  -   |                                                        |     0x0     |
 * ----------------------------------|                                                        |-------------|
 * RSVD             |  [17]   |  -   |                                                        |     0x0     |
 * ----------------------------------| Clears the corresponding interrupt enable bit to "1".  |-------------|
 * RSVD             |  [18]   |  -   | If you set the interrupt enable bit, interrupt         |     0x0     |
 * ----------------------------------| combiner will mask the interrupt.                      |-------------|
 * RSVD             |  [19]   |  -   | Write) 0 = Does not change the current settings.       |     0x0     |
 * ----------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * RSVD             |  [20]   |  -   | Read)  The current interrupt enable bit.               |     0x0     |
 * ----------------------------------|        0 = Masks.                                      |-------------|
 * RSVD             |  [21]   |  -   |        1 = Enables.                                    |     0x0     |
 * ----------------------------------|                                                        |-------------|
 * CPU_nIRPOUT_1    |  [22]   |  RW  |                                                        |     0x0     |
 * ----------------------------------|                                                        |-------------|
 * RSVD             |  [23]   |  -   |                                                        |     0x0     |
 * ---------------------------------------------------------------------------------------------------------|
 * SCUEVABORT       |  [22]   |  RW  |                                                        |     0x0     |
 * ----------------------------------|                                                        |-------------|
 * ECNTRINTR        |  [23]   |  RW  |                                                        |     0x0     |
 * ----------------------------------| Clears the corresponding interrupt enable bit to "1".  |-------------|
 * ERRWTINTR        |  [24]   |  RW  | If you set the interrupt enable bit, interrupt         |     0x0     |
 * ----------------------------------| combiner will mask the interrupt.                      |-------------|
 * ERRWDINTR        |  [25]   |  RW  | Write) 0 = Does not change the current settings.       |     0x0     |
 * ----------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * ERRRTINTR        |  [26]   |  RW  | Read)  The current interrupt enable bit.               |     0x0     |
 * ----------------------------------|        0 = Masks.                                      |-------------|
 * ERRRDINTR        |  [27]   |  RW  |        1 = Enables.                                    |     0x0     |
 * ----------------------------------|                                                        |-------------|
 * SLVERRINTR       | [31:28] |  RW  |                                                        |     0x0     |
 * ----------------------------------|                                                        |-------------|
 * DECERRINTR       | [31:28] |  RW  |                                                        |     0x0     |
 * ---------------------------------------------------------------------------------------------------------|
 */

typedef union IECR3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t UART4:1;               //0
        uint32_t MIPI_HSI:1;            //1
        uint32_t Reserved0:2;           //3:2
        uint32_t MCT_G0:1;              //4
        uint32_t MCT_G1:1;              //5
        uint32_t MCT_G2:1;              //6
        uint32_t MCT_G3:1;              //7
        uint32_t Reserved1:1;           //8
        uint32_t Reserved2:1;           //9
        uint32_t Reserved3:1;           //10
        uint32_t Reserved4:1;           //11
        uint32_t Reserved5:1;           //12
        uint32_t CPU_nIRPOUT_0:1;       //13
        uint32_t Reserved6:2;           //15:14
        uint32_t Reserved7:1;           //16
        uint32_t Reserved8:1;           //17
        uint32_t Reserved9:1;           //18
        uint32_t Reserved10:1;          //19
        uint32_t Reserved11:1;          //20
        uint32_t Reserved12:1;          //21
        uint32_t CPU_nIRPOUT_1:1;       //22
        uint32_t Reserved13:1;          //23
        uint32_t SCUEVABORT:1;          //24
        uint32_t ECNTRINTR:1;           //25
        uint32_t ERRWTINTR:1;           //26
        uint32_t ERRWDINTR:1;           //27
        uint32_t ERRRTINTR:1;           //28
        uint32_t ERRRDINTR:1;           //29
        uint32_t SLVERRINTR:1;          //30
        uint32_t DECERRINTR:1;          //31
    } bits;
} IECR3;

/*
 * ISTR3
 * 
 * Address = Interrupt Combiner Base Address 1 + 0x0038
 * Reset Value = Undefined
 * 
 *       Name       |   Bit   | Type |                      Description                       | Reset Value | 
 * ---------------------------------------------------------------------------------------------------------|
 * UART4            |   [0]   |  RW  |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * MIPI_HSI         |   [1]   |  RW  |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * RSVD             |  [3:2]  |  RW  | Interrupt pending status                               |      -      |
 * ----------------------------------| The corresponding interrupt enable bit does not        |-------------|
 * MCT_G0           |   [4]   |  RW  | affect this pending status.                            |      -      |
 * ----------------------------------| 0 = The interrupt is not pending.                      |-------------|
 * MCT_G1           |   [5]   |  RW  | 1 = The interrupt is pending.                          |      -      |
 * ----------------------------------|                                                        |-------------|
 * MCT_G2           |   [6]   |  RW  |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * MCT_G3           |   [7]   |  RW  |                                                        |     0x0     |
 * ---------------------------------------------------------------------------------------------------------|
 * RSVD             |   [8]   |  -   |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * RSVD             |   [9]   |  -   |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * RSVD             |  [10]   |  -   | Interrupt pending status                               |      -      |
 * ----------------------------------| The corresponding interrupt enable bit does not        |-------------|
 * RSVD             |  [11]   |  -   | affect this pending status.                            |      -      |
 * ----------------------------------| 0 = The interrupt is not pending.                      |-------------|
 * RSVD             |  [12]   |  -   | 1 = The interrupt is pending.                          |      -      |
 * ----------------------------------|                                                        |-------------|
 * CPU_nIRPOUT_0    |  [13]   |  RW  |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * RSVD             | [15:14] |  -   |                                                        |     0x0     |
 * ---------------------------------------------------------------------------------------------------------|
 * RSVD             |  [16]   |  -   |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * RSVD             |  [17]   |  -   |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * RSVD             |  [18]   |  -   |                                                        |      -      |
 * ----------------------------------| Interrupt pending status                               |-------------|
 * RSVD             |  [19]   |  -   | The corresponding interrupt enable bit does not        |      -      |
 * ----------------------------------| affect this pending status.                            |-------------|
 * RSVD             |  [20]   |  -   | 0 = The interrupt is not pending.                      |      -      |
 * ----------------------------------| 1 = The interrupt is pending.                          |-------------|
 * RSVD             |  [21]   |  -   |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * CPU_nIRPOUT_1    |  [22]   |  RW  |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * RSVD             |  [23]   |  -   |                                                        |     0x0     |
 * ---------------------------------------------------------------------------------------------------------|
 * SCUEVABORT       |  [22]   |  RW  |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * ECNTRINTR        |  [23]   |  RW  |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * ERRWTINTR        |  [24]   |  RW  |                                                        |      -      |
 * ----------------------------------| Interrupt pending status                               |-------------|
 * ERRWDINTR        |  [25]   |  RW  | The corresponding interrupt enable bit does not        |      -      |
 * ----------------------------------| affect this pending status.                            |-------------|
 * ERRRTINTR        |  [26]   |  RW  | 0 = The interrupt is not pending.                      |      -      |
 * ----------------------------------| 1 = The interrupt is pending.                          |-------------|
 * ERRRDINTR        |  [27]   |  RW  |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * SLVERRINTR       | [31:28] |  RW  |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * DECERRINTR       | [31:28] |  RW  |                                                        |      -      |
 * ---------------------------------------------------------------------------------------------------------|
 */

typedef union ISTR3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t UART4:1;               //0
        uint32_t MIPI_HSI:1;            //1
        uint32_t Reserved0:2;           //3:2
        uint32_t MCT_G0:1;              //4
        uint32_t MCT_G1:1;              //5
        uint32_t MCT_G2:1;              //6
        uint32_t MCT_G3:1;              //7
        uint32_t Reserved1:1;           //8
        uint32_t Reserved2:1;           //9
        uint32_t Reserved3:1;           //10
        uint32_t Reserved4:1;           //11
        uint32_t Reserved5:1;           //12
        uint32_t CPU_nIRPOUT_0:1;       //13
        uint32_t Reserved6:2;           //15:14
        uint32_t Reserved7:1;           //16
        uint32_t Reserved8:1;           //17
        uint32_t Reserved9:1;           //18
        uint32_t Reserved10:1;          //19
        uint32_t Reserved11:1;          //20
        uint32_t Reserved12:1;          //21
        uint32_t CPU_nIRPOUT_1:1;       //22
        uint32_t Reserved13:1;          //23
        uint32_t SCUEVABORT:1;          //24
        uint32_t ECNTRINTR:1;           //25
        uint32_t ERRWTINTR:1;           //26
        uint32_t ERRWDINTR:1;           //27
        uint32_t ERRRTINTR:1;           //28
        uint32_t ERRRDINTR:1;           //29
        uint32_t SLVERRINTR:1;          //30
        uint32_t DECERRINTR:1;          //31
    } bits;
} ISTR3;

/*
 * IMSR3
 * 
 * Address = Interrupt Combiner Base Address 1 + 0x003C
 * Reset Value = Undefined
 * 
 *       Name       |   Bit   | Type |                      Description                       | Reset Value | 
 * ---------------------------------------------------------------------------------------------------------|
 * UART4            |   [0]   |  RW  |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * MIPI_HSI         |   [1]   |  RW  |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * RSVD             |  [3:2]  |  RW  | Masked interrupt pending status.                       |      -      |
 * ----------------------------------| If the corresponding interrupt enable bit is "0", the  |-------------|
 * MCT_G0           |   [4]   |  RW  | IMSR bit reads as "0".                                 |      -      |
 * ----------------------------------| 0 = The interrupt is not pending.                      |-------------|
 * MCT_G1           |   [5]   |  RW  | 1 = The interrupt is pending.                          |      -      |
 * ----------------------------------|                                                        |-------------|
 * MCT_G2           |   [6]   |  RW  |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * MCT_G3           |   [7]   |  RW  |                                                        |     0x0     |
 * ---------------------------------------------------------------------------------------------------------|
 * RSVD             |   [8]   |  -   |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * RSVD             |   [9]   |  -   |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * RSVD             |  [10]   |  -   | Masked interrupt pending status.                       |      -      |
 * ----------------------------------| If the corresponding interrupt enable bit is "0", the  |-------------|
 * RSVD             |  [11]   |  -   | IMSR bit reads as "0".                                 |      -      |
 * ----------------------------------| 0 = The interrupt is not pending.                      |-------------|
 * RSVD             |  [12]   |  -   | 1 = The interrupt is pending.                          |      -      |
 * ----------------------------------|                                                        |-------------|
 * CPU_nIRPOUT_0    |  [13]   |  RW  |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * RSVD             | [15:14] |  -   |                                                        |     0x0     |
 * ---------------------------------------------------------------------------------------------------------|
 * RSVD             |  [16]   |  -   |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * RSVD             |  [17]   |  -   |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * RSVD             |  [18]   |  -   |                                                        |      -      |
 * ----------------------------------| Masked interrupt pending status.                       |-------------|
 * RSVD             |  [19]   |  -   | If the corresponding interrupt enable bit is "0", the  |      -      |
 * ----------------------------------| IMSR bit reads as "0".                                 |-------------|
 * RSVD             |  [20]   |  -   | 0 = The interrupt is not pending.                      |      -      |
 * ----------------------------------| 1 = The interrupt is pending.                          |-------------|
 * RSVD             |  [21]   |  -   |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * CPU_nIRPOUT_1    |  [22]   |  RW  |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * RSVD             |  [23]   |  -   |                                                        |     0x0     |
 * ---------------------------------------------------------------------------------------------------------|
 * SCUEVABORT       |  [22]   |  RW  |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * ECNTRINTR        |  [23]   |  RW  |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * ERRWTINTR        |  [24]   |  RW  |                                                        |      -      |
 * ----------------------------------| Masked interrupt pending status.                       |-------------|
 * ERRWDINTR        |  [25]   |  RW  | If the corresponding interrupt enable bit is "0", the  |      -      |
 * ----------------------------------| IMSR bit reads as "0".                                 |-------------|
 * ERRRTINTR        |  [26]   |  RW  | 0 = The interrupt is not pending.                      |      -      |
 * ----------------------------------| 1 = The interrupt is pending.                          |-------------|
 * ERRRDINTR        |  [27]   |  RW  |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * SLVERRINTR       | [31:28] |  RW  |                                                        |      -      |
 * ----------------------------------|                                                        |-------------|
 * DECERRINTR       | [31:28] |  RW  |                                                        |      -      |
 * ---------------------------------------------------------------------------------------------------------|
 */

typedef union IMSR3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t UART4:1;               //0
        uint32_t MIPI_HSI:1;            //1
        uint32_t Reserved0:2;           //3:2
        uint32_t MCT_G0:1;              //4
        uint32_t MCT_G1:1;              //5
        uint32_t MCT_G2:1;              //6
        uint32_t MCT_G3:1;              //7
        uint32_t Reserved1:1;           //8
        uint32_t Reserved2:1;           //9
        uint32_t Reserved3:1;           //10
        uint32_t Reserved4:1;           //11
        uint32_t Reserved5:1;           //12
        uint32_t CPU_nIRPOUT_0:1;       //13
        uint32_t Reserved6:2;           //15:14
        uint32_t Reserved7:1;           //16
        uint32_t Reserved8:1;           //17
        uint32_t Reserved9:1;           //18
        uint32_t Reserved10:1;          //19
        uint32_t Reserved11:1;          //20
        uint32_t Reserved12:1;          //21
        uint32_t CPU_nIRPOUT_1:1;       //22
        uint32_t Reserved13:1;          //23
        uint32_t SCUEVABORT:1;          //24
        uint32_t ECNTRINTR:1;           //25
        uint32_t ERRWTINTR:1;           //26
        uint32_t ERRWDINTR:1;           //27
        uint32_t ERRRTINTR:1;           //28
        uint32_t ERRRDINTR:1;           //29
        uint32_t SLVERRINTR:1;          //30
        uint32_t DECERRINTR:1;          //31
    } bits;
} IMSR3;

/*
 * IESR4
 * 
 * Address = Interrupt Combiner Base Address 1 + 0x0040
 * Reset Value = 0x0000_0000
 * 
 *          Name        |   Bit   | Type |                      Description                       | Reset Value | 
 * -------------------------------------------------------------------------------------------------------------|
 * SYSMMU_FIMC_LITE0[0] |   [0]   |  RW  |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * SYSMMU_FIMC_LITE1[0] |   [1]   |  RW  |                                                        |     0x0     |
 * --------------------------------------| Sets the corresponding interrupt enable bit to "1". If |-------------|
 * SYSMMU_FIMC_ISP[0]   |   [2]   |  RW  | you set the interrupt enable bit, interrupt combiner   |     0x0     |
 * --------------------------------------| serves the interrupt request.                          |-------------|
 * SYSMMU_FIMC_DRC[0]   |   [3]   |  RW  | Write) 0 = Does not change the current settings.       |     0x0     |
 * --------------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * SYSMMU_FIMC_FD[0]    |   [4]   |  RW  | Read)  The current interrupt enable bit.               |     0x0     |
 * --------------------------------------|        0 = Masks.                                      |-------------|
 * SYSMMU_ISP_CX[0]     |   [5]   |  RW  |        1 = Enables.                                    |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |   [6]   |  RW  |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * MCT_L3               |   [7]   |  -   |                                                        |     0x0     |
 * -------------------------------------------------------------------------------------------------------------|
 * SYSMMU_FIMC_LITE0[1] |   [8]   |  RW  |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * SYSMMU_FIMC_LITE1[1] |   [9]   |  RW  |                                                        |     0x0     |
 * --------------------------------------| Sets the corresponding interrupt enable bit to "1". If |-------------|
 * SYSMMU_FIMC_ISP[1]   |  [10]   |  RW  | you set the interrupt enable bit, interrupt combiner   |     0x0     |
 * --------------------------------------| serves the interrupt request.                          |-------------|
 * SYSMMU_FIMC_DRC[1]   |  [11]   |  RW  | Write) 0 = Does not change the current settings.       |     0x0     |
 * --------------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * SYSMMU_FIMC_FD[1]    |  [12]   |  RW  | Read)  The current interrupt enable bit.               |     0x0     |
 * --------------------------------------|        0 = Masks.                                      |-------------|
 * SYSMMU_ISP_CX[1]     |  [13]   |  RW  |        1 = Enables.                                    |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |  [14]   |  RW  |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * MCT_L2               |  [15]   |  -   |                                                        |     0x0     |
 * -------------------------------------------------------------------------------------------------------------|
 * MCT_L1               |  [16]   |  RW  |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |  [17]   |  RW  |                                                        |     0x0     |
 * --------------------------------------| Sets the corresponding interrupt enable bit to "1". If |-------------|
 * CPU_PMUIRQ_2         |  [18]   |  RW  | you set the interrupt enable bit, interrupt combiner   |     0x0     |
 * --------------------------------------| serves the interrupt request.                          |-------------|
 * CPU_nCTIIRQ_2        |  [19]   |  RW  | Write) 0 = Does not change the current settings.       |     0x0     |
 * --------------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * PARITYFAIL2          |  [20]   |  RW  | Read)  The current interrupt enable bit.               |     0x0     |
 * --------------------------------------|        0 = Masks.                                      |-------------|
 * PARITYFAILSCU2       |  [21]   |  RW  |        1 = Enables.                                    |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * CPU_nIRQOUT_2        |  [22]   |  RW  |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |  [23]   |  -   |                                                        |     0x0     |
 * -------------------------------------------------------------------------------------------------------------|
 * MCT_L0               |  [24]   |  RW  |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |  [25]   |  RW  |                                                        |     0x0     |
 * --------------------------------------| Sets the corresponding interrupt enable bit to "1". If |-------------|
 * CPU_PMUIRQ_3         |  [26]   |  RW  | you set the interrupt enable bit, interrupt combiner   |     0x0     |
 * --------------------------------------| serves the interrupt request.                          |-------------|
 * CPU_nCTIIRQ_3        |  [27]   |  RW  | Write) 0 = Does not change the current settings.       |     0x0     |
 * --------------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * PARITYFAIL3          |  [28]   |  RW  | Read)  The current interrupt enable bit.               |     0x0     |
 * --------------------------------------|        0 = Masks.                                      |-------------|
 * PARITYFAILSCU3       |  [29]   |  RW  |        1 = Enables.                                    |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * CPU_nIRQOUT_3        |  [30]   |  RW  |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |  [31]   |  -   |                                                        |     0x0     |
 * -------------------------------------------------------------------------------------------------------------|
 */

typedef union IESR4_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYSMMU_FIMC_LITE0_0:1;     //0
        uint32_t SYSMMU_FIMC_LITE1_0:1;     //1
        uint32_t SYSMMU_FIMC_ISP_0:1;       //2
        uint32_t SYSMMU_FIMC_DRC_0:1;       //3
        uint32_t SYSMMU_FIMC_FD_0:1;        //4
        uint32_t SYSMMU_ISP_CX_0:1;         //5
        uint32_t MCT_L3:1;                  //6
        uint32_t Reserved0:1;               //7
        uint32_t SYSMMU_FIMC_LITE0_1:1;     //8
        uint32_t SYSMMU_FIMC_LITE1_1:1;     //9
        uint32_t SYSMMU_FIMC_ISP_1:1;       //10
        uint32_t SYSMMU_FIMC_DRC_1:1;       //11
        uint32_t SYSMMU_FIMC_FD_1:1;        //12
        uint32_t SYSMMU_ISP_CX_1:2;         //13
        uint32_t Reserved1:1;               //14
        uint32_t MCT_L2:1;                  //15
        uint32_t MCT_L1:1;                  //16
        uint32_t Reserved2:1;               //17
        uint32_t CPU_PMUIRQ_2:1;            //18
        uint32_t CPU_nCTIIRQ_2:1;           //19
        uint32_t PARITYFAIL2:1;             //20
        uint32_t PARITYFAILSCU2:1;          //21
        uint32_t CPU_nIRQOUT_2:1;           //22
        uint32_t Reserved3:1;               //23
        uint32_t MCT_L0:1;                  //24
        uint32_t Reserved4:1;               //25
        uint32_t CPU_PMUIRQ_3:1;            //26
        uint32_t CPU_nCTIIRQ_3:1;           //27
        uint32_t PARITYFAIL3:1;             //28
        uint32_t PARITYFAILSCU3:1;          //29
        uint32_t CPU_nIRQOUT_3:1;           //30
        uint32_t Reserved5:1;               //31
    } bits;
} IESR4;

/*
 * IECR4
 * 
 * Address = Interrupt Combiner Base Address 1 + 0x0044
 * Reset Value = 0x0000_0000
 * 
 *          Name        |   Bit   | Type |                      Description                       | Reset Value | 
 * -------------------------------------------------------------------------------------------------------------|
 * SYSMMU_FIMC_LITE0[0] |   [0]   |  RW  |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * SYSMMU_FIMC_LITE1[0] |   [1]   |  RW  |                                                        |     0x0     |
 * --------------------------------------| Clears the corresponding interrupt enable bit to "1".  |-------------|
 * SYSMMU_FIMC_ISP[0]   |   [2]   |  RW  | If you set the interrupt enable bit, interrupt         |     0x0     |
 * --------------------------------------| combiner will mask the interrupt.                      |-------------|
 * SYSMMU_FIMC_DRC[0]   |   [3]   |  RW  | Write) 0 = Does not change the current settings.       |     0x0     |
 * --------------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * SYSMMU_FIMC_FD[0]    |   [4]   |  RW  | Read)  The current interrupt enable bit.               |     0x0     |
 * --------------------------------------|        0 = Masks.                                      |-------------|
 * SYSMMU_ISP_CX[0]     |   [5]   |  RW  |        1 = Enables.                                    |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |   [6]   |  RW  |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * MCT_L3               |   [7]   |  -   |                                                        |     0x0     |
 * -------------------------------------------------------------------------------------------------------------|
 * SYSMMU_FIMC_LITE0[1] |   [8]   |  RW  |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * SYSMMU_FIMC_LITE1[1] |   [9]   |  RW  |                                                        |     0x0     |
 * --------------------------------------| Clears the corresponding interrupt enable bit to "1".  |-------------|
 * SYSMMU_FIMC_ISP[1]   |  [10]   |  RW  | If you set the interrupt enable bit, interrupt         |     0x0     |
 * --------------------------------------| combiner will mask the interrupt.                      |-------------|
 * SYSMMU_FIMC_DRC[1]   |  [11]   |  RW  | Write) 0 = Does not change the current settings.       |     0x0     |
 * --------------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * SYSMMU_FIMC_FD[1]    |  [12]   |  RW  | Read)  The current interrupt enable bit.               |     0x0     |
 * --------------------------------------|        0 = Masks.                                      |-------------|
 * SYSMMU_ISP_CX[1]     |  [13]   |  RW  |        1 = Enables.                                    |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |  [14]   |  RW  |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * MCT_L2               |  [15]   |  -   |                                                        |     0x0     |
 * -------------------------------------------------------------------------------------------------------------|
 * MCT_L1               |  [16]   |  RW  |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |  [17]   |  RW  |                                                        |     0x0     |
 * --------------------------------------| Clears the corresponding interrupt enable bit to "1".  |-------------|
 * CPU_PMUIRQ_2         |  [18]   |  RW  | If you set the interrupt enable bit, interrupt         |     0x0     |
 * --------------------------------------| combiner will mask the interrupt.                      |-------------|
 * CPU_nCTIIRQ_2        |  [19]   |  RW  | Write) 0 = Does not change the current settings.       |     0x0     |
 * --------------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * PARITYFAIL2          |  [20]   |  RW  | Read)  The current interrupt enable bit.               |     0x0     |
 * --------------------------------------|        0 = Masks.                                      |-------------|
 * PARITYFAILSCU2       |  [21]   |  RW  |        1 = Enables.                                    |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * CPU_nIRQOUT_2        |  [22]   |  RW  |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |  [23]   |  -   |                                                        |     0x0     |
 * -------------------------------------------------------------------------------------------------------------|
 * MCT_L0               |  [24]   |  RW  |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |  [25]   |  RW  |                                                        |     0x0     |
 * --------------------------------------| Clears the corresponding interrupt enable bit to "1".  |-------------|
 * CPU_PMUIRQ_3         |  [26]   |  RW  | If you set the interrupt enable bit, interrupt         |     0x0     |
 * --------------------------------------| combiner will mask the interrupt.                      |-------------|
 * CPU_nCTIIRQ_3        |  [27]   |  RW  | Write) 0 = Does not change the current settings.       |     0x0     |
 * --------------------------------------|        1 = Sets the interrupt enable bit to "1".       |-------------|
 * PARITYFAIL3          |  [28]   |  RW  | Read)  The current interrupt enable bit.               |     0x0     |
 * --------------------------------------|        0 = Masks.                                      |-------------|
 * PARITYFAILSCU3       |  [29]   |  RW  |        1 = Enables.                                    |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * CPU_nIRQOUT_3        |  [30]   |  RW  |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |  [31]   |  -   |                                                        |     0x0     |
 * -------------------------------------------------------------------------------------------------------------|
 */

typedef union IECR4_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYSMMU_FIMC_LITE0_0:1;     //0
        uint32_t SYSMMU_FIMC_LITE1_0:1;     //1
        uint32_t SYSMMU_FIMC_ISP_0:1;       //2
        uint32_t SYSMMU_FIMC_DRC_0:1;       //3
        uint32_t SYSMMU_FIMC_FD_0:1;        //4
        uint32_t SYSMMU_ISP_CX_0:1;         //5
        uint32_t MCT_L3:1;                  //6
        uint32_t Reserved0:1;               //7
        uint32_t SYSMMU_FIMC_LITE0_1:1;     //8
        uint32_t SYSMMU_FIMC_LITE1_1:1;     //9
        uint32_t SYSMMU_FIMC_ISP_1:1;       //10
        uint32_t SYSMMU_FIMC_DRC_1:1;       //11
        uint32_t SYSMMU_FIMC_FD_1:1;        //12
        uint32_t SYSMMU_ISP_CX_1:2;         //13
        uint32_t Reserved1:1;               //14
        uint32_t MCT_L2:1;                  //15
        uint32_t MCT_L1:1;                  //16
        uint32_t Reserved2:1;               //17
        uint32_t CPU_PMUIRQ_2:1;            //18
        uint32_t CPU_nCTIIRQ_2:1;           //19
        uint32_t PARITYFAIL2:1;             //20
        uint32_t PARITYFAILSCU2:1;          //21
        uint32_t CPU_nIRQOUT_2:1;           //22
        uint32_t Reserved3:1;               //23
        uint32_t MCT_L0:1;                  //24
        uint32_t Reserved4:1;               //25
        uint32_t CPU_PMUIRQ_3:1;            //26
        uint32_t CPU_nCTIIRQ_3:1;           //27
        uint32_t PARITYFAIL3:1;             //28
        uint32_t PARITYFAILSCU3:1;          //29
        uint32_t CPU_nIRQOUT_3:1;           //30
        uint32_t Reserved5:1;               //31
    } bits;
} IECR4;

/*
 * ISTR4
 * 
 * Address = Interrupt Combiner Base Address 1 + 0x0048
 * Reset Value = 0x0000_0000
 * 
 *          Name        |   Bit   | Type |                      Description                       | Reset Value | 
 * -------------------------------------------------------------------------------------------------------------|
 * SYSMMU_FIMC_LITE0[0] |   [0]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * SYSMMU_FIMC_LITE1[0] |   [1]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * SYSMMU_FIMC_ISP[0]   |   [2]   |  R   |                                                        |     0x0     |
 * --------------------------------------| Interrupt pending status                               |-------------|
 * SYSMMU_FIMC_DRC[0]   |   [3]   |  R   | The corresponding interrupt enable bit does not        |     0x0     |
 * --------------------------------------| affect this pending status.                            |-------------|
 * SYSMMU_FIMC_FD[0]    |   [4]   |  R   | 0 = The interrupt is not pending.                      |     0x0     |
 * --------------------------------------| 1 = The interrupt is pending.                          |-------------|
 * SYSMMU_ISP_CX[0]     |   [5]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |   [6]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * MCT_L3               |   [7]   |  -   |                                                        |     0x0     |
 * -------------------------------------------------------------------------------------------------------------|
 * SYSMMU_FIMC_LITE0[1] |   [8]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * SYSMMU_FIMC_LITE1[1] |   [9]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * SYSMMU_FIMC_ISP[1]   |  [10]   |  R   |                                                        |     0x0     |
 * --------------------------------------| Interrupt pending status                               |-------------|
 * SYSMMU_FIMC_DRC[1]   |  [11]   |  R   | The corresponding interrupt enable bit does not        |     0x0     |
 * --------------------------------------| affect this pending status.                            |-------------|
 * SYSMMU_FIMC_FD[1]    |  [12]   |  R   | 0 = The interrupt is not pending.                      |     0x0     |
 * --------------------------------------| 1 = The interrupt is pending.                          |-------------|
 * SYSMMU_ISP_CX[1]     |  [13]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |  [14]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * MCT_L2               |  [15]   |  -   |                                                        |     0x0     |
 * -------------------------------------------------------------------------------------------------------------|
 * MCT_L1               |  [16]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |  [17]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * CPU_PMUIRQ_2         |  [18]   |  R   |                                                        |     0x0     |
 * --------------------------------------| Interrupt pending status                               |-------------|
 * CPU_nCTIIRQ_2        |  [19]   |  R   | The corresponding interrupt enable bit does not        |     0x0     |
 * --------------------------------------| affect this pending status.                            |-------------|
 * PARITYFAIL2          |  [20]   |  R   | 0 = The interrupt is not pending.                      |     0x0     |
 * --------------------------------------| 1 = The interrupt is pending.                          |-------------|
 * PARITYFAILSCU2       |  [21]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * CPU_nIRQOUT_2        |  [22]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |  [23]   |  -   |                                                        |     0x0     |
 * -------------------------------------------------------------------------------------------------------------|
 * MCT_L0               |  [24]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |  [25]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * CPU_PMUIRQ_3         |  [26]   |  R   |                                                        |     0x0     |
 * --------------------------------------| Interrupt pending status                               |-------------|
 * CPU_nCTIIRQ_3        |  [27]   |  R   | The corresponding interrupt enable bit does not        |     0x0     |
 * --------------------------------------| affect this pending status.                            |-------------|
 * PARITYFAIL3          |  [28]   |  R   | 0 = The interrupt is not pending.                      |     0x0     |
 * --------------------------------------| 1 = The interrupt is pending.                          |-------------|
 * PARITYFAILSCU3       |  [29]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * CPU_nIRQOUT_3        |  [30]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |  [31]   |  -   |                                                        |     0x0     |
 * -------------------------------------------------------------------------------------------------------------|
 */

typedef union ISTR4_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYSMMU_FIMC_LITE0_0:1;     //0
        uint32_t SYSMMU_FIMC_LITE1_0:1;     //1
        uint32_t SYSMMU_FIMC_ISP_0:1;       //2
        uint32_t SYSMMU_FIMC_DRC_0:1;       //3
        uint32_t SYSMMU_FIMC_FD_0:1;        //4
        uint32_t SYSMMU_ISP_CX_0:1;         //5
        uint32_t MCT_L3:1;                  //6
        uint32_t Reserved0:1;               //7
        uint32_t SYSMMU_FIMC_LITE0_1:1;     //8
        uint32_t SYSMMU_FIMC_LITE1_1:1;     //9
        uint32_t SYSMMU_FIMC_ISP_1:1;       //10
        uint32_t SYSMMU_FIMC_DRC_1:1;       //11
        uint32_t SYSMMU_FIMC_FD_1:1;        //12
        uint32_t SYSMMU_ISP_CX_1:2;         //13
        uint32_t Reserved1:1;               //14
        uint32_t MCT_L2:1;                  //15
        uint32_t MCT_L1:1;                  //16
        uint32_t Reserved2:1;               //17
        uint32_t CPU_PMUIRQ_2:1;            //18
        uint32_t CPU_nCTIIRQ_2:1;           //19
        uint32_t PARITYFAIL2:1;             //20
        uint32_t PARITYFAILSCU2:1;          //21
        uint32_t CPU_nIRQOUT_2:1;           //22
        uint32_t Reserved3:1;               //23
        uint32_t MCT_L0:1;                  //24
        uint32_t Reserved4:1;               //25
        uint32_t CPU_PMUIRQ_3:1;            //26
        uint32_t CPU_nCTIIRQ_3:1;           //27
        uint32_t PARITYFAIL3:1;             //28
        uint32_t PARITYFAILSCU3:1;          //29
        uint32_t CPU_nIRQOUT_3:1;           //30
        uint32_t Reserved5:1;               //31
    } bits;
} ISTR4;

/*
 * IMSR4
 * 
 * Address = Interrupt Combiner Base Address 1 + 0x0048
 * Reset Value = 0x0000_0000
 * 
 *          Name        |   Bit   | Type |                      Description                       | Reset Value | 
 * -------------------------------------------------------------------------------------------------------------|
 * SYSMMU_FIMC_LITE0[0] |   [0]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * SYSMMU_FIMC_LITE1[0] |   [1]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * SYSMMU_FIMC_ISP[0]   |   [2]   |  R   |                                                        |     0x0     |
 * --------------------------------------| Masked interrupt pending status.                       |-------------|
 * SYSMMU_FIMC_DRC[0]   |   [3]   |  R   | If the corresponding interrupt enable bit is "0", the  |     0x0     |
 * --------------------------------------| IMSR bit reads as "0".                                 |-------------|
 * SYSMMU_FIMC_FD[0]    |   [4]   |  R   | 0 = The interrupt is not pending.                      |     0x0     |
 * --------------------------------------| 1 = The interrupt is pending.                          |-------------|
 * SYSMMU_ISP_CX[0]     |   [5]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |   [6]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * MCT_L3               |   [7]   |  -   |                                                        |     0x0     |
 * -------------------------------------------------------------------------------------------------------------|
 * SYSMMU_FIMC_LITE0[1] |   [8]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * SYSMMU_FIMC_LITE1[1] |   [9]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * SYSMMU_FIMC_ISP[1]   |  [10]   |  R   |                                                        |     0x0     |
 * --------------------------------------| Masked interrupt pending status.                       |-------------|
 * SYSMMU_FIMC_DRC[1]   |  [11]   |  R   | If the corresponding interrupt enable bit is "0", the  |     0x0     |
 * --------------------------------------| IMSR bit reads as "0".                                 |-------------|
 * SYSMMU_FIMC_FD[1]    |  [12]   |  R   | 0 = The interrupt is not pending.                      |     0x0     |
 * --------------------------------------| 1 = The interrupt is pending.                          |-------------|
 * SYSMMU_ISP_CX[1]     |  [13]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |  [14]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * MCT_L2               |  [15]   |  -   |                                                        |     0x0     |
 * -------------------------------------------------------------------------------------------------------------|
 * MCT_L1               |  [16]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |  [17]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * CPU_PMUIRQ_2         |  [18]   |  R   |                                                        |     0x0     |
 * --------------------------------------| Masked interrupt pending status.                       |-------------|
 * CPU_nCTIIRQ_2        |  [19]   |  R   | If the corresponding interrupt enable bit is "0", the  |     0x0     |
 * --------------------------------------| IMSR bit reads as "0".                                 |-------------|
 * PARITYFAIL2          |  [20]   |  R   | 0 = The interrupt is not pending.                      |     0x0     |
 * --------------------------------------| 1 = The interrupt is pending.                          |-------------|
 * PARITYFAILSCU2       |  [21]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * CPU_nIRQOUT_2        |  [22]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |  [23]   |  -   |                                                        |     0x0     |
 * -------------------------------------------------------------------------------------------------------------|
 * MCT_L0               |  [24]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |  [25]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * CPU_PMUIRQ_3         |  [26]   |  R   |                                                        |     0x0     |
 * --------------------------------------| Masked interrupt pending status.                       |-------------|
 * CPU_nCTIIRQ_3        |  [27]   |  R   | If the corresponding interrupt enable bit is "0", the  |     0x0     |
 * --------------------------------------| IMSR bit reads as "0".                                 |-------------|
 * PARITYFAIL3          |  [28]   |  R   | 0 = The interrupt is not pending.                      |     0x0     |
 * --------------------------------------| 1 = The interrupt is pending.                          |-------------|
 * PARITYFAILSCU3       |  [29]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * CPU_nIRQOUT_3        |  [30]   |  R   |                                                        |     0x0     |
 * --------------------------------------|                                                        |-------------|
 * RSVD                 |  [31]   |  -   |                                                        |     0x0     |
 * -------------------------------------------------------------------------------------------------------------|
 */

typedef union IMSR4_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SYSMMU_FIMC_LITE0_0:1;     //0
        uint32_t SYSMMU_FIMC_LITE1_0:1;     //1
        uint32_t SYSMMU_FIMC_ISP_0:1;       //2
        uint32_t SYSMMU_FIMC_DRC_0:1;       //3
        uint32_t SYSMMU_FIMC_FD_0:1;        //4
        uint32_t SYSMMU_ISP_CX_0:1;         //5
        uint32_t MCT_L3:1;                  //6
        uint32_t Reserved0:1;               //7
        uint32_t SYSMMU_FIMC_LITE0_1:1;     //8
        uint32_t SYSMMU_FIMC_LITE1_1:1;     //9
        uint32_t SYSMMU_FIMC_ISP_1:1;       //10
        uint32_t SYSMMU_FIMC_DRC_1:1;       //11
        uint32_t SYSMMU_FIMC_FD_1:1;        //12
        uint32_t SYSMMU_ISP_CX_1:2;         //13
        uint32_t Reserved1:1;               //14
        uint32_t MCT_L2:1;                  //15
        uint32_t MCT_L1:1;                  //16
        uint32_t Reserved2:1;               //17
        uint32_t CPU_PMUIRQ_2:1;            //18
        uint32_t CPU_nCTIIRQ_2:1;           //19
        uint32_t PARITYFAIL2:1;             //20
        uint32_t PARITYFAILSCU2:1;          //21
        uint32_t CPU_nIRQOUT_2:1;           //22
        uint32_t Reserved3:1;               //23
        uint32_t MCT_L0:1;                  //24
        uint32_t Reserved4:1;               //25
        uint32_t CPU_PMUIRQ_3:1;            //26
        uint32_t CPU_nCTIIRQ_3:1;           //27
        uint32_t PARITYFAIL3:1;             //28
        uint32_t PARITYFAILSCU3:1;          //29
        uint32_t CPU_nIRQOUT_3:1;           //30
        uint32_t Reserved5:1;               //31
    } bits;
} IMSR4;

/*
 * CIPSR0
 * 
 * Address = Interrupt Combiner Base Address 1 + 0x0100
 * Reset Value = Undefined
 * 
 *   Name  |   Bit   | Type |                      Description                        | Reset Value | 
 * -------------------------------------------------------------------------------------------------|
 * INTG0   |   [0]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG1   |   [1]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG2   |   [2]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG3   |   [3]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG4   |   [4]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG5   |   [5]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG6   |   [6]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG7   |   [7]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG8   |   [8]   |  R   | Combined interrupt pending status.                      |      -      |
 * -------------------------| 0 = The combined interrupt is not pending               |-------------|
 * INTG9   |   [9]   |  R   | 1 = The combined interrupt is pending. This means the   |      -      |
 * -------------------------| corresponding interrupt request to the GIC Is asserted. |-------------|
 * INTG10  |  [10]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG11  |  [11]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG12  |  [12]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG13  |  [13]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG14  |  [14]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG15  |  [15]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG16  |  [16]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG17  |  [17]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG18  |  [18]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG19  |  [19]   |  R   |                                                         |      -      |
 * -------------------------------------------------------------------------------------------------|
 * INTG20  |  [20]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG21  |  [21]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG22  |  [22]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG23  |  [23]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG24  |  [24]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG25  |  [25]   |  R   |                                                         |      -      |
 * -------------------------| Reserved                                                |-------------|
 * INTG26  |  [26]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG27  |  [27]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG28  |  [28]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG29  |  [29]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG30  |  [30]   |  R   |                                                         |      -      |
 * -------------------------|                                                         |-------------|
 * INTG31  |  [31]   |  R   |                                                         |      -      |
 * -------------------------------------------------------------------------------------------------|
 */

typedef union CIPSR0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t INTG0:1;       //0
        uint32_t INTG1:1;       //1
        uint32_t INTG2:1;       //2
        uint32_t INTG3:1;       //3
        uint32_t INTG4:1;       //4
        uint32_t INTG5:1;       //5
        uint32_t INTG6:1;       //6
        uint32_t INTG7:1;       //7
        uint32_t INTG8:1;       //8
        uint32_t INTG9:1;       //9
        uint32_t INTG10:1;      //10
        uint32_t INTG11:1;      //11
        uint32_t INTG12:1;      //12
        uint32_t INTG13:1;      //13
        uint32_t INTG14:1;      //14
        uint32_t INTG15:1;      //15
        uint32_t INTG16:1;      //16
        uint32_t INTG17:1;      //17
        uint32_t INTG18:1;      //18
        uint32_t INTG19:1;      //19
        uint32_t INTG20:1;      //20
        uint32_t INTG21:1;      //21
        uint32_t INTG22:1;      //22
        uint32_t INTG23:1;      //23
        uint32_t INTG24:1;      //24
        uint32_t INTG25:1;      //25
        uint32_t INTG26:1;      //26
        uint32_t INTG27:1;      //27
        uint32_t INTG28:1;      //28
        uint32_t INTG29:1;      //29
        uint32_t INTG30:1;      //30
        uint32_t INTG31:1;      //31
    } bits;
} CIPSR0;

#endif