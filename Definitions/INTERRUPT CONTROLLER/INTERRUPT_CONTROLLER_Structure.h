#ifndef __INTERRUPT_CONTROLLER_INTERRUPT_CONTROLLER_STRUCTURE_H__     
#define __INTERRUPT_CONTROLLER_INTERRUPT_CONTROLLER_STRUCTURE_H__   
   
#include "ustdint.h"

/*
 * ICCICR_CPUn
 * 
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x0000 Reset Value = 0x0000_0000 (ICCICR_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x4000 Reset Value = 0x0000_0000 (ICCICR_CPU1)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x8000 Reset Value = 0x0000_0000 (ICCICR_CPU2)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0xC000 Reset Value = 0x0000_0000 (ICCICR_CPU3)
 * 
 *     Name          |   Bit   | Type |                       Description                      | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 *                   |         |      | Global enable for signaling of interrupts by the CPU   |             |
 * ENABLE            |   [0]   |  RW  | Interface to the connected processors.                 |     0x0     |
 *                   |         |      | 0 : Disables signaling of interrupts                   |             |
 *                   |         |      | 1 : Enables signaling of interrupts                    |             |
 * ----------------------------------------------------------------------------------------------------------|
 * RSVD              |  [31:1] |  -   | Reserved                                               |   0x000000  |
 * ----------------------------------------------------------------------------------------------------------|
 * 
 * It enables the signaling of interrupts to the target processors. In a GIC That implements the Security Extensions.
 * this register provides additional global controls for handling Secure interrupts. This register is banked to provide
 * Secure and Non-secure copies.
 */

typedef union ICCICR_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ENABLE:1;      //0
        uint32_t Reserved0:31;  //31:1
    } bits;
} ICCICR_CPU0;

typedef union ICCICR_CPU1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ENABLE:1;      //0
        uint32_t Reserved0:31;  //31:1
    } bits;
} ICCICR_CPU1;

typedef union ICCICR_CPU2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ENABLE:1;      //0
        uint32_t Reserved0:31;  //31:1
    } bits;
} ICCICR_CPU2;

typedef union ICCICR_CPU3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ENABLE:1;      //0
        uint32_t Reserved0:31;  //31:1
    } bits;
} ICCICR_CPU3;

/*
 * ICCPMR_CPUn
 * 
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x0004 Reset Value = 0x0000_0000 (ICCPMR_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x4004 Reset Value = 0x0000_0000 (ICCPMR_CPU1)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x8004 Reset Value = 0x0000_0000 (ICCPMR_CPU2)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0xC004 Reset Value = 0x0000_0000 (ICCPMR_CPU3)
 * 
 *     Name          |   Bit   | Type |                         Description                        | Reset Value | 
 * --------------------------------------------------------------------------------------------------------------|
 *                   |         |      | The priority mask level for the CPU0 interface             |             |
 *                   |         |      | When the priority of an interrupt is higher than the       |             |
 * PRIORITY          |  [7:0]  |  RW  | value that this field indicates, the interface signals the |     0x0     |
 *                   |         |      | interrupt to the processor. 256 priority levels support    |             |
 *                   |         |      | 0x00 - 0xFF (0 to 255), all values                         |             |
 * --------------------------------------------------------------------------------------------------------------|
 * RSVD              | [31:8]  |  -   | Reserved                                                   |     0x0     |
 * --------------------------------------------------------------------------------------------------------------|
 * 
 * This register provides an interrupt priority filter. Only interrupts with higher priority than the value in this register
 * can be signaled to the processor.
 */

typedef union ICCPMR_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PRIORITY:8;        //7:0
        uint32_t Reserved0:31;      //31:8
    } bits;
} ICCPMR_CPU0;

typedef union ICCPMR_CPU1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PRIORITY:8;        //7:0
        uint32_t Reserved0:31;      //31:8
    } bits;
} ICCPMR_CPU1;

typedef union ICCPMR_CPU2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PRIORITY:8;        //7:0
        uint32_t Reserved0:31;      //31:8
    } bits;
} ICCPMR_CPU2;

typedef union ICCPMR_CPU3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PRIORITY:8;        //7:0
        uint32_t Reserved0:31;      //31:8
    } bits;
} ICCPMR_CPU3;

/*
 * ICCBPR_CPUn
 * 
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x0008 Reset Value = 0x0000_0000 (ICCBPR_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x4008 Reset Value = 0x0000_0000 (ICCBPR_CPU1)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x8008 Reset Value = 0x0000_0000 (ICCBPR_CPU2)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0xC008 Reset Value = 0x0000_0000 (ICCBPR_CPU3)
 * 
 *     Name          |   Bit   | Type |                          Description                         | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------------|
 *                   |         |      | The value of this field controls how the 8-bit interrupt     |             |
 *                   |         |      | priority field should be split into a group priority field.  |             |
 * Binary point      |  [2:0]  |  RW  | The group priority field is used to determine interrupt      |     0x0     |
 *                   |         |      | preemption, and a sub-priority field.                        |             |
 *                   |         |      | Refer to Priority grouping for more information.             |             |
 * ----------------------------------------------------------------------------------------------------------------|
 * RSVD              | [31:3]  |  -   | Reserved                                                     |     0x0     |
 * ----------------------------------------------------------------------------------------------------------------|
 * 
 * This register defines the point at which the priority value fields are split into two parts, the group priority field and
 * the sub-priority field. The group priority field is used to determine interrupt preemption.
 */

typedef union ICCBPR_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t BINARY_POINT:3;        //2:0
        uint32_t Reserved0:29;          //31:3
    } bits;
} ICCBPR_CPU0;

typedef union ICCBPR_CPU1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t BINARY_POINT:3;        //2:0
        uint32_t Reserved0:29;          //31:3
    } bits;
} ICCBPR_CPU1;

typedef union ICCBPR_CPU2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t BINARY_POINT:3;        //2:0
        uint32_t Reserved0:29;          //31:3
    } bits;
} ICCBPR_CPU2;

typedef union ICCBPR_CPU3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t BINARY_POINT:3;        //2:0
        uint32_t Reserved0:29;          //31:3
    } bits;
} ICCBPR_CPU3;

/*
 * ICCIAR_CPUn
 * 
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x000C Reset Value = 0x0000_03FF (ICCIAR_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x400C Reset Value = 0x0000_03FF (ICCIAR_CPU1)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x800C Reset Value = 0x0000_03FF (ICCIAR_CPU2)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0xC00C Reset Value = 0x0000_03FF (ICCIAR_CPU3)
 * 
 *     Name          |   Bit   | Type |                          Description                         | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------------|
 * ACKINTID          |  [9:0]  |  R   | The interrupt ID                                             |    0x3FF    |
 * ----------------------------------------------------------------------------------------------------------------|
 *                   |         |      | For SGIs, in a multiprocessor implementation, this           |             |
 *                   |         |      | field identifies the processor that requests the             |             |
 * CPUID             | [12:10] |  R   | interrupt. It returns the number of the CPU interface        |     0x0     |
 *                   |         |      | that made the request.                                       |             |
 *                   |         |      | For all other interrupts, this field returns as zero/        |             |
 * ----------------------------------------------------------------------------------------------------------------|
 * RSVD              | [31:13] |  -   | Reserved                                                     |     0x0     |
 * ----------------------------------------------------------------------------------------------------------------|
 */

typedef union ICCIAR_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ACKINTID:10;       //9:0
        uint32_t CPUID:3;           //12:10
        uint32_t Reserved0:19;      //31:13
    } bits;
} ICCIAR_CPU0;

typedef union ICCIAR_CPU1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ACKINTID:10;       //9:0
        uint32_t CPUID:3;           //12:10
        uint32_t Reserved0:19;      //31:13
    } bits;
} ICCIAR_CPU1;

typedef union ICCIAR_CPU2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ACKINTID:10;       //9:0
        uint32_t CPUID:3;           //12:10
        uint32_t Reserved0:19;      //31:13
    } bits;
} ICCIAR_CPU2;

typedef union ICCIAR_CPU3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ACKINTID:10;       //9:0
        uint32_t CPUID:3;           //12:10
        uint32_t Reserved0:19;      //31:13
    } bits;
} ICCIAR_CPU3;

/*
 * ICCEOIR_CPUn
 * 
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x0010 Reset Value = Undefined (ICCEOIR_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x4010 Reset Value = Undefined (ICCEOIR_CPU1)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x8010 Reset Value = Undefined (ICCEOIR_CPU2)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0xC010 Reset Value = Undefined (ICCEOIR_CPU3)
 * 
 *     Name          |   Bit   | Type |                          Description                         | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------------|
 * EOIINTID          |  [9:0]  |  W   | The ACKINTID value from the corresponding ICCIAR access.     |      -      |
 * ----------------------------------------------------------------------------------------------------------------|
 *                   |         |      | During a multiprocessor implementation, on                   |             |
 * CPUID             | [12:10] |  W   | completion of the processing of an SGI, this field           |      -      |
 *                   |         |      | contains the CPUID value from the corresponding              |             |
 *                   |         |      | ICCIAR access.                                               |             |
 * ----------------------------------------------------------------------------------------------------------------|
 * RSVD              | [31:13] |  -   | Reserved                                                     |      -      |
 * ----------------------------------------------------------------------------------------------------------------|
 */

typedef union ICCEOIR_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EOIINTID:10;       //9:0
        uint32_t CPUID:3;           //12:10
        uint32_t Reserved0:19;      //31:13
    } bits;
} ICCEOIR_CPU0;

typedef union ICCEOIR_CPU1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EOIINTID:10;       //9:0
        uint32_t CPUID:3;           //12:10
        uint32_t Reserved0:19;      //31:13
    } bits;
} ICCEOIR_CPU1;

