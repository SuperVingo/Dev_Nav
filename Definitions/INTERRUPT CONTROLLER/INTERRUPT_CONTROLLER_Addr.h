#ifndef __INTERRUPT_CONTROLLER_INTERRUPT_CONTROLLER_ADDR_H__     
#define __INTERRUPT_CONTROLLER_INTERRUPT_CONTROLLER_ADDR_H__       

#define INTERRUPT_CONTROLLER_BASE_ADDR_1 0x10480000
#define INTERRUPT_CONTROLLER_BASE_ADDR_2 0x10490000

#pragma region INTERRUPT CONTROLLER BASE ADDR 1    

//////////////////////////////////////////////////////
//                  Offset Part                     //
//////////////////////////////////////////////////////
#define ICCICR_CPU0_Offset                  0x0000
#define ICCPMR_CPU0_Offset                  0x0004
#define ICCBPR_CPU0_Offset                  0x0008
#define ICCIAR_CPU0_Offset                  0x000C
#define ICCEOIR_CPU0_Offset                 0x0010
#define ICCRPR_CPU0_Offset                  0x0014
#define ICCHPIR_CPU0_Offset                 0x0018
#define ICCABPR_CPU0_Offset                 0x001C
#define INTEG_EN_C_CPU0_Offset              0x0040
#define INTERRUPT_OUT_CPU0_Offset           0x0044
#define ICCIIDR_Offset                      0x00FC
#define ICCICR_CPU1_Offset                  0x4000
#define ICCPMR_CPU1_Offset                  0x4004
#define ICCBPR_CPU1_Offset                  0x4008
#define ICCIAR_CPU1_Offset                  0x400C
#define ICCEOIR_CPU1_Offset                 0x4010
#define ICCRPR_CPU1_Offset                  0x4014
#define ICCHPIR_CPU1_Offset                 0x4018
#define ICCABPR_CPU1_Offset                 0x401C
#define INTEG_EN_C_CPU1_Offset              0x4040
#define INTERRUPT_OUT_CPU1_Offset           0x4044
#define ICCICR_CPU2_Offset                  0x8000
#define ICCPMR_CPU2_Offset                  0x8004
#define ICCBPR_CPU2_Offset                  0x8008
#define ICCIAR_CPU2_Offset                  0x800C
#define ICCEOIR_CPU2_Offset                 0x8010
#define ICCRPR_CPU2_Offset                  0x8014
#define ICCHPIR_CPU2_Offset                 0x8018
#define ICCABPR_CPU2_Offset                 0x801C
#define INTEG_EN_C_CPU2_Offset              0x8040
#define INTERRUPT_OUT_CPU2_Offset           0x8044
#define ICCICR_CPU3_Offset                  0xC000
#define ICCPMR_CPU3_Offset                  0xC004
#define ICCBPR_CPU3_Offset                  0xC008
#define ICCIAR_CPU3_Offset                  0xC00C
#define ICCEOIR_CPU3_Offset                 0xC010
#define ICCRPR_CPU3_Offset                  0xC014
#define ICCHPIR_CPU3_Offset                 0xC018
#define ICCABPR_CPU3_Offset                 0xC01C
#define INTEG_EN_C_CPU3_Offset              0xC040
#define INTERRUPT_OUT_CPU3_Offset           0xC044

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define ICCICR_CPU0_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCICR_CPU0_Offset)
#define ICCPMR_CPU0_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCPMR_CPU0_Offset)
#define ICCBPR_CPU0_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCBPR_CPU0_Offset)
#define ICCIAR_CPU0_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCIAR_CPU0_Offset)
#define ICCEOIR_CPU0_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCEOIR_CPU0_Offset)
#define ICCRPR_CPU0_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCRPR_CPU0_Offset)
#define ICCHPIR_CPU0_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCHPIR_CPU0_Offset)
#define ICCABPR_CPU0_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCABPR_CPU0_Offset)
#define INTEG_EN_C_CPU0_ADDR                (INTERRUPT_CONTROLLER_BASE_ADDR_1 + INTEG_EN_C_CPU0_Offset)
#define INTERRUPT_OUT_CPU0_ADDR             (INTERRUPT_CONTROLLER_BASE_ADDR_1 + INTERRUPT_OUT_CPU0_Offset)
#define ICCIIDR_ADDR                        (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCIIDR_Offset)
#define ICCICR_CPU1_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCICR_CPU1_Offset)
#define ICCPMR_CPU1_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCPMR_CPU1_Offset)
#define ICCBPR_CPU1_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCBPR_CPU1_Offset)
#define ICCIAR_CPU1_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCIAR_CPU1_Offset)
#define ICCEOIR_CPU1_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCEOIR_CPU1_Offset)
#define ICCRPR_CPU1_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCRPR_CPU1_Offset)
#define ICCHPIR_CPU1_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCHPIR_CPU1_Offset)
#define ICCABPR_CPU1_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCABPR_CPU1_Offset)
#define INTEG_EN_C_CPU1_ADDR                (INTERRUPT_CONTROLLER_BASE_ADDR_1 + INTEG_EN_C_CPU1_Offset)
#define INTERRUPT_OUT_CPU1_ADDR             (INTERRUPT_CONTROLLER_BASE_ADDR_1 + INTERRUPT_OUT_CPU1_Offset)
#define ICCICR_CPU2_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCICR_CPU2_Offset)
#define ICCPMR_CPU2_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCPMR_CPU2_Offset)
#define ICCBPR_CPU2_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCBPR_CPU2_Offset)
#define ICCIAR_CPU2_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCIAR_CPU2_Offset)
#define ICCEOIR_CPU2_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCEOIR_CPU2_Offset)
#define ICCRPR_CPU2_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCRPR_CPU2_Offset)
#define ICCHPIR_CPU2_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCHPIR_CPU2_Offset)
#define ICCABPR_CPU2_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCABPR_CPU2_Offset)
#define INTEG_EN_C_CPU2_ADDR                (INTERRUPT_CONTROLLER_BASE_ADDR_1 + INTEG_EN_C_CPU2_Offset)
#define INTERRUPT_OUT_CPU2_ADDR             (INTERRUPT_CONTROLLER_BASE_ADDR_1 + INTERRUPT_OUT_CPU2_Offset)
#define ICCICR_CPU3_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCICR_CPU3_Offset)
#define ICCPMR_CPU3_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCPMR_CPU3_Offset)
#define ICCBPR_CPU3_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCBPR_CPU3_Offset)
#define ICCIAR_CPU3_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCIAR_CPU3_Offset)
#define ICCEOIR_CPU3_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCEOIR_CPU3_Offset)
#define ICCRPR_CPU3_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCRPR_CPU3_Offset)
#define ICCHPIR_CPU3_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCHPIR_CPU3_Offset)
#define ICCABPR_CPU3_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_1 + ICCABPR_CPU3_Offset)
#define INTEG_EN_C_CPU3_ADDR                (INTERRUPT_CONTROLLER_BASE_ADDR_1 + INTEG_EN_C_CPU3_Offset)
#define INTERRUPT_OUT_CPU3_ADDR             (INTERRUPT_CONTROLLER_BASE_ADDR_1 + INTERRUPT_OUT_CPU3_Offset)

