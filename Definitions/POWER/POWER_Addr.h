#ifndef __POWER_POWER_STRUCTURE_H__     
#define __POWER_POWER_STRUCTURE_H__   

#define POWER_BASE_ADDR_1 0x10020000

#pragma region POWER BASE ADDR 1    

//////////////////////////////////////////////////////
//                  Offset Part                     //
//////////////////////////////////////////////////////
#define OM_STAT_Offset                                      0x0000

#define LPI_MASK1_Offset                                    0x0004
#define LPI_MASK2_Offset                                    0x0008
#define LPI_MASK3_Offset                                    0x000C

#define RTC_CLKO_SEL_Offset                                 0x0010
#define GNSS_RTC_OUT_CTRL_Offset                            0x0014

#define LPI_DENIAL_MASK0_Offset                             0x0018
#define LPI_DENIAL_MASK1_Offset                             0x001C
#define LPI_DENIAL_MASK2_Offset                             0x0020

#define C2C_CTRL_Offset                                     0x0024

#define INTR_SSPREAD_ENABLE_Offset                          0x0100
#define INTR_SSPREAD_USE_STANDBYWFI_Offset                  0x0104
#define INTR_SSPREAD_BLOCKING_DURATION_Offset               0x0108

#define CENTRAL_SEQ_CONFIGURATION_Offset                    0x0200
#define CENTRAL_SEQ_OPTION_Offset                           0x0208
#define CENTRAL_SEQ_CONFIGURATION_COREBLK_Offset            0x0240

#define SWRESET_Offset                                      0x0400
#define RST_STAT_Offset                                     0x0404
#define AUTOMATIC_WDT_RESET_DISABLE_Offset                  0x0408
#define MASK_WDT_RESET_REQUEST_Offset                       0x040C

#define WAKEUP_STAT_Offset                                  0x0600
#define EINT_WAKEUP_MASK_Offset                             0x0604
#define WAKEUP_MASK_Offset                                  0x0608
#define WAKEUP_STAT_COREBLK_Offset                          0x0620
#define WAKEUP_MASK_COREBLK_Offset                          0x0628

#define HDMI_PHY_CONTROL_Offset                             0x0700
#define USB_PHY_CONTROL_Offset                              0x0704
#define HSIC_1_PHY_CONTROL_Offset                           0x0708
#define HSIC_2_PHY_CONTROL_Offset                           0x070C
#define MIPI_PHY0_CONTROL_Offset                            0x0710
#define MIPI_PHY1_CONTROL_Offset                            0x0714
#define ADC_PHY_CONTROL_Offset                              0x0718

#define BODY_BIAS_CON0_Offset                               0x0780
#define BODY_BIAS_CON1_Offset                               0x0784
#define BODY_BIAS_CON2_Offset                               0x0788
#define BODY_BIAS_CON3_Offset                               0x078C

#define INFORM0_Offset                                      0x0800
#define INFORM1_Offset                                      0x0804
#define INFORM2_Offset                                      0x0808
#define INFORM3_Offset                                      0x080C
#define INFORM4_Offset                                      0x0810
#define INFORM5_Offset                                      0x0814
#define INFORM6_Offset                                      0x0818
#define INFORM7_Offset                                      0x081C

#define IROM_DATA_REG0_Offset                               0x0980
#define IROM_DATA_REG1_Offset                               0x0984
#define IROM_DATA_REG2_Offset                               0x0988
#define IROM_DATA_REG3_Offset                               0x098C

#define PMU_DEBUG_Offset                                    0x0A00

#define ARM_CORE0_SYS_PWR_REG_Offset                        0x1000
#define DIS_IRQ_ARM_CORE0_LOCAL_SYS_PWR_REG_Offset          0x1004
#define DIS_IRQ_ARM_CORE0_CENTRAL_SYS_PWR_REG_Offset        0x1008

#define ARM_CORE1_SYS_PWR_REG_Offset                        0x1010
#define DIS_IRQ_ARM_CORE1_LOCAL_SYS_PWR_REG_Offset          0x1014
#define DIS_IRQ_ARM_CORE1_CENTRAL_SYS_PWR_REG_Offset        0x1018

#define ISP_ARM_SYS_PWR_REG_Offset                          0x1050
#define DIS_IRQ_ARM_LOCAL_SYS_PWR_REG_Offset                0x1054
#define DIS_IRQ_ARM_CENTRAL_SYS_PWR_REG_Offset              0x1058

#define ARM_COMMON_SYS_PWR_REG_Offset                       0x1080
#define ARM_L2_0_SYS_PWR_REG_Offset                         0x10C0
#define ARM_L2_1_SYS_PWR_REG_Offset                         0x10C4

#define CMU_ACLKSTOP_SYS_PWR_REG_Offset                     0x1100
#define CMU_SCLKSTOP_SYS_PWR_REG_Offset                     0x1104
#define CMU_RESET_SYS_PWR_REG_Offset                        0x110C

#define CMU_ACLKSTOP_COREBLK_SYS_PWR_REG_Offset             0x1110
#define CMU_SCLKSTOP_COREBLK_SYS_PWR_REG_Offset             0x1114
#define CMU_RESET_COREBLK_SYS_PWR_REG_Offset                0x111C

#define APLL_SYSCLK_SYS_PWR_REG_Offset                      0x1120
#define MPLL_SYSCLK_SYS_PWR_REG_Offset                      0x1124
#define VPLL_SYSCLK_SYS_PWR_REG_Offset                      0x1128
#define EPLL_SYSCLK_SYS_PWR_REG_Offset                      0x112C

#define MPLLUSER_SYSCLK_SYS_PWR_REG_Offset                  0x1130

