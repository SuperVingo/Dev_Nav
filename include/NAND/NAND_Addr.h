#ifndef __NAND_NAND_ADDR_H__     
#define __NAND_NAND_ADDR_H__       

// Base Address
#define NAND_BASE_ADDR_1 0x0CE00000
#define NAND_BASE_ADDR_2 0x0CE20000

#pragma region NAND_BASE_ADDR_1

//////////////////////////////////////////////////////
//                  Offset Part                     //
//////////////////////////////////////////////////////
#define NFCONF_Offset           0x0000
#define NFCONT_Offset           0x0004
#define NFCMMD_Offset           0x0008
#define NFADDR_Offset           0x000C
#define NFDATA_Offset           0x0010
#define NFMECCD0_Offset         0x0014
#define NFMECCD1_Offset         0x0018
#define NFSECCD_Offset          0x001C
#define NFSBLK_Offset           0x0020
#define NFEBLK_Offset           0x0024
#define NFSTAT_Offset           0x0028
#define NFECCERR0_Offset        0x002C
#define NFECCERR1_Offset        0x0030
#define NFMECC0_Offset          0x0034
#define NFMECC1_Offset          0x0038
#define NFSECC_Offset           0x003C
#define NFMLCBITPT_Offset       0x0040

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define NFCONF_ADDR             (NAND_BASE_ADDR_1 + NFCONF_Offset)    
#define NFCONT_ADDR             (NAND_BASE_ADDR_1 + NFCONT_Offset)    
#define NFCMMD_ADDR             (NAND_BASE_ADDR_1 + NFCMMD_Offset)    
#define NFADDR_ADDR             (NAND_BASE_ADDR_1 + NFADDR_Offset)    
#define NFDATA_ADDR             (NAND_BASE_ADDR_1 + NFDATA_Offset)    
#define NFMECCD0_ADDR           (NAND_BASE_ADDR_1 + NFMECCD0_Offset)  
#define NFMECCD1_ADDR           (NAND_BASE_ADDR_1 + NFMECCD1_Offset)  
#define NFSECCD_ADDR            (NAND_BASE_ADDR_1 + NFSECCD_Offset)   
#define NFSBLK_ADDR             (NAND_BASE_ADDR_1 + NFSBLK_Offset)    
#define NFEBLK_ADDR             (NAND_BASE_ADDR_1 + NFEBLK_Offset)    
#define NFSTAT_ADDR             (NAND_BASE_ADDR_1 + NFSTAT_Offset)    
#define NFECCERR0_ADDR          (NAND_BASE_ADDR_1 + NFECCERR0_Offset) 
#define NFECCERR1_ADDR          (NAND_BASE_ADDR_1 + NFECCERR1_Offset) 
#define NFMECC0_ADDR            (NAND_BASE_ADDR_1 + NFMECC0_Offset)   
#define NFMECC1_ADDR            (NAND_BASE_ADDR_1 + NFMECC1_Offset)   
#define NFSECC_ADDR             (NAND_BASE_ADDR_1 + NFSECC_Offset)    
#define NFMLCBITPT_ADDR         (NAND_BASE_ADDR_1 + NFMLCBITPT_Offset)

#pragma endregion

#pragma region NAND_BASE_ADDR_2

