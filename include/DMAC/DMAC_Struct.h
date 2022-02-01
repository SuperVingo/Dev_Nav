#ifndef __DMAC_DMAC_STRUCTURE_H__     
#define __DMAC_DMAC_STRUCTURE_H__    

/* 
 * CC
 * Base Address: 0x1284_0000 (MDMA)
 * Base Address: 0x1268_0000 (PDMA0)
 * Base Address: 0x1269_0000 (PDMA1)
 * 
 * Address = Base Address + 0x0408 (CC_0)
 * Address = Base Address + 0x0428 (CC_1)
 * Address = Base Address + 0x0448 (CC_2)
 * Address = Base Address + 0x0468 (CC_3)
 * Address = Base Address + 0x0488 (CC_4)
 * Address = Base Address + 0x04A8 (CC_5)
 * Address = Base Address + 0x04C8 (CC_6)
 * Address = Base Address + 0x04E8 (CC_7)
 * Reset Value = 0x0080_0200
 *
 */

/*
 * Instruction
 * 
 * Please refer to the PL330 TRM, 'AMBA DMA Controller DMA-330 technical reference manual revision r1p0" from
 * ARM
 *
 * Security Scheme
 * 
 * DMA_mem runs in both secure and non-secure modes, while DMA_peri runs in non-secure mode only.
 * 
 * Summary
 * 1. You can configure the DMAC with up to eight DMA channels. Each channel supports single concurrent thread
 * of DMA operation. Addtionally, there is a single DMA manager thread of initialize the DMA channel thread.
 * 
 * 2. Channel thread
 * - Each channel thread can operate the DMA. Accordingly, write an assembly code. If you require a number
 *   of independent DMA channels, write a number of assembly codes for each channel.
 * - Assemble and link the codes into one file and loads this file into the memory. 
 * 
 */

#endif