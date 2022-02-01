#ifndef __CLOCK_CLOCK_ADDR_H__    
#define __CLOCK_CLOCK_ADDR_H__  

#include "ustdint.h"

/*
 * ULCONn
 * 
 * Address = UART Base Address 1 + 0x0000
 * Address = UART Base Address 2 + 0x0000
 * Address = UART Base Address 3 + 0x0000
 * Address = UART Base Address 4 + 0x0000
 * Address = UART Base Address 5 + 0x0000
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Indicates the number of data bits UART transmits or receives |             |
 *                     |         |      | per frame.                                                   |             |
 * Word Length         |  [1:0]  |  RW  | 00 : 5 bits                                                  |     0x0     |
 *                     |         |      | 01 : 6 bits                                                  |             |
 *                     |         |      | 10 : 7 bits                                                  |             |
 *                     |         |      | 11 : 8 bits                                                  |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Specifies how many stop bits UART uses to signal end-of-     |             |
 * Number of           |   [2]   |  RW  | frame signal.                                                |     0x0     |
 * Stop Bit            |         |      | 0 : One stop bit per frame                                   |             |
 *                     |         |      | 1 : Two stop bit per frame                                   |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Specifies the type of parity that UART generates and checks  |             |
 *                     |         |      | during UART transmit and receive operation.                  |             |
 *                     |         |      | 0xx = No parity                                              |             |
 * Parity Mode         |  [5:3]  |  RW  | 100 = Odd Parity                                             |     0x0     |
 *                     |         |      | 101 = Even parity                                            |             |
 *                     |         |      | 110 = Parity forced / checked as 1                           |             |
 *                     |         |      | 111 = Parity forced / checked as 0                           |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * Infrared            |         |      | Determines whether to use the infra-red mode.                |             |
 * Mode                |   [6]   |  RW  | 0 = Normal mode operation                                    |     0x0     |
 *                     |         |      | 1 = Infra-red Tx/Rx mode                                     |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [31:7] |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 */

typedef union ULCONn_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Word_Length:2;         //1:0
        uint32_t Number_of_Stop_bit:1;  //2
        uint32_t Parity_Mode:3;         //5:3
        uint32_t Infrared_Mode:1;       //6
        uint32_t Reserved0:25;          //31:7
    } bits;
} ULCONn;