typedef union ICCEOIR_CPU2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EOIINTID:10;       //9:0
        uint32_t CPUID:3;           //12:10
        uint32_t Reserved0:19;      //31:13
    } bits;
} ICCEOIR_CPU2;

typedef union ICCEOIR_CPU3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EOIINTID:10;       //9:0
        uint32_t CPUID:3;           //12:10
        uint32_t Reserved0:19;      //31:13
    } bits;
} ICCEOIR_CPU3;

/*
 * ICCRPR_CPUn
 * 
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x0014 Reset Value = 0x0000_00FF (ICCRPR_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x4014 Reset Value = 0x0000_00FF (ICCRPR_CPU1)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x8014 Reset Value = 0x0000_00FF (ICCRPR_CPU2)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0xC014 Reset Value = 0x0000_00FF (ICCRPR_CPU3)
 * 
 *     Name          |   Bit   | Type |                          Description                         | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------------|
 * PRIORITY          |  [7:0]  |  R   | The priority value of the highest priority interrupt that    |    0xFF     |
 *                   |         |      | is active on the CPU interface.                              |             |
 * ----------------------------------------------------------------------------------------------------------------|
 * RSVD              | [31:8] |  -   | Reserved                                                     |      -      |
 * ----------------------------------------------------------------------------------------------------------------|
 */

typedef union ICCRPR_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PRIORITY:8;        //7:0
        uint32_t Reserved0:24;      //31:8
    } bits;
} ICCRPR_CPU0;

typedef union ICCRPR_CPU1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PRIORITY:8;        //7:0
        uint32_t Reserved0:24;      //31:8
    } bits;
} ICCRPR_CPU1;

typedef union ICCRPR_CPU2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PRIORITY:8;        //7:0
        uint32_t Reserved0:24;      //31:8
    } bits;
} ICCRPR_CPU2;

typedef union ICCRPR_CPU3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PRIORITY:8;        //7:0
        uint32_t Reserved0:24;      //31:8
    } bits;
} ICCRPR_CPU3;

/*
 * ICCHPIR_CPUn
 * 
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x0018 Reset Value = 0x0000_03FF (ICCHPIR_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x4018 Reset Value = 0x0000_03FF (ICCHPIR_CPU1)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x8018 Reset Value = 0x0000_03FF (ICCHPIR_CPU2)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0xC018 Reset Value = 0x0000_03FF (ICCHPIR_CPU3)
 * 
 *     Name          |   Bit   | Type |                          Description                         | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------------|
 * PENDINTID         |  [9:0]  |  R   | The interrupt ID of the highest priority pending             |    0x3FF    |
 *                   |         |      | interrupt (only for SGI).                                    |             |
 * ----------------------------------------------------------------------------------------------------------------|
 *                   |         |      | If the PENDINTID field returns the ID of an SGI, this        |             |
 * CPUID             | [12:10] |  R   | field contains the CPUID value for that interrupt. This      |     0x0     |
 *                   |         |      | identifies the processor that generates the interrupt.       |             |
 * ----------------------------------------------------------------------------------------------------------------|
 * RSVD              | [31:13] |  -   | Reserved                                                     |     0x0     |
 * ----------------------------------------------------------------------------------------------------------------|
 */

typedef union ICCHPIR_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PENDINTID:10;       //9:0
        uint32_t CPUID:3;           //12:10
        uint32_t Reserved0:19;      //31:13
    } bits;
} ICCHPIR_CPU0;

typedef union ICCHPIR_CPU1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PENDINTID:10;       //9:0
        uint32_t CPUID:3;           //12:10
        uint32_t Reserved0:19;      //31:13
    } bits;
} ICCHPIR_CPU1;

typedef union ICCHPIR_CPU2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PENDINTID:10;       //9:0
        uint32_t CPUID:3;           //12:10
        uint32_t Reserved0:19;      //31:13
    } bits;
} ICCHPIR_CPU2;

typedef union ICCHPIR_CPU3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PENDINTID:10;       //9:0
        uint32_t CPUID:3;           //12:10
        uint32_t Reserved0:19;      //31:13
    } bits;
} ICCHPIR_CPU3;

/*
 * ICCABPR_CPUn
 * 
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x001C Reset Value = 0x0000_0000 (ICCABPR_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x401C Reset Value = 0x0000_0000 (ICCABPR_CPU1)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x801C Reset Value = 0x0000_0000 (ICCABPR_CPU2)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0xC01C Reset Value = 0x0000_0000 (ICCABPR_CPU3)
 * 
 *     Name          |   Bit   | Type |                          Description                         | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------------|
 *                   |         |      | The value of this field controls how the 8-bit interrupt     |             |
 *                   |         |      | priority field is split into a group priority field. The     |             |
 * Binary point      |  [2:0]  |  RW  | group priority field is used to determine interrupt          |     0x0     |
 *                   |         |      | preemption, and a sub-priority field.                        |             |
 *                   |         |      | Refer to Priority grouping for more information.             |             |
 * ----------------------------------------------------------------------------------------------------------------|
 * RSVD              | [31:3]  |  -   | Reserved                                                     |     0x0     |
 * ----------------------------------------------------------------------------------------------------------------|
 * 
 * This register provides an alias of the Non-secure ICCBPR. Refer to Binary POint Register (ICCBPR) Secure
 * register for more information. Only implemented if the GIC implements the Security extensions.
 */

typedef union ICCABPR_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t BINARY_POINT:3;    //2:0
        uint32_t Reserved0:29;      //31:3
    } bits;
} ICCABPR_CPU0;

typedef union ICCABPR_CPU1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t BINARY_POINT:3;    //2:0
        uint32_t Reserved0:29;      //31:3
    } bits;
} ICCABPR_CPU1;

typedef union ICCABPR_CPU2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t BINARY_POINT:3;    //2:0
        uint32_t Reserved0:29;      //31:3
    } bits;
} ICCABPR_CPU2;

typedef union ICCABPR_CPU3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t BINARY_POINT:3;    //2:0
        uint32_t Reserved0:29;      //31:3
    } bits;
} ICCABPR_CPU3;

/*
 * INTEG_EN_C_CPUn
 * 
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x0040 Reset Value = 0x0000_0000 (INTEG_EN_C_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x4040 Reset Value = 0x0000_0000 (INTEG_EN_C_CPU1)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x8040 Reset Value = 0x0000_0000 (INTEG_EN_C_CPU2)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0xC040 Reset Value = 0x0000_0000 (INTEG_EN_C_CPU3)
 * 
 *     Name          |   Bit   | Type |                          Description                         | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------------|
 *                   |         |      | Enables the integration test logic.                          |             |
 *                   |         |      | 0 = Disables the integration test logic                      |             |
 * Integ en c        |   [0]   |  RW  | 1 = Integration test logic controls the status of            |     0x0     |
 *                   |         |      | nfiq_c<n> and nirq_c<n> output signals. (<n> is a            |             |
 *                   |         |      | number from 0 to 1 that identifies one of the CPU            |             |
 *                   |         |      | Interface).                                                  |             |
 * ----------------------------------------------------------------------------------------------------------------|
 * RSVD              | [31:1]  |  -   | Reserved                                                     |     0x0     |
 * ----------------------------------------------------------------------------------------------------------------|
 * 
 * This register enables the integration test logic. Use it to modify the status of the nfiq_c<n> and nirq_c<n> output
 * signals.
 */

typedef union INTEG_EN_C_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t INTEG_EN_C:1;      //0
        uint32_t Reserved0:31;      //31:1
    } bits;
} INTEG_EN_C_CPU0;

typedef union INTEG_EN_C_CPU1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t INTEG_EN_C:1;      //0
        uint32_t Reserved0:31;      //31:1
    } bits;
} INTEG_EN_C_CPU1;

typedef union INTEG_EN_C_CPU2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t INTEG_EN_C:1;      //0
        uint32_t Reserved0:31;      //31:1
    } bits;
} INTEG_EN_C_CPU2;

typedef union INTEG_EN_C_CPU3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t INTEG_EN_C:1;      //0
        uint32_t Reserved0:31;      //31:1
    } bits;
} INTEG_EN_C_CPU3;

/*
 * INTERRUPT_OUT_CPUn
 * 
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x0044 Reset Value = 0x0000_0000 (INTERRUPT_OUT_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x4044 Reset Value = 0x0000_0000 (INTERRUPT_OUT_CPU1)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0x8044 Reset Value = 0x0000_0000 (INTERRUPT_OUT_CPU2)
 * Address = INTERRUPT CONTROLLER Base Address 1 + 0xC044 Reset Value = 0x0000_0000 (INTERRUPT_OUT_CPU3)
 * 
 *     Name          |   Bit   | Type |                          Description                         | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------------|
 *                   |         |      | For CPU Interface <n>, reads return the status of            |             |
 * SET_NIRQ_C        |   [0]   |  RW  | nirq_c<n> and writes set the status of nirq_c<n>:            |     0x0     |
 *                   |         |      | 0 = nirq_c<n> a is LOW                                       |             |
 *                   |         |      | 1 = nirq_c<n> a is HIGH                                      |             |
 * ----------------------------------------------------------------------------------------------------------------|
 *                   |         |      | The value of this field controls how the 8-bit interrupt     |             |
 *                   |         |      | priority field should be split into a group priority field   |             |
 * SET_NFIQ_C        |   [1]   |  RW  | Use the group priority field is determine interrupt          |     0x0     |
 *                   |         |      | preemption, and a sub-priority field.                        |             |
 *                   |         |      | Refer to Priority grouping for more information.             |             |
 * ----------------------------------------------------------------------------------------------------------------|
 * RSVD              | [31:2]  |  -   | Reserved                                                     |     0x0     |
 * ----------------------------------------------------------------------------------------------------------------|
 */