#define CMU_CLKSTOP_GPS_ALIVE_SYS_PWR_REG_Offset            0x1138
#define CMU_RESET_GPS_ALIVE_SYS_PWR_REG_Offset              0x113C
#define CMU_CLKSTOP_CAM_ALIVE_SYS_PWR_REG_Offset            0x1140
#define CMU_CLKSTOP_TV_ALIVE_SYS_PWR_REG_Offset             0x1144
#define CMU_CLKSTOP_MFC_ALIVE_SYS_PWR_REG_Offset            0x1148
#define CMU_CLKSTOP_G3D_ALIVE_SYS_PWR_REG_Offset            0x114C
#define CMU_CLKSTOP_LCD0_ALIVE_SYS_PWR_REG_Offset           0x1150
#define CMU_CLKSTOP_ISP_ALIVE_SYS_PWR_REG_Offset            0x1154
#define CMU_CLKSTOP_MAUDIO_ALIVE_SYS_PWR_REG_Offset         0x1158
#define CMU_CLKSTOP_GPS_SYS_PWR_REG_Offset                  0x115C
#define CMU_RESET_CAM_ALIVE_SYS_PWR_REG_Offset              0x1160
#define CMU_RESET_TV_ALIVE_SYS_PWR_REG_Offset               0x1164
#define CMU_RESET_MFC_ALIVE_SYS_PWR_REG_Offset              0x1168
#define CMU_RESET_G3D_ALIVE_SYS_PWR_REG_Offset              0x116C
#define CMU_RESET_LCD0_ALIVE_SYS_PWR_REG_Offset             0x1170
#define CMU_RESET_ISP_ALIVE_SYS_PWR_REG_Offset              0x1174
#define CMU_RESET_MAUDIO_ALIVE_SYS_PWR_REG_Offset           0x1178
#define CMU_RESET_GPS_SYS_PWR_REG_Offset                    0x117C

#define TOP_BUS_SYS_PWR_REG_Offset                          0x1180
#define TOP_RETENTION_SYS_PWR_REG_Offset                    0x1184
#define TOP_PWR_SYS_PWR_REG_Offset                          0x1188
#define TOP_BUS_COREBLK_SYS_PWR_REG_Offset                  0x1190
#define TOP_RETENTION_COREBLK_SYS_PWR_REG_Offset            0x1194
#define TOP_PWR_COREBLK_SYS_PWR_REG_Offset                  0x1198

#define LOGIC_RESET_SYS_PWR_REG_Offset                      0x11A0
#define OSCCLK_GATE_SYS_PWR_REG_Offset                      0x11A4
#define LOGIC_RESET_COREBLK_SYS_PWR_REG_Offset              0x11B0
#define OSCCLK_GATE_COREBLK_SYS_PWR_REG_Offset              0x11B4

#define OneNANDXL_MEM_SYS_PWR_REG_Offset                    0x11C0
#define HSI_MEM_SYS_PWR_REG_Offset                          0x11C4
#define G2D_MEM_SYS_PWR_REG_Offset                          0x11C8
#define USBOTG_MEM_SYS_PWR_REG_Offset                       0x11CC
#define SDMMC_MEM_SYS_PWR_REG_Offset                        0x11D0
#define CSSYS_MEM_SYS_PWR_REG_Offset                        0x11D4
#define SECSS_MEM_SYS_PWR_REG_Offset                        0x11D8
#define ROTATOR_MEM_SYS_PWR_REG_Offset                      0x11DC

#define PAD_RETENTION_DRAM_SYS_PWR_REG_Offset               0x1200
#define PAD_RETENTION_MAUDIO_SYS_PWR_REG_Offset             0x1204
#define PAD_RETENTION_GPIO_SYS_PWR_REG_Offset               0x1220
#define PAD_RETENTION_UART_SYS_PWR_REG_Offset               0x1224
#define PAD_RETENTION_MMCA_SYS_PWR_REG_Offset               0x1228
#define PAD_RETENTION_MMCB_SYS_PWR_REG_Offset               0x122C
#define PAD_RETENTION_EBIA_SYS_PWR_REG_Offset               0x1230
#define PAD_RETENTION_EBIB_SYS_PWR_REG_Offset               0x1234
#define PAD_RETENTION_GPIO_COREBLK_SYS_PWR_REG_Offset       0x123C
#define PAD_ISOLATION_SYS_PWR_REG_Offset                    0x1240
#define PAD_ISOLATION_COREBLK_SYS_PWR_REG_Offset            0x1250
#define PAD_ALV_SEL_SYS_PWR_REG_Offset                      0x1260

#define XUSBXTI_SYS_PWR_REG_Offset                          0x1280
#define XXTI_SYS_PWR_REG_Offset                             0x1284
#define EXT_REGULATOR_SYS_PWR_REG_Offset                    0x12C0
#define GPIO_MODE_SYS_PWR_REG_Offset                        0x1300
#define GPIO_MODE_COREBLK_SYS_PWR_REG_Offset                0x1320
#define GPIO_MODE_MAUDIO_SYS_PWR_REG_Offset                 0x1340
#define TOP_ASB_RESET_SYS_PWR_REG_Offset                    0x1344
#define TOP_ASB_ISOLATION_SYS_PWR_REG_Offset                0x1348

#define CAM_SYS_PWR_REG_Offset                              0x1380
#define TV_SYS_PWR_REG_Offset                               0x1384
#define MFC_SYS_PWR_REG_Offset                              0x1388
#define G3D_SYS_PWR_REG_Offset                              0x138C
#define LCD0_SYS_PWR_REG_Offset                             0x1390
#define ISP_SYS_PWR_REG_Offset                              0x1394
#define MAUDIO_SYS_PWR_REG_Offset                           0x1398
#define GPS_SYS_PWR_REG_Offset                              0x139C
#define GPS_ALIVE_SYS_PWR_REG_Offset                        0x13A0
#define DRAM_FREQ_DOWN_SYS_PWR_REG_Offset                   0x13B0
#define DDRPHY_DLLOFF_SYS_PWR_REG_Offset                    0x13B4

#define CMU_SYSCLK_ISP_SYS_PWR_REG_Offset                   0x13B8
#define CMU_SYSCLK_GPS_SYS_PWR_REG_Offset                   0x13BC
#define LPDDR_PHY_DLL_LOCK_SYS_PWR_REG_Offset               0x1390

#define ARM_CORE0_CONFIGURATION_Offset                      0x2000
#define ARM_CORE0_STATUS_Offset                             0x2004
#define ARM_CORE0_OPTION_Offset                             0x2008
#define ARM_CORE1_CONFIGURATION_Offset                      0x2080
#define ARM_CORE1_STATUS_Offset                             0x2084
#define ARM_CORE1_OPTION_Offset                             0x2088

#define ISP_ARM_OPTION_Offset                               0x2288
#define ISP_ARM_CONFIGURATION_Offset                        0x2280
#define ISP_ARM_STATUS_Offset                               0x2284

#define ARM_COMMON_OPTION_Offset                            0x2408
#define ARM_L2_0_CONFIGURATION_Offset                       0x2600
#define ARM_L2_0_STATUS_Offset                              0x2604
#define ARM_L2_0_OPTION_Offset                              0x2608
#define ARM_L2_1_CONFIGURATION_Offset                       0x2620
#define ARM_L2_1_STATUS_Offset                              0x2624
#define ARM_L2_1_OPTION_Offset                              0x2628