/*
 * UCONn
 * 
 * Address = UART Base Address 1 + 0x0004
 * Address = UART Base Address 2 + 0x0004
 * Address = UART Base Address 3 + 0x0004
 * Address = UART Base Address 4 + 0x0004
 * Address = UART Base Address 5 + 0x0004
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                           Description                           | Reset Value | 
 * ---------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Determines which function is able to Read data from UART        |             |
 *                     |         |      | receive buffer.                                                 |             |
 * Receive Mode        |  [1:0]  |  RW  | 00 : Disable                                                    |     0x0     |
 *                     |         |      | 01 : Interrupt request or polling mode                          |             |
 *                     |         |      | 10 : DMA mode                                                   |             |
 *                     |         |      | 11 : Reserved                                                   |             |
 * ---------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Determines which function is able to Write Tx data to the       |             |
 *                     |         |      | UART transmit buffer.                                           |             |
 * Transmit            |  [3:2]  |  RW  | 00 : Disable                                                    |     0x0     |
 * Mode                |         |      | 01 : Interrupt request or polling mode                          |             |
 *                     |         |      | 10 : DMA mode                                                   |             |
 *                     |         |      | 11 : Reserved                                                   |             |
 * ---------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | To set this bit to 1 triggers UART to send a break during 1     |             |
 *                     |         |      | frame time. This bit is automatically cleared after sending     |             |
 * Send Break          |   [4]   |  RWX | the break signal.                                               |     0x0     |
 * Signal              |         |      | 0 : Normal transmit                                             |             |
 *                     |         |      | 1 : Sends the break signal                                      |             |
 * ---------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | To set this bit to 1 triggers the UART to enter the loop-back   |             |
 * Loop-back           |   [5]   |  RW  | mode. This mode is for test purposes only.                      |     0x0     |
 * Mode                |         |      | 0 : Normal operation                                            |             |
 *                     |         |      | 1 : Loop-back mode                                              |             |
 * ---------------------------------------------------------------------------------------------------------------------|
 * Rx Error            |         |      | Enables the UART to generate an interrupt upon an               |             |
 * Status              |         |      | exception, such as a break, frame error, parity error, or       |             |
 * Interrupt           |   [6]   |  RW  | overrun error during a receive operation                        |     0x0     |
 * Enable              |         |      | 0 = Does not generate receive error status interrupt.           |             |
 *                     |         |      | 1 = Generates receive error status interrupt.                   |             |
 * ---------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Enables/disables Rx time-out interrupts when you enable         |             |
 * Rx Time Out         |   [7]   |  RW  | UART FIFO. The interrupt is a receive interrupt.                |     0x0     |
 * Enable              |         |      | 0 = Disable                                                     |             |
 *                     |         |      | 1 = Enables                                                     |             |
 * ---------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Interrupt request type. (2)                                     |             |
 *                     |         |      | 0 = Pulse (UART requests interrupt when instant Rx buffer       |             |
 *                     |         |      | receives data in the non-FIFO mode or when it reaches the       |             |
 * Rx Interrupt        |   [8]   |  RW  | trigger level of Rx FIFO in the FIFO mode.)                     |     0x0     |
 * Type                |         |      | 1 = Level (UART requests interrupt when Rx buffer receives      |             |
 *                     |         |      | data in the non-FIFO mode or when it reaches the trigger        |             |
 *                     |         |      | level of Rx FIFO in the FIFO mode.)                             |             |
 * ---------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Interrupt request type. (2)                                     |             |
 *                     |         |      | 0 = Pulse (UART requests interrupt when instant Tx buffer is    |             |
 *                     |         |      | empty in the non-FIFO mode or when it reaches the trigger       |             |
 * Tx Interrupt        |   [9]   |  RW  | level of Tx FIFO in the FIFO mode.)                             |     0x0     |
 * Type                |         |      | 1 = Level (UART requests interrupt when Tx buffer is empty in   |             |
 *                     |         |      | the non-FIFO mode or when it reaches the trigger level of       |             |
 *                     |         |      | Tx FIFO in the FIFO mode.)                                      |             |
 * ---------------------------------------------------------------------------------------------------------------------|
 * Rx Time-out         |         |      | Enables the suspension of Rx DMA FSM when Rx Time-out           |             |
 * DMA suspend         |   [10]  |  RW  | occurs.                                                         |     0x0     |
 * enable              |         |      | 0 = Disables suspension of Rx DMA FSM                           |             |
 *                     |         |      | 1 = Enables suspension of Rx DMA FSM                            |             |
 * ---------------------------------------------------------------------------------------------------------------------| 
 * Rx Time-out         |         |      | Enables Rx time-out feature when Rx FIFO counter is 0.          |             |
 * with empty Rx       |   [11]  |  RW  | This bit is valid only when UCONn[7] is 1.                      |     0x0     |
 * FIFO                |         |      | 0 = Disables Rx time-out feature when Rx FIFO is empty          |             |
 *                     |         |      | 1 = Enables Rx time-out feature when Rx FIFO is empty           |             |
 * ---------------------------------------------------------------------------------------------------------------------| 
 *                     |         |      | Rx Timeout Interrupt Interval                                   |             |
 * Rx Timeout          |         |      | Rx interrupt occurs if UART receive no data during 8 x (N       |             |
 * Interrupt           | [15:12] |  RW  | + 1) frame time.                                                |     0x0     |
 * Interval            |         |      | The default value of this field is 3. It means that the timeout |             |
 *                     |         |      | interval is 32 frame time.                                      |             |
 * ---------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Rx DMA Burst Size.                                              |             |
 *                     |         |      | It is the data transfer size of one DMA transaction. Rx DMA     |             |
 *                     |         |      | request triggers the DMA transaction. You must program          |             |
 *                     |         |      | the DMA program to transfer the same data size as this is       |             |
 *                     |         |      | the value for a single Rx DMA request.                          |             |
 *                     |         |      | 000 = 1 byte (Single)                                           |             |
 * Rx DMA Burst        | [18:16] |  RW  | 001 = 4 bytes                                                   |     0x0     |
 * Size                |         |      | 010 = 8 bytes                                                   |             |
 *                     |         |      | 011 = 16 bytes                                                  |             |
 *                     |         |      | 100 = Reserved                                                  |             |
 *                     |         |      | 101 = Reserved                                                  |             |
 *                     |         |      | 110 = Reserved                                                  |             |
 *                     |         |      | 111 = Reserved                                                  |             |
 * ---------------------------------------------------------------------------------------------------------------------|
 * RSVD                |   [19]  |  WO  | Reserved                                                        |     0x0     |
 * ---------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Tx DMA Burst Size.                                              |             |
 *                     |         |      | It is the data transfer size of one DMA transaction. Tx DMA     |             |
 *                     |         |      | request triggers the DMA transaction. You must program          |             |
 *                     |         |      | the DMA program to transfer the same data size as this is       |             |
 *                     |         |      | the value for a single Tx DMA request.                          |             |
 *                     |         |      | 000 = 1 byte (Single)                                           |             |
 * Tx DMA Burst        | [22:20] |  RW  | 001 = 4 bytes                                                   |     0x0     |
 * Size                |         |      | 010 = 8 bytes                                                   |             |
 *                     |         |      | 011 = 16 bytes                                                  |             |
 *                     |         |      | 100 = Reserved                                                  |             |
 *                     |         |      | 101 = Reserved                                                  |             |
 *                     |         |      | 110 = Reserved                                                  |             |
 *                     |         |      | 111 = Reserved                                                  |             |
 * --------------------------------------------------------------------------*2-------------------------------------------|
 * RSVD                |   [23]  |  WO  | Reserved                                                        |     0x0     |
 * ---------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:24] |  WO  | Reserved                                                        |     0x0     |
 * ---------------------------------------------------------------------------------------------------------------------|
 *
 * Note: 
 * 1. DIV_VAL = UBRDIVn + UFRACVAL/16
 * 2. Exynos 4412 uses a level-triggered interrupt controller. Therefore, you must set these bits to 1 for every transfer
 * 3. If UART does not reach the trigger level of FIFO and does not receive data during the time specified at the "Rx Timeout
 *    Interrupt Interval" field in DMA receive mode with FIFO, UART generates the Rx interrupt(receive time out.)
 *    Ensure to verify the FIFO status and read out the rest.
 * 4. Both UCON[11] and UCONn[7] should be set to 1 if you want to enable Rx Time-out feature when Rx FIFO counter is
 *    set to 0.
 */