typedef union INTERRUPT_OUT_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SET_NIRQ_C:1;      //0
        uint32_t SET_NFIQ_C:1;      //1
        uint32_t Reserved0:31;      //31:2
    } bits;
} INTERRUPT_OUT_CPU0;

typedef union INTERRUPT_OUT_CPU1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SET_NIRQ_C:1;      //0
        uint32_t SET_NFIQ_C:1;      //1
        uint32_t Reserved0:31;      //31:2
    } bits;
} INTERRUPT_OUT_CPU1;

typedef union INTERRUPT_OUT_CPU2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SET_NIRQ_C:1;      //0
        uint32_t SET_NFIQ_C:1;      //1
        uint32_t Reserved0:31;      //31:2
    } bits;
} INTERRUPT_OUT_CPU2;

typedef union INTERRUPT_OUT_CPU3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SET_NIRQ_C:1;      //0
        uint32_t SET_NFIQ_C:1;      //1
        uint32_t Reserved0:31;      //31:2
    } bits;
} INTERRUPT_OUT_CPU3;

/*
 * ICDDCR
 * 
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0000 Reset Value = 0x0000_0000
 * 
 *     Name          |   Bit   | Type |                        Description                        | Reset Value | 
 * -------------------------------------------------------------------------------------------------------------|
 *                   |         |      | Global enable for monitoring peripheral interrupt         |             |
 *                   |         |      | signals and forwarding pending interrupts to the CPU      |             |
 *                   |         |      | interfaces.                                               |             |
 * ENABLE            |   [0]   |  RW  | 0 = GIC ignores all peripheral interrupt signals and does |     0x0     |
 *                   |         |      | not forward pending interrupts to the CPU interfaces.     |             |
 *                   |         |      | 1 = GIC monitors the peripheral interrupt signals and     |             |
 *                   |         |      | forwards pending interrupts to the CPU interfaces.        |             |
 * -------------------------------------------------------------------------------------------------------------|
 * RSVD              |  [31:1] |  -   | Reserved                                                  |     0x0     |
 * -------------------------------------------------------------------------------------------------------------|
 * 
 * This register enables forwarding of pending interrupts to the CPU interfaces.
 */

typedef union ICDDCR_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ENABLE:1;          //0
        uint32_t Reserved0:31;      //31:1
    } bits;
} ICDDCR;

/*
 * ICDICTR
 * 
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0004 Reset Value = 0x0000_FC24
 * 
 *     Name          |   Bit   | Type |                        Description                        | Reset Value | 
 * -------------------------------------------------------------------------------------------------------------|
 *                   |         |      | Indicates the maximum number of interrupts that the GIC   |             |
 *                   |         |      | supports. If the value of this field is N, the maximum    |             |
 *                   |         |      | number of interrupts is 32(N + 1). The interrupt ID range |             |
 * ITLinesNumber     |  [4:0]  |  R   | is from 0 to one lesser than the number of IDs. For       |     0x4     |
 *                   |         |      | example:                                                  |             |
 *                   |         |      | 0b00011 : Up to 128 interrupt lines, interrupt IDs 0-127. |             |
 *                   |         |      | The maximum number of interrupts is 1020 (0b11111).       |             |
 * -------------------------------------------------------------------------------------------------------------|
 *                   |         |      | Indicates the number of implemented CPU interfaces.       |             |
 * CPUNumber         |  [7:5]  |  R   | The number of implemented CPU interfaces is more than     |     0x1     |
 *                   |         |      | the value of this field. For example, when this field is  |             |
 *                   |         |      | 0b011, there are four CPU interfaces.                     |             |
 * -------------------------------------------------------------------------------------------------------------|
 * RSVD              |  [9:8]  |  -   | Reserved                                                  |     0x0     |
 * -------------------------------------------------------------------------------------------------------------|
 *                   |         |      | Indicates whether GIC Implements the Security             |             |
 * SecurityExtn      |  [10]   |  R   | Extensions.                                               |     0x1     |
 *                   |         |      | 0 = Does not implement Security Extensions.               |             |
 *                   |         |      | 1 = Implements Security Extensions.                       |             |
 * -------------------------------------------------------------------------------------------------------------|
 *                   |         |      | When GIC implements the Security Extensions, the value    |             |
 * LSPI              | [15:11] |  R   | of this field is the maximum number of implemented        |    0x1F     |
 *                   |         |      | lockable SPIs from 0 (0b00000) to 31(0b11111).            |             |
 * -------------------------------------------------------------------------------------------------------------|
 * RSVD              | [31:16] |  -   | Reserved                                                  |     0x0     |
 * -------------------------------------------------------------------------------------------------------------|
 * 
 * This register provides information about the configuration of GIC. It indicates:
 *  - Whether the GIC implements the Security Extensions.
 *  - The maximum number of interrupt IDs that the GIC supports.
 *  - The number of CPU interfaces implemented.
 *  - If GIC implements the Security Extensions, the maximum number of implemented Lockable Shared Peripheral
 *    interrupts(LSPIs)
 * 
 * NOTE : This field defines the interrupt IDs. Regardless of the range of interrupt IDs, interrupt IDs 1020-1023 are reserved for
 *        special purposes. Refer to Special interrupt numbers for more information.
 * 
 *        The ITLinesNumber field only indicates the maximum number of SPIs that the GIC supports. This value
 *        determines the number of implemented interrupt registers, that is, the number of instances of the registers.
 *        described in the following sections:
 *          - Interrupt Security Reigster           (ICDISRn)
 *          - Interrupt Set-Enable Register         (ICDISERn)
 *          - Interrupt Clear-Enable Reigster       (ICDICERn)
 *          - Interrupt Set-Pending Reigster        (ICDISPRn)
 *          - Interrupt Clear-Pending Reigster      (ICDICPRn)
 *          - Active Bit Reigster                   (ICDABRn)
 *          - Interrupt Priority Reigster           (ICDIPRn)
 *          - Interrupt Processor Targets Reigster  (ICDIPTRn)
 *          - Interrupt Configuration Reigster      (ICDICFRn)
 */

typedef union ICDICTR_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ITLinesNumber:5;       //4:0
        uint32_t CPUNumber:3;           //7:5
        uint32_t Reserved0:2;           //9:8
        uint32_t SecurityExtn:1;        //10
        uint32_t LSPI:5;                //15:11
        uint32_t Reserved1:16;          //31:16
    } bits;
} ICDICTR;

/*
 * ICDIIDR
 * 
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0008 Reset Value = 0x0000_043B
 * 
 *     Name          |   Bit   | Type |                            Description                            | Reset Value | 
 * ---------------------------------------------------------------------------------------------------------------------|
 *                   |         |      | Contains the JEP106 code of the company that implements           |             |
 *                   |         |      | the GIC Distributor:                                              |             |
 * Implementer       | [11:0]  |  R   | Bit[6:0] : The JEP106 identify code of the implementer.           |    0x43B    |
 *                   |         |      | Bit[7] : Always 0.                                                |             |
 *                   |         |      | Bit[11:8] : The JEP106 continuation code of the implementer.      |             |
 * ---------------------------------------------------------------------------------------------------------------------|
 *                   |         |      | A revision number                                                 |             |
 * Revision          | [23:12] |  R   | Typically, this field is used to distinguish minor revisions of a |     0x0     |
 *                   |         |      | product.                                                          |             |
 * ---------------------------------------------------------------------------------------------------------------------|
 * RSVD              | [31:24] |  -   | Reserved                                                          |     0x0     |
 * ---------------------------------------------------------------------------------------------------------------------|
 * 
 * This register provides information about the implementer and revision of the Distributor.
 * 
 * NOTE : For an ARM implementation, the value of Implementer field is 0x43B.
 */

typedef union ICDIIDR_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Implementer:12;    //11:0
        uint32_t Revision:12;       //23:12
        uint32_t Reserved0:8;       //31:24
    } bits;
} ICDIIDR;

/*
 * ICDISR_CPUn
 * 
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0080 Reset Value = 0x0000_0000 (ICDISR0_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0084 Reset Value = 0x0000_0000 (ICDISR1_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0088 Reset Value = 0x0000_0000 (ICDISR2_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x008C Reset Value = 0x0000_0000 (ICDISR3_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0090 Reset Value = 0x0000_0000 (ICDISR4_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x4080 Reset Value = 0x0000_0000 (ICDISR0_CPU1)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x8080 Reset Value = 0x0000_0000 (ICDISR0_CPU2)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0xC080 Reset Value = 0x0000_0000 (ICDISR0_CPU3)
 * 
 *     Name             |   Bit   | Type |                            Description                            | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------------|
 *                      |         |      | For each bit:                                                     |             |
 * Security status bits | [31:0]  |  RW  | 0 = The corresponding interrupt is Secure.                        |     0x0     |
 *                      |         |      | 1 = The corresponding interrupt is Non-secure.                    |             |
 * ------------------------------------------------------------------------------------------------------------------------|
 * 
 * The ICDISRs provide a Security status bit for each interrupt supported by the GIC. Each bit controls the security
 * status of the corresponding interrupt. These bits are accessible by Secure accesses only.
 * 
 * The number of implemented ICDISRs is (ICDICTR.ITLinesNumber + 1). The implemented ICDISRs number
 * upwards from ICDISR0. In a multiprocessor implementation, ICDISR0 has two registers for each connected
 * processor (for CPU0, Address = 0x1049_0080 and for CPU1, Address = 0x1049_8080). These registers hold the
 * Security status bits for interrupts 0-31. 
 */

typedef union ICDISR0_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Security_status_bits;      //31:0
    } bits;
} ICDISR0_CPU0;

typedef union ICDISR1_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Security_status_bits;      //31:0
    } bits;
} ICDISR1_CPU0;