#pragma endregion

#pragma region INTERRUPT CONTROLLER BASE ADDR 2    

//////////////////////////////////////////////////////
//                  Offset Part                     //
//////////////////////////////////////////////////////
#define ICDDCR_Offset                   0x0000
#define ICDICTR_Offset                  0x0004
#define ICDIIDR_Offset                  0x0008
#define ICDISR0_CPU0_Offset             0x0080
#define ICDISR1_Offset                  0x0084
#define ICDISR2_Offset                  0x0088
#define ICDISR3_Offset                  0x008C
#define ICDISR4_Offset                  0x0090
#define ICDISER0_CPU0_Offset            0x0100
#define ICDISER1_Offset                 0x0104
#define ICDISER2_Offset                 0x0108
#define ICDISER3_Offset                 0x010C
#define ICDISER4_Offset                 0x0110
#define ICDICER0_CPU0_Offset            0x0180
#define ICDICER1_Offset                 0x0184
#define ICDICER2_Offset                 0x0188
#define ICDICER3_Offset                 0x018C
#define ICDICER4_Offset                 0x0190
#define ICDISPR0_CPU0_Offset            0x0200
#define ICDISPR1_Offset                 0x0204
#define ICDISPR2_Offset                 0x0208
#define ICDISPR3_Offset                 0x020C
#define ICDISPR4_Offset                 0x0210
#define ICDICPR0_CPU0_Offset            0x0280
#define ICDICPR1_Offset                 0x0284
#define ICDICPR2_Offset                 0x0288
#define ICDICPR3_Offset                 0x028C
#define ICDICPR4_Offset                 0x0290
#define ICDABR0_CPU0_Offset             0x0300
#define ICDABR1_Offset                  0x0304
#define ICDABR2_Offset                  0x0308
#define ICDABR3_Offset                  0x030C
#define ICDABR4_Offset                  0x0310
#define ICDIPR0_CPU0_Offset             0x0400
#define ICDIPR1_CPU0_Offset             0x0404
#define ICDIPR2_CPU0_Offset             0x0408
#define ICDIPR3_CPU0_Offset             0x040C
#define ICDIPR4_CPU0_Offset             0x0410
#define ICDIPR5_CPU0_Offset             0x0414
#define ICDIPR6_CPU0_Offset             0x0418
#define ICDIPR7_CPU0_Offset             0x041C
#define ICDIPR8_Offset                  0x0420
#define ICDIPR9_Offset                  0x0424
#define ICDIPR10_Offset                 0x0428
#define ICDIPR11_Offset                 0x042C
#define ICDIPR12_Offset                 0x0430
#define ICDIPR13_Offset                 0x0434
#define ICDIPR14_Offset                 0x0438
#define ICDIPR15_Offset                 0x043C
#define ICDIPR16_Offset                 0x0440
#define ICDIPR17_Offset                 0x0444
#define ICDIPR18_Offset                 0x0448
#define ICDIPR19_Offset                 0x044C
#define ICDIPR20_Offset                 0x0450
#define ICDIPR21_Offset                 0x0454
#define ICDIPR22_Offset                 0x0458
#define ICDIPR23_Offset                 0x045C
#define ICDIPR24_Offset                 0x0460
#define ICDIPR25_Offset                 0x0464
#define ICDIPR26_Offset                 0x0468
#define ICDIPR27_Offset                 0x046C
#define ICDIPR28_Offset                 0x0470
#define ICDIPR29_Offset                 0x0474
#define ICDIPR30_Offset                 0x0478
#define ICDIPR31_Offset                 0x047C
#define ICDIPR32_Offset                 0x0480
#define ICDIPR33_Offset                 0x0484
#define ICDIPR34_Offset                 0x0488
#define ICDIPR35_Offset                 0x048C
#define ICDIPR36_Offset                 0x0490
#define ICDIPR37_Offset                 0x0494
#define ICDIPR38_Offset                 0x0498
#define ICDIPR39_Offset                 0x049C
#define ICDIPTR0_CPU0_Offset            0x0800
#define ICDIPTR1_CPU0_Offset            0x0804
#define ICDIPTR2_CPU0_Offset            0x0808
#define ICDIPTR3_CPU0_Offset            0x080C
#define ICDIPTR4_CPU0_Offset            0x0810
#define ICDIPTR5_CPU0_Offset            0x0814
#define ICDIPTR6_CPU0_Offset            0x0818
#define ICDIPTR7_CPU0_Offset            0x081C
#define ICDIPTR8_Offset                 0x0820
#define ICDIPTR9_Offset                 0x0824
#define ICDIPTR10_Offset                0x0828
#define ICDIPTR11_Offset                0x082C
#define ICDIPTR12_Offset                0x0830
#define ICDIPTR13_Offset                0x0834
#define ICDIPTR14_Offset                0x0838
#define ICDIPTR15_Offset                0x083C
#define ICDIPTR16_Offset                0x0840
#define ICDIPTR17_Offset                0x0844
#define ICDIPTR18_Offset                0x0848
#define ICDIPTR19_Offset                0x084C
#define ICDIPTR20_Offset                0x0850
#define ICDIPTR21_Offset                0x0854
#define ICDIPTR22_Offset                0x0858
#define ICDIPTR23_Offset                0x085C
#define ICDIPTR24_Offset                0x0860
#define ICDIPTR25_Offset                0x0864
#define ICDIPTR26_Offset                0x0868
#define ICDIPTR27_Offset                0x086C
#define ICDIPTR28_Offset                0x0870
#define ICDIPTR29_Offset                0x0874
#define ICDIPTR30_Offset                0x0878
#define ICDIPTR31_Offset                0x087C
#define ICDIPTR32_Offset                0x0880
#define ICDIPTR33_Offset                0x0884
#define ICDIPTR34_Offset                0x0888
#define ICDIPTR35_Offset                0x088C
#define ICDIPTR36_Offset                0x0890
#define ICDIPTR37_Offset                0x0894
#define ICDIPTR38_Offset                0x0898
#define ICDIPTR39_Offset                0x089C
#define ICDICFR0_CPU0_Offset            0x0C00
#define ICDICFR1_CPU0_Offset            0x0C04
#define ICDICFR2_Offset                 0x0C08
#define ICDICFR3_Offset                 0x0C0C
#define ICDICFR4_Offset                 0x0C10
#define ICDICFR5_Offset                 0x0C14
#define ICDICFR6_Offset                 0x0C18
#define ICDICFR7_Offset                 0x0C1C
#define ICDICFR8_Offset                 0x0C20
#define ICDICFR9_Offset                 0x0C24
#define PPI_STATUS_CPU0_Offset          0x0D00
#define SPI_STATUS0_Offset              0x0D04
#define SPI_STATUS1_Offset              0x0D08
#define SPI_STATUS2_Offset              0x0D0C
#define SPI_STATUS3_Offset              0x0D10
#define ICDSGIR_Offset                  0x0F00
#define ICDISR0_CPU1_Offset             0x4080
#define ICDISER0_CPU1_Offset            0x4100
#define ICDICER0_CPU1_Offset            0x4180
#define ICDISPR0_CPU1_Offset            0x4200
#define ICDICPR0_CPU1_Offset            0x4280
#define ICDABR0_CPU1_Offset             0x4300
#define ICDIPR0_CPU1_Offset             0x4400
#define ICDIPR1_CPU1_Offset             0x4404
#define ICDIPR2_CPU1_Offset             0x4408
#define ICDIPR3_CPU1_Offset             0x440C
#define ICDIPR4_CPU1_Offset             0x4410
#define ICDIPR5_CPU1_Offset             0x4414
#define ICDIPR6_CPU1_Offset             0x4418
#define ICDIPR7_CPU1_Offset             0x441C
#define ICDIPTR0_CPU1_Offset            0x4800
#define ICDIPTR1_CPU1_Offset            0x4804
#define ICDIPTR2_CPU1_Offset            0x4808
#define ICDIPTR3_CPU1_Offset            0x480C
#define ICDIPTR4_CPU1_Offset            0x4810
#define ICDIPTR5_CPU1_Offset            0x4814
#define ICDIPTR6_CPU1_Offset            0x4818
#define ICDIPTR7_CPU1_Offset            0x481C
#define ICDICFR0_CPU1_Offset            0x4C00
#define ICDICFR1_CPU1_Offset            0x4C04
#define PPI_STATUS_CPU1_Offset          0x4D00
#define ICDISR0_CPU2_Offset             0x8080
#define ICDISER0_CPU2_Offset            0x8100
#define ICDICER0_CPU2_Offset            0x8180
#define ICDISPR0_CPU2_Offset            0x8200
#define ICDICPR0_CPU2_Offset            0x8280
#define ICDABR0_CPU2_Offset             0x8300
#define ICDIPR0_CPU2_Offset             0x8400
#define ICDIPR1_CPU2_Offset             0x8404
#define ICDIPR2_CPU2_Offset             0x8408
#define ICDIPR3_CPU2_Offset             0x840C
#define ICDIPR4_CPU2_Offset             0x8410
#define ICDIPR5_CPU2_Offset             0x8414
#define ICDIPR6_CPU2_Offset             0x8418
#define ICDIPR7_CPU2_Offset             0x841C
#define ICDIPTR0_CPU2_Offset            0x8800
#define ICDIPTR1_CPU2_Offset            0x8804
#define ICDIPTR2_CPU2_Offset            0x8808
#define ICDIPTR3_CPU2_Offset            0x880C
#define ICDIPTR4_CPU2_Offset            0x8810
#define ICDIPTR5_CPU2_Offset            0x8814
#define ICDIPTR6_CPU2_Offset            0x8818
#define ICDIPTR7_CPU2_Offset            0x881C
#define ICDICFR0_CPU2_Offset            0x8C00
#define ICDICFR1_CPU2_Offset            0x8C04
#define PPI_STATUS_CPU2_Offset          0x8D00
#define ICDISR0_CPU3_Offset             0xC080
#define ICDISER0_CPU3_Offset            0xC100
#define ICDICER0_CPU3_Offset            0xC180
#define ICDISPR0_CPU3_Offset            0xC200
#define ICDICPR0_CPU3_Offset            0xC280
#define ICDABR0_CPU3_Offset             0xC300
#define ICDIPR0_CPU3_Offset             0xC400
#define ICDIPR1_CPU3_Offset             0xC404
#define ICDIPR2_CPU3_Offset             0xC408
#define ICDIPR3_CPU3_Offset             0xC40C
#define ICDIPR4_CPU3_Offset             0xC410
#define ICDIPR5_CPU3_Offset             0xC414
#define ICDIPR6_CPU3_Offset             0xC418
#define ICDIPR7_CPU3_Offset             0xC41C
#define ICDIPTR0_CPU3_Offset            0xC800
#define ICDIPTR1_CPU3_Offset            0xC804
#define ICDIPTR2_CPU3_Offset            0xC808
#define ICDIPTR3_CPU3_Offset            0xC80C
#define ICDIPTR4_CPU3_Offset            0xC810
#define ICDIPTR5_CPU3_Offset            0xC814
#define ICDIPTR6_CPU3_Offset            0xC818
#define ICDIPTR7_CPU3_Offset            0xC81C
#define ICDICFR0_CPU3_Offset            0xCC00
#define ICDICFR1_CPU3_Offset            0xCC04
#define PPI_STATUS_CPU3_Offset          0xCD00

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define ICDDCR_ADDR                     (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDDCR_Offset)
#define ICDICTR_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICTR_Offset)
#define ICDIIDR_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIIDR_Offset)
#define ICDISR0_CPU0_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISR0_CPU0_Offset)
#define ICDISR1_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISR1_Offset)
#define ICDISR2_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISR2_Offset)
#define ICDISR3_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISR3_Offset)
#define ICDISR4_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISR4_Offset)
#define ICDISER0_CPU0_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISER0_CPU0_Offset)
#define ICDISER1_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISER1_Offset)
#define ICDISER2_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISER2_Offset)
#define ICDISER3_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISER3_Offset)
#define ICDISER4_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISER4_Offset)
#define ICDICER0_CPU0_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICER0_CPU0_Offset)
#define ICDICER1_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICER1_Offset)
#define ICDICER2_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICER2_Offset)
#define ICDICER3_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICER3_Offset)
#define ICDICER4_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICER4_Offset)
#define ICDISPR0_CPU0_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISPR0_CPU0_Offset)
#define ICDISPR1_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISPR1_Offset)
#define ICDISPR2_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISPR2_Offset)
#define ICDISPR3_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISPR3_Offset)
#define ICDISPR4_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISPR4_Offset)
#define ICDICPR0_CPU0_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICPR0_CPU0_Offset)
#define ICDICPR1_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICPR1_Offset)
#define ICDICPR2_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICPR2_Offset)
#define ICDICPR3_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICPR3_Offset)
#define ICDICPR4_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICPR4_Offset)
#define ICDABR0_CPU0_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDABR0_CPU0_Offset)
#define ICDABR1_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDABR1_Offset)
#define ICDABR2_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDABR2_Offset)
#define ICDABR3_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDABR3_Offset)
#define ICDABR4_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDABR4_Offset)
#define ICDIPR0_CPU0_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR0_CPU0_Offset)
#define ICDIPR1_CPU0_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR1_CPU0_Offset)
#define ICDIPR2_CPU0_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR2_CPU0_Offset)
#define ICDIPR3_CPU0_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR3_CPU0_Offset)
#define ICDIPR4_CPU0_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR4_CPU0_Offset)
#define ICDIPR5_CPU0_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR5_CPU0_Offset)
#define ICDIPR6_CPU0_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR6_CPU0_Offset)
#define ICDIPR7_CPU0_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR7_CPU0_Offset)
#define ICDIPR8_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR8_Offset)        
#define ICDIPR9_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR9_Offset)        
#define ICDIPR10_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR10_Offset)       
#define ICDIPR11_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR11_Offset)       
#define ICDIPR12_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR12_Offset)       
#define ICDIPR13_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR13_Offset)       
#define ICDIPR14_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR14_Offset)       
#define ICDIPR15_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR15_Offset)       
#define ICDIPR16_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR16_Offset)       
#define ICDIPR17_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR17_Offset)       
#define ICDIPR18_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR18_Offset)       
#define ICDIPR19_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR19_Offset)       
#define ICDIPR20_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR20_Offset)       
#define ICDIPR21_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR21_Offset)       
#define ICDIPR22_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR22_Offset)       
#define ICDIPR23_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR23_Offset)       
#define ICDIPR24_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR24_Offset)       
#define ICDIPR25_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR25_Offset)       
#define ICDIPR26_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR26_Offset)       
#define ICDIPR27_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR27_Offset)       
#define ICDIPR28_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR28_Offset)       
#define ICDIPR29_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR29_Offset)       
#define ICDIPR30_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR30_Offset)       
#define ICDIPR31_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR31_Offset)       
#define ICDIPR32_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR32_Offset)       
#define ICDIPR33_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR33_Offset)       
#define ICDIPR34_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR34_Offset)       
#define ICDIPR35_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR35_Offset)       
#define ICDIPR36_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR36_Offset)       
#define ICDIPR37_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR37_Offset)       
#define ICDIPR38_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR38_Offset)       
#define ICDIPR39_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR39_Offset)       
#define ICDIPTR0_CPU0_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR0_CPU0_Offset)
#define ICDIPTR1_CPU0_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR1_CPU0_Offset)
#define ICDIPTR2_CPU0_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR2_CPU0_Offset)
#define ICDIPTR3_CPU0_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR3_CPU0_Offset)
#define ICDIPTR4_CPU0_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR4_CPU0_Offset)
#define ICDIPTR5_CPU0_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR5_CPU0_Offset)
#define ICDIPTR6_CPU0_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR6_CPU0_Offset)
#define ICDIPTR7_CPU0_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR7_CPU0_Offset)
#define ICDIPTR8_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR8_Offset)
#define ICDIPTR9_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR9_Offset)
#define ICDIPTR10_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR10_Offset)
#define ICDIPTR11_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR11_Offset)
#define ICDIPTR12_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR12_Offset)
#define ICDIPTR13_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR13_Offset)
#define ICDIPTR14_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR14_Offset)
#define ICDIPTR15_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR15_Offset)
#define ICDIPTR16_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR16_Offset)
#define ICDIPTR17_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR17_Offset)
#define ICDIPTR18_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR18_Offset)
#define ICDIPTR19_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR19_Offset)
#define ICDIPTR20_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR20_Offset)
#define ICDIPTR21_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR21_Offset)
#define ICDIPTR22_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR22_Offset)
#define ICDIPTR23_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR23_Offset)
#define ICDIPTR24_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR24_Offset)
#define ICDIPTR25_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR25_Offset)
#define ICDIPTR26_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR26_Offset)
#define ICDIPTR27_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR27_Offset)
#define ICDIPTR28_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR28_Offset)
#define ICDIPTR29_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR29_Offset)
#define ICDIPTR30_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR30_Offset)
#define ICDIPTR31_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR31_Offset)
#define ICDIPTR32_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR32_Offset)
#define ICDIPTR33_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR33_Offset)
#define ICDIPTR34_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR34_Offset)
#define ICDIPTR35_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR35_Offset)
#define ICDIPTR36_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR36_Offset)
#define ICDIPTR37_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR37_Offset)
#define ICDIPTR38_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR38_Offset)
#define ICDIPTR39_ADDR                  (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR39_Offset)
#define ICDICFR0_CPU0_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICFR0_CPU0_Offset)
#define ICDICFR1_CPU0_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICFR1_CPU0_Offset)
#define ICDICFR2_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICFR2_Offset)
#define ICDICFR3_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICFR3_Offset)
#define ICDICFR4_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICFR4_Offset)
#define ICDICFR5_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICFR5_Offset)
#define ICDICFR6_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICFR6_Offset)
#define ICDICFR7_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICFR7_Offset)
#define ICDICFR8_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICFR8_Offset)
#define ICDICFR9_ADDR                   (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICFR9_Offset)
#define PPI_STATUS_CPU0_ADDR            (INTERRUPT_CONTROLLER_BASE_ADDR_2 + PPI_STATUS_CPU0_Offset)
#define SPI_STATUS0_ADDR                (INTERRUPT_CONTROLLER_BASE_ADDR_2 + SPI_STATUS0_Offset)
#define SPI_STATUS1_ADDR                (INTERRUPT_CONTROLLER_BASE_ADDR_2 + SPI_STATUS1_Offset)
#define SPI_STATUS2_ADDR                (INTERRUPT_CONTROLLER_BASE_ADDR_2 + SPI_STATUS2_Offset)
#define SPI_STATUS3_ADDR                (INTERRUPT_CONTROLLER_BASE_ADDR_2 + SPI_STATUS3_Offset)
#define ICDSGIR_ADDR                    (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDSGIR_Offset)
#define ICDISR0_CPU1_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISR0_CPU1_Offset)
#define ICDISER0_CPU1_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISER0_CPU1_Offset)
#define ICDICER0_CPU1_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICER0_CPU1_Offset)
#define ICDISPR0_CPU1_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISPR0_CPU1_Offset)
#define ICDICPR0_CPU1_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICPR0_CPU1_Offset)
#define ICDABR0_CPU1_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDABR0_CPU1_Offset)
#define ICDIPR0_CPU1_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR0_CPU1_Offset)
#define ICDIPR1_CPU1_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR1_CPU1_Offset)
#define ICDIPR2_CPU1_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR2_CPU1_Offset)
#define ICDIPR3_CPU1_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR3_CPU1_Offset)
#define ICDIPR4_CPU1_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR4_CPU1_Offset)
#define ICDIPR5_CPU1_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR5_CPU1_Offset)
#define ICDIPR6_CPU1_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR6_CPU1_Offset)
#define ICDIPR7_CPU1_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR7_CPU1_Offset)
#define ICDIPTR0_CPU1_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR0_CPU1_Offset)
#define ICDIPTR1_CPU1_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR1_CPU1_Offset)
#define ICDIPTR2_CPU1_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR2_CPU1_Offset)
#define ICDIPTR3_CPU1_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR3_CPU1_Offset)
#define ICDIPTR4_CPU1_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR4_CPU1_Offset)
#define ICDIPTR5_CPU1_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR5_CPU1_Offset)
#define ICDIPTR6_CPU1_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR6_CPU1_Offset)
#define ICDIPTR7_CPU1_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR7_CPU1_Offset)
#define ICDICFR0_CPU1_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICFR0_CPU1_Offset)
#define ICDICFR1_CPU1_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICFR1_CPU1_Offset)
#define PPI_STATUS_CPU1_ADDR            (INTERRUPT_CONTROLLER_BASE_ADDR_2 + PPI_STATUS_CPU1_Offset)
#define ICDISR0_CPU2_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISR0_CPU2_Offset)
#define ICDISER0_CPU2_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISER0_CPU2_Offset)
#define ICDICER0_CPU2_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICER0_CPU2_Offset)
#define ICDISPR0_CPU2_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISPR0_CPU2_Offset)
#define ICDICPR0_CPU2_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICPR0_CPU2_Offset)
#define ICDABR0_CPU2_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDABR0_CPU2_Offset)
#define ICDIPR0_CPU2_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR0_CPU2_Offset)
#define ICDIPR1_CPU2_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR1_CPU2_Offset)
#define ICDIPR2_CPU2_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR2_CPU2_Offset)
#define ICDIPR3_CPU2_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR3_CPU2_Offset)
#define ICDIPR4_CPU2_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR4_CPU2_Offset)
#define ICDIPR5_CPU2_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR5_CPU2_Offset)
#define ICDIPR6_CPU2_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR6_CPU2_Offset)
#define ICDIPR7_CPU2_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR7_CPU2_Offset)
#define ICDIPTR0_CPU2_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR0_CPU2_Offset)
#define ICDIPTR1_CPU2_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR1_CPU2_Offset)
#define ICDIPTR2_CPU2_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR2_CPU2_Offset)
#define ICDIPTR3_CPU2_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR3_CPU2_Offset)
#define ICDIPTR4_CPU2_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR4_CPU2_Offset)
#define ICDIPTR5_CPU2_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR5_CPU2_Offset)
#define ICDIPTR6_CPU2_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR6_CPU2_Offset)
#define ICDIPTR7_CPU2_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR7_CPU2_Offset)
#define ICDICFR0_CPU2_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICFR0_CPU2_Offset)
#define ICDICFR1_CPU2_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICFR1_CPU2_Offset)
#define PPI_STATUS_CPU2_ADDR            (INTERRUPT_CONTROLLER_BASE_ADDR_2 + PPI_STATUS_CPU2_Offset)
#define ICDISR0_CPU3_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISR0_CPU3_Offset)
#define ICDISER0_CPU3_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISER0_CPU3_Offset)
#define ICDICER0_CPU3_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICER0_CPU3_Offset)
#define ICDISPR0_CPU3_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDISPR0_CPU3_Offset)
#define ICDICPR0_CPU3_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICPR0_CPU3_Offset)
#define ICDABR0_CPU3_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDABR0_CPU3_Offset)
#define ICDIPR0_CPU3_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR0_CPU3_Offset)
#define ICDIPR1_CPU3_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR1_CPU3_Offset)
#define ICDIPR2_CPU3_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR2_CPU3_Offset)
#define ICDIPR3_CPU3_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR3_CPU3_Offset)
#define ICDIPR4_CPU3_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR4_CPU3_Offset)
#define ICDIPR5_CPU3_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR5_CPU3_Offset)
#define ICDIPR6_CPU3_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR6_CPU3_Offset)
#define ICDIPR7_CPU3_ADDR               (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPR7_CPU3_Offset)
#define ICDIPTR0_CPU3_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR0_CPU3_Offset)
#define ICDIPTR1_CPU3_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR1_CPU3_Offset)
#define ICDIPTR2_CPU3_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR2_CPU3_Offset)
#define ICDIPTR3_CPU3_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR3_CPU3_Offset)
#define ICDIPTR4_CPU3_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR4_CPU3_Offset)
#define ICDIPTR5_CPU3_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR5_CPU3_Offset)
#define ICDIPTR6_CPU3_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR6_CPU3_Offset)
#define ICDIPTR7_CPU3_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDIPTR7_CPU3_Offset)
#define ICDICFR0_CPU3_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICFR0_CPU3_Offset)
#define ICDICFR1_CPU3_ADDR              (INTERRUPT_CONTROLLER_BASE_ADDR_2 + ICDICFR1_CPU3_Offset)
#define PPI_STATUS_CPU3_ADDR            (INTERRUPT_CONTROLLER_BASE_ADDR_2 + PPI_STATUS_CPU3_Offset)

#pragma endregion

#endif