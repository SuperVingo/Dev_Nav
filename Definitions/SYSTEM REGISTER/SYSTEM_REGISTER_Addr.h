#ifndef __SYSTEM_REGISTER_SYSTEM_REGISTER_ADDR_H__    
#define __SYSTEM_REGISTER_SYSTEM_REGISTER_ADDR_H__  

#define SYSTEM_REGISTER_BASE_ADDR_1 0x10010000

#pragma region SYSTEM REGISTER BASE ADDR 1    

//////////////////////////////////////////////////////
//                  Offset Part                     //
//////////////////////////////////////////////////////
#define GENERAL_CTRL_C2C_Offset         0x010C
#define GENERAL_CTRL_GPS_Offset         0x0110
#define ADC_CFG_Offset                  0x0118
#define ISPBLK_CFG_Offset               0x020C
#define LCDBLK_CFG_Offset               0x0210
#define LCDBLK_CFG2_Offset              0x0214
#define CAMBLK_CFG_Offset               0x0218
#define USB_CFG_Offset                  0x021C
#define PPMU_CON_Offset                 0x0320
#define SMMU_CON_Offset                 0x0330


//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define GENERAL_CTRL_C2C_ADDR           (SYSTEM_REGISTER_BASE_ADDR_1 + GENERAL_CTRL_C2C_Offset)
#define GENERAL_CTRL_GPS_ADDR           (SYSTEM_REGISTER_BASE_ADDR_1 + GENERAL_CTRL_GPS_Offset)
#define ADC_CFG_ADDR                    (SYSTEM_REGISTER_BASE_ADDR_1 + ADC_CFG_Offset)
#define ISPBLK_CFG_ADDR                 (SYSTEM_REGISTER_BASE_ADDR_1 + ISPBLK_CFG_Offset)
#define LCDBLK_CFG_ADDR                 (SYSTEM_REGISTER_BASE_ADDR_1 + LCDBLK_CFG_Offset)
#define LCDBLK_CFG2_ADDR                (SYSTEM_REGISTER_BASE_ADDR_1 + LCDBLK_CFG2_Offset)
#define CAMBLK_CFG_ADDR                 (SYSTEM_REGISTER_BASE_ADDR_1 + CAMBLK_CFG_Offset)
#define USB_CFG_ADDR                    (SYSTEM_REGISTER_BASE_ADDR_1 + USB_CFG_Offset)
#define PPMU_CON_ADDR                   (SYSTEM_REGISTER_BASE_ADDR_1 + PPMU_CON_Offset)
#define SMMU_CON_ADDR                   (SYSTEM_REGISTER_BASE_ADDR_1 + SMMU_CON_Offset)


#pragma endregion

#endif