typedef union ICDISR2_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Security_status_bits;      //31:0
    } bits;
} ICDISR2_CPU0;

typedef union ICDISR3_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Security_status_bits;      //31:0
    } bits;
} ICDISR3_CPU0;

typedef union ICDISR4_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Security_status_bits;      //31:0
    } bits;
} ICDISR4_CPU0;

typedef union ICDISR0_CPU1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Security_status_bits;      //31:0
    } bits;
} ICDISR0_CPU1;

typedef union ICDISR0_CPU2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Security_status_bits;      //31:0
    } bits;
} ICDISR0_CPU2;

typedef union ICDISR0_CPU3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Security_status_bits;      //31:0
    } bits;
} ICDISR0_CPU3;

/*
 * ICDISER_CPUn
 * 
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0100 Reset Value = 0x0000_FFFF (ICDISER0_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0104 Reset Value = 0x0000_0000 (ICDISER1_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0108 Reset Value = 0x0000_0000 (ICDISER2_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x010C Reset Value = 0x0000_0000 (ICDISER3_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0110 Reset Value = 0x0000_0000 (ICDISER4_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x4100 Reset Value = 0x0000_FFFF (ICDISER0_CPU1)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x8100 Reset Value = 0x0000_FFFF (ICDISER0_CPU2)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0xC100 Reset Value = 0x0000_FFFF (ICDISER0_CPU3)
 * 
 *     Name             |   Bit   | Type |                            Description                            | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------------|
 *                      |         |      | For SPIs and PPIs, for each bit:                                  |             |
 *                      |         |      | Reads)                                                            |             |
 *                      |         |      | 0 = Disables the corresponding interrupt                          |             |
 * Set-enable bits      | [31:0]  |  RW  | 1 = Enables the corresponding interrupt                           |     0x0     |
 *                      |         |      | Writes)                                                           |             |
 *                      |         |      | 0 = No effect.                                                    |             |
 *                      |         |      | 1 = Enables the corresponding interrupt. A subsequent             |             |
 *                      |         |      | Read of this bit returns the value 1.                             |             |
 * ------------------------------------------------------------------------------------------------------------------------|
 * 
 * The ICDISERs provide a Set-enable bit for each interrupt supported by the GIC. Writing "1" to a Set-enable bit
 * enables forwarding of the corresponding interrupt to the CPU interfaces. Reading a bit identifies whether the
 * interrupt is enabled. These registers are available in all configurations of GIC. If GIC implements the Security
 * Extensions, these registers are Common.
 * 
 * The Distributor does not provide registers for INTIDs less than 16 because SGIs are always enabled. 
 */

typedef union ICDISER0_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_enable_bits;      //31:0
    } bits;
} ICDISER0_CPU0;

typedef union ICDISER1_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_enable_bits;      //31:0
    } bits;
} ICDISER1_CPU0;

typedef union ICDISER2_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_enable_bits;      //31:0
    } bits;
} ICDISER2_CPU0;

typedef union ICDISER3_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_enable_bits;      //31:0
    } bits;
} ICDISER3_CPU0;

typedef union ICDISER4_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_enable_bits;      //31:0
    } bits;
} ICDISER4_CPU0;

typedef union ICDISER0_CPU1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_enable_bits;      //31:0
    } bits;
} ICDISER0_CPU1;

typedef union ICDISER0_CPU2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_enable_bits;      //31:0
    } bits;
} ICDISER0_CPU2;

typedef union ICDISER0_CPU3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_enable_bits;      //31:0
    } bits;
} ICDISER0_CPU3;

/*
 * ICDICER_CPUn
 * 
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0180 Reset Value = 0x0000_FFFF (ICDICER0_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0184 Reset Value = 0x0000_0000 (ICDICER1_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0188 Reset Value = 0x0000_0000 (ICDICER2_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x018C Reset Value = 0x0000_0000 (ICDICER3_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0190 Reset Value = 0x0000_0000 (ICDICER4_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x4180 Reset Value = 0x0000_FFFF (ICDICER0_CPU1)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x8180 Reset Value = 0x0000_FFFF (ICDICER0_CPU2)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0xC180 Reset Value = 0x0000_FFFF (ICDICER0_CPU3)
 * 
 *     Name             |   Bit   | Type |                            Description                            | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------------|
 *                      |         |      | For SPIs and PPIs, for each bit:                                  |             |
 *                      |         |      | Reads)                                                            |             |
 *                      |         |      | 0 = Disables the corresponding interrupt                          |             |
 * Set-enable bits      | [31:0]  |  RW  | 1 = Enables the corresponding interrupt                           |     0x0     |
 *                      |         |      | Writes)                                                           |             |
 *                      |         |      | 0 = No effect.                                                    |             |
 *                      |         |      | 1 = Enables the corresponding interrupt. A subsequent             |             |
 *                      |         |      | Read of this bit returns the value "0".                           |             |
 * ------------------------------------------------------------------------------------------------------------------------|
 * 
 * The ICDICERs provide a Clear-enable bit for each interrupt supported by the GIC. Writing "1" to a Clear-enable bit
 * disables forwarding of the corresponding interrupt to the CPU interfaces. Reading a bit identifies whether the
 * interrupt is enabled. These registers are available in all configurations of GIC. If GIC implements the Security
 * Extensions, these registers are Common.
 * 
 * The Distributor does not provide registers for INTIDs less than 16 because SGIs are always enabled. 
 */

typedef union ICDICER0_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_enable_bits;      //31:0
    } bits;
} ICDICER0_CPU0;

typedef union ICDICER1_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_enable_bits;      //31:0
    } bits;
} ICDICER1_CPU0;

typedef union ICDICER2_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_enable_bits;      //31:0
    } bits;
} ICDICER2_CPU0;

typedef union ICDICER3_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_enable_bits;      //31:0
    } bits;
} ICDICER3_CPU0;

typedef union ICDICER4_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_enable_bits;      //31:0
    } bits;
} ICDICER4_CPU0;

typedef union ICDICER0_CPU1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_enable_bits;      //31:0
    } bits;
} ICDICER0_CPU1;

typedef union ICDICER0_CPU2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_enable_bits;      //31:0
    } bits;
} ICDICER0_CPU2;

typedef union ICDICER0_CPU3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_enable_bits;      //31:0
    } bits;
} ICDICER0_CPU3;

/*
 * ICDISPR_CPUn
 * 
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0200 Reset Value = 0x0000_0000 (ICDISPR0_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0204 Reset Value = 0x0000_0000 (ICDISPR1_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0208 Reset Value = 0x0000_0000 (ICDISPR2_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x020C Reset Value = 0x0000_0000 (ICDISPR3_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0210 Reset Value = 0x0000_0000 (ICDISPR4_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x4200 Reset Value = 0x0000_0000 (ICDISPR0_CPU1)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x8200 Reset Value = 0x0000_0000 (ICDISPR0_CPU2)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0xC200 Reset Value = 0x0000_0000 (ICDISPR0_CPU3)
 * 
 *     Name             |   Bit   | Type |                            Description                            | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------------|
 *                      |         |      | For each bit:                                                     |             |
 *                      |         |      | Reads)                                                            |             |
 *                      |         |      | 0 = The corresponding interrupt is not pending on any             |             |
 *                      |         |      | processor.                                                        |             |
 *                      |         |      | 1 = For SGIs and PPIs, the corresponding interrupt is             |             |
 *                      |         |      | pending on this processor. For SPIs, the corresponding            |             |
 *                      |         |      | interrupt is pending on at least one processor.                   |             |
 *                      |         |      | Writes for SPIs and PPIs:                                         |             |
 *                      |         |      | 0 = No effect.                                                    |             |
 *                      |         |      | 1 = The effect depends on whether the interrupt is edge-          |             |
 *                      |         |      | triggered or level-sensitive:                                     |             |
 *                      |         |      | Edge-Triggered:                                                   |             |
 *                      |         |      | Changes the status of the corresponding interrupt to              |             |
 *                      |         |      | either pending or active and pending:                             |             |
 *                      |         |      |  - Pending : If it was previously inactive                        |             |
 * Set-pending bits     | [31:0]  |  RW  |  - Active and pending : If it was previously active.              |     0x0     |
 *                      |         |      | No effect if the interrupt is already pending.                    |             |
 *                      |         |      | Level Sensitive:                                                  |             |
 *                      |         |      | When the corresponding interrupt is not pending,                  |             |
 *                      |         |      | changes the status of the corresponding interrupt to              |             |
 *                      |         |      | either pending or active and pending:                             |             |
 *                      |         |      |  - Pending : If it was previously inactive                        |             |
 *                      |         |      |  - Active and pending : If it was previously active               |             |
 *                      |         |      | When the interrupt is already pending:                            |             |
 *                      |         |      |  - A Write has no effect because of a write to the                |             |
 *                      |         |      |    ICDISPR.                                                       |             |
 *                      |         |      |  - Because the corresponding interrupt signal is                  |             |
 *                      |         |      |    asserted, the write has no effect on the status of the         |             |
 *                      |         |      |    interrupt, but the interrupt remains pending if the            |             |
 *                      |         |      |    interrupt signal is disserted.                                 |             |
 *                      |         |      | For SGIs, the write is ignored.                                   |             |
 * ------------------------------------------------------------------------------------------------------------------------|
 * 
 * The ICDISPRs provide a Set-pending bit for each interrupt supported by the GIC. Writing "1" to a Set-pending bit
 * sets the status of the corresponding peripheral interrupt to pending. Reading a bit identifies whether the interrupt
 * is pending. These registers are available in all configurations of GIC. When GIC implements the Security
 * Extensions, these registers are Common.
 * 
 * The INTIDs for the SGIs are read-only. The Distributor updates these bits by using information from the
 * sgi_control Register. 
 */

