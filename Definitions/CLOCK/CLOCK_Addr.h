#ifndef __GPIO_GPIO_ADDR_H__    
#define __GPIO_GPIO_ADDR_H__  

#define CLOCK_BASE_ADDR_1 0x10030000
#define CLOCK_BASE_ADDR_2 0x10040000

#pragma region CLOCK BASE ADDR 1    

//////////////////////////////////////////////////////
//                  Offset Part                     //
//////////////////////////////////////////////////////
#define CLK_SRC_LEFTBUS_Offset                 0x4200
#define CLK_MUX_STAT_LEFTBUS_Offset            0x4400
#define CLK_DIV_LEFTBUS_Offset                 0x4500
#define CLK_DIV_STAT_LEFTBUS_Offset            0x4600
#define CLK_GATE_IP_LEFTUBS_Offset             0x4800
#define CLK_GATE_IP_IMAGE_Offset               0x4930
#define CLKOUT_CMU_LEFTBUS_Offset              0x4A00
#define CLKOUT_CMU_LEFTBUS_DIV_STAT_Offset     0x4A04

#define CLK_SRC_RIGHTBUS_Offset                0x8200
#define CLK_MUX_STAT_RIGHTBUS_Offset           0x8400
#define CLK_DIV_RIGHTBUS_Offset                0x8500
#define CLK_DIV_STAT_RIGHTBUS_Offset           0x8600
#define CLK_GATE_IP_RIGHTBUS_Offset            0x8800
#define CLK_GATE_IP_PERIR_Offset               0x8960
#define CLKOUT_CMU_RIGHTBUS_Offset             0x8A00
#define CLKOUT_CMU_RIGHTBUS_DIV_STAT_Offset    0x8A04

#define EPLL_LOCK_Offset                       0xC010
#define VPLL_LOCK_Offset                       0xC020

#define EPLL_CON0_Offset                       0xC110
#define EPLL_CON1_Offset                       0xC114
#define EPLL_CON2_Offset                       0xC118

#define VPLL_CON0_Offset                       0xC120
#define VPLL_CON1_Offset                       0xC124
#define VPLL_CON2_Offset                       0xC128

#define CLK_SRC_TOP0_Offset                    0xC210
#define CLK_SRC_TOP1_Offset                    0xC214

#define CLK_SRC_CAM0_Offset                    0xC220
#define CLK_SRC_TV_Offset                      0xC224
#define CLK_SRC_MFC_Offset                     0xC228
#define CLK_SRC_G3D_Offset                     0xC22C
#define CLK_SRC_LCD_Offset                     0xC234
#define CLK_SRC_ISP_Offset                     0xC238
#define CLK_SRC_MAUDIO_Offset                  0xC23C
#define CLK_SRC_FSYS_Offset                    0xC240
#define CLK_SRC_PERIL0_Offset                  0xC250
#define CLK_SRC_PERIL1_Offset                  0xC254
#define CLK_SRC_CAM1_Offset                    0xC258

#define CLK_SRC_MASK_CAM0_Offset               0xC320
#define CLK_SRC_MASK_TV_Offset                 0xC324
#define CLK_SRC_MASK_LCD_Offset                0xC334
#define CLK_SRC_MASK_ISP_Offset                0xC338
#define CLK_SRC_MASK_MAUDIO_Offset             0xC33C
#define CLK_SRC_MASK_FSYS_Offset               0xC340
#define CLK_SRC_MASK_PERIL0_Offset             0xC350
#define CLK_SRC_MASK_PERIL1_Offset             0xC354

#define CLK_MUX_STAT_TOP0_Offset               0xC410
#define CLK_MUX_STAT_TOP1_Offset               0xC414
#define CLK_MUX_STAT_MFC_Offset                0xC428
#define CLK_MUX_STAT_G3D_Offset                0xC42C
#define CLK_MUX_STAT_CAM1_Offset               0xC458

#define CLK_DIV_TOP_Offset                     0xC510
#define CLK_DIV_CAM0_Offset                    0xC520
#define CLK_DIV_TV_Offset                      0xC524
#define CLK_DIV_MFC_Offset                     0xC528
#define CLK_DIV_G3D_Offset                     0xC52C
#define CLK_DIV_LCD_Offset                     0xC534
#define CLK_DIV_ISP_Offset                     0xC538
#define CLK_DIV_MAUDIO_Offset                  0xC53C
#define CLK_DIV_FSYS0_Offset                   0xC540
#define CLK_DIV_FSYS1_Offset                   0xC544
#define CLK_DIV_FSYS2_Offset                   0xC548
#define CLK_DIV_FSYS3_Offset                   0xC54C
#define CLK_DIV_PERIL0_Offset                  0xC550
#define CLK_DIV_PERIL1_Offset                  0xC554
#define CLK_DIV_PERIL2_Offset                  0xC558
#define CLK_DIV_PERIL3_Offset                  0xC55C
#define CLK_DIV_PERIL4_Offset                  0xC560
#define CLK_DIV_PERIL5_Offset                  0xC564
#define CLK_DIV_CAM1_Offset                    0xC568

