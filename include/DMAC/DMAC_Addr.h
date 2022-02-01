#ifndef __DMAC_DMAC_ADDR_H__     
#define __DMAC_DMAC_ADDR_H__       

#define DMAC_BASE_ADDR_1 0x12840000 // MDMA
#define DMAC_BASE_ADDR_2 0x12680000 // PDMA0
#define DMAC_BASE_ADDR_3 0x12690000 // PDMA1

#pragma region DMAC BASE ADDR 1    

//////////////////////////////////////////////////////
//                  Offset Part                     //
//////////////////////////////////////////////////////
#define DS_Offset                   0x0000
#define DPC_Offset                  0x0004
#define INTEN_Offset                0x0020
#define ES_Offset                   0x0024
#define INTSTATUS_Offset            0x0028
#define INTCLR_Offset               0x002C
#define FSM_Offset                  0x0030
#define FSC_Offset                  0x0034
#define FTM_Offset                  0x0038

#define FTC0_Offset                 0x0040
#define FTC1_Offset                 0x0044
#define FTC2_Offset                 0x0048
#define FTC3_Offset                 0x004C
#define FTC4_Offset                 0x0050
#define FTC5_Offset                 0x0054
#define FTC6_Offset                 0x0058
#define FTC7_Offset                 0x005C

#define CS0_Offset                  0x0100
#define CS1_Offset                  0x0108
#define CS2_Offset                  0x0110
#define CS3_Offset                  0x0118
#define CS4_Offset                  0x0120
#define CS5_Offset                  0x0128
#define CS6_Offset                  0x0130
#define CS7_Offset                  0x0138

#define CPCO_Offset                 0x0104
#define CPC1_Offset                 0x010C
#define CPC2_Offset                 0x0114
#define CPC3_Offset                 0x011C
#define CPC4_Offset                 0x0124
#define CPC5_Offset                 0x012C
#define CPC6_Offset                 0x0134
#define CPC7_Offset                 0x013C

#define SA_0_Offset                 0x0400
#define SA_1_Offset                 0x0420
#define SA_2_Offset                 0x0440
#define SA_3_Offset                 0x0460
#define SA_4_Offset                 0x0480
#define SA_5_Offset                 0x04A0
#define SA_6_Offset                 0x04C0
#define SA_7_Offset                 0x04E0

#define DA_0_Offset                 0x0404
#define DA_1_Offset                 0x0424
#define DA_2_Offset                 0x0444
#define DA_3_Offset                 0x0464
#define DA_4_Offset                 0x0484
#define DA_5_Offset                 0x04A4
#define DA_6_Offset                 0x04C4
#define DA_7_Offset                 0x04E4

#define CC_0_Offset                 0x0408
#define CC_1_Offset                 0x0428
#define CC_2_Offset                 0x0448
#define CC_3_Offset                 0x0468
#define CC_4_Offset                 0x0488
#define CC_5_Offset                 0x04A8
#define CC_6_Offset                 0x04C8
#define CC_7_Offset                 0x04E8

#define LC0_0_Offset                0x040C
#define LC0_1_Offset                0x042C
#define LC0_2_Offset                0x044C
#define LC0_3_Offset                0x046C
#define LC0_4_Offset                0x048C
#define LC0_5_Offset                0x04AC
#define LC0_6_Offset                0x04CC
#define LC0_7_Offset                0x04EC

#define LC1_0_Offset                0x0410
#define LC1_1_Offset                0x0430
#define LC1_2_Offset                0x0450
#define LC1_3_Offset                0x0470
#define LC1_4_Offset                0x0490
#define LC1_5_Offset                0x04B0
#define LC1_6_Offset                0x04D0
#define LC1_7_Offset                0x04F0

#define DBGSTATUS_Offset            0x0D00
#define DBGCMD_Offset               0x0D04
#define DBGINST0_Offset             0x0D08
#define DBGINST1_Offset             0x0D0C