#define DRAM_FREQ_DOWN_OPTION_Offset                        0x29A8
#define DDRPHY_DLLOFF_OPTION_Offset                         0x2DC8
#define OneNANDXL_MEM_OPTION_Offset                         0x2E08
#define HSI_MEM_OPTION_Offset                               0x2E28
#define G2D_MEM_OPTION_Offset                               0x2E48
#define USBOTG_MEM_OPTION_Offset                            0x2E68
#define SDMMC_MEM_OPTION_Offset                             0x2E88
#define CSSYS_MEM_OPTION_Offset                             0x2EA8
#define SECSS_MEM_OPTION_Offset                             0x2EC8
#define ROTATOR_MEM_OPTION_Offset                           0x2F48

#define PAD_RETENTION_MAUDIO_OPTION_Offset                  0x3028
#define PAD_RETENTION_GPIO_OPTION_Offset                    0x3108
#define PAD_RETENTION_UART_OPTION_Offset                    0x3128
#define PAD_RETENTION_MMCA_OPTION_Offset                    0x3148
#define PAD_RETENTION_MMCB_OPTION_Offset                    0x3168
#define PAD_RETENTION_EBIA_OPTION_Offset                    0x3188
#define PAD_RETENTION_EBIB_OPTION_Offset                    0x31A8
#define PAD_RETENTION_GPIO_COREBLK_OPTION_Offset            0x31E8

#define PS_HOLD_CONTROL_Offset                              0x330C

#define XUSBXTI_CONFIGURATION_Offset                        0x3400
#define XUSBXTI_STATUS_Offset                               0x3404
#define XUSBXTI_DURATION_Offset                             0x341C

#define XXTI_CONFIGURATION_Offset                           0x3420
#define XXTI_STATUS_Offset                                  0x3424
#define XXTI_DURATION_Offset                                0x343C

#define EXT_REGULATOR_DURATION_Offset                       0x361C

#define CAM_CONFIGURATION_Offset                            0x3C00
#define CAM_STATUS_Offset                                   0x3C04
#define CAM_OPTION_Offset                                   0x3C08
#define TV_CONFIGURATION_Offset                             0x3C20
#define TV_STATUS_Offset                                    0x3C24
#define TV_OPTION_Offset                                    0x3C28
#define MFC_CONFIGURATION_Offset                            0x3C40
#define MFC_STATUS_Offset                                   0x3C44
#define MFC_OPTION_Offset                                   0x3C48
#define G3D_CONFIGURATION_Offset                            0x3C60
#define G3D_STATUS_Offset                                   0x3C64
#define G3D_OPTION_Offset                                   0x3C68
#define LCD0_CONFIGURATION_Offset                           0x3C80
#define LCD0_STATUS_Offset                                  0x3C84
#define LCD0_OPTION_Offset                                  0x3C88
#define ISP_CONFIGURATION_Offset                            0x3CA0
#define ISP_STATUS_Offset                                   0x3CA4
#define ISP_OPTION_Offset                                   0x3CA8
#define ISP_DURATION0_Offset                                0x3CB8
#define ISP_DURATION2_Offset                                0x3CB8
#define MAUDIO_CONFIGURATION_Offset                         0x3CC0
#define MAUDIO_STATUS_Offset                                0x3CC4
#define MAUDIO_OPTION_Offset                                0x3CC8
#define GPS_CONFIGURATION_Offset                            0x3CE0
#define GPS_STATUS_Offset                                   0x3CE4
#define GPS_OPTION_Offset                                   0x3CE8
#define GPS_ALIVE_CONFIGURATION_Offset                      0x3D00
#define GPS_ALIVE_STATUS_Offset                             0x3D04
#define GPS_ALIVE_OPTION_Offset                             0x3D08

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////  
#define OM_STAT_ADDR                                      (POWER_BASE_ADDR_1 + OM_STAT_Offset)

#define LPI_MASK1_ADDR                                    (POWER_BASE_ADDR_1 + LPI_MASK1_Offset)
#define LPI_MASK2_ADDR                                    (POWER_BASE_ADDR_1 + LPI_MASK2_Offset)
#define LPI_MASK3_ADDR                                    (POWER_BASE_ADDR_1 + LPI_MASK3_Offset)

#define RTC_CLKO_SEL_ADDR                                 (POWER_BASE_ADDR_1 + RTC_CLKO_SEL_Offset)
#define GNSS_RTC_OUT_CTRL_ADDR                            (POWER_BASE_ADDR_1 + GNSS_RTC_OUT_CTRL_Offset)

#define LPI_DENIAL_MASK0_ADDR                             (POWER_BASE_ADDR_1 + LPI_DENIAL_MASK0_Offset)
#define LPI_DENIAL_MASK1_ADDR                             (POWER_BASE_ADDR_1 + LPI_DENIAL_MASK1_Offset)
#define LPI_DENIAL_MASK2_ADDR                             (POWER_BASE_ADDR_1 + LPI_DENIAL_MASK2_Offset)

#define C2C_CTRL_ADDR                                     (POWER_BASE_ADDR_1 + C2C_CTRL_Offset)

#define INTR_SSPREAD_ENABLE_ADDR                          (POWER_BASE_ADDR_1 + INTR_SSPREAD_ENABLE_Offset)
#define INTR_SSPREAD_USE_STANDBYWFI_ADDR                  (POWER_BASE_ADDR_1 + INTR_SSPREAD_USE_STANDBYWFI_Offset)
#define INTR_SSPREAD_BLOCKING_DURATION_ADDR               (POWER_BASE_ADDR_1 + INTR_SSPREAD_BLOCKING_DURATION_Offset)

#define CENTRAL_SEQ_CONFIGURATION_ADDR                    (POWER_BASE_ADDR_1 + CENTRAL_SEQ_CONFIGURATION_Offset)
#define CENTRAL_SEQ_OPTION_ADDR                           (POWER_BASE_ADDR_1 + CENTRAL_SEQ_OPTION_Offset)
#define CENTRAL_SEQ_CONFIGURATION_COREBLK_ADDR            (POWER_BASE_ADDR_1 + CENTRAL_SEQ_CONFIGURATION_COREBLK_Offset)

#define SWRESET_ADDR                                      (POWER_BASE_ADDR_1 + SWRESET_Offset)
#define RST_STAT_ADDR                                     (POWER_BASE_ADDR_1 + RST_STAT_Offset)
#define AUTOMATIC_WDT_RESET_DISABLE_ADDR                  (POWER_BASE_ADDR_1 + AUTOMATIC_WDT_RESET_DISABLE_Offset)
#define MASK_WDT_RESET_REQUEST_ADDR                       (POWER_BASE_ADDR_1 + MASK_WDT_RESET_REQUEST_Offset)