#define CLKDIV2_RATIO_Offset                   0xC580

#define CLK_DIV_STAT_TOP_Offset                0xC610
#define CLK_DIV_STAT_CAM0_Offset               0xC620
#define CLK_DIV_STAT_TV_Offset                 0xC624
#define CLK_DIV_STAT_MFC_Offset                0xC628
#define CLK_DIV_STAT_G3D_Offset                0xC62C
#define CLK_DIV_STAT_LCD_Offset                0xC634
#define CLK_DIV_STAT_ISP_Offset                0xC638
#define CLK_DIV_STAT_MAUDIO_Offset             0xC63C
#define CLK_DIV_STAT_FSYS0_Offset              0xC640
#define CLK_DIV_STAT_FSYS1_Offset              0xC644
#define CLK_DIV_STAT_FSYS2_Offset              0xC648
#define CLK_DIV_STAT_FSYS3_Offset              0xC64C
#define CLK_DIV_STAT_PERIL0_Offset             0xC650
#define CLK_DIV_STAT_PERIL1_Offset             0xC654
#define CLK_DIV_STAT_PERIL2_Offset             0xC658
#define CLK_DIV_STAT_PERIL3_Offset             0xC65C
#define CLK_DIV_STAT_PERIL4_Offset             0xC660
#define CLK_DIV_STAT_PERIL5_Offset             0xC664
#define CLK_DIV_STAT_CAM1_Offset               0xC668

#define CLKDIV2_STAT_Offset                    0xC680

#define CLK_GATE_BUS_FSYS1_Offset              0xC744
#define CLK_GATE_IP_CAM_Offset                 0xC920
#define CLK_GATE_IP_TV_Offset                  0xC924
#define CLK_GATE_IP_MFC_Offset                 0xC928
#define CLK_GATE_IP_G3D_Offset                 0xC92C
#define CLK_GATE_IP_LCD_Offset                 0xC934
#define CLK_GATE_IP_ISP_Offset                 0xC938
#define CLK_GATE_IP_FSYS_Offset                0xC940
#define CLK_GATE_IP_GPS_Offset                 0xC94C
#define CLK_GATE_IP_PERIL_Offset               0xC950

#define CLK_GATE_BLOCK_Offset                  0xC970

#define CLKOUT_CMU_TOP_Offset                  0xCA00
#define CLKOUT_CMU_TOP_DIV_STAT_Offset         0xCA04

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define CLK_SRC_LEFTBUS_ADDR                 (CLOCK_BASE_ADDR_1 + CLK_SRC_LEFTBUS_Offset)
#define CLK_MUX_STAT_LEFTBUS_ADDR            (CLOCK_BASE_ADDR_1 + CLK_MUX_STAT_LEFTBUS_Offset)
#define CLK_DIV_LEFTBUS_ADDR                 (CLOCK_BASE_ADDR_1 + CLK_DIV_LEFTBUS_Offset)
#define CLK_DIV_STAT_LEFTBUS_ADDR            (CLOCK_BASE_ADDR_1 + CLK_DIV_STAT_LEFTBUS_Offset)
#define CLK_GATE_IP_LEFTUBS_ADDR             (CLOCK_BASE_ADDR_1 + CLK_GATE_IP_LEFTUBS_Offset)
#define CLK_GATE_IP_IMAGE_ADDR               (CLOCK_BASE_ADDR_1 + CLK_GATE_IP_IMAGE_Offset)
#define CLKOUT_CMU_LEFTBUS_ADDR              (CLOCK_BASE_ADDR_1 + CLKOUT_CMU_LEFTBUS_Offset)
#define CLKOUT_CMU_LEFTBUS_DIV_STAT_ADDR     (CLOCK_BASE_ADDR_1 + CLKOUT_CMU_LEFTBUS_DIV_STAT_Offset)