#define CR0_Offset                  0x0E00
#define CR1_Offset                  0x0E04
#define CR2_Offset                  0x0E08
#define CR3_Offset                  0x0E0C
#define CR4_Offset                  0x0E10
#define CRDn_Offset                 0x0E14
#define periph_id_0_Offset          0x0FE0
#define periph_id_1_Offset          0x0FE4
#define periph_id_2_Offset          0x0FE8
#define periph_id_3_Offset          0x0FEC
#define pcell_id_0_Offset           0x0FF0
#define pcell_id_1_Offset           0x0FF4
#define pcell_id_2_Offset           0x0FF8
#define pcell_id_3_Offset           0x0FFC

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define MDMA_DS_ADDR                   (DMAC_BASE_ADDR_1 + DS_Offset)         
#define MDMA_DPC_ADDR                  (DMAC_BASE_ADDR_1 + DPC_Offset)        
#define MDMA_INTEN_ADDR                (DMAC_BASE_ADDR_1 + INTEN_Offset)      
#define MDMA_ES_ADDR                   (DMAC_BASE_ADDR_1 + ES_Offset)         
#define MDMA_INTSTATUS_ADDR            (DMAC_BASE_ADDR_1 + INTSTATUS_Offset)  
#define MDMA_INTCLR_ADDR               (DMAC_BASE_ADDR_1 + INTCLR_Offset)     
#define MDMA_FSM_ADDR                  (DMAC_BASE_ADDR_1 + FSM_Offset)        
#define MDMA_FSC_ADDR                  (DMAC_BASE_ADDR_1 + FSC_Offset)        
#define MDMA_FTM_ADDR                  (DMAC_BASE_ADDR_1 + FTM_Offset)        

#define MDMA_FTC0_ADDR                 (DMAC_BASE_ADDR_1 + FTC0_Offset)       
#define MDMA_FTC1_ADDR                 (DMAC_BASE_ADDR_1 + FTC1_Offset)       
#define MDMA_FTC2_ADDR                 (DMAC_BASE_ADDR_1 + FTC2_Offset)       
#define MDMA_FTC3_ADDR                 (DMAC_BASE_ADDR_1 + FTC3_Offset)       
#define MDMA_FTC4_ADDR                 (DMAC_BASE_ADDR_1 + FTC4_Offset)       
#define MDMA_FTC5_ADDR                 (DMAC_BASE_ADDR_1 + FTC5_Offset)       
#define MDMA_FTC6_ADDR                 (DMAC_BASE_ADDR_1 + FTC6_Offset)       
#define MDMA_FTC7_ADDR                 (DMAC_BASE_ADDR_1 + FTC7_Offset)       

#define MDMA_CS0_ADDR                  (DMAC_BASE_ADDR_1 + CS0_Offset)        
#define MDMA_CS1_ADDR                  (DMAC_BASE_ADDR_1 + CS1_Offset)        
#define MDMA_CS2_ADDR                  (DMAC_BASE_ADDR_1 + CS2_Offset)        
#define MDMA_CS3_ADDR                  (DMAC_BASE_ADDR_1 + CS3_Offset)        
#define MDMA_CS4_ADDR                  (DMAC_BASE_ADDR_1 + CS4_Offset)        
#define MDMA_CS5_ADDR                  (DMAC_BASE_ADDR_1 + CS5_Offset)        
#define MDMA_CS6_ADDR                  (DMAC_BASE_ADDR_1 + CS6_Offset)        
#define MDMA_CS7_ADDR                  (DMAC_BASE_ADDR_1 + CS7_Offset)        

#define MDMA_CPCO_ADDR                 (DMAC_BASE_ADDR_1 + CPCO_Offset)       
#define MDMA_CPC1_ADDR                 (DMAC_BASE_ADDR_1 + CPC1_Offset)       
#define MDMA_CPC2_ADDR                 (DMAC_BASE_ADDR_1 + CPC2_Offset)       
#define MDMA_CPC3_ADDR                 (DMAC_BASE_ADDR_1 + CPC3_Offset)       
#define MDMA_CPC4_ADDR                 (DMAC_BASE_ADDR_1 + CPC4_Offset)       
#define MDMA_CPC5_ADDR                 (DMAC_BASE_ADDR_1 + CPC5_Offset)       
#define MDMA_CPC6_ADDR                 (DMAC_BASE_ADDR_1 + CPC6_Offset)       
#define MDMA_CPC7_ADDR                 (DMAC_BASE_ADDR_1 + CPC7_Offset)       

#define MDMA_SA_0_ADDR                 (DMAC_BASE_ADDR_1 + SA_0_Offset)       
#define MDMA_SA_1_ADDR                 (DMAC_BASE_ADDR_1 + SA_1_Offset)       
#define MDMA_SA_2_ADDR                 (DMAC_BASE_ADDR_1 + SA_2_Offset)       
#define MDMA_SA_3_ADDR                 (DMAC_BASE_ADDR_1 + SA_3_Offset)       
#define MDMA_SA_4_ADDR                 (DMAC_BASE_ADDR_1 + SA_4_Offset)       
#define MDMA_SA_5_ADDR                 (DMAC_BASE_ADDR_1 + SA_5_Offset)       
#define MDMA_SA_6_ADDR                 (DMAC_BASE_ADDR_1 + SA_6_Offset)       
#define MDMA_SA_7_ADDR                 (DMAC_BASE_ADDR_1 + SA_7_Offset)       