#define WAKEUP_STAT_ADDR                                  (POWER_BASE_ADDR_1 + WAKEUP_STAT_Offset)
#define EINT_WAKEUP_MASK_ADDR                             (POWER_BASE_ADDR_1 + EINT_WAKEUP_MASK_Offset)
#define WAKEUP_MASK_ADDR                                  (POWER_BASE_ADDR_1 + WAKEUP_MASK_Offset)
#define WAKEUP_STAT_COREBLK_ADDR                          (POWER_BASE_ADDR_1 + WAKEUP_STAT_COREBLK_Offset)
#define WAKEUP_MASK_COREBLK_ADDR                          (POWER_BASE_ADDR_1 + WAKEUP_MASK_COREBLK_Offset)

#define HDMI_PHY_CONTROL_ADDR                             (POWER_BASE_ADDR_1 + HDMI_PHY_CONTROL_Offset)
#define USB_PHY_CONTROL_ADDR                              (POWER_BASE_ADDR_1 + USB_PHY_CONTROL_Offset)
#define HSIC_1_PHY_CONTROL_ADDR                           (POWER_BASE_ADDR_1 + HSIC_1_PHY_CONTROL_Offset)
#define HSIC_2_PHY_CONTROL_ADDR                           (POWER_BASE_ADDR_1 + HSIC_2_PHY_CONTROL_Offset)
#define MIPI_PHY0_CONTROL_ADDR                            (POWER_BASE_ADDR_1 + MIPI_PHY0_CONTROL_Offset)
#define MIPI_PHY1_CONTROL_ADDR                            (POWER_BASE_ADDR_1 + MIPI_PHY1_CONTROL_Offset)
#define ADC_PHY_CONTROL_ADDR                              (POWER_BASE_ADDR_1 + ADC_PHY_CONTROL_Offset)

#define BODY_BIAS_CON0_ADDR                               (POWER_BASE_ADDR_1 + BODY_BIAS_CON0_Offset)
#define BODY_BIAS_CON1_ADDR                               (POWER_BASE_ADDR_1 + BODY_BIAS_CON1_Offset)
#define BODY_BIAS_CON2_ADDR                               (POWER_BASE_ADDR_1 + BODY_BIAS_CON2_Offset)
#define BODY_BIAS_CON3_ADDR                               (POWER_BASE_ADDR_1 + BODY_BIAS_CON3_Offset)

#define INFORM0_ADDR                                      (POWER_BASE_ADDR_1 + INFORM0_Offset)
#define INFORM1_ADDR                                      (POWER_BASE_ADDR_1 + INFORM1_Offset)
#define INFORM2_ADDR                                      (POWER_BASE_ADDR_1 + INFORM2_Offset)
#define INFORM3_ADDR                                      (POWER_BASE_ADDR_1 + INFORM3_Offset)
#define INFORM4_ADDR                                      (POWER_BASE_ADDR_1 + INFORM4_Offset)
#define INFORM5_ADDR                                      (POWER_BASE_ADDR_1 + INFORM5_Offset)
#define INFORM6_ADDR                                      (POWER_BASE_ADDR_1 + INFORM6_Offset)
#define INFORM7_ADDR                                      (POWER_BASE_ADDR_1 + INFORM7_Offset)

#define IROM_DATA_REG0_ADDR                               (POWER_BASE_ADDR_1 + IROM_DATA_REG0_Offset)
#define IROM_DATA_REG1_ADDR                               (POWER_BASE_ADDR_1 + IROM_DATA_REG1_Offset)
#define IROM_DATA_REG2_ADDR                               (POWER_BASE_ADDR_1 + IROM_DATA_REG2_Offset)
#define IROM_DATA_REG3_ADDR                               (POWER_BASE_ADDR_1 + IROM_DATA_REG3_Offset)

#define PMU_DEBUG_ADDR                                    (POWER_BASE_ADDR_1 + PMU_DEBUG_Offset)

#define ARM_CORE0_SYS_PWR_REG_ADDR                        (POWER_BASE_ADDR_1 + ARM_CORE0_SYS_PWR_REG_Offset)
#define DIS_IRQ_ARM_CORE0_LOCAL_SYS_PWR_REG_ADDR          (POWER_BASE_ADDR_1 + DIS_IRQ_ARM_CORE0_LOCAL_SYS_PWR_REG_Offset)
#define DIS_IRQ_ARM_CORE0_CENTRAL_SYS_PWR_REG_ADDR        (POWER_BASE_ADDR_1 + DIS_IRQ_ARM_CORE0_CENTRAL_SYS_PWR_REG_Offset)

#define ARM_CORE1_SYS_PWR_REG_ADDR                        (POWER_BASE_ADDR_1 + ARM_CORE1_SYS_PWR_REG_Offset)
#define DIS_IRQ_ARM_CORE1_LOCAL_SYS_PWR_REG_ADDR          (POWER_BASE_ADDR_1 + DIS_IRQ_ARM_CORE1_LOCAL_SYS_PWR_REG_Offset)
#define DIS_IRQ_ARM_CORE1_CENTRAL_SYS_PWR_REG_ADDR        (POWER_BASE_ADDR_1 + DIS_IRQ_ARM_CORE1_CENTRAL_SYS_PWR_REG_Offset)

#define ISP_ARM_SYS_PWR_REG_ADDR                          (POWER_BASE_ADDR_1 + ISP_ARM_SYS_PWR_REG_Offset)
#define DIS_IRQ_ARM_LOCAL_SYS_PWR_REG_ADDR                (POWER_BASE_ADDR_1 + DIS_IRQ_ARM_LOCAL_SYS_PWR_REG_Offset)
#define DIS_IRQ_ARM_CENTRAL_SYS_PWR_REG_ADDR              (POWER_BASE_ADDR_1 + DIS_IRQ_ARM_CENTRAL_SYS_PWR_REG_Offset)

#define ARM_COMMON_SYS_PWR_REG_ADDR                       (POWER_BASE_ADDR_1 + ARM_COMMON_SYS_PWR_REG_Offset)
#define ARM_L2_0_SYS_PWR_REG_ADDR                         (POWER_BASE_ADDR_1 + ARM_L2_0_SYS_PWR_REG_Offset)
#define ARM_L2_1_SYS_PWR_REG_ADDR                         (POWER_BASE_ADDR_1 + ARM_L2_1_SYS_PWR_REG_Offset)

