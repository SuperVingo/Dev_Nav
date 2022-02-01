#ifndef __CHIPID_CHIPID_ADDR_H__     
#define __CHIPID_CHIPID_ADDR_H__       

// Base Address
#define CHIPID_BASE_ADDR 0x10000000

// Offset
#define PRO_ID_Offset        0x0000
#define PACKAGE_ID_Offset    0x0004

// Address
#define PRO_ID_ADDR          (CHIPID_BASE_ADDR + PRO_ID_Offset)
#define PACKAGE_ID_ADDR      (CHIPID_BASE_ADDR + PACKAGE_ID_Offset)

#endif