#define MDMA_DA_0_ADDR                 (DMAC_BASE_ADDR_1 + DA_0_Offset)       
#define MDMA_DA_1_ADDR                 (DMAC_BASE_ADDR_1 + DA_1_Offset)       
#define MDMA_DA_2_ADDR                 (DMAC_BASE_ADDR_1 + DA_2_Offset)       
#define MDMA_DA_3_ADDR                 (DMAC_BASE_ADDR_1 + DA_3_Offset)       
#define MDMA_DA_4_ADDR                 (DMAC_BASE_ADDR_1 + DA_4_Offset)       
#define MDMA_DA_5_ADDR                 (DMAC_BASE_ADDR_1 + DA_5_Offset)       
#define MDMA_DA_6_ADDR                 (DMAC_BASE_ADDR_1 + DA_6_Offset)       
#define MDMA_DA_7_ADDR                 (DMAC_BASE_ADDR_1 + DA_7_Offset)       

#define MDMA_CC_0_ADDR                 (DMAC_BASE_ADDR_1 + CC_0_Offset)       
#define MDMA_CC_1_ADDR                 (DMAC_BASE_ADDR_1 + CC_1_Offset)       
#define MDMA_CC_2_ADDR                 (DMAC_BASE_ADDR_1 + CC_2_Offset)       
#define MDMA_CC_3_ADDR                 (DMAC_BASE_ADDR_1 + CC_3_Offset)       
#define MDMA_CC_4_ADDR                 (DMAC_BASE_ADDR_1 + CC_4_Offset)       
#define MDMA_CC_5_ADDR                 (DMAC_BASE_ADDR_1 + CC_5_Offset)       
#define MDMA_CC_6_ADDR                 (DMAC_BASE_ADDR_1 + CC_6_Offset)       
#define MDMA_CC_7_ADDR                 (DMAC_BASE_ADDR_1 + CC_7_Offset)       

#define MDMA_LC0_0_ADDR                (DMAC_BASE_ADDR_1 + LC0_0_Offset)      
#define MDMA_LC0_1_ADDR                (DMAC_BASE_ADDR_1 + LC0_1_Offset)      
#define MDMA_LC0_2_ADDR                (DMAC_BASE_ADDR_1 + LC0_2_Offset)      
#define MDMA_LC0_3_ADDR                (DMAC_BASE_ADDR_1 + LC0_3_Offset)      
#define MDMA_LC0_4_ADDR                (DMAC_BASE_ADDR_1 + LC0_4_Offset)      
#define MDMA_LC0_5_ADDR                (DMAC_BASE_ADDR_1 + LC0_5_Offset)      
#define MDMA_LC0_6_ADDR                (DMAC_BASE_ADDR_1 + LC0_6_Offset)      
#define MDMA_LC0_7_ADDR                (DMAC_BASE_ADDR_1 + LC0_7_Offset)      

#define MDMA_LC1_0_ADDR                (DMAC_BASE_ADDR_1 + LC1_0_Offset)      
#define MDMA_LC1_1_ADDR                (DMAC_BASE_ADDR_1 + LC1_1_Offset)      
#define MDMA_LC1_2_ADDR                (DMAC_BASE_ADDR_1 + LC1_2_Offset)      
#define MDMA_LC1_3_ADDR                (DMAC_BASE_ADDR_1 + LC1_3_Offset)      
#define MDMA_LC1_4_ADDR                (DMAC_BASE_ADDR_1 + LC1_4_Offset)      
#define MDMA_LC1_5_ADDR                (DMAC_BASE_ADDR_1 + LC1_5_Offset)      
#define MDMA_LC1_6_ADDR                (DMAC_BASE_ADDR_1 + LC1_6_Offset)      
#define MDMA_LC1_7_ADDR                (DMAC_BASE_ADDR_1 + LC1_7_Offset)      

#define MDMA_DBGSTATUS_ADDR            (DMAC_BASE_ADDR_1 + DBGSTATUS_Offset)         
#define MDMA_DBGCMD_ADDR               (DMAC_BASE_ADDR_1 + DBGCMD_Offset)            
#define MDMA_DBGINST0_ADDR             (DMAC_BASE_ADDR_1 + DBGINST0_Offset)          
#define MDMA_DBGINST1_ADDR             (DMAC_BASE_ADDR_1 + DBGINST1_Offset)          