#define CLK_SRC_RIGHTBUS_ADDR                (CLOCK_BASE_ADDR_1 + CLK_SRC_RIGHTBUS_Offset)
#define CLK_MUX_STAT_RIGHTBUS_ADDR           (CLOCK_BASE_ADDR_1 + CLK_MUX_STAT_RIGHTBUS_Offset)
#define CLK_DIV_RIGHTBUS_ADDR                (CLOCK_BASE_ADDR_1 + CLK_DIV_RIGHTBUS_Offset)
#define CLK_DIV_STAT_RIGHTBUS_ADDR           (CLOCK_BASE_ADDR_1 + CLK_DIV_STAT_RIGHTBUS_Offset)
#define CLK_GATE_IP_RIGHTBUS_ADDR            (CLOCK_BASE_ADDR_1 + CLK_GATE_IP_RIGHTBUS_Offset)
#define CLK_GATE_IP_PERIR_ADDR               (CLOCK_BASE_ADDR_1 + CLK_GATE_IP_PERIR_Offset)
#define CLKOUT_CMU_RIGHTBUS_ADDR             (CLOCK_BASE_ADDR_1 + CLKOUT_CMU_RIGHTBUS_Offset)
#define CLKOUT_CMU_RIGHTBUS_DIV_STAT_ADDR    (CLOCK_BASE_ADDR_1 + CLKOUT_CMU_RIGHTBUS_DIV_STAT_Offset)

#define EPLL_LOCK_ADDR                       (CLOCK_BASE_ADDR_1 + EPLL_LOCK_Offset)
#define VPLL_LOCK_ADDR                       (CLOCK_BASE_ADDR_1 + VPLL_LOCK_Offset)

#define EPLL_CON0_ADDR                       (CLOCK_BASE_ADDR_1 + EPLL_CON0_Offset)
#define EPLL_CON1_ADDR                       (CLOCK_BASE_ADDR_1 + EPLL_CON1_Offset)
#define EPLL_CON2_ADDR                       (CLOCK_BASE_ADDR_1 + EPLL_CON2_Offset)

#define VPLL_CON0_ADDR                       (CLOCK_BASE_ADDR_1 + VPLL_CON0_Offset)
#define VPLL_CON1_ADDR                       (CLOCK_BASE_ADDR_1 + VPLL_CON1_Offset)
#define VPLL_CON2_ADDR                       (CLOCK_BASE_ADDR_1 + VPLL_CON2_Offset)

#define CLK_SRC_TOP0_ADDR                    (CLOCK_BASE_ADDR_1 + CLK_SRC_TOP0_Offset)
#define CLK_SRC_TOP1_ADDR                    (CLOCK_BASE_ADDR_1 + CLK_SRC_TOP1_Offset)

#define CLK_SRC_CAM0_ADDR                    (CLOCK_BASE_ADDR_1 + CLK_SRC_CAM0_Offset)
#define CLK_SRC_TV_ADDR                      (CLOCK_BASE_ADDR_1 + CLK_SRC_TV_Offset)
#define CLK_SRC_MFC_ADDR                     (CLOCK_BASE_ADDR_1 + CLK_SRC_MFC_Offset)
#define CLK_SRC_G3D_ADDR                     (CLOCK_BASE_ADDR_1 + CLK_SRC_G3D_Offset)
#define CLK_SRC_LCD_ADDR                     (CLOCK_BASE_ADDR_1 + CLK_SRC_LCD_Offset)
#define CLK_SRC_ISP_ADDR                     (CLOCK_BASE_ADDR_1 + CLK_SRC_ISP_Offset)
#define CLK_SRC_MAUDIO_ADDR                  (CLOCK_BASE_ADDR_1 + CLK_SRC_MAUDIO_Offset)
#define CLK_SRC_FSYS_ADDR                    (CLOCK_BASE_ADDR_1 + CLK_SRC_FSYS_Offset)
#define CLK_SRC_PERIL0_ADDR                  (CLOCK_BASE_ADDR_1 + CLK_SRC_PERIL0_Offset)
#define CLK_SRC_PERIL1_ADDR                  (CLOCK_BASE_ADDR_1 + CLK_SRC_PERIL1_Offset)
#define CLK_SRC_CAM1_ADDR                    (CLOCK_BASE_ADDR_1 + CLK_SRC_CAM1_Offset)