#define CMU_ACLKSTOP_SYS_PWR_REG_ADDR                     (POWER_BASE_ADDR_1 + CMU_ACLKSTOP_SYS_PWR_REG_Offset)
#define CMU_SCLKSTOP_SYS_PWR_REG_ADDR                     (POWER_BASE_ADDR_1 + CMU_SCLKSTOP_SYS_PWR_REG_Offset)
#define CMU_RESET_SYS_PWR_REG_ADDR                        (POWER_BASE_ADDR_1 + CMU_RESET_SYS_PWR_REG_Offset)

#define CMU_ACLKSTOP_COREBLK_SYS_PWR_REG_ADDR             (POWER_BASE_ADDR_1 + CMU_ACLKSTOP_COREBLK_SYS_PWR_REG_Offset)
#define CMU_SCLKSTOP_COREBLK_SYS_PWR_REG_ADDR             (POWER_BASE_ADDR_1 + CMU_SCLKSTOP_COREBLK_SYS_PWR_REG_Offset)
#define CMU_RESET_COREBLK_SYS_PWR_REG_ADDR                (POWER_BASE_ADDR_1 + CMU_RESET_COREBLK_SYS_PWR_REG_Offset)

#define APLL_SYSCLK_SYS_PWR_REG_ADDR                      (POWER_BASE_ADDR_1 + APLL_SYSCLK_SYS_PWR_REG_Offset)
#define MPLL_SYSCLK_SYS_PWR_REG_ADDR                      (POWER_BASE_ADDR_1 + MPLL_SYSCLK_SYS_PWR_REG_Offset)
#define VPLL_SYSCLK_SYS_PWR_REG_ADDR                      (POWER_BASE_ADDR_1 + VPLL_SYSCLK_SYS_PWR_REG_Offset)
#define EPLL_SYSCLK_SYS_PWR_REG_ADDR                      (POWER_BASE_ADDR_1 + EPLL_SYSCLK_SYS_PWR_REG_Offset)

#define MPLLUSER_SYSCLK_SYS_PWR_REG_ADDR                  (POWER_BASE_ADDR_1 + MPLLUSER_SYSCLK_SYS_PWR_REG_Offset)

#define CMU_CLKSTOP_GPS_ALIVE_SYS_PWR_REG_ADDR            (POWER_BASE_ADDR_1 + CMU_CLKSTOP_GPS_ALIVE_SYS_PWR_REG_Offset)
#define CMU_RESET_GPS_ALIVE_SYS_PWR_REG_ADDR              (POWER_BASE_ADDR_1 + CMU_RESET_GPS_ALIVE_SYS_PWR_REG_Offset)
#define CMU_CLKSTOP_CAM_ALIVE_SYS_PWR_REG_ADDR            (POWER_BASE_ADDR_1 + CMU_CLKSTOP_CAM_ALIVE_SYS_PWR_REG_Offset)
#define CMU_CLKSTOP_TV_ALIVE_SYS_PWR_REG_ADDR             (POWER_BASE_ADDR_1 + CMU_CLKSTOP_TV_ALIVE_SYS_PWR_REG_Offset)
#define CMU_CLKSTOP_MFC_ALIVE_SYS_PWR_REG_ADDR            (POWER_BASE_ADDR_1 + CMU_CLKSTOP_MFC_ALIVE_SYS_PWR_REG_Offset)
#define CMU_CLKSTOP_G3D_ALIVE_SYS_PWR_REG_ADDR            (POWER_BASE_ADDR_1 + CMU_CLKSTOP_G3D_ALIVE_SYS_PWR_REG_Offset)
#define CMU_CLKSTOP_LCD0_ALIVE_SYS_PWR_REG_ADDR           (POWER_BASE_ADDR_1 + CMU_CLKSTOP_LCD0_ALIVE_SYS_PWR_REG_Offset)
#define CMU_CLKSTOP_ISP_ALIVE_SYS_PWR_REG_ADDR            (POWER_BASE_ADDR_1 + CMU_CLKSTOP_ISP_ALIVE_SYS_PWR_REG_Offset)
#define CMU_CLKSTOP_MAUDIO_ALIVE_SYS_PWR_REG_ADDR         (POWER_BASE_ADDR_1 + CMU_CLKSTOP_MAUDIO_ALIVE_SYS_PWR_REG_Offset)
#define CMU_CLKSTOP_GPS_SYS_PWR_REG_ADDR                  (POWER_BASE_ADDR_1 + CMU_CLKSTOP_GPS_SYS_PWR_REG_Offset)
#define CMU_RESET_CAM_ALIVE_SYS_PWR_REG_ADDR              (POWER_BASE_ADDR_1 + CMU_RESET_CAM_ALIVE_SYS_PWR_REG_Offset)
#define CMU_RESET_TV_ALIVE_SYS_PWR_REG_ADDR               (POWER_BASE_ADDR_1 + CMU_RESET_TV_ALIVE_SYS_PWR_REG_Offset)
#define CMU_RESET_MFC_ALIVE_SYS_PWR_REG_ADDR              (POWER_BASE_ADDR_1 + CMU_RESET_MFC_ALIVE_SYS_PWR_REG_Offset)
#define CMU_RESET_G3D_ALIVE_SYS_PWR_REG_ADDR              (POWER_BASE_ADDR_1 + CMU_RESET_G3D_ALIVE_SYS_PWR_REG_Offset)
#define CMU_RESET_LCD0_ALIVE_SYS_PWR_REG_ADDR             (POWER_BASE_ADDR_1 + CMU_RESET_LCD0_ALIVE_SYS_PWR_REG_Offset)
#define CMU_RESET_ISP_ALIVE_SYS_PWR_REG_ADDR              (POWER_BASE_ADDR_1 + CMU_RESET_ISP_ALIVE_SYS_PWR_REG_Offset)
#define CMU_RESET_MAUDIO_ALIVE_SYS_PWR_REG_ADDR           (POWER_BASE_ADDR_1 + CMU_RESET_MAUDIO_ALIVE_SYS_PWR_REG_Offset)
#define CMU_RESET_GPS_SYS_PWR_REG_ADDR                    (POWER_BASE_ADDR_1 + CMU_RESET_GPS_SYS_PWR_REG_Offset)