typedef union ICDISPR0_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_pending_bits;      //31:0
    } bits;
} ICDISPR0_CPU0;

typedef union ICDISPR1_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_pending_bits;      //31:0
    } bits;
} ICDISPR1_CPU0;

typedef union ICDISPR2_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_pending_bits;      //31:0
    } bits;
} ICDISPR2_CPU0;

typedef union ICDISPR3_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_pending_bits;      //31:0
    } bits;
} ICDISPR3_CPU0;

typedef union ICDISPR4_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_pending_bits;      //31:0
    } bits;
} ICDISPR4_CPU0;

typedef union ICDISPR0_CPU1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_pending_bits;      //31:0
    } bits;
} ICDISPR0_CPU1;

typedef union ICDISPR0_CPU2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_pending_bits;      //31:0
    } bits;
} ICDISPR0_CPU2;

typedef union ICDISPR0_CPU3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Set_pending_bits;      //31:0
    } bits;
} ICDISPR0_CPU3;

/*
 * ICDICPR_CPUn
 * 
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0280 Reset Value = 0x0000_0000 (ICDICPR0_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0284 Reset Value = 0x0000_0000 (ICDICPR1_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0288 Reset Value = 0x0000_0000 (ICDICPR2_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x028C Reset Value = 0x0000_0000 (ICDICPR3_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0290 Reset Value = 0x0000_0000 (ICDICPR4_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x4280 Reset Value = 0x0000_0000 (ICDICPR0_CPU1)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x8280 Reset Value = 0x0000_0000 (ICDICPR0_CPU2)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0xC280 Reset Value = 0x0000_0000 (ICDICPR0_CPU3)
 * 
 *     Name             |   Bit   | Type |                            Description                            | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------------|
 *                      |         |      | For each bit:                                                     |             |
 *                      |         |      | Reads)                                                            |             |
 *                      |         |      | 0 = The corresponding interrupt is not pending on any             |             |
 *                      |         |      | processor.                                                        |             |
 *                      |         |      | 1 = For SGIs and PPIs, the corresponding interrupt is             |             |
 *                      |         |      | pending on this processor. For SPIs, the corresponding            |             |
 *                      |         |      | interrupt is pending on at least one processor.                   |             |
 *                      |         |      | Writes for SPIs and PPIs:                                         |             |
 *                      |         |      | 0 = No effect.                                                    |             |
 *                      |         |      | 1 = The effect depends on whether the interrupt is edge-          |             |
 *                      |         |      | triggered or level-sensitive:                                     |             |
 *                      |         |      | Edge-Triggered:                                                   |             |
 * Clear-pending bits   | [31:0]  |  RW  | Changes the status of the corresponding interrupt to              |     0x0     |
 *                      |         |      | either pending or active and pending:                             |             |
 *                      |         |      |  - Pending : If it was previously inactive                        |             |
 *                      |         |      |  - Active and pending : If it was previously active.              |             |
 *                      |         |      | No effect if the interrupt is already pending.                    |             |
 *                      |         |      | Level Sensitive:                                                  |             |
 *                      |         |      | When the corresponding interrupt is pending, only                 |             |
 *                      |         |      | because of a write to the ICDISPR, the write changes the          |             |
 *                      |         |      | status of the interrupt to either inactive or active:             |             |
 *                      |         |      |  - Inactive : If it was previously pending.                       |             |
 *                      |         |      |  - Active : If it was previously active and pending.              |             |
 *                      |         |      | Otherwise, the interrupt remains pending if the interrupt         |             |
 *                      |         |      | signal remains asserted                                           |             |
 *                      |         |      | For SGIs, the write is ignored.                                   |             |
 * ------------------------------------------------------------------------------------------------------------------------|
 * 
 * The ICDICPRs provide a Clear-pending bit for each interrupt supported by the GIC. Writing "1" to a Clear-pending
 * bit clears the pending status of the corresponding peripheral interrupt. Reading a bit identifies whether the
 * interrupt is pending. These registers are available in all configurations of GIC. When GIC implements the
 * Security Extensions, these registers are Common.
 * 
 * The INTIDs for the SGIs are read-only. The Distributor updates these bits by using information from the
 * sgi_control Register. 
 */

typedef union ICDICPR0_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Clear_pending_bits;      //31:0
    } bits;
} ICDICPR0_CPU0;

typedef union ICDICPR1_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Clear_pending_bits;      //31:0
    } bits;
} ICDICPR1_CPU0;

typedef union ICDICPR2_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Clear_pending_bits;      //31:0
    } bits;
} ICDICPR2_CPU0;

typedef union ICDICPR3_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Clear_pending_bits;      //31:0
    } bits;
} ICDICPR3_CPU0;

typedef union ICDICPR4_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Clear_pending_bits;      //31:0
    } bits;
} ICDICPR4_CPU0;

typedef union ICDICPR0_CPU1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Clear_pending_bits;      //31:0
    } bits;
} ICDICPR0_CPU1;

typedef union ICDICPR0_CPU2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Clear_pending_bits;      //31:0
    } bits;
} ICDICPR0_CPU2;

typedef union ICDICPR0_CPU3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Clear_pending_bits;      //31:0
    } bits;
} ICDICPR0_CPU3;

/*
 * ICDABR_CPUn
 * 
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0300 Reset Value = 0x0000_0000 (ICDABR0_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0304 Reset Value = 0x0000_0000 (ICDABR1_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0308 Reset Value = 0x0000_0000 (ICDABR2_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x030C Reset Value = 0x0000_0000 (ICDABR3_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0310 Reset Value = 0x0000_0000 (ICDABR4_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x4300 Reset Value = 0x0000_0000 (ICDABR0_CPU1)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x8300 Reset Value = 0x0000_0000 (ICDABR0_CPU2)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0xC300 Reset Value = 0x0000_0000 (ICDABR0_CPU3)
 * 
 *     Name      |   Bit   | Type |                 Description                 | Reset Value | 
 * -------------------------------------------------------------------------------------------|
 *               |         |      | For each bit:                               |             |
 * Active bits   | [31:0]  |  RW  | 0 = Corresponding interrupt is not active.  |     0x0     |
 *               |         |      | 1 = Corresponding interrupt is active.      |             |
 * -------------------------------------------------------------------------------------------|
 * 
 * The ICDABRs provide a Active bit for each interrupt supported by the GIC. Reading an Active bit identifies 
 * whether the corresponding interrupt is active. The bit reads as "1" when the status of the interrupt is active or
 * active and pending. Read the ICDSPR or ICDCPR to find the pending status of the interrupt. These registers are
 * available in all configurations of GIC. If GIC implements the Security Extensions, these registers are Common.
 * 
 * NOTE : Active interrupts include interrupts that are active and pending.
 */

typedef union ICDABR0_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Active_bits;      //31:0
    } bits;
} ICDABR0_CPU0;

typedef union ICDABR1_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Active_bits;      //31:0
    } bits;
} ICDABR1_CPU0;

typedef union ICDABR2_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Active_bits;      //31:0
    } bits;
} ICDABR2_CPU0;

typedef union ICDABR3_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Active_bits;      //31:0
    } bits;
} ICDABR3_CPU0;

typedef union ICDABR4_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Active_bits;      //31:0
    } bits;
} ICDABR4_CPU0;

typedef union ICDABR0_CPU1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Active_bits;      //31:0
    } bits;
} ICDABR0_CPU1;

typedef union ICDABR0_CPU2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Active_bits;      //31:0
    } bits;
} ICDABR0_CPU2;

typedef union ICDABR0_CPU3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Active_bits;      //31:0
    } bits;
} ICDABR0_CPU3;

/*
 * ICDIPR_CPUn
 * 
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0400 Reset Value = 0x0000_0000 (ICDIPR0_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0404 Reset Value = 0x0000_0000 (ICDIPR1_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0408 Reset Value = 0x0000_0000 (ICDIPR2_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x040C Reset Value = 0x0000_0000 (ICDIPR3_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0410 Reset Value = 0x0000_0000 (ICDIPR4_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0414 Reset Value = 0x0000_0000 (ICDIPR5_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0418 Reset Value = 0x0000_0000 (ICDIPR6_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x041C Reset Value = 0x0000_0000 (ICDIPR7_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0420 Reset Value = 0x0000_0000 (ICDIPR8_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0424 Reset Value = 0x0000_0000 (ICDIPR9_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0428 Reset Value = 0x0000_0000 (ICDIPR10_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x042C Reset Value = 0x0000_0000 (ICDIPR11_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0430 Reset Value = 0x0000_0000 (ICDIPR12_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0434 Reset Value = 0x0000_0000 (ICDIPR13_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0438 Reset Value = 0x0000_0000 (ICDIPR14_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x043C Reset Value = 0x0000_0000 (ICDIPR15_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0440 Reset Value = 0x0000_0000 (ICDIPR16_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0444 Reset Value = 0x0000_0000 (ICDIPR17_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0448 Reset Value = 0x0000_0000 (ICDIPR18_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x044C Reset Value = 0x0000_0000 (ICDIPR19_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0450 Reset Value = 0x0000_0000 (ICDIPR20_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0454 Reset Value = 0x0000_0000 (ICDIPR21_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0458 Reset Value = 0x0000_0000 (ICDIPR22_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x045C Reset Value = 0x0000_0000 (ICDIPR23_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0460 Reset Value = 0x0000_0000 (ICDIPR24_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0464 Reset Value = 0x0000_0000 (ICDIPR25_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0468 Reset Value = 0x0000_0000 (ICDIPR26_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x046C Reset Value = 0x0000_0000 (ICDIPR27_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0470 Reset Value = 0x0000_0000 (ICDIPR28_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0474 Reset Value = 0x0000_0000 (ICDIPR29_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0478 Reset Value = 0x0000_0000 (ICDIPR30_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x047C Reset Value = 0x0000_0000 (ICDIPR31_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0480 Reset Value = 0x0000_0000 (ICDIPR32_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0484 Reset Value = 0x0000_0000 (ICDIPR33_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0488 Reset Value = 0x0000_0000 (ICDIPR34_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x048C Reset Value = 0x0000_0000 (ICDIPR35_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0490 Reset Value = 0x0000_0000 (ICDIPR36_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0494 Reset Value = 0x0000_0000 (ICDIPR37_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0498 Reset Value = 0x0000_0000 (ICDIPR38_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x049C Reset Value = 0x0000_0000 (ICDIPR39_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x4400 Reset Value = 0x0000_0000 (ICDIPR0_CPU1)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x8400 Reset Value = 0x0000_0000 (ICDIPR0_CPU2)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0xC400 Reset Value = 0x0000_0000 (ICDIPR0_CPU3)
 * 
 *     Name                |   Bit   | Type |                   Description                    | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------|
 * Priority, byte offset 0 |  [7:0]  |  RW  |                                                  |     0x0     |
 * -----------------------------------------|                                                  |-------------|
 * Priority, byte offset 1 | [15:8]  |  RW  | Each priority field holds a priority value.      |     0x0     |
 * -----------------------------------------| Lower the value, greater is the priority of the  |-------------|
 * Priority, byte offset 2 | [23:16] |  RW  | corresponding interrupt.                         |     0x0     |
 * -----------------------------------------|                                                  |-------------|
 * Priority, byte offset 3 | [31:24] |  RW  |                                                  |     0x0     |
 * ----------------------------------------------------------------------------------------------------------|
 * 
 * The ICDIPRs provide an 8-bit Priority field for each interrupt supported by the GIC. This field stores the priority of
 * the corresponding interrupt. These registers are available in all configurations of GIC. If GIC implements the
 * Security Extensions, these registers are Common.
 */

