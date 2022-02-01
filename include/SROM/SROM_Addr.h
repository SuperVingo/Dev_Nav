#ifndef __SROM_SROM_ADDR_H__     
#define __SROM_SROM_ADDR_H__       

// Base Address
#define SROM_BASE_ADDR 0x12570000

//////////////////////////////////////////////////////
//                  Offset Part                     //
//////////////////////////////////////////////////////
#define SROM_BW_Offset          0x0000
#define SROM_BC0_Offset         0x0004
#define SROM_BC1_Offset         0x0008
#define SROM_BC2_Offset         0x000C
#define SROM_BC3_Offset         0x0010

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define SROM_BW_ADDR          (SROM_BASE_ADDR + SROM_BW_Offset)
#define SROM_BC0_ADDR         (SROM_BASE_ADDR + SROM_BC0_Offset)
#define SROM_BC1_ADDR         (SROM_BASE_ADDR + SROM_BC1_Offset)
#define SROM_BC2_ADDR         (SROM_BASE_ADDR + SROM_BC2_Offset)
#define SROM_BC3_ADDR         (SROM_BASE_ADDR + SROM_BC3_Offset)

#endif