#define TOP_BUS_SYS_PWR_REG_ADDR                          (POWER_BASE_ADDR_1 + TOP_BUS_SYS_PWR_REG_Offset)
#define TOP_RETENTION_SYS_PWR_REG_ADDR                    (POWER_BASE_ADDR_1 + TOP_RETENTION_SYS_PWR_REG_Offset)
#define TOP_PWR_SYS_PWR_REG_ADDR                          (POWER_BASE_ADDR_1 + TOP_PWR_SYS_PWR_REG_Offset)
#define TOP_BUS_COREBLK_SYS_PWR_REG_ADDR                  (POWER_BASE_ADDR_1 + TOP_BUS_COREBLK_SYS_PWR_REG_Offset)
#define TOP_RETENTION_COREBLK_SYS_PWR_REG_ADDR            (POWER_BASE_ADDR_1 + TOP_RETENTION_COREBLK_SYS_PWR_REG_Offset)
#define TOP_PWR_COREBLK_SYS_PWR_REG_ADDR                  (POWER_BASE_ADDR_1 + TOP_PWR_COREBLK_SYS_PWR_REG_Offset)

#define LOGIC_RESET_SYS_PWR_REG_ADDR                      (POWER_BASE_ADDR_1 + LOGIC_RESET_SYS_PWR_REG_Offset)
#define OSCCLK_GATE_SYS_PWR_REG_ADDR                      (POWER_BASE_ADDR_1 + OSCCLK_GATE_SYS_PWR_REG_Offset)
#define LOGIC_RESET_COREBLK_SYS_PWR_REG_ADDR              (POWER_BASE_ADDR_1 + LOGIC_RESET_COREBLK_SYS_PWR_REG_Offset)
#define OSCCLK_GATE_COREBLK_SYS_PWR_REG_ADDR              (POWER_BASE_ADDR_1 + OSCCLK_GATE_COREBLK_SYS_PWR_REG_Offset)

#define OneNANDXL_MEM_SYS_PWR_REG_ADDR                    (POWER_BASE_ADDR_1 + OneNANDXL_MEM_SYS_PWR_REG_Offset)
#define HSI_MEM_SYS_PWR_REG_ADDR                          (POWER_BASE_ADDR_1 + HSI_MEM_SYS_PWR_REG_Offset)
#define G2D_MEM_SYS_PWR_REG_ADDR                          (POWER_BASE_ADDR_1 + G2D_MEM_SYS_PWR_REG_Offset)
#define USBOTG_MEM_SYS_PWR_REG_ADDR                       (POWER_BASE_ADDR_1 + USBOTG_MEM_SYS_PWR_REG_Offset)
#define SDMMC_MEM_SYS_PWR_REG_ADDR                        (POWER_BASE_ADDR_1 + SDMMC_MEM_SYS_PWR_REG_Offset)
#define CSSYS_MEM_SYS_PWR_REG_ADDR                        (POWER_BASE_ADDR_1 + CSSYS_MEM_SYS_PWR_REG_Offset)
#define SECSS_MEM_SYS_PWR_REG_ADDR                        (POWER_BASE_ADDR_1 + SECSS_MEM_SYS_PWR_REG_Offset)
#define ROTATOR_MEM_SYS_PWR_REG_ADDR                      (POWER_BASE_ADDR_1 + ROTATOR_MEM_SYS_PWR_REG_Offset)

#define PAD_RETENTION_DRAM_SYS_PWR_REG_ADDR               (POWER_BASE_ADDR_1 + PAD_RETENTION_DRAM_SYS_PWR_REG_Offset)
#define PAD_RETENTION_MAUDIO_SYS_PWR_REG_ADDR             (POWER_BASE_ADDR_1 + PAD_RETENTION_MAUDIO_SYS_PWR_REG_Offset)
#define PAD_RETENTION_GPIO_SYS_PWR_REG_ADDR               (POWER_BASE_ADDR_1 + PAD_RETENTION_GPIO_SYS_PWR_REG_Offset)
#define PAD_RETENTION_UART_SYS_PWR_REG_ADDR               (POWER_BASE_ADDR_1 + PAD_RETENTION_UART_SYS_PWR_REG_Offset)
#define PAD_RETENTION_MMCA_SYS_PWR_REG_ADDR               (POWER_BASE_ADDR_1 + PAD_RETENTION_MMCA_SYS_PWR_REG_Offset)
#define PAD_RETENTION_MMCB_SYS_PWR_REG_ADDR               (POWER_BASE_ADDR_1 + PAD_RETENTION_MMCB_SYS_PWR_REG_Offset)
#define PAD_RETENTION_EBIA_SYS_PWR_REG_ADDR               (POWER_BASE_ADDR_1 + PAD_RETENTION_EBIA_SYS_PWR_REG_Offset)
#define PAD_RETENTION_EBIB_SYS_PWR_REG_ADDR               (POWER_BASE_ADDR_1 + PAD_RETENTION_EBIB_SYS_PWR_REG_Offset)
#define PAD_RETENTION_GPIO_COREBLK_SYS_PWR_REG_ADDR       (POWER_BASE_ADDR_1 + PAD_RETENTION_GPIO_COREBLK_SYS_PWR_REG_Offset)
#define PAD_ISOLATION_SYS_PWR_REG_ADDR                    (POWER_BASE_ADDR_1 + PAD_ISOLATION_SYS_PWR_REG_Offset)
#define PAD_ISOLATION_COREBLK_SYS_PWR_REG_ADDR            (POWER_BASE_ADDR_1 + PAD_ISOLATION_COREBLK_SYS_PWR_REG_Offset)
#define PAD_ALV_SEL_SYS_PWR_REG_ADDR                      (POWER_BASE_ADDR_1 + PAD_ALV_SEL_SYS_PWR_REG_Offset)

#define XUSBXTI_SYS_PWR_REG_ADDR                          (POWER_BASE_ADDR_1 + XUSBXTI_SYS_PWR_REG_Offset)
#define XXTI_SYS_PWR_REG_ADDR                             (POWER_BASE_ADDR_1 + XXTI_SYS_PWR_REG_Offset)
#define EXT_REGULATOR_SYS_PWR_REG_ADDR                    (POWER_BASE_ADDR_1 + EXT_REGULATOR_SYS_PWR_REG_Offset)
#define GPIO_MODE_SYS_PWR_REG_ADDR                        (POWER_BASE_ADDR_1 + GPIO_MODE_SYS_PWR_REG_Offset)
#define GPIO_MODE_COREBLK_SYS_PWR_REG_ADDR                (POWER_BASE_ADDR_1 + GPIO_MODE_COREBLK_SYS_PWR_REG_Offset)
#define GPIO_MODE_MAUDIO_SYS_PWR_REG_ADDR                 (POWER_BASE_ADDR_1 + GPIO_MODE_MAUDIO_SYS_PWR_REG_Offset)
#define TOP_ASB_RESET_SYS_PWR_REG_ADDR                    (POWER_BASE_ADDR_1 + TOP_ASB_RESET_SYS_PWR_REG_Offset)
#define TOP_ASB_ISOLATION_SYS_PWR_REG_ADDR                (POWER_BASE_ADDR_1 + TOP_ASB_ISOLATION_SYS_PWR_REG_Offset)