#define CLK_SRC_MASK_CAM0_ADDR               (CLOCK_BASE_ADDR_1 + CLK_SRC_MASK_CAM0_Offset)
#define CLK_SRC_MASK_TV_ADDR                 (CLOCK_BASE_ADDR_1 + CLK_SRC_MASK_TV_Offset)
#define CLK_SRC_MASK_LCD_ADDR                (CLOCK_BASE_ADDR_1 + CLK_SRC_MASK_LCD_Offset)
#define CLK_SRC_MASK_ISP_ADDR                (CLOCK_BASE_ADDR_1 + CLK_SRC_MASK_ISP_Offset)
#define CLK_SRC_MASK_MAUDIO_ADDR             (CLOCK_BASE_ADDR_1 + CLK_SRC_MASK_MAUDIO_Offset)
#define CLK_SRC_MASK_FSYS_ADDR               (CLOCK_BASE_ADDR_1 + CLK_SRC_MASK_FSYS_Offset)
#define CLK_SRC_MASK_PERIL0_ADDR             (CLOCK_BASE_ADDR_1 + CLK_SRC_MASK_PERIL0_Offset)
#define CLK_SRC_MASK_PERIL1_ADDR             (CLOCK_BASE_ADDR_1 + CLK_SRC_MASK_PERIL1_Offset)

#define CLK_MUX_STAT_TOP0_ADDR               (CLOCK_BASE_ADDR_1 + CLK_MUX_STAT_TOP0_Offset)
#define CLK_MUX_STAT_TOP1_ADDR               (CLOCK_BASE_ADDR_1 + CLK_MUX_STAT_TOP1_Offset)
#define CLK_MUX_STAT_MFC_ADDR                (CLOCK_BASE_ADDR_1 + CLK_MUX_STAT_MFC_Offset)
#define CLK_MUX_STAT_G3D_ADDR                (CLOCK_BASE_ADDR_1 + CLK_MUX_STAT_G3D_Offset)
#define CLK_MUX_STAT_CAM1_ADDR               (CLOCK_BASE_ADDR_1 + CLK_MUX_STAT_CAM1_Offset)

#define CLK_DIV_TOP_ADDR                     (CLOCK_BASE_ADDR_1 + CLK_DIV_TOP_Offset)
#define CLK_DIV_CAM0_ADDR                    (CLOCK_BASE_ADDR_1 + CLK_DIV_CAM0_Offset)
#define CLK_DIV_TV_ADDR                      (CLOCK_BASE_ADDR_1 + CLK_DIV_TV_Offset)
#define CLK_DIV_MFC_ADDR                     (CLOCK_BASE_ADDR_1 + CLK_DIV_MFC_Offset)
#define CLK_DIV_G3D_ADDR                     (CLOCK_BASE_ADDR_1 + CLK_DIV_G3D_Offset)
#define CLK_DIV_LCD_ADDR                     (CLOCK_BASE_ADDR_1 + CLK_DIV_LCD_Offset)
#define CLK_DIV_ISP_ADDR                     (CLOCK_BASE_ADDR_1 + CLK_DIV_ISP_Offset)
#define CLK_DIV_MAUDIO_ADDR                  (CLOCK_BASE_ADDR_1 + CLK_DIV_MAUDIO_Offset)
#define CLK_DIV_FSYS0_ADDR                   (CLOCK_BASE_ADDR_1 + CLK_DIV_FSYS0_Offset)
#define CLK_DIV_FSYS1_ADDR                   (CLOCK_BASE_ADDR_1 + CLK_DIV_FSYS1_Offset)
#define CLK_DIV_FSYS2_ADDR                   (CLOCK_BASE_ADDR_1 + CLK_DIV_FSYS2_Offset)
#define CLK_DIV_FSYS3_ADDR                   (CLOCK_BASE_ADDR_1 + CLK_DIV_FSYS3_Offset)
#define CLK_DIV_PERIL0_ADDR                  (CLOCK_BASE_ADDR_1 + CLK_DIV_PERIL0_Offset)
#define CLK_DIV_PERIL1_ADDR                  (CLOCK_BASE_ADDR_1 + CLK_DIV_PERIL1_Offset)
#define CLK_DIV_PERIL2_ADDR                  (CLOCK_BASE_ADDR_1 + CLK_DIV_PERIL2_Offset)
#define CLK_DIV_PERIL3_ADDR                  (CLOCK_BASE_ADDR_1 + CLK_DIV_PERIL3_Offset)
#define CLK_DIV_PERIL4_ADDR                  (CLOCK_BASE_ADDR_1 + CLK_DIV_PERIL4_Offset)
#define CLK_DIV_PERIL5_ADDR                  (CLOCK_BASE_ADDR_1 + CLK_DIV_PERIL5_Offset)
#define CLK_DIV_CAM1_ADDR                    (CLOCK_BASE_ADDR_1 + CLK_DIV_CAM1_Offset)