typedef union UCONn_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Receive_Mode:2;                            //1:0
        uint32_t Transmit_Mode:2;                           //3:2
        uint32_t Send_Break_Signal:1;                       //4
        uint32_t Loop_Back_Mode:1;                          //5
        uint32_t Rx_Error_Status_Interrupt_Enable:1;        //6
        uint32_t Rx_Time_Out_Enable:1;                      //7
        uint32_t Rx_Interrupt_Type:1;                       //8
        uint32_t Tx_Interrupt_Type:1;                       //9
        uint32_t Rx_Time_out_DMA_Suspend_Enable:1;          //10
        uint32_t Rx_Time_out_with_empty_Rx_FIFO:1;          //11
        uint32_t Rx_TIme_out_Interrupt_Interval:4;          //15:12
        uint32_t Rx_DMA_Burst_Size:3;                       //18:16
        uint32_t Reserved0:1;                               //19
        uint32_t Tx_DMA_Burst_Size:3;                       //22:20
        uint32_t Reserved1:1;                               //23
        uint32_t Reserved2:8;                               //31:24
    } bits;
} UCONn;

/*
 * UFCONn
 * 
 * Address = UART Base Address 1 + 0x0008
 * Address = UART Base Address 2 + 0x0008
 * Address = UART Base Address 3 + 0x0008
 * Address = UART Base Address 4 + 0x0008
 * Address = UART Base Address 5 + 0x0008
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 * FIFO Enable         |   [0]   |  RW  | 0 = Disable                                                  |     0x0     |
 *                     |         |      | 1 = Enable                                                   |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * Rx FIFO             |         |      | Automatically clears after resetting FIFO                    |             |
 * Reset               |   [1]   |  S   | 0 = Normal                                                   |     0x0     |
 *                     |         |      | 1 = Rx FIFO reset                                            |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * Tx FIFO             |         |      | Automatically clears after resetting FIFO                    |             |
 * Reset               |   [2]   |  S   | 0 = Normal                                                   |     0x0     |
 *                     |         |      | 1 = Tx FIFO reset                                            |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                |   [3]   |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Determines the trigger level of Rx FIFO. When data count     |             |
 *                     |         |      | of Rx FIFO is more than or equal to the trigger level, Rx    |             |
 *                     |         |      | interrupt occurs.                                            |             |
 *                     |         |      | [Channel 0]                                                  |             |
 *                     |         |      | 000 = 32 bytes                                               |             |
 *                     |         |      | 001 = 64 bytes                                               |             |
 *                     |         |      | 010 = 96 bytes                                               |             |
 *                     |         |      | 011 = 128 bytes                                              |             |
 *                     |         |      | 100 = 160 bytes                                              |             |
 *                     |         |      | 101 = 192 bytes                                              |             |
 *                     |         |      | 110 = 224 bytes                                              |             |
 *                     |         |      | 111 = 256 bytes                                              |             |
 *                     |         |      | [Channel 1, 4]                                               |             |
 *                     |         |      | 000 = 8 bytes                                                |             |
 * Rx FIFO             |  [6:4]  |  RW  | 001 = 16 bytes                                               |     0x0     |
 * Trigger Level       |         |      | 010 = 24 bytes                                               |             |
 *                     |         |      | 011 = 32 bytes                                               |             |
 *                     |         |      | 100 = 40 bytes                                               |             |
 *                     |         |      | 101 = 48 bytes                                               |             |
 *                     |         |      | 110 = 56 bytes                                               |             |
 *                     |         |      | 111 = 64 bytes                                               |             |
 *                     |         |      | [Channel 2, 3]                                               |             |
 *                     |         |      | 000 = 2 bytes                                                |             |
 *                     |         |      | 001 = 4 bytes                                                |             |
 *                     |         |      | 010 = 6 bytes                                                |             |
 *                     |         |      | 011 = 8 bytes                                                |             |
 *                     |         |      | 100 = 10 bytes                                               |             |
 *                     |         |      | 101 = 12 bytes                                               |             |
 *                     |         |      | 110 = 14 bytes                                               |             |
 *                     |         |      | 111 = 16 bytes                                               |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                |   [7]   |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Determines the trigger level of Tx FIFO. When data count of  |             |
 *                     |         |      | Tx FIFO is less than or equal to the trigger level, Tx       |             |
 *                     |         |      | interrupt occurs.                                            |             |
 *                     |         |      | [Channel 0]                                                  |             |
 *                     |         |      | 000 = 0 byte                                                 |             |
 *                     |         |      | 001 = 32 bytes                                               |             |
 *                     |         |      | 010 = 64 bytes                                               |             |
 *                     |         |      | 011 = 96 bytes                                               |             |
 *                     |         |      | 100 = 128 bytes                                              |             |
 *                     |         |      | 101 = 160 bytes                                              |             |
 *                     |         |      | 110 = 192 bytes                                              |             |
 *                     |         |      | 111 = 224 bytes                                              |             |
 *                     |         |      | [Channel 1, 4]                                               |             |
 *                     |         |      | 000 = 0 byte                                                 |             |
 * Tx FIFO             |  [10:8] |  RW  | 001 = 8 bytes                                                |     0x0     |
 * Trigger Level       |         |      | 010 = 16 bytes                                               |             |
 *                     |         |      | 011 = 24 bytes                                               |             |
 *                     |         |      | 100 = 32 bytes                                               |             |
 *                     |         |      | 101 = 40 bytes                                               |             |
 *                     |         |      | 110 = 48 bytes                                               |             |
 *                     |         |      | 111 = 56 bytes                                               |             |
 *                     |         |      | [Channel 2, 3]                                               |             |
 *                     |         |      | 000 = 0 byte                                                 |             |
 *                     |         |      | 001 = 2 bytes                                                |             |
 *                     |         |      | 010 = 4 bytes                                                |             |
 *                     |         |      | 011 = 6 bytes                                                |             |
 *                     |         |      | 100 = 8 bytes                                                |             |
 *                     |         |      | 101 = 10 bytes                                               |             |
 *                     |         |      | 110 = 12 bytes                                               |             |
 *                     |         |      | 111 = 14 bytes                                               |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:11] |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 */