//////////////////////////////////////////////////////
//                  Offset Part                     //
//////////////////////////////////////////////////////
#define NFECCCONF_Offset            0x0000
#define NFECCCONT_Offset            0x0020
#define NFECCSTAT_Offset            0x0030
#define NFECCSECSTAT_Offset         0x0040
#define NFECCPRGECC0_Offset         0x0090
#define NFECCPRGECC1_Offset         0x0094
#define NFECCPRGECC2_Offset         0x0098
#define NFECCPRGECC3_Offset         0x009C
#define NFECCPRGECC4_Offset         0x00A0
#define NFECCPRGECC5_Offset         0x00A4
#define NFECCPRGECC6_Offset         0x00A8
#define NFECCERL0_Offset            0x00C0
#define NFECCERL1_Offset            0x00C4
#define NFECCERL2_Offset            0x00C8
#define NFECCERL3_Offset            0x00CC
#define NFECCERL4_Offset            0x00D0
#define NFECCERL5_Offset            0x00D4
#define NFECCERL6_Offset            0x00D8
#define NFECCERL7_Offset            0x00DC
#define NFECCERP0_Offset            0x00F0
#define NFECCERP1_Offset            0x00F4
#define NFECCERP2_Offset            0x00F8
#define NFECCERP3_Offset            0x00FC
#define NFECCCONECC0_Offset         0x0110
#define NFECCCONECC1_Offset         0x0114
#define NFECCCONECC2_Offset         0x0118
#define NFECCCONECC3_Offset         0x011C
#define NFECCCONECC4_Offset         0x0120
#define NFECCCONECC5_Offset         0x0124
#define NFECCCONECC6_Offset         0x0128

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define NFECCCONF_ADDR            (NAND_BASE_ADDR_2 + NFECCCONF_Offset)   
#define NFECCCONT_ADDR            (NAND_BASE_ADDR_2 + NFECCCONT_Offset)   
#define NFECCSTAT_ADDR            (NAND_BASE_ADDR_2 + NFECCSTAT_Offset)   
#define NFECCSECSTAT_ADDR         (NAND_BASE_ADDR_2 + NFECCSECSTAT_Offset)
#define NFECCPRGECC0_ADDR         (NAND_BASE_ADDR_2 + NFECCPRGECC0_Offset)
#define NFECCPRGECC1_ADDR         (NAND_BASE_ADDR_2 + NFECCPRGECC1_Offset)
#define NFECCPRGECC2_ADDR         (NAND_BASE_ADDR_2 + NFECCPRGECC2_Offset)
#define NFECCPRGECC3_ADDR         (NAND_BASE_ADDR_2 + NFECCPRGECC3_Offset)
#define NFECCPRGECC4_ADDR         (NAND_BASE_ADDR_2 + NFECCPRGECC4_Offset)
#define NFECCPRGECC5_ADDR         (NAND_BASE_ADDR_2 + NFECCPRGECC5_Offset)
#define NFECCPRGECC6_ADDR         (NAND_BASE_ADDR_2 + NFECCPRGECC6_Offset)
#define NFECCERL0_ADDR            (NAND_BASE_ADDR_2 + NFECCERL0_Offset)   
#define NFECCERL1_ADDR            (NAND_BASE_ADDR_2 + NFECCERL1_Offset)   
#define NFECCERL2_ADDR            (NAND_BASE_ADDR_2 + NFECCERL2_Offset)   
#define NFECCERL3_ADDR            (NAND_BASE_ADDR_2 + NFECCERL3_Offset)   
#define NFECCERL4_ADDR            (NAND_BASE_ADDR_2 + NFECCERL4_Offset)   
#define NFECCERL5_ADDR            (NAND_BASE_ADDR_2 + NFECCERL5_Offset)   
#define NFECCERL6_ADDR            (NAND_BASE_ADDR_2 + NFECCERL6_Offset)   
#define NFECCERL7_ADDR            (NAND_BASE_ADDR_2 + NFECCERL7_Offset)   
#define NFECCERP0_ADDR            (NAND_BASE_ADDR_2 + NFECCERP0_Offset)   
#define NFECCERP1_ADDR            (NAND_BASE_ADDR_2 + NFECCERP1_Offset)   
#define NFECCERP2_ADDR            (NAND_BASE_ADDR_2 + NFECCERP2_Offset)   
#define NFECCERP3_ADDR            (NAND_BASE_ADDR_2 + NFECCERP3_Offset)   
#define NFECCCONECC0_ADDR         (NAND_BASE_ADDR_2 + NFECCCONECC0_Offset)
#define NFECCCONECC1_ADDR         (NAND_BASE_ADDR_2 + NFECCCONECC1_Offset)
#define NFECCCONECC2_ADDR         (NAND_BASE_ADDR_2 + NFECCCONECC2_Offset)
#define NFECCCONECC3_ADDR         (NAND_BASE_ADDR_2 + NFECCCONECC3_Offset)
#define NFECCCONECC4_ADDR         (NAND_BASE_ADDR_2 + NFECCCONECC4_Offset)
#define NFECCCONECC5_ADDR         (NAND_BASE_ADDR_2 + NFECCCONECC5_Offset)
#define NFECCCONECC6_ADDR         (NAND_BASE_ADDR_2 + NFECCCONECC6_Offset)

#pragma endregion

#endif