typedef union ICDIPR0_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR0_CPU0;

typedef union ICDIPR1_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR1_CPU0;

typedef union ICDIPR2_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR2_CPU0;

typedef union ICDIPR3_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR3_CPU0;

typedef union ICDIPR4_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR4_CPU0;

typedef union ICDIPR5_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR5_CPU0;

typedef union ICDIPR6_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR6_CPU0;

typedef union ICDIPR7_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR7_CPU0;

typedef union ICDIPR8_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR8_CPU0;

typedef union ICDIPR9_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR9_CPU0;

typedef union ICDIPR10_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR10_CPU0;

typedef union ICDIPR11_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR11_CPU0;

typedef union ICDIPR12_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR12_CPU0;

typedef union ICDIPR13_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR13_CPU0;

typedef union ICDIPR14_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR14_CPU0;

typedef union ICDIPR15_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR15_CPU0;

typedef union ICDIPR16_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR16_CPU0;

typedef union ICDIPR17_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR17_CPU0;

typedef union ICDIPR18_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR18_CPU0;

typedef union ICDIPR19_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR19_CPU0;

typedef union ICDIPR20_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR20_CPU0;

typedef union ICDIPR21_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR21_CPU0;

typedef union ICDIPR22_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR22_CPU0;

typedef union ICDIPR23_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR23_CPU0;

typedef union ICDIPR24_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR24_CPU0;

typedef union ICDIPR25_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR25_CPU0;

typedef union ICDIPR26_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR26_CPU0;

typedef union ICDIPR27_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR27_CPU0;

typedef union ICDIPR28_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR28_CPU0;

typedef union ICDIPR29_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR29_CPU0;

typedef union ICDIPR30_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR30_CPU0;

typedef union ICDIPR31_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR31_CPU0;

typedef union ICDIPR31_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR31_CPU0;

typedef union ICDIPR32_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR32_CPU0;

typedef union ICDIPR33_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR33_CPU0;

typedef union ICDIPR34_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR34_CPU0;

typedef union ICDIPR35_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR35_CPU0;

typedef union ICDIPR36_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR36_CPU0;

typedef union ICDIPR37_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR37_CPU0;

typedef union ICDIPR38_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR38_CPU0;

typedef union ICDIPR39_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR39_CPU0;

typedef union ICDIPR0_CPU1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR0_CPU1;

typedef union ICDIPR0_CPU2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR0_CPU2;

typedef union ICDIPR0_CPU3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Priority_Offset_0:8;       //7:0
        uint32_t Priority_Offset_1:8;       //15:8
        uint32_t Priority_Offset_2:8;       //23:16
        uint32_t Priority_Offset_3:8;       //31:24
    } bits;
} ICDIPR0_CPU3;

/*
 * ICDICFR_CPUn
 * 
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0C00 Reset Value = 0xAAAA_AAAA (ICDICFR0_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0C04 Reset Value = 0x7DD5_5FFF (ICDICFR1_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0C08 Reset Value = 0x5555_5555 (ICDICFR2_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0C0C Reset Value = 0x5555_5555 (ICDICFR3_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0C10 Reset Value = 0x5555_5555 (ICDICFR4_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0C14 Reset Value = 0x5555_5555 (ICDICFR5_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0C18 Reset Value = 0x5555_5555 (ICDICFR6_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0C1C Reset Value = 0x5555_5555 (ICDICFR7_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0C20 Reset Value = 0x5555_5555 (ICDICFR8_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0C24 Reset Value = 0x5555_5555 (ICDICFR9_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x4C00 Reset Value = 0xAAAA_AAAA (ICDICFR0_CPU1)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x8C00 Reset Value = 0xAAAA_AAAA (ICDICFR0_CPU2)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0xCC00 Reset Value = 0xAAAA_AAAA (ICDICFR0_CPU3)
 * 
 *     Name                   |   Bit   | Type |                        Description                         | Reset Value | 
 * -----------------------------------------------------------------------------------------------------------------------|
 *                            |         |      | For Int_config[1], the most significant bit, bit[2F + 1],  |             |
 *                            |         |      | the encoding is:                                           |             |
 *                            |         |      | 0 = Corresponding interrupt is level-sensitive.            |             |
 * Int_config, filed F        |[2F+1:2F]|  R   | 1 = Corresponding interrupt is edge-triggered.             |     0x01    |
 *                            |         |      | Int_config[0], the least significant bit, bit[2F], is      |             |
 *                            |         |      | Reserved.                                                  |             |
 *                            |         |      | For SGIs and PPIs:                                         |             |
 *                            |         |      | Int_config[1] Not pprogrammable                            |             |
 * -----------------------------------------------------------------------------------------------------------------------|
 * 
 * The ICDIPTRs provide an 2-bit Int_config field for each interrupt supported by the GIC. This field identifies whether
 * the corresponding interrupt is edge-triggered or level-sensitive. For SGIs and PPIs, Int_config fields are Read-
 * only. This means ICDICFR0 and ICDICFR1 are Read-only. These registers are available in all configurations of
 * GIC. If GIC implements the Security Extensions, these registers are Common.
 */

typedef union ICDICFR0_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Int_Config_Offset_0:2;         //7:0
        uint32_t Int_Config_Offset_1:2;         //15:8
        uint32_t Int_Config_Offset_2:2;         //23:16
        uint32_t Int_Config_Offset_3:2;         //31:24
        uint32_t Int_Config_Offset_4:2;         //31:24
        uint32_t Int_Config_Offset_5:2;         //31:24
        uint32_t Int_Config_Offset_6:2;         //31:24
        uint32_t Int_Config_Offset_7:2;         //31:24
        uint32_t Int_Config_Offset_8:2;         //31:24
        uint32_t Int_Config_Offset_9:2;         //31:24
        uint32_t Int_Config_Offset_10:2;        //31:24
        uint32_t Int_Config_Offset_11:2;        //31:24
        uint32_t Int_Config_Offset_12:2;        //31:24
        uint32_t Int_Config_Offset_13:2;        //31:24
        uint32_t Int_Config_Offset_14:2;        //31:24
        uint32_t Int_Config_Offset_15:2;        //31:24
    } bits;
} ICDICFR0_CPU0;

typedef union ICDICFR0_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Int_Config_Offset_0:2;         //7:0
        uint32_t Int_Config_Offset_1:2;         //15:8
        uint32_t Int_Config_Offset_2:2;         //23:16
        uint32_t Int_Config_Offset_3:2;         //31:24
        uint32_t Int_Config_Offset_4:2;         //31:24
        uint32_t Int_Config_Offset_5:2;         //31:24
        uint32_t Int_Config_Offset_6:2;         //31:24
        uint32_t Int_Config_Offset_7:2;         //31:24
        uint32_t Int_Config_Offset_8:2;         //31:24
        uint32_t Int_Config_Offset_9:2;         //31:24
        uint32_t Int_Config_Offset_10:2;        //31:24
        uint32_t Int_Config_Offset_11:2;        //31:24
        uint32_t Int_Config_Offset_12:2;        //31:24
        uint32_t Int_Config_Offset_13:2;        //31:24
        uint32_t Int_Config_Offset_14:2;        //31:24
        uint32_t Int_Config_Offset_15:2;        //31:24
    } bits;
} ICDICFR0_CPU0;

typedef union ICDICFR1_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Int_Config_Offset_0:2;         //7:0
        uint32_t Int_Config_Offset_1:2;         //15:8
        uint32_t Int_Config_Offset_2:2;         //23:16
        uint32_t Int_Config_Offset_3:2;         //31:24
        uint32_t Int_Config_Offset_4:2;         //31:24
        uint32_t Int_Config_Offset_5:2;         //31:24
        uint32_t Int_Config_Offset_6:2;         //31:24
        uint32_t Int_Config_Offset_7:2;         //31:24
        uint32_t Int_Config_Offset_8:2;         //31:24
        uint32_t Int_Config_Offset_9:2;         //31:24
        uint32_t Int_Config_Offset_10:2;        //31:24
        uint32_t Int_Config_Offset_11:2;        //31:24
        uint32_t Int_Config_Offset_12:2;        //31:24
        uint32_t Int_Config_Offset_13:2;        //31:24
        uint32_t Int_Config_Offset_14:2;        //31:24
        uint32_t Int_Config_Offset_15:2;        //31:24
    } bits;
} ICDICFR1_CPU0;