typedef union UFCONn_u
{
    uint32_t all_val;
    struct
    {
        uint32_t FIFO_Enable:1;                 //0
        uint32_t Rx_FIFO_Reset:1;               //1
        uint32_t Tx_FIFO_Reset:1;               //2
        uint32_t Reserved0:1;                   //3
        uint32_t Rx_FIFO_Trigger_Level:3;       //6:4
        uint32_t Reserved1:1;                   //7
        uint32_t Tx_FIFO_Trigger_Level:3;       //10:8
        uint32_t Reserved2:21;                  //31:11
    } bits;
} UFCONn;

/*
 * UMCONn
 * 
 * Address = UART Base Address 1 + 0x000C
 * Address = UART Base Address 2 + 0x000C
 * Address = UART Base Address 3 + 0x000C
 * Address = UART Base Address 5 + 0x000C
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                         Description                          | Reset Value | 
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | If AFC bit is enable, this value will be ignored. In this case,   |             |
 *                     |         |      | the Exynos 4412 controls nRTS signals automatically.         |             |
 * Request to          |   [0]   |  RW  | If AFC bit is disabled, the software must control nRTS       |     0x0     |
 * Send                |         |      | signal.                                                      |             |
 *                     |         |      | 0 = "H" Level (inactivate nRTS)                              |             |
 *                     |         |      | 1 = "L" Level (activate nRTS)                                |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [2:1]  |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 * Modem               |   [3]   |  RW  | 0 = Disable                                                  |     0x0     |
 * Interrupt Enable    |         |      | 1 = Enable                                                   |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * Auto Flow           |   [4]   |  RW  | 0 = Disable                                                  |     0x0     |
 * Control (AFC)       |         |      | 1 = Enable                                                   |             |
 * ------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Determines the trigger level of Rx FIFO to control nRTS      |             |
 *                     |         |      | signal. When it enables AFC bit and Rx FIFO have bytes       |             |
 *                     |         |      | that are greater than or equals to the trigger level, it     |             |
 *                     |         |      | deactivates nRTS signal                                      |             |
 *                     |         |      | [Channel 0]                                                  |             |
 *                     |         |      | 000 = 255 bytes                                              |             |
 *                     |         |      | 001 = 224 bytes                                              |             |
 *                     |         |      | 010 = 192 bytes                                              |             |
 *                     |         |      | 011 = 160 bytes                                              |             |
 *                     |         |      | 100 = 128 bytes                                              |             |
 *                     |         |      | 101 = 96 bytes                                               |             |
 *                     |         |      | 110 = 64 bytes                                               |             |
 *                     |         |      | 111 = 32 bytes                                               |             |
 *                     |         |      | [Channel 1, 4]                                               |             |
 * RTS trigger         |  [7:5]  |  RW  | 000 = 63 bytes                                               |     0x0     |
 * Level               |         |      | 001 = 56 bytes                                               |             |
 *                     |         |      | 010 = 48 bytes                                               |             |
 *                     |         |      | 011 = 40 bytes                                               |             |
 *                     |         |      | 100 = 32 bytes                                               |             |
 *                     |         |      | 101 = 24 bytes                                               |             |
 *                     |         |      | 110 = 16 bytes                                               |             |
 *                     |         |      | 111 = 8 bytes                                                |             |
 *                     |         |      | [Channel 2]                                                  |             |
 *                     |         |      | 000 = 15 bytes                                               |             |
 *                     |         |      | 001 = 14 bytes                                               |             |
 *                     |         |      | 010 = 12 bytes                                               |             |
 *                     |         |      | 011 = 10 bytes                                               |             |
 *                     |         |      | 100 = 8 bytes                                                |             |
 *                     |         |      | 101 = 6 bytes                                                |             |
 *                     |         |      | 110 = 4 bytes                                                |             |
 *                     |         |      | 111 = 2 bytes                                                |             |
 * ------------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [31:8] |  -   | Reserved                                                     |     0x0     |
 * ------------------------------------------------------------------------------------------------------------------|
 * 
 * Note:
 * UART 3 does not support AFC function because the Exynos 4412 has no nRTS3 and nCTS3.
 * In AFC mode, set the trigger level of Rx FIFO lower than the trigger level of RTS because transmitter stops data
 * transfer when it deactivates the nRTS signal
 */