#define MDMA_CR0_ADDR                  (DMAC_BASE_ADDR_1 + CR0_Offset)        
#define MDMA_CR1_ADDR                  (DMAC_BASE_ADDR_1 + CR1_Offset)        
#define MDMA_CR2_ADDR                  (DMAC_BASE_ADDR_1 + CR2_Offset)        
#define MDMA_CR3_ADDR                  (DMAC_BASE_ADDR_1 + CR3_Offset)        
#define MDMA_CR4_ADDR                  (DMAC_BASE_ADDR_1 + CR4_Offset)        
#define MDMA_CRDn_ADDR                 (DMAC_BASE_ADDR_1 + CRDn_Offset)       
#define MDMA_periph_id_0_ADDR          (DMAC_BASE_ADDR_1 + periph_id_0_Offset)
#define MDMA_periph_id_1_ADDR          (DMAC_BASE_ADDR_1 + periph_id_1_Offset)
#define MDMA_periph_id_2_ADDR          (DMAC_BASE_ADDR_1 + periph_id_2_Offset)
#define MDMA_periph_id_3_ADDR          (DMAC_BASE_ADDR_1 + periph_id_3_Offset)
#define MDMA_pcell_id_0_ADDR           (DMAC_BASE_ADDR_1 + pcell_id_0_Offset) 
#define MDMA_pcell_id_1_ADDR           (DMAC_BASE_ADDR_1 + pcell_id_1_Offset) 
#define MDMA_pcell_id_2_ADDR           (DMAC_BASE_ADDR_1 + pcell_id_2_Offset) 
#define MDMA_pcell_id_3_ADDR           (DMAC_BASE_ADDR_1 + pcell_id_3_Offset) 

#pragma endregion

#pragma region DMAC BASE ADDR 2   

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define PDMA0_DS_ADDR                   (DMAC_BASE_ADDR_2 + DS_Offset)         
#define PDMA0_DPC_ADDR                  (DMAC_BASE_ADDR_2 + DPC_Offset)        
#define PDMA0_INTEN_ADDR                (DMAC_BASE_ADDR_2 + INTEN_Offset)      
#define PDMA0_ES_ADDR                   (DMAC_BASE_ADDR_2 + ES_Offset)         
#define PDMA0_INTSTATUS_ADDR            (DMAC_BASE_ADDR_2 + INTSTATUS_Offset)  
#define PDMA0_INTCLR_ADDR               (DMAC_BASE_ADDR_2 + INTCLR_Offset)     
#define PDMA0_FSM_ADDR                  (DMAC_BASE_ADDR_2 + FSM_Offset)        
#define PDMA0_FSC_ADDR                  (DMAC_BASE_ADDR_2 + FSC_Offset)        
#define PDMA0_FTM_ADDR                  (DMAC_BASE_ADDR_2 + FTM_Offset)        

#define PDMA0_FTC0_ADDR                 (DMAC_BASE_ADDR_2 + FTC0_Offset)       
#define PDMA0_FTC1_ADDR                 (DMAC_BASE_ADDR_2 + FTC1_Offset)       
#define PDMA0_FTC2_ADDR                 (DMAC_BASE_ADDR_2 + FTC2_Offset)       
#define PDMA0_FTC3_ADDR                 (DMAC_BASE_ADDR_2 + FTC3_Offset)       
#define PDMA0_FTC4_ADDR                 (DMAC_BASE_ADDR_2 + FTC4_Offset)       
#define PDMA0_FTC5_ADDR                 (DMAC_BASE_ADDR_2 + FTC5_Offset)       
#define PDMA0_FTC6_ADDR                 (DMAC_BASE_ADDR_2 + FTC6_Offset)       
#define PDMA0_FTC7_ADDR                 (DMAC_BASE_ADDR_2 + FTC7_Offset)       

#define PDMA0_CS0_ADDR                  (DMAC_BASE_ADDR_2 + CS0_Offset)        
#define PDMA0_CS1_ADDR                  (DMAC_BASE_ADDR_2 + CS1_Offset)        
#define PDMA0_CS2_ADDR                  (DMAC_BASE_ADDR_2 + CS2_Offset)        
#define PDMA0_CS3_ADDR                  (DMAC_BASE_ADDR_2 + CS3_Offset)        
#define PDMA0_CS4_ADDR                  (DMAC_BASE_ADDR_2 + CS4_Offset)        
#define PDMA0_CS5_ADDR                  (DMAC_BASE_ADDR_2 + CS5_Offset)        
#define PDMA0_CS6_ADDR                  (DMAC_BASE_ADDR_2 + CS6_Offset)        
#define PDMA0_CS7_ADDR                  (DMAC_BASE_ADDR_2 + CS7_Offset)        

