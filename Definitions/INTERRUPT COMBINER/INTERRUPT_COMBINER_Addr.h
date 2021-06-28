#ifndef __INTERRUPT_COMBINER_INTERRUPT_COMBINER_ADDR_H__     
#define __INTERRUPT_COMBINER_INTERRUPT_COMBINER_ADDR_H__       

#define INTERRUPT_COMBINER_BASE_ADDR_1 0x10440000

#pragma region INTERRUPT COMBINER BASE ADDR 1    

//////////////////////////////////////////////////////
//                  Offset Part                     //
//////////////////////////////////////////////////////
#define IESR0_Offset                  0x0000
#define IECR0_Offset                  0x0004
#define ISTR0_Offset                  0x0008
#define IMSR0_Offset                  0x000C
#define IESR1_Offset                  0x0010
#define IECR1_Offset                  0x0014
#define ISTR1_Offset                  0x0018
#define IMSR1_Offset                  0x001C
#define IESR2_Offset                  0x0020
#define IECR2_Offset                  0x0024
#define ISTR2_Offset                  0x0028
#define IMSR2_Offset                  0x002C
#define IESR3_Offset                  0x0030
#define IECR3_Offset                  0x0034
#define ISTR3_Offset                  0x0038
#define IMSR3_Offset                  0x003C
#define IESR4_Offset                  0x0040
#define IECR4_Offset                  0x0044
#define ISTR4_Offset                  0x0048
#define IMSR4_Offset                  0x004C
#define CIPSR0_Offset                 0x0100

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define IESR0_ADDR                    (INTERRUPT_COMBINER_BASE_ADDR_1 + IESR0_Offset)
#define IECR0_ADDR                    (INTERRUPT_COMBINER_BASE_ADDR_1 + IECR0_Offset)
#define ISTR0_ADDR                    (INTERRUPT_COMBINER_BASE_ADDR_1 + ISTR0_Offset)
#define IMSR0_ADDR                    (INTERRUPT_COMBINER_BASE_ADDR_1 + IMSR0_Offset)
#define IESR1_ADDR                    (INTERRUPT_COMBINER_BASE_ADDR_1 + IESR1_Offset)
#define IECR1_ADDR                    (INTERRUPT_COMBINER_BASE_ADDR_1 + IECR1_Offset)
#define ISTR1_ADDR                    (INTERRUPT_COMBINER_BASE_ADDR_1 + ISTR1_Offset)
#define IMSR1_ADDR                    (INTERRUPT_COMBINER_BASE_ADDR_1 + IMSR1_Offset)
#define IESR2_ADDR                    (INTERRUPT_COMBINER_BASE_ADDR_1 + IESR2_Offset)
#define IECR2_ADDR                    (INTERRUPT_COMBINER_BASE_ADDR_1 + IECR2_Offset)
#define ISTR2_ADDR                    (INTERRUPT_COMBINER_BASE_ADDR_1 + ISTR2_Offset)
#define IMSR2_ADDR                    (INTERRUPT_COMBINER_BASE_ADDR_1 + IMSR2_Offset)
#define IESR3_ADDR                    (INTERRUPT_COMBINER_BASE_ADDR_1 + IESR3_Offset)
#define IECR3_ADDR                    (INTERRUPT_COMBINER_BASE_ADDR_1 + IECR3_Offset)
#define ISTR3_ADDR                    (INTERRUPT_COMBINER_BASE_ADDR_1 + ISTR3_Offset)
#define IMSR3_ADDR                    (INTERRUPT_COMBINER_BASE_ADDR_1 + IMSR3_Offset)
#define IESR4_ADDR                    (INTERRUPT_COMBINER_BASE_ADDR_1 + IESR4_Offset)
#define IECR4_ADDR                    (INTERRUPT_COMBINER_BASE_ADDR_1 + IECR4_Offset)
#define ISTR4_ADDR                    (INTERRUPT_COMBINER_BASE_ADDR_1 + ISTR4_Offset)
#define IMSR4_ADDR                    (INTERRUPT_COMBINER_BASE_ADDR_1 + IMSR4_Offset)
#define CIPSR0_ADDR                   (INTERRUPT_COMBINER_BASE_ADDR_1 + CIPSR0_Offset)

#pragma endregion

#endif