typedef union UMCONn_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Request_to_Send:1;             //0
        uint32_t Reserved0:2;                   //2:1
        uint32_t Modem_Interrupt_Enable:1;      //3
        uint32_t Auto_Flow_Control:1;           //4
        uint32_t RTS_trigger_Level:3;           //7:5
        uint32_t Reserved1:24;                  //31:8
    } bits;
} UMCONn;

/*
 * UTRSTATn
 * 
 * Address = UART Base Address 1 + 0x0010
 * Address = UART Base Address 2 + 0x0010
 * Address = UART Base Address 3 + 0x0010
 * Address = UART Base Address 4 + 0x0010
 * Address = UART Base Address 5 + 0x0010
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                           Description                            | Reset Value | 
 * ----------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | It automatically sets this bit to 1 when receive buffer contains |             |
 *                     |         |      | valid data, which is received over the RXDn port.                |             |
 * Receive             |         |      | 0 = Buffer is empty.                                             |             |
 * buffer data         |   [0]   |   R  | 1 = Buffer has a received data                                   |     0x0     |
 * ready               |         |      | (In Non-FIFO mode, it requests interrupt or DMA)                 |             |
 *                     |         |      | When UART uses the FIFO, check for Rx FIFO Count bits            |             |
 *                     |         |      | and Rx FIFO Full bit in UFSTAT instead of this bit.              |             |
 * ----------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | This bit is automatically set to 1 when transmit buffer is       |             |
 *                     |         |      | empty.                                                           |             |
 *                     |         |      | 0 = Buffer is not empty.                                         |             |
 *                     |         |      | 1 = Buffer is empty (in non-FIFO mode, it requests interrupt or) |             |
 * Transmit            |   [1]   |   R  | DMA).                                                            |     0x0     |
 * buffer empty        |         |      | In FIFO mode, it requests interrupt or DMA, when the trigger     |             |
 *                     |         |      | level of Tx FIFO is set to 00 (empty).                           |             |
 *                     |         |      | When UART uses FIFO, check for Tx FIFO Count bits and Tx         |             |
 *                     |         |      | FIFO Full bit in UFSTAT instead of this bit.                     |             |
 * ----------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | This bit is automatically set to 1 when the transmit buffer has  |             |
 * Transmitter         |   [2]   |   R  | no valid data to transmit, and the transmit shift is empty.      |     0x0     |
 * empty               |         |      | 0 = Not empty                                                    |             |
 *                     |         |      | 1 = Transmitter(includes transmit buffer and shifter) empty      |             |
 * ----------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | RX Time-out status when read.                                    |             |
 *                     |         |      | 0 = Rx Time out did not occur                                    |             |
 *                     |         |      | 1 = Rx Time out.                                                 |             |
 * Rx Time-out         |         |      | Clear Rx Time-out status when write.                             |             |
 * status/Clear        |   [3]   |  RWX | 0 = No operation                                                 |     0x0     |
 *                     |         |      | 1 = Clear Rx Time-out status                                     |             |
 *                     |         |      | Note: When UCONn[10] is set to 1, writing 1 to this bit          |             |
 *                     |         |      | resumes Rx DMA FSM that was suspended when Rx time-out           |             |
 *                     |         |      | occured.                                                         |             |
 * ----------------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [7:4]  |  -   | Reserved                                                         |     0x0     |
 * ----------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Current State of Rx DMA FSM                                      |             |
 *                     |         |      | 0x0 = IDLE                                                       |             |
 *                     |         |      | 0x1 = Burst Request                                              |             |
 *                     |         |      | 0x2 = Burst Acknowledgement                                      |             |
 * Rx DMA              |         |      | 0x3 = Burst Next(intermediate state for next request)            |             |
 * FSM State           |  [11:8] |   R  | 0x4 = Single Request                                             |     0x0     |
 *                     |         |      | 0x5 = Single Acknowledgement                                     |             |
 *                     |         |      | 0x6 = Single Next(intermediate state for next request)           |             |
 *                     |         |      | 0x7 = Last Burst Request                                         |             |
 *                     |         |      | 0x8 = Last Burst Acknowledgement                                 |             |
 *                     |         |      | 0x9 = Last Single Request                                        |             |
 *                     |         |      | 0x10 = Last Single Acknowledgement                               |             |
 * ----------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | Current State of Tx DMA FSM                                      |             |
 *                     |         |      | 0x0 = IDLE                                                       |             |
 *                     |         |      | 0x1 = Burst Request                                              |             |
 *                     |         |      | 0x2 = Burst Acknowledgement                                      |             |
 * Tx DMA              |         |      | 0x3 = Burst Next(intermediate state for next request)            |             |
 * FSM State           | [15:12] |   R  | 0x4 = Single Request                                             |     0x0     |
 *                     |         |      | 0x5 = Single Acknowledgement                                     |             |
 *                     |         |      | 0x6 = Single Next(intermediate state for next request)           |             |
 *                     |         |      | 0x7 = Last Burst Request                                         |             |
 *                     |         |      | 0x8 = Last Burst Acknowledgement                                 |             |
 *                     |         |      | 0x9 = Last Single Request                                        |             |
 *                     |         |      | 0x10 = Last Single Acknowledgement                               |             |
 * ----------------------------------------------------------------------------------------------------------------------|
 * Rx FIFO             |         |      |                                                                  |             |
 * Count in Rx         | [23:16] |   R  | Capture value of Rx FIFO counter when Rx time-out occurs         |     0x0     |
 * time-out            |         |      |                                                                  |             |
 * status              |         |      |                                                                  |             |
 * ----------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:24] |  -   | Reserved                                                         |     0x0     |
 * ----------------------------------------------------------------------------------------------------------------------|
 */