#define CAM_SYS_PWR_REG_ADDR                              (POWER_BASE_ADDR_1 + CAM_SYS_PWR_REG_Offset)
#define TV_SYS_PWR_REG_ADDR                               (POWER_BASE_ADDR_1 + TV_SYS_PWR_REG_Offset)
#define MFC_SYS_PWR_REG_ADDR                              (POWER_BASE_ADDR_1 + MFC_SYS_PWR_REG_Offset)
#define G3D_SYS_PWR_REG_ADDR                              (POWER_BASE_ADDR_1 + G3D_SYS_PWR_REG_Offset)
#define LCD0_SYS_PWR_REG_ADDR                             (POWER_BASE_ADDR_1 + LCD0_SYS_PWR_REG_Offset)
#define ISP_SYS_PWR_REG_ADDR                              (POWER_BASE_ADDR_1 + ISP_SYS_PWR_REG_Offset)
#define MAUDIO_SYS_PWR_REG_ADDR                           (POWER_BASE_ADDR_1 + MAUDIO_SYS_PWR_REG_Offset)
#define GPS_SYS_PWR_REG_ADDR                              (POWER_BASE_ADDR_1 + GPS_SYS_PWR_REG_Offset)
#define GPS_ALIVE_SYS_PWR_REG_ADDR                        (POWER_BASE_ADDR_1 + GPS_ALIVE_SYS_PWR_REG_Offset)
#define DRAM_FREQ_DOWN_SYS_PWR_REG_ADDR                   (POWER_BASE_ADDR_1 + DRAM_FREQ_DOWN_SYS_PWR_REG_Offset)
#define DDRPHY_DLLOFF_SYS_PWR_REG_ADDR                    (POWER_BASE_ADDR_1 + DDRPHY_DLLOFF_SYS_PWR_REG_Offset)

#define CMU_SYSCLK_ISP_SYS_PWR_REG_ADDR                   (POWER_BASE_ADDR_1 + CMU_SYSCLK_ISP_SYS_PWR_REG_Offset)
#define CMU_SYSCLK_GPS_SYS_PWR_REG_ADDR                   (POWER_BASE_ADDR_1 + CMU_SYSCLK_GPS_SYS_PWR_REG_Offset)
#define LPDDR_PHY_DLL_LOCK_SYS_PWR_REG_ADDR               (POWER_BASE_ADDR_1 + LPDDR_PHY_DLL_LOCK_SYS_PWR_REG_Offset)

#define ARM_CORE0_CONFIGURATION_ADDR                      (POWER_BASE_ADDR_1 + ARM_CORE0_CONFIGURATION_Offset)
#define ARM_CORE0_STATUS_ADDR                             (POWER_BASE_ADDR_1 + ARM_CORE0_STATUS_Offset)
#define ARM_CORE0_OPTION_ADDR                             (POWER_BASE_ADDR_1 + ARM_CORE0_OPTION_Offset)
#define ARM_CORE1_CONFIGURATION_ADDR                      (POWER_BASE_ADDR_1 + ARM_CORE1_CONFIGURATION_Offset)
#define ARM_CORE1_STATUS_ADDR                             (POWER_BASE_ADDR_1 + ARM_CORE1_STATUS_Offset)
#define ARM_CORE1_OPTION_ADDR                             (POWER_BASE_ADDR_1 + ARM_CORE1_OPTION_Offset)

#define ISP_ARM_OPTION_ADDR                               (POWER_BASE_ADDR_1 + ISP_ARM_OPTION_Offset)
#define ISP_ARM_CONFIGURATION_ADDR                        (POWER_BASE_ADDR_1 + ISP_ARM_CONFIGURATION_Offset)
#define ISP_ARM_STATUS_ADDR                               (POWER_BASE_ADDR_1 + ISP_ARM_STATUS_Offset)

#define ARM_COMMON_OPTION_ADDR                            (POWER_BASE_ADDR_1 + ARM_COMMON_OPTION_Offset)
#define ARM_L2_0_CONFIGURATION_ADDR                       (POWER_BASE_ADDR_1 + ARM_L2_0_CONFIGURATION_Offset)
#define ARM_L2_0_STATUS_ADDR                              (POWER_BASE_ADDR_1 + ARM_L2_0_STATUS_Offset)
#define ARM_L2_0_OPTION_ADDR                              (POWER_BASE_ADDR_1 + ARM_L2_0_OPTION_Offset)
#define ARM_L2_1_CONFIGURATION_ADDR                       (POWER_BASE_ADDR_1 + ARM_L2_1_CONFIGURATION_Offset)
#define ARM_L2_1_STATUS_ADDR                              (POWER_BASE_ADDR_1 + ARM_L2_1_STATUS_Offset)
#define ARM_L2_1_OPTION_ADDR                              (POWER_BASE_ADDR_1 + ARM_L2_1_OPTION_Offset)

#define DRAM_FREQ_DOWN_OPTION_ADDR                        (POWER_BASE_ADDR_1 + DRAM_FREQ_DOWN_OPTION_Offset)
#define DDRPHY_DLLOFF_OPTION_ADDR                         (POWER_BASE_ADDR_1 + DDRPHY_DLLOFF_OPTION_Offset)
#define OneNANDXL_MEM_OPTION_ADDR                         (POWER_BASE_ADDR_1 + OneNANDXL_MEM_OPTION_Offset)
#define HSI_MEM_OPTION_ADDR                               (POWER_BASE_ADDR_1 + HSI_MEM_OPTION_Offset)
#define G2D_MEM_OPTION_ADDR                               (POWER_BASE_ADDR_1 + G2D_MEM_OPTION_Offset)
#define USBOTG_MEM_OPTION_ADDR                            (POWER_BASE_ADDR_1 + USBOTG_MEM_OPTION_Offset)
#define SDMMC_MEM_OPTION_ADDR                             (POWER_BASE_ADDR_1 + SDMMC_MEM_OPTION_Offset)
#define CSSYS_MEM_OPTION_ADDR                             (POWER_BASE_ADDR_1 + CSSYS_MEM_OPTION_Offset)
#define SECSS_MEM_OPTION_ADDR                             (POWER_BASE_ADDR_1 + SECSS_MEM_OPTION_Offset)
#define ROTATOR_MEM_OPTION_ADDR                           (POWER_BASE_ADDR_1 + ROTATOR_MEM_OPTION_Offset)