#define CLKDIV2_RATIO_ADDR                   (CLOCK_BASE_ADDR_1 + CLKDIV2_RATIO_Offset)

#define CLK_DIV_STAT_TOP_ADDR                (CLOCK_BASE_ADDR_1 + CLK_DIV_STAT_TOP_Offset)
#define CLK_DIV_STAT_CAM0_ADDR               (CLOCK_BASE_ADDR_1 + CLK_DIV_STAT_CAM0_Offset)
#define CLK_DIV_STAT_TV_ADDR                 (CLOCK_BASE_ADDR_1 + CLK_DIV_STAT_TV_Offset)
#define CLK_DIV_STAT_MFC_ADDR                (CLOCK_BASE_ADDR_1 + CLK_DIV_STAT_MFC_Offset)
#define CLK_DIV_STAT_G3D_ADDR                (CLOCK_BASE_ADDR_1 + CLK_DIV_STAT_G3D_Offset)
#define CLK_DIV_STAT_LCD_ADDR                (CLOCK_BASE_ADDR_1 + CLK_DIV_STAT_LCD_Offset)
#define CLK_DIV_STAT_ISP_ADDR                (CLOCK_BASE_ADDR_1 + CLK_DIV_STAT_ISP_Offset)
#define CLK_DIV_STAT_MAUDIO_ADDR             (CLOCK_BASE_ADDR_1 + CLK_DIV_STAT_MAUDIO_Offset)
#define CLK_DIV_STAT_FSYS0_ADDR              (CLOCK_BASE_ADDR_1 + CLK_DIV_STAT_FSYS0_Offset)
#define CLK_DIV_STAT_FSYS1_ADDR              (CLOCK_BASE_ADDR_1 + CLK_DIV_STAT_FSYS1_Offset)
#define CLK_DIV_STAT_FSYS2_ADDR              (CLOCK_BASE_ADDR_1 + CLK_DIV_STAT_FSYS2_Offset)
#define CLK_DIV_STAT_FSYS3_ADDR              (CLOCK_BASE_ADDR_1 + CLK_DIV_STAT_FSYS3_Offset)
#define CLK_DIV_STAT_PERIL0_ADDR             (CLOCK_BASE_ADDR_1 + CLK_DIV_STAT_PERIL0_Offset)
#define CLK_DIV_STAT_PERIL1_ADDR             (CLOCK_BASE_ADDR_1 + CLK_DIV_STAT_PERIL1_Offset)
#define CLK_DIV_STAT_PERIL2_ADDR             (CLOCK_BASE_ADDR_1 + CLK_DIV_STAT_PERIL2_Offset)
#define CLK_DIV_STAT_PERIL3_ADDR             (CLOCK_BASE_ADDR_1 + CLK_DIV_STAT_PERIL3_Offset)
#define CLK_DIV_STAT_PERIL4_ADDR             (CLOCK_BASE_ADDR_1 + CLK_DIV_STAT_PERIL4_Offset)
#define CLK_DIV_STAT_PERIL5_ADDR             (CLOCK_BASE_ADDR_1 + CLK_DIV_STAT_PERIL5_Offset)
#define CLK_DIV_STAT_CAM1_ADDR               (CLOCK_BASE_ADDR_1 + CLK_DIV_STAT_CAM1_Offset)

#define CLKDIV2_STAT_ADDR                    (CLOCK_BASE_ADDR_1 + CLKDIV2_STAT_Offset)

#define CLK_GATE_BUS_FSYS1_ADDR              (CLOCK_BASE_ADDR_1 + CLK_GATE_BUS_FSYS1_Offset)
#define CLK_GATE_IP_CAM_ADDR                 (CLOCK_BASE_ADDR_1 + CLK_GATE_IP_CAM_Offset)
#define CLK_GATE_IP_TV_ADDR                  (CLOCK_BASE_ADDR_1 + CLK_GATE_IP_TV_Offset)
#define CLK_GATE_IP_MFC_ADDR                 (CLOCK_BASE_ADDR_1 + CLK_GATE_IP_MFC_Offset)
#define CLK_GATE_IP_G3D_ADDR                 (CLOCK_BASE_ADDR_1 + CLK_GATE_IP_G3D_Offset)
#define CLK_GATE_IP_LCD_ADDR                 (CLOCK_BASE_ADDR_1 + CLK_GATE_IP_LCD_Offset)
#define CLK_GATE_IP_ISP_ADDR                 (CLOCK_BASE_ADDR_1 + CLK_GATE_IP_ISP_Offset)
#define CLK_GATE_IP_FSYS_ADDR                (CLOCK_BASE_ADDR_1 + CLK_GATE_IP_FSYS_Offset)
#define CLK_GATE_IP_GPS_ADDR                 (CLOCK_BASE_ADDR_1 + CLK_GATE_IP_GPS_Offset)
#define CLK_GATE_IP_PERIL_ADDR               (CLOCK_BASE_ADDR_1 + CLK_GATE_IP_PERIL_Offset)