typedef union UTRSTATn_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Receive_Buffer_Data_Ready:1;               //0
        uint32_t Transmit_Buffer_Empty:1;                   //1
        uint32_t Transmitter_Empty:1;                       //2
        uint32_t Rx_Time_out_status_Clear:1;                //3
        uint32_t Reserved0:4;                               //7:4
        uint32_t RX_DMA_FSM_State:4;                        //11:8
        uint32_t TX_DMA_FSM_State:4;                        //15:12
        uint32_t RX_FIFO_Count_in_RX_Time_out_status:8;     //23:16
        uint32_t Reserved1:8;                               //31:24
    } bits;
} UTRSTATn;

/*
 * UERSTATn
 * 
 * Address = UART Base Address 1 + 0x0014
 * Address = UART Base Address 2 + 0x0014
 * Address = UART Base Address 3 + 0x0014
 * Address = UART Base Address 4 + 0x0014
 * Address = UART Base Address 5 + 0x0014
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                              Description                              | Reset Value | 
 * ---------------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | It automatically sets this bit to 1 automatically if an overrun error |             |
 *                     |         |      | occurs during the receive operation.                                  |             |
 * Overrun             |   [0]   |   R  | 0 = No overrun error occurs during the receive operation              |     0x0     |
 * Error               |         |      | 1 = Overrun error occurs (Interrupt is requested.) during the         |             |
 *                     |         |      | receive operation                                                     |             |
 * ---------------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | It automatically sets this bit to 1 when a parity error occurs during |             |
 *                     |         |      | the receive operation.                                                |             |
 * Parity Error        |   [1]   |   R  | 0 = No parity error occurs during receive the receive operation       |     0x0     |
 *                     |         |      | 1 = Parity error occurs (Interrupt is requested.) during the receive  |             |
 *                     |         |      | operation                                                             |             |
 * ---------------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | It automatically sets this bit to 1 when a frame error occurs during  |             |
 *                     |         |      | the receive operation.                                                |             |
 * Frame               |   [2]   |   R  | 0 = No frame error occurs during receive the receive operation        |     0x0     |
 * Error               |         |      | 1 = Frame error occurs (Interrupt is requested.) during the receive   |             |
 *                     |         |      | operation                                                             |             |
 * ---------------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | It automatically sets this bit to 1 to indicate that a break signal   |             |
 * Break               |   [3]   |   R  | has been received.                                                    |     0x0     |
 * Detect              |         |      | 0 = No break signal is received.                                      |             |
 *                     |         |      | 1 = Break signal is received (Interrupt is requested).                |             |
 * ---------------------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [31:4] |  -   | Reserved                                                              |     0x0     |
 * ---------------------------------------------------------------------------------------------------------------------------|
 * 
 * Note: It clears these bits (UERSTATn[3:0]) to 0 when UART error status is Read.
 */

typedef union UERSTATn_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Overrun_Error:1;       //0
        uint32_t Parity_Error:1;        //1
        uint32_t Frame_Error:1;         //2
        uint32_t Break_Detect:1;        //3
        uint32_t Reserved0:28;          //31:4
    } bits;
} UERSTATn;