#define PDMA0_CPCO_ADDR                 (DMAC_BASE_ADDR_2 + CPCO_Offset)       
#define PDMA0_CPC1_ADDR                 (DMAC_BASE_ADDR_2 + CPC1_Offset)       
#define PDMA0_CPC2_ADDR                 (DMAC_BASE_ADDR_2 + CPC2_Offset)       
#define PDMA0_CPC3_ADDR                 (DMAC_BASE_ADDR_2 + CPC3_Offset)       
#define PDMA0_CPC4_ADDR                 (DMAC_BASE_ADDR_2 + CPC4_Offset)       
#define PDMA0_CPC5_ADDR                 (DMAC_BASE_ADDR_2 + CPC5_Offset)       
#define PDMA0_CPC6_ADDR                 (DMAC_BASE_ADDR_2 + CPC6_Offset)       
#define PDMA0_CPC7_ADDR                 (DMAC_BASE_ADDR_2 + CPC7_Offset)       

#define PDMA0_SA_0_ADDR                 (DMAC_BASE_ADDR_2 + SA_0_Offset)       
#define PDMA0_SA_1_ADDR                 (DMAC_BASE_ADDR_2 + SA_1_Offset)       
#define PDMA0_SA_2_ADDR                 (DMAC_BASE_ADDR_2 + SA_2_Offset)       
#define PDMA0_SA_3_ADDR                 (DMAC_BASE_ADDR_2 + SA_3_Offset)       
#define PDMA0_SA_4_ADDR                 (DMAC_BASE_ADDR_2 + SA_4_Offset)       
#define PDMA0_SA_5_ADDR                 (DMAC_BASE_ADDR_2 + SA_5_Offset)       
#define PDMA0_SA_6_ADDR                 (DMAC_BASE_ADDR_2 + SA_6_Offset)       
#define PDMA0_SA_7_ADDR                 (DMAC_BASE_ADDR_2 + SA_7_Offset)       

#define PDMA0_DA_0_ADDR                 (DMAC_BASE_ADDR_2 + DA_0_Offset)       
#define PDMA0_DA_1_ADDR                 (DMAC_BASE_ADDR_2 + DA_1_Offset)       
#define PDMA0_DA_2_ADDR                 (DMAC_BASE_ADDR_2 + DA_2_Offset)       
#define PDMA0_DA_3_ADDR                 (DMAC_BASE_ADDR_2 + DA_3_Offset)       
#define PDMA0_DA_4_ADDR                 (DMAC_BASE_ADDR_2 + DA_4_Offset)       
#define PDMA0_DA_5_ADDR                 (DMAC_BASE_ADDR_2 + DA_5_Offset)       
#define PDMA0_DA_6_ADDR                 (DMAC_BASE_ADDR_2 + DA_6_Offset)       
#define PDMA0_DA_7_ADDR                 (DMAC_BASE_ADDR_2 + DA_7_Offset)       

#define PDMA0_CC_0_ADDR                 (DMAC_BASE_ADDR_2 + CC_0_Offset)       
#define PDMA0_CC_1_ADDR                 (DMAC_BASE_ADDR_2 + CC_1_Offset)       
#define PDMA0_CC_2_ADDR                 (DMAC_BASE_ADDR_2 + CC_2_Offset)       
#define PDMA0_CC_3_ADDR                 (DMAC_BASE_ADDR_2 + CC_3_Offset)       
#define PDMA0_CC_4_ADDR                 (DMAC_BASE_ADDR_2 + CC_4_Offset)       
#define PDMA0_CC_5_ADDR                 (DMAC_BASE_ADDR_2 + CC_5_Offset)       
#define PDMA0_CC_6_ADDR                 (DMAC_BASE_ADDR_2 + CC_6_Offset)       
#define PDMA0_CC_7_ADDR                 (DMAC_BASE_ADDR_2 + CC_7_Offset)       

#define PDMA0_LC0_0_ADDR                (DMAC_BASE_ADDR_2 + LC0_0_Offset)      
#define PDMA0_LC0_1_ADDR                (DMAC_BASE_ADDR_2 + LC0_1_Offset)      
#define PDMA0_LC0_2_ADDR                (DMAC_BASE_ADDR_2 + LC0_2_Offset)      
#define PDMA0_LC0_3_ADDR                (DMAC_BASE_ADDR_2 + LC0_3_Offset)      
#define PDMA0_LC0_4_ADDR                (DMAC_BASE_ADDR_2 + LC0_4_Offset)      
#define PDMA0_LC0_5_ADDR                (DMAC_BASE_ADDR_2 + LC0_5_Offset)      
#define PDMA0_LC0_6_ADDR                (DMAC_BASE_ADDR_2 + LC0_6_Offset)      
#define PDMA0_LC0_7_ADDR                (DMAC_BASE_ADDR_2 + LC0_7_Offset)      