typedef union ICDICFR2_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Int_Config_Offset_0:2;         //7:0
        uint32_t Int_Config_Offset_1:2;         //15:8
        uint32_t Int_Config_Offset_2:2;         //23:16
        uint32_t Int_Config_Offset_3:2;         //31:24
        uint32_t Int_Config_Offset_4:2;         //31:24
        uint32_t Int_Config_Offset_5:2;         //31:24
        uint32_t Int_Config_Offset_6:2;         //31:24
        uint32_t Int_Config_Offset_7:2;         //31:24
        uint32_t Int_Config_Offset_8:2;         //31:24
        uint32_t Int_Config_Offset_9:2;         //31:24
        uint32_t Int_Config_Offset_10:2;        //31:24
        uint32_t Int_Config_Offset_11:2;        //31:24
        uint32_t Int_Config_Offset_12:2;        //31:24
        uint32_t Int_Config_Offset_13:2;        //31:24
        uint32_t Int_Config_Offset_14:2;        //31:24
        uint32_t Int_Config_Offset_15:2;        //31:24
    } bits;
} ICDICFR2_CPU0;

typedef union ICDICFR3_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Int_Config_Offset_0:2;         //7:0
        uint32_t Int_Config_Offset_1:2;         //15:8
        uint32_t Int_Config_Offset_2:2;         //23:16
        uint32_t Int_Config_Offset_3:2;         //31:24
        uint32_t Int_Config_Offset_4:2;         //31:24
        uint32_t Int_Config_Offset_5:2;         //31:24
        uint32_t Int_Config_Offset_6:2;         //31:24
        uint32_t Int_Config_Offset_7:2;         //31:24
        uint32_t Int_Config_Offset_8:2;         //31:24
        uint32_t Int_Config_Offset_9:2;         //31:24
        uint32_t Int_Config_Offset_10:2;        //31:24
        uint32_t Int_Config_Offset_11:2;        //31:24
        uint32_t Int_Config_Offset_12:2;        //31:24
        uint32_t Int_Config_Offset_13:2;        //31:24
        uint32_t Int_Config_Offset_14:2;        //31:24
        uint32_t Int_Config_Offset_15:2;        //31:24
    } bits;
} ICDICFR3_CPU0;

typedef union ICDICFR4_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Int_Config_Offset_0:2;         //7:0
        uint32_t Int_Config_Offset_1:2;         //15:8
        uint32_t Int_Config_Offset_2:2;         //23:16
        uint32_t Int_Config_Offset_3:2;         //31:24
        uint32_t Int_Config_Offset_4:2;         //31:24
        uint32_t Int_Config_Offset_5:2;         //31:24
        uint32_t Int_Config_Offset_6:2;         //31:24
        uint32_t Int_Config_Offset_7:2;         //31:24
        uint32_t Int_Config_Offset_8:2;         //31:24
        uint32_t Int_Config_Offset_9:2;         //31:24
        uint32_t Int_Config_Offset_10:2;        //31:24
        uint32_t Int_Config_Offset_11:2;        //31:24
        uint32_t Int_Config_Offset_12:2;        //31:24
        uint32_t Int_Config_Offset_13:2;        //31:24
        uint32_t Int_Config_Offset_14:2;        //31:24
        uint32_t Int_Config_Offset_15:2;        //31:24
    } bits;
} ICDICFR4_CPU0;

typedef union ICDICFR5_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Int_Config_Offset_0:2;         //7:0
        uint32_t Int_Config_Offset_1:2;         //15:8
        uint32_t Int_Config_Offset_2:2;         //23:16
        uint32_t Int_Config_Offset_3:2;         //31:24
        uint32_t Int_Config_Offset_4:2;         //31:24
        uint32_t Int_Config_Offset_5:2;         //31:24
        uint32_t Int_Config_Offset_6:2;         //31:24
        uint32_t Int_Config_Offset_7:2;         //31:24
        uint32_t Int_Config_Offset_8:2;         //31:24
        uint32_t Int_Config_Offset_9:2;         //31:24
        uint32_t Int_Config_Offset_10:2;        //31:24
        uint32_t Int_Config_Offset_11:2;        //31:24
        uint32_t Int_Config_Offset_12:2;        //31:24
        uint32_t Int_Config_Offset_13:2;        //31:24
        uint32_t Int_Config_Offset_14:2;        //31:24
        uint32_t Int_Config_Offset_15:2;        //31:24
    } bits;
} ICDICFR5_CPU0;

typedef union ICDICFR6_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Int_Config_Offset_0:2;         //7:0
        uint32_t Int_Config_Offset_1:2;         //15:8
        uint32_t Int_Config_Offset_2:2;         //23:16
        uint32_t Int_Config_Offset_3:2;         //31:24
        uint32_t Int_Config_Offset_4:2;         //31:24
        uint32_t Int_Config_Offset_5:2;         //31:24
        uint32_t Int_Config_Offset_6:2;         //31:24
        uint32_t Int_Config_Offset_7:2;         //31:24
        uint32_t Int_Config_Offset_8:2;         //31:24
        uint32_t Int_Config_Offset_9:2;         //31:24
        uint32_t Int_Config_Offset_10:2;        //31:24
        uint32_t Int_Config_Offset_11:2;        //31:24
        uint32_t Int_Config_Offset_12:2;        //31:24
        uint32_t Int_Config_Offset_13:2;        //31:24
        uint32_t Int_Config_Offset_14:2;        //31:24
        uint32_t Int_Config_Offset_15:2;        //31:24
    } bits;
} ICDICFR6_CPU0;

typedef union ICDICFR7_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Int_Config_Offset_0:2;         //7:0
        uint32_t Int_Config_Offset_1:2;         //15:8
        uint32_t Int_Config_Offset_2:2;         //23:16
        uint32_t Int_Config_Offset_3:2;         //31:24
        uint32_t Int_Config_Offset_4:2;         //31:24
        uint32_t Int_Config_Offset_5:2;         //31:24
        uint32_t Int_Config_Offset_6:2;         //31:24
        uint32_t Int_Config_Offset_7:2;         //31:24
        uint32_t Int_Config_Offset_8:2;         //31:24
        uint32_t Int_Config_Offset_9:2;         //31:24
        uint32_t Int_Config_Offset_10:2;        //31:24
        uint32_t Int_Config_Offset_11:2;        //31:24
        uint32_t Int_Config_Offset_12:2;        //31:24
        uint32_t Int_Config_Offset_13:2;        //31:24
        uint32_t Int_Config_Offset_14:2;        //31:24
        uint32_t Int_Config_Offset_15:2;        //31:24
    } bits;
} ICDICFR7_CPU0;

typedef union ICDICFR8_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Int_Config_Offset_0:2;         //7:0
        uint32_t Int_Config_Offset_1:2;         //15:8
        uint32_t Int_Config_Offset_2:2;         //23:16
        uint32_t Int_Config_Offset_3:2;         //31:24
        uint32_t Int_Config_Offset_4:2;         //31:24
        uint32_t Int_Config_Offset_5:2;         //31:24
        uint32_t Int_Config_Offset_6:2;         //31:24
        uint32_t Int_Config_Offset_7:2;         //31:24
        uint32_t Int_Config_Offset_8:2;         //31:24
        uint32_t Int_Config_Offset_9:2;         //31:24
        uint32_t Int_Config_Offset_10:2;        //31:24
        uint32_t Int_Config_Offset_11:2;        //31:24
        uint32_t Int_Config_Offset_12:2;        //31:24
        uint32_t Int_Config_Offset_13:2;        //31:24
        uint32_t Int_Config_Offset_14:2;        //31:24
        uint32_t Int_Config_Offset_15:2;        //31:24
    } bits;
} ICDICFR8_CPU0;

typedef union ICDICFR9_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Int_Config_Offset_0:2;         //7:0
        uint32_t Int_Config_Offset_1:2;         //15:8
        uint32_t Int_Config_Offset_2:2;         //23:16
        uint32_t Int_Config_Offset_3:2;         //31:24
        uint32_t Int_Config_Offset_4:2;         //31:24
        uint32_t Int_Config_Offset_5:2;         //31:24
        uint32_t Int_Config_Offset_6:2;         //31:24
        uint32_t Int_Config_Offset_7:2;         //31:24
        uint32_t Int_Config_Offset_8:2;         //31:24
        uint32_t Int_Config_Offset_9:2;         //31:24
        uint32_t Int_Config_Offset_10:2;        //31:24
        uint32_t Int_Config_Offset_11:2;        //31:24
        uint32_t Int_Config_Offset_12:2;        //31:24
        uint32_t Int_Config_Offset_13:2;        //31:24
        uint32_t Int_Config_Offset_14:2;        //31:24
        uint32_t Int_Config_Offset_15:2;        //31:24
    } bits;
} ICDICFR9_CPU0;