#define PAD_RETENTION_MAUDIO_OPTION_ADDR                  (POWER_BASE_ADDR_1 + PAD_RETENTION_MAUDIO_OPTION_Offset)
#define PAD_RETENTION_GPIO_OPTION_ADDR                    (POWER_BASE_ADDR_1 + PAD_RETENTION_GPIO_OPTION_Offset)
#define PAD_RETENTION_UART_OPTION_ADDR                    (POWER_BASE_ADDR_1 + PAD_RETENTION_UART_OPTION_Offset)
#define PAD_RETENTION_MMCA_OPTION_ADDR                    (POWER_BASE_ADDR_1 + PAD_RETENTION_MMCA_OPTION_Offset)
#define PAD_RETENTION_MMCB_OPTION_ADDR                    (POWER_BASE_ADDR_1 + PAD_RETENTION_MMCB_OPTION_Offset)
#define PAD_RETENTION_EBIA_OPTION_ADDR                    (POWER_BASE_ADDR_1 + PAD_RETENTION_EBIA_OPTION_Offset)
#define PAD_RETENTION_EBIB_OPTION_ADDR                    (POWER_BASE_ADDR_1 + PAD_RETENTION_EBIB_OPTION_Offset)
#define PAD_RETENTION_GPIO_COREBLK_OPTION_ADDR            (POWER_BASE_ADDR_1 + PAD_RETENTION_GPIO_COREBLK_OPTION_Offset)

#define PS_HOLD_CONTROL_ADDR                              (POWER_BASE_ADDR_1 + PS_HOLD_CONTROL_Offset)

#define XUSBXTI_CONFIGURATION_ADDR                        (POWER_BASE_ADDR_1 + XUSBXTI_CONFIGURATION_Offset)
#define XUSBXTI_STATUS_ADDR                               (POWER_BASE_ADDR_1 + XUSBXTI_STATUS_Offset)
#define XUSBXTI_DURATION_ADDR                             (POWER_BASE_ADDR_1 + XUSBXTI_DURATION_Offset)

#define XXTI_CONFIGURATION_ADDR                           (POWER_BASE_ADDR_1 + XXTI_CONFIGURATION_Offset)
#define XXTI_STATUS_ADDR                                  (POWER_BASE_ADDR_1 + XXTI_STATUS_Offset)
#define XXTI_DURATION_ADDR                                (POWER_BASE_ADDR_1 + XXTI_DURATION_Offset)

#define EXT_REGULATOR_DURATION_ADDR                       (POWER_BASE_ADDR_1 + EXT_REGULATOR_DURATION_Offset)

#define CAM_CONFIGURATION_ADDR                            (POWER_BASE_ADDR_1 + CAM_CONFIGURATION_Offset)
#define CAM_STATUS_ADDR                                   (POWER_BASE_ADDR_1 + CAM_STATUS_Offset)
#define CAM_OPTION_ADDR                                   (POWER_BASE_ADDR_1 + CAM_OPTION_Offset)
#define TV_CONFIGURATION_ADDR                             (POWER_BASE_ADDR_1 + TV_CONFIGURATION_Offset)
#define TV_STATUS_ADDR                                    (POWER_BASE_ADDR_1 + TV_STATUS_Offset)
#define TV_OPTION_ADDR                                    (POWER_BASE_ADDR_1 + TV_OPTION_Offset)
#define MFC_CONFIGURATION_ADDR                            (POWER_BASE_ADDR_1 + MFC_CONFIGURATION_Offset)
#define MFC_STATUS_ADDR                                   (POWER_BASE_ADDR_1 + MFC_STATUS_Offset)
#define MFC_OPTION_ADDR                                   (POWER_BASE_ADDR_1 + MFC_OPTION_Offset)
#define G3D_CONFIGURATION_ADDR                            (POWER_BASE_ADDR_1 + G3D_CONFIGURATION_Offset)
#define G3D_STATUS_ADDR                                   (POWER_BASE_ADDR_1 + G3D_STATUS_Offset)
#define G3D_OPTION_ADDR                                   (POWER_BASE_ADDR_1 + G3D_OPTION_Offset)
#define LCD0_CONFIGURATION_ADDR                           (POWER_BASE_ADDR_1 + LCD0_CONFIGURATION_Offset)
#define LCD0_STATUS_ADDR                                  (POWER_BASE_ADDR_1 + LCD0_STATUS_Offset)
#define LCD0_OPTION_ADDR                                  (POWER_BASE_ADDR_1 + LCD0_OPTION_Offset)
#define ISP_CONFIGURATION_ADDR                            (POWER_BASE_ADDR_1 + ISP_CONFIGURATION_Offset)
#define ISP_STATUS_ADDR                                   (POWER_BASE_ADDR_1 + ISP_STATUS_Offset)
#define ISP_OPTION_ADDR                                   (POWER_BASE_ADDR_1 + ISP_OPTION_Offset)
#define ISP_DURATION0_ADDR                                (POWER_BASE_ADDR_1 + ISP_DURATION0_Offset)
#define ISP_DURATION2_ADDR                                (POWER_BASE_ADDR_1 + ISP_DURATION2_Offset)
#define MAUDIO_CONFIGURATION_ADDR                         (POWER_BASE_ADDR_1 + MAUDIO_CONFIGURATION_Offset)
#define MAUDIO_STATUS_ADDR                                (POWER_BASE_ADDR_1 + MAUDIO_STATUS_Offset)
#define MAUDIO_OPTION_ADDR                                (POWER_BASE_ADDR_1 + MAUDIO_OPTION_Offset)
#define GPS_CONFIGURATION_ADDR                            (POWER_BASE_ADDR_1 + GPS_CONFIGURATION_Offset)
#define GPS_STATUS_ADDR                                   (POWER_BASE_ADDR_1 + GPS_STATUS_Offset)
#define GPS_OPTION_ADDR                                   (POWER_BASE_ADDR_1 + GPS_OPTION_Offset)
#define GPS_ALIVE_CONFIGURATION_ADDR                      (POWER_BASE_ADDR_1 + GPS_ALIVE_CONFIGURATION_Offset)
#define GPS_ALIVE_STATUS_ADDR                             (POWER_BASE_ADDR_1 + GPS_ALIVE_STATUS_Offset)
#define GPS_ALIVE_OPTION_ADDR                             (POWER_BASE_ADDR_1 + GPS_ALIVE_OPTION_Offset)   

#pragma endregion

#endif