#define PDMA0_LC1_0_ADDR                (DMAC_BASE_ADDR_2 + LC1_0_Offset)      
#define PDMA0_LC1_1_ADDR                (DMAC_BASE_ADDR_2 + LC1_1_Offset)      
#define PDMA0_LC1_2_ADDR                (DMAC_BASE_ADDR_2 + LC1_2_Offset)      
#define PDMA0_LC1_3_ADDR                (DMAC_BASE_ADDR_2 + LC1_3_Offset)      
#define PDMA0_LC1_4_ADDR                (DMAC_BASE_ADDR_2 + LC1_4_Offset)      
#define PDMA0_LC1_5_ADDR                (DMAC_BASE_ADDR_2 + LC1_5_Offset)      
#define PDMA0_LC1_6_ADDR                (DMAC_BASE_ADDR_2 + LC1_6_Offset)      
#define PDMA0_LC1_7_ADDR                (DMAC_BASE_ADDR_2 + LC1_7_Offset)      

#define PDMA0_DBGSTATUS_ADDR            (DMAC_BASE_ADDR_2 + DBGSTATUS_Offset)         
#define PDMA0_DBGCMD_ADDR               (DMAC_BASE_ADDR_2 + DBGCMD_Offset)            
#define PDMA0_DBGINST0_ADDR             (DMAC_BASE_ADDR_2 + DBGINST0_Offset)          
#define PDMA0_DBGINST1_ADDR             (DMAC_BASE_ADDR_2 + DBGINST1_Offset)          

#define PDMA0_CR0_ADDR                  (DMAC_BASE_ADDR_2 + CR0_Offset)        
#define PDMA0_CR1_ADDR                  (DMAC_BASE_ADDR_2 + CR1_Offset)        
#define PDMA0_CR2_ADDR                  (DMAC_BASE_ADDR_2 + CR2_Offset)        
#define PDMA0_CR3_ADDR                  (DMAC_BASE_ADDR_2 + CR3_Offset)        
#define PDMA0_CR4_ADDR                  (DMAC_BASE_ADDR_2 + CR4_Offset)        
#define PDMA0_CRDn_ADDR                 (DMAC_BASE_ADDR_2 + CRDn_Offset)       
#define PDMA0_periph_id_0_ADDR          (DMAC_BASE_ADDR_2 + periph_id_0_Offset)
#define PDMA0_periph_id_1_ADDR          (DMAC_BASE_ADDR_2 + periph_id_1_Offset)
#define PDMA0_periph_id_2_ADDR          (DMAC_BASE_ADDR_2 + periph_id_2_Offset)
#define PDMA0_periph_id_3_ADDR          (DMAC_BASE_ADDR_2 + periph_id_3_Offset)
#define PDMA0_pcell_id_0_ADDR           (DMAC_BASE_ADDR_2 + pcell_id_0_Offset) 
#define PDMA0_pcell_id_1_ADDR           (DMAC_BASE_ADDR_2 + pcell_id_1_Offset) 
#define PDMA0_pcell_id_2_ADDR           (DMAC_BASE_ADDR_2 + pcell_id_2_Offset) 
#define PDMA0_pcell_id_3_ADDR           (DMAC_BASE_ADDR_2 + pcell_id_3_Offset) 

#pragma endregion

#pragma region DMAC BASE ADDR 3 

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define PDMA1_DS_ADDR                   (DMAC_BASE_ADDR_3 + DS_Offset)         
#define PDMA1_DPC_ADDR                  (DMAC_BASE_ADDR_3 + DPC_Offset)        
#define PDMA1_INTEN_ADDR                (DMAC_BASE_ADDR_3 + INTEN_Offset)      
#define PDMA1_ES_ADDR                   (DMAC_BASE_ADDR_3 + ES_Offset)         
#define PDMA1_INTSTATUS_ADDR            (DMAC_BASE_ADDR_3 + INTSTATUS_Offset)  
#define PDMA1_INTCLR_ADDR               (DMAC_BASE_ADDR_3 + INTCLR_Offset)     
#define PDMA1_FSM_ADDR                  (DMAC_BASE_ADDR_3 + FSM_Offset)        
#define PDMA1_FSC_ADDR                  (DMAC_BASE_ADDR_3 + FSC_Offset)        
#define PDMA1_FTM_ADDR                  (DMAC_BASE_ADDR_3 + FTM_Offset)        

#define PDMA1_FTC0_ADDR                 (DMAC_BASE_ADDR_3 + FTC0_Offset)       
#define PDMA1_FTC1_ADDR                 (DMAC_BASE_ADDR_3 + FTC1_Offset)       
#define PDMA1_FTC2_ADDR                 (DMAC_BASE_ADDR_3 + FTC2_Offset)       
#define PDMA1_FTC3_ADDR                 (DMAC_BASE_ADDR_3 + FTC3_Offset)       
#define PDMA1_FTC4_ADDR                 (DMAC_BASE_ADDR_3 + FTC4_Offset)       
#define PDMA1_FTC5_ADDR                 (DMAC_BASE_ADDR_3 + FTC5_Offset)       
#define PDMA1_FTC6_ADDR                 (DMAC_BASE_ADDR_3 + FTC6_Offset)       
#define PDMA1_FTC7_ADDR                 (DMAC_BASE_ADDR_3 + FTC7_Offset)       