typedef union ICDICFR0_CPU1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Int_Config_Offset_0:2;         //7:0
        uint32_t Int_Config_Offset_1:2;         //15:8
        uint32_t Int_Config_Offset_2:2;         //23:16
        uint32_t Int_Config_Offset_3:2;         //31:24
        uint32_t Int_Config_Offset_4:2;         //31:24
        uint32_t Int_Config_Offset_5:2;         //31:24
        uint32_t Int_Config_Offset_6:2;         //31:24
        uint32_t Int_Config_Offset_7:2;         //31:24
        uint32_t Int_Config_Offset_8:2;         //31:24
        uint32_t Int_Config_Offset_9:2;         //31:24
        uint32_t Int_Config_Offset_10:2;        //31:24
        uint32_t Int_Config_Offset_11:2;        //31:24
        uint32_t Int_Config_Offset_12:2;        //31:24
        uint32_t Int_Config_Offset_13:2;        //31:24
        uint32_t Int_Config_Offset_14:2;        //31:24
        uint32_t Int_Config_Offset_15:2;        //31:24
    } bits;
} ICDICFR0_CPU1;

typedef union ICDICFR0_CPU2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Int_Config_Offset_0:2;         //7:0
        uint32_t Int_Config_Offset_1:2;         //15:8
        uint32_t Int_Config_Offset_2:2;         //23:16
        uint32_t Int_Config_Offset_3:2;         //31:24
        uint32_t Int_Config_Offset_4:2;         //31:24
        uint32_t Int_Config_Offset_5:2;         //31:24
        uint32_t Int_Config_Offset_6:2;         //31:24
        uint32_t Int_Config_Offset_7:2;         //31:24
        uint32_t Int_Config_Offset_8:2;         //31:24
        uint32_t Int_Config_Offset_9:2;         //31:24
        uint32_t Int_Config_Offset_10:2;        //31:24
        uint32_t Int_Config_Offset_11:2;        //31:24
        uint32_t Int_Config_Offset_12:2;        //31:24
        uint32_t Int_Config_Offset_13:2;        //31:24
        uint32_t Int_Config_Offset_14:2;        //31:24
        uint32_t Int_Config_Offset_15:2;        //31:24
    } bits;
} ICDICFR0_CPU2;

typedef union ICDICFR0_CPU3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Int_Config_Offset_0:2;         //7:0
        uint32_t Int_Config_Offset_1:2;         //15:8
        uint32_t Int_Config_Offset_2:2;         //23:16
        uint32_t Int_Config_Offset_3:2;         //31:24
        uint32_t Int_Config_Offset_4:2;         //31:24
        uint32_t Int_Config_Offset_5:2;         //31:24
        uint32_t Int_Config_Offset_6:2;         //31:24
        uint32_t Int_Config_Offset_7:2;         //31:24
        uint32_t Int_Config_Offset_8:2;         //31:24
        uint32_t Int_Config_Offset_9:2;         //31:24
        uint32_t Int_Config_Offset_10:2;        //31:24
        uint32_t Int_Config_Offset_11:2;        //31:24
        uint32_t Int_Config_Offset_12:2;        //31:24
        uint32_t Int_Config_Offset_13:2;        //31:24
        uint32_t Int_Config_Offset_14:2;        //31:24
        uint32_t Int_Config_Offset_15:2;        //31:24
    } bits;
} ICDICFR0_CPU3;

/*
 * PPI_STATUS_CPUn
 * 
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0D00 Reset Value = 0x0000_0000 (PPI_STATUS_CPU0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x4D00 Reset Value = 0x0000_0000 (PPI_STATUS_CPU1)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x8D00 Reset Value = 0x0000_0000 (PPI_STATUS_CPU2)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0xCD00 Reset Value = 0x0000_0000 (PPI_STATUS_CPU3)
 * 
 *     Name     |   Bit   | Type |                        Description                         | Reset Value | 
 * ---------------------------------------------------------------------------------------------------------|
 *              |         |      | Returns the status of the ppi_c<n>[15:0] inputs on the     |             |
 * ppi_status   | [15:0]  |  R   | Distributor.                                               |     0x0     |
 *              |         |      | Bit[X] = 0 ppi_c<n>[X] is LOW.                             |             |
 *              |         |      | Bit[X] = 1 ppi_c<n>[X] is HIGH.                            |             |
 * ---------------------------------------------------------------------------------------------------------|
 * RSVD         | [31:16] |  -   | Reserved                                                   |     0x0     |
 * ---------------------------------------------------------------------------------------------------------|
 * 
 * Each bit provides the status of the ppi_c<n>[15:0] inputs for CPU Interface <n>. These registers are only
 * accessible to processors in secure state.
 */

typedef union PPI_STATUS_CPU0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PPI_STATUS:16;     //15:0
        uint32_t Reserved0:16;      //31:16
    } bits;
} PPI_STATUS_CPU0;

typedef union PPI_STATUS_CPU1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PPI_STATUS:16;     //15:0
        uint32_t Reserved0:16;      //31:16
    } bits;
} PPI_STATUS_CPU1;

typedef union PPI_STATUS_CPU2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PPI_STATUS:16;     //15:0
        uint32_t Reserved0:16;      //31:16
    } bits;
} PPI_STATUS_CPU2;

typedef union PPI_STATUS_CPU3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t PPI_STATUS:16;     //15:0
        uint32_t Reserved0:16;      //31:16
    } bits;
} PPI_STATUS_CPU3;

/*
 * SPI_STATUSn
 * 
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0D04 Reset Value = 0x0000_0000 (SPI_STATUS0)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0D08 Reset Value = 0x0000_0000 (SPI_STATUS1)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0D0C Reset Value = 0x0000_0000 (SPI_STATUS2)
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0D10 Reset Value = 0x0000_0000 (SPI_STATUS3)
 * 
 *     Name     |   Bit   | Type |                           Description                            | Reset Value | 
 * ---------------------------------------------------------------------------------------------------------------|
 *              |         |      | Returns the status of the spi[127:0] inputs on the Distributor.  |             |
 * SPI_STATUS   | [31:0]  |  R   | Bit[X] = 0 spi[X] is LOW.                                        |     0x0     |
 *              |         |      | Bit[X] = 0 spi[X] is HIGH.                                       |             |
 * ---------------------------------------------------------------------------------------------------------------|
 * 
 * Each bit provides the status of the SPI[127:0] inputs. This registers is only accessible to processors in Secure 
 * state.
 */

typedef union SPI_STATUS0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SPI_STATUS;     //31:0
    } bits;
} SPI_STATUS0;

typedef union SPI_STATUS1_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SPI_STATUS;     //31:0
    } bits;
} SPI_STATUS1;

typedef union SPI_STATUS2_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SPI_STATUS;     //31:0
    } bits;
} SPI_STATUS2;

typedef union SPI_STATUS3_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SPI_STATUS;     //31:0
    } bits;
} SPI_STATUS3;

/*
 * icdsgir
 * 
 * Address = INTERRUPT CONTROLLER Base Address 2 + 0x0F00 Reset Value = Undefined
 * 
 *     Name     |   Bit   | Type |                           Description                            | Reset Value | 
 * ---------------------------------------------------------------------------------------------------------------|
 *              |         |      | The interrupt ID of the SGI to send to the specified CPU         |             |
 * SPI_STATUS   |  [3:0]  |  W   | interfaces. The value of this field is the interrupt ID, in the  |      -      |
 *              |         |      | range 0-15. For example, a value of 0b0011 specifies             |             |
 *              |         |      | interrupt ID 3.                                                  |             |
 * ---------------------------------------------------------------------------------------------------------------|
 * RSVD         | [14:4]  |  -   | Reserved                                                         |      -      |
 * ---------------------------------------------------------------------------------------------------------------|
 *              |         |      | This field is writable only by using a Secure access.            |             |
 *              |         |      | Specifies the required security value of the SGI.                |             |
 *              |         |      | 0 = Sends the SGI specified in the SGINTID field to a            |             |
 * SPI_STATUS   |  [15]   |  W   | specified CPU interface only if the SGI is configured as         |      -      |
 *              |         |      | Secure on that interface.                                        |             |
 *              |         |      | 1 = Sends the specified SGI in the SGINTID field to              |             |
 *              |         |      | specified CPU interfaces only if the SGI is configured as        |             |
 *              |         |      | Non-secure on that interface.                                    |             |
 * ---------------------------------------------------------------------------------------------------------------|
 *              |         |      | When TargetList Filter = 0b00, it defines the CPU                |             |
 *              |         |      | interfaces the Distributor must send the interrupt to.           |             |
 * SPI_STATUS   | [23:16] |  W   | Each bit of CPUTargetList[7:0] refers to the corresponding       |      -      |
 *              |         |      | CPU interface, for example CPUTargetList[0] corresponds          |             |
 *              |         |      | to CPU interface 0. Setting a bit to 1 sends the interrupt to    |             |
 *              |         |      | the corresponding interface.                                     |             |
 * ---------------------------------------------------------------------------------------------------------------|
 *              |         |      | 0b00 : Sends the interrupt to the CPU interfaces specified       |             |
 *              |         |      | in the CPUTargetList field.                                      |             |
 *              |         |      | 0b01 : Sends the interrupt to all CPU interfaces except the      |             |
 * SPI_STATUS   | [25:24] |  W   | CPU interface that requested the interrupt.                      |      -      |
 *              |         |      | 0b10 : Sends the interrupt only to the CPU interface that        |             |
 *              |         |      | requeests the interrupt.                                         |             |
 *              |         |      | 0b11 : Reserved                                                  |             |
 * ---------------------------------------------------------------------------------------------------------------|
 * RSVD         | [31:26] |  -   | Reserved                                                         |      -      |
 * ---------------------------------------------------------------------------------------------------------------|
 * 
 * This register controls the generation of SGIs. This register is available in all configurations of the GIC. When the
 * GIC implements the Security Extensions, this register is Common.
 */

typedef union SPI_STATUS0_u
{
    uint32_t all_val;
    struct
    {
        uint32_t SPI_STATUS;     //31:0
    } bits;
} SPI_STATUS0;

#endif