/*
 * UFSTATn
 * 
 * Address = UART Base Address 1 + 0x0018
 * Address = UART Base Address 2 + 0x0018
 * Address = UART Base Address 3 + 0x0018
 * Address = UART Base Address 4 + 0x0018
 * Address = UART Base Address 5 + 0x0018
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                              Description                              | Reset Value | 
 * ---------------------------------------------------------------------------------------------------------------------------|
 * Rx FIFO             |  [7:0]  |   R  | Number of data in Rx FIFO                                             |     0x0     |
 * Count               |         |      | NOTE: This field is set to 0 when Rx FIFO is full                     |             |
 * ---------------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | It automatically sets this bit to 1 when the received FIFO is         |             |
 * Rx FIFO Full        |   [8]   |   R  | full during receive operation                                         |     0x0     |
 *                     |         |      | 0 = Not Full                                                          |             |
 *                     |         |      | 1 = Full                                                              |             |
 * ---------------------------------------------------------------------------------------------------------------------------|
 * Rx FIFO             |   [9]   |   R  | This bit is set to 1 when Rx FIFO contains invalid data that          |     0x0     |
 * Error               |         |      | results from frame error, parity error, or break signal               |             |
 * ---------------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [15:10] |  -   | Reserved                                                              |     0x0     |
 * ---------------------------------------------------------------------------------------------------------------------------|
 * Tx FIFO             | [23:16] |   R  | Number of data in Tx FIFO                                             |     0x0     |
 * Count               |         |      | NOTE: This field is set to 0 when Tx FIFO is full                     |             |
 * ---------------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | It automatically sets this bit to 1 when the transmitted FIFO is      |             |
 * Tx FIFO Full        |   [24]  |   R  | full during transmit operation                                        |     0x0     |
 *                     |         |      | 0 = Not Full                                                          |             |
 *                     |         |      | 1 = Full                                                              |             |
 * ---------------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:25] |  -   | Reserved                                                              |     0x0     |
 * ---------------------------------------------------------------------------------------------------------------------------|
 */

typedef union UFSTATn_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Rx_FIFO_Count:8;       //7:0
        uint32_t Rx_FIFO_Full:1;        //8
        uint32_t Rx_FIFO_Error:1;       //9
        uint32_t Reserved0:6;           //15:10
        uint32_t Tx_FIFO_Count:8;       //23:16
        uint32_t Tx_FIFO_Full:1;        //24
        uint32_t Reserved1:7;           //31:25
    } bits;
} UFSTATn;

/*
 * UMSTATn
 * 
 * Address = UART Base Address 1 + 0x001C
 * Address = UART Base Address 2 + 0x001C
 * Address = UART Base Address 3 + 0x001C
 * Address = UART Base Address 4 + 0x001C
 * Address = UART Base Address 5 + 0x001C
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                              Description                              | Reset Value | 
 * ---------------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | 0 = Does not activates CTS signal (nCTS pin is high)                  |             |
 * Clear to Send       |   [0]   |   R  | 1 = Activates CTS signal (nCTS pin is low)                            |     0x0     |
 *                     |         |      | NOTE: In UMSTAT4, reset value of this bit is undefined. It            |             |
 *                     |         |      | depends on the GPIO configuration of GPS.                             |             |
 * ---------------------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [3:1]  |  -   | Reserved                                                              |      -      |
 * ---------------------------------------------------------------------------------------------------------------------------|
 *                     |         |      | This bit indicates that the nCTS input to the Exynos 4412             |             |
 *                     |         |      | has changed its state since the last time CPU read it. Refer          |             |
 *                     |         |      | to Figure 13-9 for more information.                                  |             |
 * Delta CTS           |   [4]   |   R  | 0 = Has not changed                                                   |     0x0     |
 *                     |         |      | 1 = Has changed                                                       |             |
 *                     |         |      | NOTE: In UMSTAT4, reset value of this bit is undefined. It            |             |
 *                     |         |      | depends on the GPIO configuration of GPS.                             |             |
 * ---------------------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [31:5] |  -   | Reserved                                                              |     0x0     |
 * ---------------------------------------------------------------------------------------------------------------------------|
 */

typedef union UMSTATn_u
{
    uint32_t all_val;
    struct
    {
        uint32_t Clear_to_Send:1;       //0
        uint32_t Reserved0:3;           //3:1
        uint32_t Delta_CTS:1;           //4
        uint32_t Reserved1:27;          //31:5
    } bits;
} UMSTATn;

/*
 * UTXHn
 * 
 * Address = UART Base Address 1 + 0x0020
 * Address = UART Base Address 2 + 0x0020
 * Address = UART Base Address 3 + 0x0020
 * Address = UART Base Address 4 + 0x0020
 * Address = UART Base Address 5 + 0x0020
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                              Description                              | Reset Value | 
 * ---------------------------------------------------------------------------------------------------------------------------|
 * UTXHn               |  [7:0]  |  RWX | Transmits data for UART n                                             |      -      |
 * ---------------------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [31:8] |  -   | Reserved                                                              |      -      |
 * ---------------------------------------------------------------------------------------------------------------------------|
 */

typedef union UTXHn_u
{
    uint32_t all_val;
    struct
    {
        uint32_t UTXHn:8;           //7:0
        uint32_t Reserved0:24;       //31:8
    } bits;
} UTXHn;