#define PDMA1_CS0_ADDR                  (DMAC_BASE_ADDR_3 + CS0_Offset)        
#define PDMA1_CS1_ADDR                  (DMAC_BASE_ADDR_3 + CS1_Offset)        
#define PDMA1_CS2_ADDR                  (DMAC_BASE_ADDR_3 + CS2_Offset)        
#define PDMA1_CS3_ADDR                  (DMAC_BASE_ADDR_3 + CS3_Offset)        
#define PDMA1_CS4_ADDR                  (DMAC_BASE_ADDR_3 + CS4_Offset)        
#define PDMA1_CS5_ADDR                  (DMAC_BASE_ADDR_3 + CS5_Offset)        
#define PDMA1_CS6_ADDR                  (DMAC_BASE_ADDR_3 + CS6_Offset)        
#define PDMA1_CS7_ADDR                  (DMAC_BASE_ADDR_3 + CS7_Offset)        

#define PDMA1_CPCO_ADDR                 (DMAC_BASE_ADDR_3 + CPCO_Offset)       
#define PDMA1_CPC1_ADDR                 (DMAC_BASE_ADDR_3 + CPC1_Offset)       
#define PDMA1_CPC2_ADDR                 (DMAC_BASE_ADDR_3 + CPC2_Offset)       
#define PDMA1_CPC3_ADDR                 (DMAC_BASE_ADDR_3 + CPC3_Offset)       
#define PDMA1_CPC4_ADDR                 (DMAC_BASE_ADDR_3 + CPC4_Offset)       
#define PDMA1_CPC5_ADDR                 (DMAC_BASE_ADDR_3 + CPC5_Offset)       
#define PDMA1_CPC6_ADDR                 (DMAC_BASE_ADDR_3 + CPC6_Offset)       
#define PDMA1_CPC7_ADDR                 (DMAC_BASE_ADDR_3 + CPC7_Offset)       

#define PDMA1_SA_0_ADDR                 (DMAC_BASE_ADDR_3 + SA_0_Offset)       
#define PDMA1_SA_1_ADDR                 (DMAC_BASE_ADDR_3 + SA_1_Offset)       
#define PDMA1_SA_2_ADDR                 (DMAC_BASE_ADDR_3 + SA_2_Offset)       
#define PDMA1_SA_3_ADDR                 (DMAC_BASE_ADDR_3 + SA_3_Offset)       
#define PDMA1_SA_4_ADDR                 (DMAC_BASE_ADDR_3 + SA_4_Offset)       
#define PDMA1_SA_5_ADDR                 (DMAC_BASE_ADDR_3 + SA_5_Offset)       
#define PDMA1_SA_6_ADDR                 (DMAC_BASE_ADDR_3 + SA_6_Offset)       
#define PDMA1_SA_7_ADDR                 (DMAC_BASE_ADDR_3 + SA_7_Offset)       

#define PDMA1_DA_0_ADDR                 (DMAC_BASE_ADDR_3 + DA_0_Offset)       
#define PDMA1_DA_1_ADDR                 (DMAC_BASE_ADDR_3 + DA_1_Offset)       
#define PDMA1_DA_2_ADDR                 (DMAC_BASE_ADDR_3 + DA_2_Offset)       
#define PDMA1_DA_3_ADDR                 (DMAC_BASE_ADDR_3 + DA_3_Offset)       
#define PDMA1_DA_4_ADDR                 (DMAC_BASE_ADDR_3 + DA_4_Offset)       
#define PDMA1_DA_5_ADDR                 (DMAC_BASE_ADDR_3 + DA_5_Offset)       
#define PDMA1_DA_6_ADDR                 (DMAC_BASE_ADDR_3 + DA_6_Offset)       
#define PDMA1_DA_7_ADDR                 (DMAC_BASE_ADDR_3 + DA_7_Offset)       

#define PDMA1_CC_0_ADDR                 (DMAC_BASE_ADDR_3 + CC_0_Offset)       
#define PDMA1_CC_1_ADDR                 (DMAC_BASE_ADDR_3 + CC_1_Offset)       
#define PDMA1_CC_2_ADDR                 (DMAC_BASE_ADDR_3 + CC_2_Offset)       
#define PDMA1_CC_3_ADDR                 (DMAC_BASE_ADDR_3 + CC_3_Offset)       
#define PDMA1_CC_4_ADDR                 (DMAC_BASE_ADDR_3 + CC_4_Offset)       
#define PDMA1_CC_5_ADDR                 (DMAC_BASE_ADDR_3 + CC_5_Offset)       
#define PDMA1_CC_6_ADDR                 (DMAC_BASE_ADDR_3 + CC_6_Offset)       
#define PDMA1_CC_7_ADDR                 (DMAC_BASE_ADDR_3 + CC_7_Offset)       