#define CLK_GATE_BLOCK_ADDR                  (CLOCK_BASE_ADDR_1 + CLK_GATE_BLOCK_Offset)

#define CLKOUT_CMU_TOP_ADDR                  (CLOCK_BASE_ADDR_1 + CLKOUT_CMU_TOP_Offset)
#define CLKOUT_CMU_TOP_DIV_STAT_ADDR         (CLOCK_BASE_ADDR_1 + CLKOUT_CMU_TOP_DIV_STAT_Offset)

#pragma endregion

#pragma region CLOCK BASE ADDR 2    

//////////////////////////////////////////////////////
//                  Offset Part                     //
//////////////////////////////////////////////////////
#define MPLL_LOCK_Offset                 0x0008
#define MPLL_CON0_Offset                 0x0108
#define MPLL_CON1_Offset                 0x010C

#define CLK_SRC_DMC_Offset               0x0200
#define CLK_SRC_MASK_DMC_Offset          0x0300
#define CLK_MUX_STAT_DMC_Offset          0x0400
#define CLK_DIV_DMC0_Offset              0x0500
#define CLK_DIV_DMC0_Offset              0x0504
#define CLK_DIV_STAT_DMC0_Offset         0x0600
#define CLK_DIV_STAT_DMC1_Offset         0x0604
#define CLK_GATE_BUS_DMC0_Offset         0x0700
#define CLK_GATE_BUS_DMC1_Offset         0x0704
#define CLK_GATE_IP_DMC0_Offset          0x0900
#define CLK_GATE_IP_DMC1_Offset          0x0904
#define CLKOUT_CMU_DMC_Offset            0x0A00
#define CLKOUT_CMU_DMC_DIV_STAT_Offset   0x0A04

#define DCGIDX_MAP0_Offset               0x1000
#define DCGIDX_MAP1_Offset               0x1004
#define DCGIDX_MAP2_Offset               0x1008

#define DCGPERF_MAP0_Offset              0x1020
#define DCGPERF_MAP1_Offset              0x1024

#define DVCIDX_MAP_Offset                0x1040

#define FREQ_CPU_Offset                  0x1060
#define FREQ_DPM_Offset                  0x1064

#define DVSEMCLK_EN_Offset               0x1080

#define MAXPERF_Offset                   0x1084

#define DMC_PAUSE_CTRL_Offset            0x1094
#define DDRPHY_LOCK_CTRL_Offset          0x1098

#define C2C_STATE_Offset                 0x109C

#define APLL_LOCK_Offset                 0x4000
#define APLL_CON0_Offset                 0x4100
#define APLL_CON1_Offset                 0x4104

#define CLK_SRC_CPU_Offset               0x4200
#define CLK_MUX_STAT_CPU_Offset          0x4400
#define CLK_DIV_CPU0_Offset              0x4500
#define CLK_DIV_CPU1_Offset              0x4504
#define CLK_DIV_STAT_CPU0_Offset         0x4600
#define CLK_DIV_STAT_CPU1_Offset         0x4604
#define CLK_GATE_IP_CPU_Offset           0x4900
#define CLKOUT_CMU_CPU_Offset            0x4A00
#define CLKOUT_CMU_CPU_DIV_STAT_Offset   0x4A04

#define ARMCLK_STOPCTRL_Offset           0x5000
#define ATCLK_STOPCTRL_Offset            0x5004

#define PWR_CTRL_Offset                  0x5020
#define PWR_CTRL2_Offset                 0x5024

#define L2_STATUS_Offset                 0x5400
#define CPU_STATUS_Offset                0x5410
#define PTM_STATUS_Offset                0x5420

#define CLK_DIV_ISP0_Offset              0x8300
#define CLK_DIV_ISP0_Offset              0x8304
#define CLK_DIV_STAT_ISP0_Offset         0x8400
#define CLK_DIV_STAT_ISP1_Offset         0x8404
#define CLK_GATE_IP_ISP0_Offset          0x8800
#define CLK_GATE_IP_ISP1_Offset          0x8804
#define CLKOUT_CMU_ISP_Offset            0x8A00
#define CLKOUT_CMU_ISP_DIV_STAT_Offset   0x8A04