/*
 * URXHn
 * 
 * Address = UART Base Address 1 + 0x0024
 * Address = UART Base Address 2 + 0x0024
 * Address = UART Base Address 3 + 0x0024
 * Address = UART Base Address 4 + 0x0024
 * Address = UART Base Address 5 + 0x0024
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                              Description                              | Reset Value | 
 * ---------------------------------------------------------------------------------------------------------------------------|
 * URXHn               |  [7:0]  |   R  | Receives data for UART n                                              |     0x00    |
 * ---------------------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [31:8] |  -   | Reserved                                                              |      0      |
 * ---------------------------------------------------------------------------------------------------------------------------|
 * Note: When an overrun error occurs, CPU must Read URXHn. If not, the next received data makes an overrun error, even
 * though it clears the overrun bit of UERSTATn.
 */

typedef union URXHn_u
{
    uint32_t all_val;
    struct
    {
        uint32_t URXHn:8;           //7:0
        uint32_t Reserved0:24;      //31:8
    } bits;
} URXHn;

/*
 * UBRDIVn
 * 
 * Address = UART Base Address 1 + 0x0028
 * Address = UART Base Address 2 + 0x0028
 * Address = UART Base Address 3 + 0x0028
 * Address = UART Base Address 4 + 0x0028
 * Address = UART Base Address 5 + 0x0028
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                              Description                              | Reset Value | 
 * ---------------------------------------------------------------------------------------------------------------------------|
 * UBRDIVn             |  [15:0] |  RW  | Baud-rate division value                                              |    0x0000   |
 * ---------------------------------------------------------------------------------------------------------------------------|
 * RSVD                | [31:16] |  -   | Reserved                                                              |      0      |
 * ---------------------------------------------------------------------------------------------------------------------------|
 * Note: When UBRDIV value is set to 0, UFRACVAL value does not affect UART baud rate.
 */

typedef union UBRDIVn_u
{
    uint32_t all_val;
    struct
    {
        uint32_t UBRDIVn:16;        //15:0
        uint32_t Reserved0:16;      //31:16
    } bits;
} UBRDIVn;

/*
 * UFRACVALn
 * 
 * Address = UART Base Address 1 + 0x002C
 * Address = UART Base Address 2 + 0x002C
 * Address = UART Base Address 3 + 0x002C
 * Address = UART Base Address 4 + 0x002C
 * Address = UART Base Address 5 + 0x002C
 * Reset Value = 0x0000_0000
 * 
 *         Name        |   Bit   | Type |                              Description                              | Reset Value | 
 * ---------------------------------------------------------------------------------------------------------------------------|
 * UFRACVALn           |  [3:0]  |  RW  | Determines the fractional part of Baud-rate divisor.                  |     0x0     |
 * ---------------------------------------------------------------------------------------------------------------------------|
 * RSVD                |  [31:4] |  -   | Reserved                                                              |      0      |
 * ---------------------------------------------------------------------------------------------------------------------------|
 * 
 * 1. UART Baud-Rate Configuration
 * You can use the value stored in the Baud-rate divisor (UBRDIVn) and divisor fractional value (UFRACVALn)
 * to determine the serial Tx/Rx clock rate (Baud rate) as:
 * DIV_VAL = UBRDIVn + UFRACVALn / 16
 * or
 * DIV_VAL = (SCLK_UART/(bps x 16)) - 1
 * Where, the divisor should be from 1 to (216 - 1).
 * By using UFRACVALn, you can generate the Baud rate more accurately.
 * 
 * For example, if the Baud rate is 115200 bps and SCLK_UART is 40MHz, UBRDIVn and UFRACVALn are:
 * DIV_VAL = (40000000 / (115200 x 16)) - 1
 *  = 21.7 - 1
 *  = 20.7
 * UBRDIVn = 20 (integer part of DIV_vAL)
 * UFRACVALn / 16 = 0.7
 * Therefore, UFRACVALn = 11
 * 
 * 2. Baud-rate Error Tolerance
 * UART Frame error should be less than 1.87 % (3 / 160)
 * tUPCLK = (UBRDIVn + 1 + UFRACVAL / 16) x 16 x 1Frame / SCLK_UART
 * tUPCLK = Real UART Clock
 * tEXTUARTCLK = 1 Frame/Baud-rate
 * tEXTUARTCLK = Ideal UART Clock
 * 
 * UART Error = (tUPCLK - TEXTUARTCLK) / tEXTUARTCLK x 100%
 * * 1 Frame = start bit + data bit + parity bit + stop bit.
 * 
 * 3. UART Clock and PCLK Relation
 * 
 * There is a constraint on the ratio of clock frequencies for PCLK to UARTCLK.
 * 
 * The frequency of UARTCLK must be no more than 5.5/3 times faster than the frequency of PCLK:
 * 
 * FUARTCLK <= 5.5/3 x FPCLK
 * FUARTCLK = baudrate x 16
 * 
 * This allow sufficient time to Write the received data to the receive FIFO.
 */

typedef union UFRACVALn_u
{
    uint32_t all_val;
    struct
    {
        uint32_t UFRACVALn:4;       //3:0
        uint32_t Reserved0:28;      //31:4
    } bits;
} UFRACVALn;

#endif