#define PDMA1_LC0_0_ADDR                (DMAC_BASE_ADDR_3 + LC0_0_Offset)      
#define PDMA1_LC0_1_ADDR                (DMAC_BASE_ADDR_3 + LC0_1_Offset)      
#define PDMA1_LC0_2_ADDR                (DMAC_BASE_ADDR_3 + LC0_2_Offset)      
#define PDMA1_LC0_3_ADDR                (DMAC_BASE_ADDR_3 + LC0_3_Offset)      
#define PDMA1_LC0_4_ADDR                (DMAC_BASE_ADDR_3 + LC0_4_Offset)      
#define PDMA1_LC0_5_ADDR                (DMAC_BASE_ADDR_3 + LC0_5_Offset)      
#define PDMA1_LC0_6_ADDR                (DMAC_BASE_ADDR_3 + LC0_6_Offset)      
#define PDMA1_LC0_7_ADDR                (DMAC_BASE_ADDR_3 + LC0_7_Offset)      

#define PDMA1_LC1_0_ADDR                (DMAC_BASE_ADDR_3 + LC1_0_Offset)      
#define PDMA1_LC1_1_ADDR                (DMAC_BASE_ADDR_3 + LC1_1_Offset)      
#define PDMA1_LC1_2_ADDR                (DMAC_BASE_ADDR_3 + LC1_2_Offset)      
#define PDMA1_LC1_3_ADDR                (DMAC_BASE_ADDR_3 + LC1_3_Offset)      
#define PDMA1_LC1_4_ADDR                (DMAC_BASE_ADDR_3 + LC1_4_Offset)      
#define PDMA1_LC1_5_ADDR                (DMAC_BASE_ADDR_3 + LC1_5_Offset)      
#define PDMA1_LC1_6_ADDR                (DMAC_BASE_ADDR_3 + LC1_6_Offset)      
#define PDMA1_LC1_7_ADDR                (DMAC_BASE_ADDR_3 + LC1_7_Offset)      

#define PDMA1_DBGSTATUS_ADDR            (DMAC_BASE_ADDR_3 + DBGSTATUS_Offset)         
#define PDMA1_DBGCMD_ADDR               (DMAC_BASE_ADDR_3 + DBGCMD_Offset)            
#define PDMA1_DBGINST0_ADDR             (DMAC_BASE_ADDR_3 + DBGINST0_Offset)          
#define PDMA1_DBGINST1_ADDR             (DMAC_BASE_ADDR_3 + DBGINST1_Offset)          

#define PDMA1_CR0_ADDR                  (DMAC_BASE_ADDR_3 + CR0_Offset)        
#define PDMA1_CR1_ADDR                  (DMAC_BASE_ADDR_3 + CR1_Offset)        
#define PDMA1_CR2_ADDR                  (DMAC_BASE_ADDR_3 + CR2_Offset)        
#define PDMA1_CR3_ADDR                  (DMAC_BASE_ADDR_3 + CR3_Offset)        
#define PDMA1_CR4_ADDR                  (DMAC_BASE_ADDR_3 + CR4_Offset)        
#define PDMA1_CRDn_ADDR                 (DMAC_BASE_ADDR_3 + CRDn_Offset)       
#define PDMA1_periph_id_0_ADDR          (DMAC_BASE_ADDR_3 + periph_id_0_Offset)
#define PDMA1_periph_id_1_ADDR          (DMAC_BASE_ADDR_3 + periph_id_1_Offset)
#define PDMA1_periph_id_2_ADDR          (DMAC_BASE_ADDR_3 + periph_id_2_Offset)
#define PDMA1_periph_id_3_ADDR          (DMAC_BASE_ADDR_3 + periph_id_3_Offset)
#define PDMA1_pcell_id_0_ADDR           (DMAC_BASE_ADDR_3 + pcell_id_0_Offset) 
#define PDMA1_pcell_id_1_ADDR           (DMAC_BASE_ADDR_3 + pcell_id_1_Offset) 
#define PDMA1_pcell_id_2_ADDR           (DMAC_BASE_ADDR_3 + pcell_id_2_Offset) 
#define PDMA1_pcell_id_3_ADDR           (DMAC_BASE_ADDR_3 + pcell_id_3_Offset) 

#pragma endregion

#endif