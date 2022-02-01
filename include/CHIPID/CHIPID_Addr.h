#ifndef __CHIPID_CHIPID_ADDR_H__     
#define __CHIPID_CHIPID_ADDR_H__       

// Base Address
#define CHIPID_BASE_ADDR 0x10000000

// Offset
#define CHIPID_PRO_ID_Offset        0x0000
#define CHIPID_PACKAGE_ID_Offset    0x0004

// Address
#define CHIPID_PRO_ID_ADDR          (CHIPID_BASE_ADDR + CHIPID_PRO_ID_Offset)
#define CHIPID_PACKAGE_ID_ADDR      (CHIPID_BASE_ADDR + CHIPID_PACKAGE_ID_Offset)

#endif