#define CMU_ISP_SPARE0_Offset            0x8B00
#define CMU_ISP_SPARE1_Offset            0x8B04
#define CMU_ISP_SPARE2_Offset            0x8B08
#define CMU_ISP_SPARE3_Offset            0x8B0C

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define MPLL_LOCK_ADDR                 (CLOCK_BASE_ADDR_2 + MPLL_LOCK_Offset)
#define MPLL_CON0_ADDR                 (CLOCK_BASE_ADDR_2 + MPLL_CON0_Offset)
#define MPLL_CON1_ADDR                 (CLOCK_BASE_ADDR_2 + MPLL_CON1_Offset)

#define CLK_SRC_DMC_ADDR               (CLOCK_BASE_ADDR_2 + CLK_SRC_DMC_Offset)
#define CLK_SRC_MASK_DMC_ADDR          (CLOCK_BASE_ADDR_2 + CLK_SRC_MASK_DMC_Offset)
#define CLK_MUX_STAT_DMC_ADDR          (CLOCK_BASE_ADDR_2 + CLK_MUX_STAT_DMC_Offset)
#define CLK_DIV_DMC0_ADDR              (CLOCK_BASE_ADDR_2 + CLK_DIV_DMC0_Offset)
#define CLK_DIV_DMC0_ADDR              (CLOCK_BASE_ADDR_2 + CLK_DIV_DMC0_Offset)
#define CLK_DIV_STAT_DMC0_ADDR         (CLOCK_BASE_ADDR_2 + CLK_DIV_STAT_DMC0_Offset)
#define CLK_DIV_STAT_DMC1_ADDR         (CLOCK_BASE_ADDR_2 + CLK_DIV_STAT_DMC1_Offset)
#define CLK_GATE_BUS_DMC0_ADDR         (CLOCK_BASE_ADDR_2 + CLK_GATE_BUS_DMC0_Offset)
#define CLK_GATE_BUS_DMC1_ADDR         (CLOCK_BASE_ADDR_2 + CLK_GATE_BUS_DMC1_Offset)
#define CLK_GATE_IP_DMC0_ADDR          (CLOCK_BASE_ADDR_2 + CLK_GATE_IP_DMC0_Offset)
#define CLK_GATE_IP_DMC1_ADDR          (CLOCK_BASE_ADDR_2 + CLK_GATE_IP_DMC1_Offset)
#define CLKOUT_CMU_DMC_ADDR            (CLOCK_BASE_ADDR_2 + CLKOUT_CMU_DMC_Offset)
#define CLKOUT_CMU_DMC_DIV_STAT_ADDR   (CLOCK_BASE_ADDR_2 + CLKOUT_CMU_DMC_DIV_STAT_Offset)

#define DCGIDX_MAP0_ADDR               (CLOCK_BASE_ADDR_2 + DCGIDX_MAP0_Offset)
#define DCGIDX_MAP1_ADDR               (CLOCK_BASE_ADDR_2 + DCGIDX_MAP1_Offset)
#define DCGIDX_MAP2_ADDR               (CLOCK_BASE_ADDR_2 + DCGIDX_MAP2_Offset)

#define DCGPERF_MAP0_ADDR              (CLOCK_BASE_ADDR_2 + DCGPERF_MAP0_Offset)
#define DCGPERF_MAP1_ADDR              (CLOCK_BASE_ADDR_2 + DCGPERF_MAP1_Offset)

#define DVCIDX_MAP_ADDR                (CLOCK_BASE_ADDR_2 + DVCIDX_MAP_Offset)

#define FREQ_CPU_ADDR                  (CLOCK_BASE_ADDR_2 + FREQ_CPU_Offset)
#define FREQ_DPM_ADDR                  (CLOCK_BASE_ADDR_2 + FREQ_DPM_Offset)

#define DVSEMCLK_EN_ADDR               (CLOCK_BASE_ADDR_2 + DVSEMCLK_EN_Offset)

#define MAXPERF_ADDR                   (CLOCK_BASE_ADDR_2 + MAXPERF_Offset)

#define DMC_PAUSE_CTRL_ADDR            (CLOCK_BASE_ADDR_2 + DMC_PAUSE_CTRL_Offset)
#define DDRPHY_LOCK_CTRL_ADDR          (CLOCK_BASE_ADDR_2 + DDRPHY_LOCK_CTRL_Offset)

#define C2C_STATE_ADDR                 (CLOCK_BASE_ADDR_2 + C2C_STATE_Offset)

#define APLL_LOCK_ADDR                 (CLOCK_BASE_ADDR_2 + APLL_LOCK_Offset)
#define APLL_CON0_ADDR                 (CLOCK_BASE_ADDR_2 + APLL_CON0_Offset)
#define APLL_CON1_ADDR                 (CLOCK_BASE_ADDR_2 + APLL_CON1_Offset)

#define CLK_SRC_CPU_ADDR               (CLOCK_BASE_ADDR_2 + CLK_SRC_CPU_Offset)
#define CLK_MUX_STAT_CPU_ADDR          (CLOCK_BASE_ADDR_2 + CLK_MUX_STAT_CPU_Offset)
#define CLK_DIV_CPU0_ADDR              (CLOCK_BASE_ADDR_2 + CLK_DIV_CPU0_Offset)
#define CLK_DIV_CPU1_ADDR              (CLOCK_BASE_ADDR_2 + CLK_DIV_CPU1_Offset)
#define CLK_DIV_STAT_CPU0_ADDR         (CLOCK_BASE_ADDR_2 + CLK_DIV_STAT_CPU0_Offset)
#define CLK_DIV_STAT_CPU1_ADDR         (CLOCK_BASE_ADDR_2 + CLK_DIV_STAT_CPU1_Offset)
#define CLK_GATE_IP_CPU_ADDR           (CLOCK_BASE_ADDR_2 + CLK_GATE_IP_CPU_Offset)
#define CLKOUT_CMU_CPU_ADDR            (CLOCK_BASE_ADDR_2 + CLKOUT_CMU_CPU_Offset)
#define CLKOUT_CMU_CPU_DIV_STAT_ADDR   (CLOCK_BASE_ADDR_2 + CLKOUT_CMU_CPU_DIV_STAT_Offset)

#define ARMCLK_STOPCTRL_ADDR           (CLOCK_BASE_ADDR_2 + ARMCLK_STOPCTRL_Offset)
#define ATCLK_STOPCTRL_ADDR            (CLOCK_BASE_ADDR_2 + ATCLK_STOPCTRL_Offset)

#define PWR_CTRL_ADDR                  (CLOCK_BASE_ADDR_2 + PWR_CTRL_Offset)
#define PWR_CTRL2_ADDR                 (CLOCK_BASE_ADDR_2 + PWR_CTRL2_Offset)

#define L2_STATUS_ADDR                 (CLOCK_BASE_ADDR_2 + L2_STATUS_Offset)
#define CPU_STATUS_ADDR                (CLOCK_BASE_ADDR_2 + CPU_STATUS_Offset)
#define PTM_STATUS_ADDR                (CLOCK_BASE_ADDR_2 + PTM_STATUS_Offset)

#define CLK_DIV_ISP0_ADDR              (CLOCK_BASE_ADDR_2 + CLK_DIV_ISP0_Offset)
#define CLK_DIV_ISP0_ADDR              (CLOCK_BASE_ADDR_2 + CLK_DIV_ISP0_Offset)
#define CLK_DIV_STAT_ISP0_ADDR         (CLOCK_BASE_ADDR_2 + CLK_DIV_STAT_ISP0_Offset)
#define CLK_DIV_STAT_ISP1_ADDR         (CLOCK_BASE_ADDR_2 + CLK_DIV_STAT_ISP1_Offset)
#define CLK_GATE_IP_ISP0_ADDR          (CLOCK_BASE_ADDR_2 + CLK_GATE_IP_ISP0_Offset)
#define CLK_GATE_IP_ISP1_ADDR          (CLOCK_BASE_ADDR_2 + CLK_GATE_IP_ISP1_Offset)
#define CLKOUT_CMU_ISP_ADDR            (CLOCK_BASE_ADDR_2 + CLKOUT_CMU_ISP_Offset)
#define CLKOUT_CMU_ISP_DIV_STAT_ADDR   (CLOCK_BASE_ADDR_2 + CLKOUT_CMU_ISP_DIV_STAT_Offset)

#define CMU_ISP_SPARE0_ADDR            (CLOCK_BASE_ADDR_2 + CMU_ISP_SPARE0_Offset)
#define CMU_ISP_SPARE1_ADDR            (CLOCK_BASE_ADDR_2 + CMU_ISP_SPARE1_Offset)
#define CMU_ISP_SPARE2_ADDR            (CLOCK_BASE_ADDR_2 + CMU_ISP_SPARE2_Offset)
#define CMU_ISP_SPARE3_ADDR            (CLOCK_BASE_ADDR_2 + CMU_ISP_SPARE3_Offset)

#pragma endregion

#endif