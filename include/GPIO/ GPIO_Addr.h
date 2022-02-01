#ifndef __GPIO_GPIO_ADDR_H__     
#define __GPIO_GPIO_ADDR_H__       

#define GPIO_BASE_ADDR_1 0x11400000     
#define GPIO_BASE_ADDR_2 0x11000000     
#define GPIO_BASE_ADDR_3 0x03860000     
#define GPIO_BASE_ADDR_4 0x106E0000     

#pragma region GPIO BASE ADDR 1     

//////////////////////////////////////////////////////
//                  Offset Part                     //
//////////////////////////////////////////////////////
#define GPA0CON_Offset                     0x0000
#define GPA0DAT_Offset                     0x0004
#define GPA0PUD_Offset                     0x0008
#define GPA0DRV_Offset                     0x000C
#define GPA0CONPDN_Offset                  0x0010
#define GPA0PUDPDN_Offset                  0x0014

#define GPA1CON_Offset                     0x0020
#define GPA1DAT_Offset                     0x0024
#define GPA1PUD_Offset                     0x0028
#define GPA1DRV_Offset                     0x002C
#define GPA1CONPDN_Offset                  0x0030
#define GPA1PUDPDN_Offset                  0x0034

#define GPBCON_Offset                      0x0040
#define GPBDAT_Offset                      0x0044
#define GPBPUD_Offset                      0x0048
#define GPBDRV_Offset                      0x004C
#define GPBCONPDN_Offset                   0x0050
#define GPBPUDPDN_Offset                   0x0054

#define GPC0CON_Offset                     0x0060
#define GPC0DAT_Offset                     0x0064
#define GPC0PUD_Offset                     0x0068
#define GPC0DRV_Offset                     0x006C
#define GPC0CONPDN_Offset                  0x0070
#define GPC0PUDPDN_Offset                  0x0074

#define GPC1CON_Offset                     0x0080
#define GPC1DAT_Offset                     0x0084
#define GPC1PUD_Offset                     0x0088
#define GPC1DRV_Offset                     0x008C
#define GPC1CONPDN_Offset                  0x0090
#define GPC1PUDPDN_Offset                  0x0094

#define GPD0CON_Offset                     0x00A0
#define GPD0DAT_Offset                     0x00A4
#define GPD0PUD_Offset                     0x00A8
#define GPD0DRV_Offset                     0x00AC
#define GPD0CONPDN_Offset                  0x00B0
#define GPD0PUDPDN_Offset                  0x00B4

#define GPD1CON_Offset                     0x00C0
#define GPD1DAT_Offset                     0x00C4
#define GPD1PUD_Offset                     0x00C8
#define GPD1DRV_Offset                     0x00CC
#define GPD1CONPDN_Offset                  0x00D0
#define GPD1PUDPDN_Offset                  0x00D4

#define GPF0CON_Offset                     0x0180
#define GPF0DAT_Offset                     0x0184
#define GPF0PUD_Offset                     0x0188
#define GPF0DRV_Offset                     0x018C
#define GPF0CONPDN_Offset                  0x0190
#define GPF0PUDPDN_Offset                  0x0194

#define GPF1CON_Offset                     0x01A0
#define GPF1DAT_Offset                     0x01A4
#define GPF1PUD_Offset                     0x01A8
#define GPF1DRV_Offset                     0x01AC
#define GPF1CONPDN_Offset                  0x01B0
#define GPF1PUDPDN_Offset                  0x01B4

#define GPF2CON_Offset                     0x01C0
#define GPF2DAT_Offset                     0x01C4
#define GPF2PUD_Offset                     0x01C8
#define GPF2DRV_Offset                     0x01CC
#define GPF2CONPDN_Offset                  0x01D0
#define GPF2PUDPDN_Offset                  0x01D4

#define GPF3CON_Offset                     0x01E0
#define GPF3DAT_Offset                     0x01E4
#define GPF3PUD_Offset                     0x01E8
#define GPF3DRV_Offset                     0x01EC
#define GPF3CONPDN_Offset                  0x01F0
#define GPF3PUDPDN_Offset                  0x01F4

#define ETC1PUD_Offset                     0x0228
#define ETC1DRV_Offset                     0x022C

#define GPJ0CON_Offset                     0x0240
#define GPJ0DAT_Offset                     0x0244
#define GPJ0PUD_Offset                     0x0248
#define GPJ0DRV_Offset                     0x024C
#define GPJ0CONPDN_Offset                  0x0250
#define GPJ0PUDPDN_Offset                  0x0254

#define GPJ1CON_Offset                     0x0260
#define GPJ1DAT_Offset                     0x0264
#define GPJ1PUD_Offset                     0x0268
#define GPJ1DRV_Offset                     0x026C
#define GPJ1CONPDN_Offset                  0x0270
#define GPJ1PUDPDN_Offset                  0x0274

#define EXT_INT1_CON_Offset                0x0700
#define EXT_INT2_CON_Offset                0x0704
#define EXT_INT3_CON_Offset                0x0708
#define EXT_INT4_CON_Offset                0x070C
#define EXT_INT5_CON_Offset                0x0710
#define EXT_INT6_CON_Offset                0x0714
#define EXT_INT7_CON_Offset                0x0718
#define EXT_INT13_CON_Offset               0x0730
#define EXT_INT14_CON_Offset               0x0734
#define EXT_INT15_CON_Offset               0x0738
#define EXT_INT16_CON_Offset               0x073C
#define EXT_INT21_CON_Offset               0x0740
#define EXT_INT22_CON_Offset               0x0744

#define EXT_INT1_FLTCON0_Offset            0x0800
#define EXT_INT1_FLTCON1_Offset            0x0804
#define EXT_INT2_FLTCON0_Offset            0x0808
#define EXT_INT2_FLTCON1_Offset            0x080C
#define EXT_INT3_FLTCON0_Offset            0x0810
#define EXT_INT3_FLTCON1_Offset            0x0814
#define EXT_INT4_FLTCON0_Offset            0x0818
#define EXT_INT4_FLTCON1_Offset            0x081C
#define EXT_INT5_FLTCON0_Offset            0x0820
#define EXT_INT5_FLTCON1_Offset            0x0824
#define EXT_INT6_FLTCON0_Offset            0x0828
#define EXT_INT6_FLTCON1_Offset            0x082C
#define EXT_INT7_FLTCON0_Offset            0x0830
#define EXT_INT7_FLTCON1_Offset            0x0834
#define EXT_INT13_FLTCON0_Offset           0x0860
#define EXT_INT13_FLTCON1_Offset           0x0864
#define EXT_INT14_FLTCON0_Offset           0x0868
#define EXT_INT14_FLTCON1_Offset           0x086C
#define EXT_INT15_FLTCON0_Offset           0x0870
#define EXT_INT15_FLTCON1_Offset           0x0874
#define EXT_INT16_FLTCON0_Offset           0x0878
#define EXT_INT16_FLTCON1_Offset           0x087C
#define EXT_INT21_FLTCON0_Offset           0x0880
#define EXT_INT21_FLTCON1_Offset           0x0884
#define EXT_INT22_FLTCON0_Offset           0x0888
#define EXT_INT22_FLTCON1_Offset           0x088C

#define EXT_INT1_MASK_Offset               0x0900
#define EXT_INT2_MASK_Offset               0x0904
#define EXT_INT3_MASK_Offset               0x0908
#define EXT_INT4_MASK_Offset               0x090C
#define EXT_INT5_MASK_Offset               0x0910
#define EXT_INT6_MASK_Offset               0x0914
#define EXT_INT7_MASK_Offset               0x0918
#define EXT_INT13_MASK_Offset              0x0930
#define EXT_INT14_MASK_Offset              0x0934
#define EXT_INT15_MASK_Offset              0x0938
#define EXT_INT16_MASK_Offset              0x093C
#define EXT_INT21_MASK_Offset              0x0940
#define EXT_INT22_MASK_Offset              0x0944

#define EXT_INT1_PEND_Offset               0x0A00
#define EXT_INT2_PEND_Offset               0x0A04
#define EXT_INT3_PEND_Offset               0x0A08
#define EXT_INT4_PEND_Offset               0x0A0C
#define EXT_INT5_PEND_Offset               0x0A10
#define EXT_INT6_PEND_Offset               0x0A14
#define EXT_INT7_PEND_Offset               0x0A18
#define EXT_INT13_PEND_Offset              0x0A30
#define EXT_INT14_PEND_Offset              0x0A34
#define EXT_INT15_PEND_Offset              0x0A38
#define EXT_INT16_PEND_Offset              0x0A3C
#define EXT_INT21_PEND_Offset              0x0A40
#define EXT_INT22_PEND_Offset              0x0A44

#define EXT_INT_SERVICE_XB_Offset          0x0B08
#define EXT_INT_SERVICE_PEND_XB_Offset     0x0B0C
#define EXT_INT_GRPFIXPRI_XB_Offset        0x0B10

#define EXT_INT1_FIXPRI_Offset             0x0B14
#define EXT_INT2_FIXPRI_Offset             0x0B18
#define EXT_INT3_FIXPRI_Offset             0x0B1C
#define EXT_INT4_FIXPRI_Offset             0x0B20
#define EXT_INT5_FIXPRI_Offset             0x0B24
#define EXT_INT6_FIXPRI_Offset             0x0B28
#define EXT_INT7_FIXPRI_Offset             0x0B2C
#define EXT_INT13_FIXPRI_Offset            0x0B44
#define EXT_INT14_FIXPRI_Offset            0x0B48
#define EXT_INT15_FIXPRI_Offset            0x0B4C
#define EXT_INT16_FIXPRI_Offset            0x0B50
#define EXT_INT21_FIXPRI_Offset            0x0B54
#define EXT_INT22_FIXPRI_Offset            0x0B58

#define BASE_ADDR_1_PDNEN_Offset           0x0F80

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define GPA0CON_ADDR                       (GPIO_BASE_ADDR_1 + GPA0CON_Offset)
#define GPA0DAT_ADDR                       (GPIO_BASE_ADDR_1 + GPA0DAT_Offset)
#define GPA0PUD_ADDR                       (GPIO_BASE_ADDR_1 + GPA0PUD_Offset)
#define GPA0DRV_ADDR                       (GPIO_BASE_ADDR_1 + GPA0DRV_Offset)
#define GPA0CONPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPA0CONPDN_Offset)
#define GPA0PUDPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPA0PUDPDN_Offset)

#define GPA1CON_ADDR                       (GPIO_BASE_ADDR_1 + GPA1CON_Offset)
#define GPA1DAT_ADDR                       (GPIO_BASE_ADDR_1 + GPA1DAT_Offset)
#define GPA1PUD_ADDR                       (GPIO_BASE_ADDR_1 + GPA1PUD_Offset)
#define GPA1DRV_ADDR                       (GPIO_BASE_ADDR_1 + GPA1DRV_Offset)
#define GPA1CONPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPA1CONPDN_Offset)
#define GPA1PUDPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPA1PUDPDN_Offset)

#define GPBCON_ADDR                        (GPIO_BASE_ADDR_1 + GPBCON_Offset)
#define GPBDAT_ADDR                        (GPIO_BASE_ADDR_1 + GPBDAT_Offset)
#define GPBPUD_ADDR                        (GPIO_BASE_ADDR_1 + GPBPUD_Offset)
#define GPBDRV_ADDR                        (GPIO_BASE_ADDR_1 + GPBDRV_Offset)
#define GPBCONPDN_ADDR                     (GPIO_BASE_ADDR_1 + GPBCONPDN_Offset)
#define GPBPUDPDN_ADDR                     (GPIO_BASE_ADDR_1 + GPBPUDPDN_Offset)

#define GPC0CON_ADDR                       (GPIO_BASE_ADDR_1 + GPC0CON_Offset)
#define GPC0DAT_ADDR                       (GPIO_BASE_ADDR_1 + GPC0DAT_Offset)
#define GPC0PUD_ADDR                       (GPIO_BASE_ADDR_1 + GPC0PUD_Offset)
#define GPC0DRV_ADDR                       (GPIO_BASE_ADDR_1 + GPC0DRV_Offset)
#define GPC0CONPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPC0CONPDN_Offset)
#define GPC0PUDPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPC0PUDPDN_Offset)

#define GPC1CON_ADDR                       (GPIO_BASE_ADDR_1 + GPC1CON_Offset)     
#define GPC1DAT_ADDR                       (GPIO_BASE_ADDR_1 + GPC1DAT_Offset)     
#define GPC1PUD_ADDR                       (GPIO_BASE_ADDR_1 + GPC1PUD_Offset)     
#define GPC1DRV_ADDR                       (GPIO_BASE_ADDR_1 + GPC1DRV_Offset)     
#define GPC1CONPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPC1CONPDN_Offset)     
#define GPC1PUDPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPC1PUDPDN_Offset)     

#define GPD0CON_ADDR                       (GPIO_BASE_ADDR_1 + GPD0CON_Offset)     
#define GPD0DAT_ADDR                       (GPIO_BASE_ADDR_1 + GPD0DAT_Offset)     
#define GPD0PUD_ADDR                       (GPIO_BASE_ADDR_1 + GPD0PUD_Offset)     
#define GPD0DRV_ADDR                       (GPIO_BASE_ADDR_1 + GPD0DRV_Offset)     
#define GPD0CONPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPD0CONPDN_Offset)     
#define GPD0PUDPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPD0PUDPDN_Offset)     

#define GPD1CON_ADDR                       (GPIO_BASE_ADDR_1 + GPD1CON_Offset)     
#define GPD1DAT_ADDR                       (GPIO_BASE_ADDR_1 + GPD1DAT_Offset)     
#define GPD1PUD_ADDR                       (GPIO_BASE_ADDR_1 + GPD1PUD_Offset)     
#define GPD1DRV_ADDR                       (GPIO_BASE_ADDR_1 + GPD1DRV_Offset)     
#define GPD1CONPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPD1CONPDN_Offset)     
#define GPD1PUDPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPD1PUDPDN_Offset)     

#define GPF0CON_ADDR                       (GPIO_BASE_ADDR_1 + GPF0CON_Offset)     
#define GPF0DAT_ADDR                       (GPIO_BASE_ADDR_1 + GPF0DAT_Offset)     
#define GPF0PUD_ADDR                       (GPIO_BASE_ADDR_1 + GPF0PUD_Offset)     
#define GPF0DRV_ADDR                       (GPIO_BASE_ADDR_1 + GPF0DRV_Offset)     
#define GPF0CONPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPF0CONPDN_Offset)     
#define GPF0PUDPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPF0PUDPDN_Offset)     

#define GPF1CON_ADDR                       (GPIO_BASE_ADDR_1 + GPF1CON_Offset)     
#define GPF1DAT_ADDR                       (GPIO_BASE_ADDR_1 + GPF1DAT_Offset)     
#define GPF1PUD_ADDR                       (GPIO_BASE_ADDR_1 + GPF1PUD_Offset)     
#define GPF1DRV_ADDR                       (GPIO_BASE_ADDR_1 + GPF1DRV_Offset)     
#define GPF1CONPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPF1CONPDN_Offset)     
#define GPF1PUDPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPF1PUDPDN_Offset)     

#define GPF2CON_ADDR                       (GPIO_BASE_ADDR_1 + GPF2CON_Offset)     
#define GPF2DAT_ADDR                       (GPIO_BASE_ADDR_1 + GPF2DAT_Offset)     
#define GPF2PUD_ADDR                       (GPIO_BASE_ADDR_1 + GPF2PUD_Offset)     
#define GPF2DRV_ADDR                       (GPIO_BASE_ADDR_1 + GPF2DRV_Offset)     
#define GPF2CONPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPF2CONPDN_Offset)     
#define GPF2PUDPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPF2PUDPDN_Offset)     

#define GPF3CON_ADDR                       (GPIO_BASE_ADDR_1 + GPF3CON_Offset)     
#define GPF3DAT_ADDR                       (GPIO_BASE_ADDR_1 + GPF3DAT_Offset)     
#define GPF3PUD_ADDR                       (GPIO_BASE_ADDR_1 + GPF3PUD_Offset)     
#define GPF3DRV_ADDR                       (GPIO_BASE_ADDR_1 + GPF3DRV_Offset)     
#define GPF3CONPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPF3CONPDN_Offset)     
#define GPF3PUDPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPF3PUDPDN_Offset)     

#define ETC1PUD_ADDR                       (GPIO_BASE_ADDR_1 + ETC1PUD_Offset)     
#define ETC1DRV_ADDR                       (GPIO_BASE_ADDR_1 + ETC1DRV_Offset)     

#define GPJ0CON_ADDR                       (GPIO_BASE_ADDR_1 + GPJ0CON_Offset)     
#define GPJ0DAT_ADDR                       (GPIO_BASE_ADDR_1 + GPJ0DAT_Offset)     
#define GPJ0PUD_ADDR                       (GPIO_BASE_ADDR_1 + GPJ0PUD_Offset)     
#define GPJ0DRV_ADDR                       (GPIO_BASE_ADDR_1 + GPJ0DRV_Offset)     
#define GPJ0CONPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPJ0CONPDN_Offset)     
#define GPJ0PUDPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPJ0PUDPDN_Offset)     

#define GPJ1CON_ADDR                       (GPIO_BASE_ADDR_1 + GPJ1CON_Offset)     
#define GPJ1DAT_ADDR                       (GPIO_BASE_ADDR_1 + GPJ1DAT_Offset)     
#define GPJ1PUD_ADDR                       (GPIO_BASE_ADDR_1 + GPJ1PUD_Offset)     
#define GPJ1DRV_ADDR                       (GPIO_BASE_ADDR_1 + GPJ1DRV_Offset)     
#define GPJ1CONPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPJ1CONPDN_Offset)     
#define GPJ1PUDPDN_ADDR                    (GPIO_BASE_ADDR_1 + GPJ1PUDPDN_Offset)     

#define EXT_INT1_CON_ADDR                  (GPIO_BASE_ADDR_1 + EXT_INT1_CON_Offset)     
#define EXT_INT2_CON_ADDR                  (GPIO_BASE_ADDR_1 + EXT_INT2_CON_Offset)     
#define EXT_INT3_CON_ADDR                  (GPIO_BASE_ADDR_1 + EXT_INT3_CON_Offset)     
#define EXT_INT4_CON_ADDR                  (GPIO_BASE_ADDR_1 + EXT_INT4_CON_Offset)     
#define EXT_INT5_CON_ADDR                  (GPIO_BASE_ADDR_1 + EXT_INT5_CON_Offset)     
#define EXT_INT6_CON_ADDR                  (GPIO_BASE_ADDR_1 + EXT_INT6_CON_Offset)     
#define EXT_INT7_CON_ADDR                  (GPIO_BASE_ADDR_1 + EXT_INT7_CON_Offset)     
#define EXT_INT13_CON_ADDR                 (GPIO_BASE_ADDR_1 + EXT_INT13_CON_Offset)     
#define EXT_INT14_CON_ADDR                 (GPIO_BASE_ADDR_1 + EXT_INT14_CON_Offset)     
#define EXT_INT15_CON_ADDR                 (GPIO_BASE_ADDR_1 + EXT_INT15_CON_Offset)     
#define EXT_INT16_CON_ADDR                 (GPIO_BASE_ADDR_1 + EXT_INT16_CON_Offset)     
#define EXT_INT21_CON_ADDR                 (GPIO_BASE_ADDR_1 + EXT_INT21_CON_Offset)     
#define EXT_INT22_CON_ADDR                 (GPIO_BASE_ADDR_1 + EXT_INT22_CON_Offset)     

#define EXT_INT1_FLTCON0_ADDR              (GPIO_BASE_ADDR_1 + EXT_INT1_FLTCON0_Offset)     
#define EXT_INT1_FLTCON1_ADDR              (GPIO_BASE_ADDR_1 + EXT_INT1_FLTCON1_Offset)     
#define EXT_INT2_FLTCON0_ADDR              (GPIO_BASE_ADDR_1 + EXT_INT2_FLTCON0_Offset)     
#define EXT_INT2_FLTCON1_ADDR              (GPIO_BASE_ADDR_1 + EXT_INT2_FLTCON1_Offset)     
#define EXT_INT3_FLTCON0_ADDR              (GPIO_BASE_ADDR_1 + EXT_INT3_FLTCON0_Offset)     
#define EXT_INT3_FLTCON1_ADDR              (GPIO_BASE_ADDR_1 + EXT_INT3_FLTCON1_Offset)     
#define EXT_INT4_FLTCON0_ADDR              (GPIO_BASE_ADDR_1 + EXT_INT4_FLTCON0_Offset)     
#define EXT_INT4_FLTCON1_ADDR              (GPIO_BASE_ADDR_1 + EXT_INT4_FLTCON1_Offset)     
#define EXT_INT5_FLTCON0_ADDR              (GPIO_BASE_ADDR_1 + EXT_INT5_FLTCON0_Offset)     
#define EXT_INT5_FLTCON1_ADDR              (GPIO_BASE_ADDR_1 + EXT_INT5_FLTCON1_Offset)     
#define EXT_INT6_FLTCON0_ADDR              (GPIO_BASE_ADDR_1 + EXT_INT6_FLTCON0_Offset)     
#define EXT_INT6_FLTCON1_ADDR              (GPIO_BASE_ADDR_1 + EXT_INT6_FLTCON1_Offset)     
#define EXT_INT7_FLTCON0_ADDR              (GPIO_BASE_ADDR_1 + EXT_INT7_FLTCON0_Offset)     
#define EXT_INT7_FLTCON1_ADDR              (GPIO_BASE_ADDR_1 + EXT_INT7_FLTCON1_Offset)     
#define EXT_INT13_FLTCON0_ADDR             (GPIO_BASE_ADDR_1 + EXT_INT13_FLTCON0_Offset)     
#define EXT_INT13_FLTCON1_ADDR             (GPIO_BASE_ADDR_1 + EXT_INT13_FLTCON1_Offset)     
#define EXT_INT14_FLTCON0_ADDR             (GPIO_BASE_ADDR_1 + EXT_INT14_FLTCON0_Offset)     
#define EXT_INT14_FLTCON1_ADDR             (GPIO_BASE_ADDR_1 + EXT_INT14_FLTCON1_Offset)     
#define EXT_INT15_FLTCON0_ADDR             (GPIO_BASE_ADDR_1 + EXT_INT15_FLTCON0_Offset)     
#define EXT_INT15_FLTCON1_ADDR             (GPIO_BASE_ADDR_1 + EXT_INT15_FLTCON1_Offset)     
#define EXT_INT16_FLTCON0_ADDR             (GPIO_BASE_ADDR_1 + EXT_INT16_FLTCON0_Offset)     
#define EXT_INT16_FLTCON1_ADDR             (GPIO_BASE_ADDR_1 + EXT_INT16_FLTCON1_Offset)     
#define EXT_INT21_FLTCON0_ADDR             (GPIO_BASE_ADDR_1 + EXT_INT21_FLTCON0_Offset)     
#define EXT_INT21_FLTCON1_ADDR             (GPIO_BASE_ADDR_1 + EXT_INT21_FLTCON1_Offset)     
#define EXT_INT22_FLTCON0_ADDR             (GPIO_BASE_ADDR_1 + EXT_INT22_FLTCON0_Offset)     
#define EXT_INT22_FLTCON1_ADDR             (GPIO_BASE_ADDR_1 + EXT_INT22_FLTCON1_Offset)     

#define EXT_INT1_MASK_ADDR                 (GPIO_BASE_ADDR_1 + EXT_INT1_MASK_Offset)     
#define EXT_INT2_MASK_ADDR                 (GPIO_BASE_ADDR_1 + EXT_INT2_MASK_Offset)     
#define EXT_INT3_MASK_ADDR                 (GPIO_BASE_ADDR_1 + EXT_INT3_MASK_Offset)     
#define EXT_INT4_MASK_ADDR                 (GPIO_BASE_ADDR_1 + EXT_INT4_MASK_Offset)     
#define EXT_INT5_MASK_ADDR                 (GPIO_BASE_ADDR_1 + EXT_INT5_MASK_Offset)     
#define EXT_INT6_MASK_ADDR                 (GPIO_BASE_ADDR_1 + EXT_INT6_MASK_Offset)     
#define EXT_INT7_MASK_ADDR                 (GPIO_BASE_ADDR_1 + EXT_INT7_MASK_Offset)     
#define EXT_INT13_MASK_ADDR                (GPIO_BASE_ADDR_1 + EXT_INT13_MASK_Offset)     
#define EXT_INT14_MASK_ADDR                (GPIO_BASE_ADDR_1 + EXT_INT14_MASK_Offset)     
#define EXT_INT15_MASK_ADDR                (GPIO_BASE_ADDR_1 + EXT_INT15_MASK_Offset)     
#define EXT_INT16_MASK_ADDR                (GPIO_BASE_ADDR_1 + EXT_INT16_MASK_Offset)     
#define EXT_INT21_MASK_ADDR                (GPIO_BASE_ADDR_1 + EXT_INT21_MASK_Offset)     
#define EXT_INT22_MASK_ADDR                (GPIO_BASE_ADDR_1 + EXT_INT22_MASK_Offset)     

#define EXT_INT1_PEND_ADDR                 (GPIO_BASE_ADDR_1 + EXT_INT1_PEND_Offset)     
#define EXT_INT2_PEND_ADDR                 (GPIO_BASE_ADDR_1 + EXT_INT2_PEND_Offset)     
#define EXT_INT3_PEND_ADDR                 (GPIO_BASE_ADDR_1 + EXT_INT3_PEND_Offset)     
#define EXT_INT4_PEND_ADDR                 (GPIO_BASE_ADDR_1 + EXT_INT4_PEND_Offset)     
#define EXT_INT5_PEND_ADDR                 (GPIO_BASE_ADDR_1 + EXT_INT5_PEND_Offset)     
#define EXT_INT6_PEND_ADDR                 (GPIO_BASE_ADDR_1 + EXT_INT6_PEND_Offset)     
#define EXT_INT7_PEND_ADDR                 (GPIO_BASE_ADDR_1 + EXT_INT7_PEND_Offset)     
#define EXT_INT13_PEND_ADDR                (GPIO_BASE_ADDR_1 + EXT_INT13_PEND_Offset)     
#define EXT_INT14_PEND_ADDR                (GPIO_BASE_ADDR_1 + EXT_INT14_PEND_Offset)     
#define EXT_INT15_PEND_ADDR                (GPIO_BASE_ADDR_1 + EXT_INT15_PEND_Offset)     
#define EXT_INT16_PEND_ADDR                (GPIO_BASE_ADDR_1 + EXT_INT16_PEND_Offset)     
#define EXT_INT21_PEND_ADDR                (GPIO_BASE_ADDR_1 + EXT_INT21_PEND_Offset)     
#define EXT_INT22_PEND_ADDR                (GPIO_BASE_ADDR_1 + EXT_INT22_PEND_Offset)     

#define EXT_INT_SERVICE_XB_ADDR            (GPIO_BASE_ADDR_1 + EXT_INT_SERVICE_XB_Offset)     
#define EXT_INT_SERVICE_PEND_XB_ADDR       (GPIO_BASE_ADDR_1 + EXT_INT_SERVICE_PEND_XB_Offset)
#define EXT_INT_GRPFIXPRI_XB_ADDR          (GPIO_BASE_ADDR_1 + EXT_INT_GRPFIXPRI_XB_Offset)

#define EXT_INT1_FIXPRI_ADDR               (GPIO_BASE_ADDR_1 + EXT_INT1_FIXPRI_Offset)     
#define EXT_INT2_FIXPRI_ADDR               (GPIO_BASE_ADDR_1 + EXT_INT2_FIXPRI_Offset)     
#define EXT_INT3_FIXPRI_ADDR               (GPIO_BASE_ADDR_1 + EXT_INT3_FIXPRI_Offset)     
#define EXT_INT4_FIXPRI_ADDR               (GPIO_BASE_ADDR_1 + EXT_INT4_FIXPRI_Offset)     
#define EXT_INT5_FIXPRI_ADDR               (GPIO_BASE_ADDR_1 + EXT_INT5_FIXPRI_Offset)     
#define EXT_INT6_FIXPRI_ADDR               (GPIO_BASE_ADDR_1 + EXT_INT6_FIXPRI_Offset)     
#define EXT_INT7_FIXPRI_ADDR               (GPIO_BASE_ADDR_1 + EXT_INT7_FIXPRI_Offset)     
#define EXT_INT13_FIXPRI_ADDR              (GPIO_BASE_ADDR_1 + EXT_INT13_FIXPRI_Offset)     
#define EXT_INT14_FIXPRI_ADDR              (GPIO_BASE_ADDR_1 + EXT_INT14_FIXPRI_Offset)     
#define EXT_INT15_FIXPRI_ADDR              (GPIO_BASE_ADDR_1 + EXT_INT15_FIXPRI_Offset)     
#define EXT_INT16_FIXPRI_ADDR              (GPIO_BASE_ADDR_1 + EXT_INT16_FIXPRI_Offset)     
#define EXT_INT21_FIXPRI_ADDR              (GPIO_BASE_ADDR_1 + EXT_INT21_FIXPRI_Offset)     
#define EXT_INT22_FIXPRI_ADDR              (GPIO_BASE_ADDR_1 + EXT_INT22_FIXPRI_Offset)     

#define BASE_ADDR_1_PDNEN_ADDR             (GPIO_BASE_ADDR_1 + BASE_ADDR_1_PDNEN_Offset)   

#pragma endregion       

#pragma region GPIO BASE ADDR 2     

//////////////////////////////////////////////////////
//                  Offset Part                     //
//////////////////////////////////////////////////////
#define GPK0CON_Offset                     0x0040
#define GPK0DAT_Offset                     0x0044
#define GPK0PUD_Offset                     0x0048
#define GPK0DRV_Offset                     0x004C
#define GPK0CONPDN_Offset                  0x0050
#define GPK0PUDPDN_Offset                  0x0054

#define GPK1CON_Offset                     0x0060
#define GPK1DAT_Offset                     0x0064
#define GPK1PUD_Offset                     0x0068
#define GPK1DRV_Offset                     0x006C
#define GPK1CONPDN_Offset                  0x0070
#define GPK1PUDPDN_Offset                  0x0074

#define GPK2CON_Offset                     0x0080
#define GPK2DAT_Offset                     0x0084
#define GPK2PUD_Offset                     0x0088
#define GPK2DRV_Offset                     0x008C
#define GPK2CONPDN_Offset                  0x0090
#define GPK2PUDPDN_Offset                  0x0094

#define GPK3CON_Offset                     0x00A0
#define GPK3DAT_Offset                     0x00A4
#define GPK3PUD_Offset                     0x00A8
#define GPK3DRV_Offset                     0x00AC
#define GPK3CONPDN_Offset                  0x00B0
#define GPK3PUDPDN_Offset                  0x00B4

#define GPL0CON_Offset                     0x00C0
#define GPL0DAT_Offset                     0x00C4
#define GPL0PUD_Offset                     0x00C8
#define GPL0DRV_Offset                     0x00CC
#define GPL0CONPDN_Offset                  0x00D0
#define GPL0PUDPDN_Offset                  0x00D4

#define GPL1CON_Offset                     0x00E0
#define GPL1DAT_Offset                     0x00E4
#define GPL1PUD_Offset                     0x00E8
#define GPL1DRV_Offset                     0x00EC
#define GPL1CONPDN_Offset                  0x00F0
#define GPL1PUDPDN_Offset                  0x00F4

#define GPL2CON_Offset                     0x0100
#define GPL2DAT_Offset                     0x0104
#define GPL2PUD_Offset                     0x0108
#define GPL2DRV_Offset                     0x010C
#define GPL2CONPDN_Offset                  0x0110
#define GPL2PUDPDN_Offset                  0x0114

#define GPY0CON_Offset                     0x0120
#define GPY0DAT_Offset                     0x0124
#define GPY0PUD_Offset                     0x0128
#define GPY0DRV_Offset                     0x012C
#define GPY0CONPDN_Offset                  0x0130
#define GPY0PUDPDN_Offset                  0x0134

#define GPY1CON_Offset                     0x0140
#define GPY1DAT_Offset                     0x0144
#define GPY1PUD_Offset                     0x0148
#define GPY1DRV_Offset                     0x014C
#define GPY1CONPDN_Offset                  0x0150
#define GPY1PUDPDN_Offset                  0x0154

#define GPY2CON_Offset                     0x0160
#define GPY2DAT_Offset                     0x0164
#define GPY2PUD_Offset                     0x0168
#define GPY2DRV_Offset                     0x016C
#define GPY2CONPDN_Offset                  0x0170
#define GPY2PUDPDN_Offset                  0x0174

#define GPY3CON_Offset                     0x0180
#define GPY3DAT_Offset                     0x0184
#define GPY3PUD_Offset                     0x0188
#define GPY3DRV_Offset                     0x018C
#define GPY3CONPDN_Offset                  0x0190
#define GPY3PUDPDN_Offset                  0x0194

#define GPY4CON_Offset                     0x01A0
#define GPY4DAT_Offset                     0x01A4
#define GPY4PUD_Offset                     0x01A8
#define GPY4DRV_Offset                     0x01AC
#define GPY4CONPDN_Offset                  0x01B0
#define GPY4PUDPDN_Offset                  0x01B4

#define GPY5CON_Offset                     0x01C0
#define GPY5DAT_Offset                     0x01C4
#define GPY5PUD_Offset                     0x01C8
#define GPY5DRV_Offset                     0x01CC
#define GPY5CONPDN_Offset                  0x01D0
#define GPY5PUDPDN_Offset                  0x01D4

#define GPY6CON_Offset                     0x01E0
#define GPY6DAT_Offset                     0x01E4
#define GPY6PUD_Offset                     0x01E8
#define GPY6DRV_Offset                     0x01EC
#define GPY6CONPDN_Offset                  0x01F0
#define GPY6PUDPDN_Offset                  0x01F4

#define ETC0PUD_Offset                     0x0208
#define ETC0DRV_Offset                     0x020C
#define ETC6PUD_Offset                     0x0228
#define ETC6DRV_Offset                     0x022C

#define GPM0CON_Offset                     0x0260
#define GPM0DAT_Offset                     0x0264
#define GPM0PUD_Offset                     0x0268
#define GPM0DRV_Offset                     0x026C
#define GPM0CONPDN_Offset                  0x0270
#define GPM0PUDPDN_Offset                  0x0274

#define GPM1CON_Offset                     0x0280
#define GPM1DAT_Offset                     0x0284
#define GPM1PUD_Offset                     0x0288
#define GPM1DRV_Offset                     0x028C
#define GPM1CONPDN_Offset                  0x0290
#define GPM1PUDPDN_Offset                  0x0294

#define GPM2CON_Offset                     0x02A0
#define GPM2DAT_Offset                     0x02A4
#define GPM2PUD_Offset                     0x02A8
#define GPM2DRV_Offset                     0x02AC
#define GPM2CONPDN_Offset                  0x02B0
#define GPM2PUDPDN_Offset                  0x02B4

#define GPM3CON_Offset                     0x02C0
#define GPM3DAT_Offset                     0x02C4
#define GPM3PUD_Offset                     0x02C8
#define GPM3DRV_Offset                     0x02CC
#define GPM3CONPDN_Offset                  0x02D0
#define GPM3PUDPDN_Offset                  0x02D4

#define GPM4CON_Offset                     0x02E0
#define GPM4DAT_Offset                     0x02E4
#define GPM4PUD_Offset                     0x02E8
#define GPM4DRV_Offset                     0x02EC
#define GPM4CONPDN_Offset                  0x02F0
#define GPM4PUDPDN_Offset                  0x02F4

#define EXT_INT23_CON_Offset               0x0708
#define EXT_INT24_CON_Offset               0x070C
#define EXT_INT25_CON_Offset               0x0710
#define EXT_INT26_CON_Offset               0x0714
#define EXT_INT27_CON_Offset               0x0718
#define EXT_INT28_CON_Offset               0x071C
#define EXT_INT29_CON_Offset               0x0720
#define EXT_INT8_CON_Offset                0x0724
#define EXT_INT9_CON_Offset                0x0728
#define EXT_INT10_CON_Offset               0x072C
#define EXT_INT11_CON_Offset               0x0730
#define EXT_INT12_CON_Offset               0x0734

#define EXT_INT23_FLTCON0_Offset           0x0810
#define EXT_INT23_FLTCON1_Offset           0x0814
#define EXT_INT24_FLTCON0_Offset           0x0818
#define EXT_INT24_FLTCON1_Offset           0x081C
#define EXT_INT25_FLTCON0_Offset           0x0820
#define EXT_INT25_FLTCON1_Offset           0x0824
#define EXT_INT26_FLTCON0_Offset           0x0828
#define EXT_INT26_FLTCON1_Offset           0x082C
#define EXT_INT27_FLTCON0_Offset           0x0830
#define EXT_INT27_FLTCON1_Offset           0x0834
#define EXT_INT28_FLTCON0_Offset           0x0838
#define EXT_INT28_FLTCON1_Offset           0x083C
#define EXT_INT29_FLTCON0_Offset           0x0840
#define EXT_INT29_FLTCON1_Offset           0x0844
#define EXT_INT8_FLTCON0_Offset            0x0848
#define EXT_INT8_FLTCON1_Offset            0x084C
#define EXT_INT9_FLTCON0_Offset            0x0850
#define EXT_INT9_FLTCON1_Offset            0x0854
#define EXT_INT10_FLTCON0_Offset           0x0858
#define EXT_INT10_FLTCON1_Offset           0x085C
#define EXT_INT11_FLTCON0_Offset           0x0860
#define EXT_INT11_FLTCON1_Offset           0x0864
#define EXT_INT12_FLTCON0_Offset           0x0868
#define EXT_INT12_FLTCON1_Offset           0x086C

#define EXT_INT23_MASK_Offset              0x0A08
#define EXT_INT24_MASK_Offset              0x0A0C
#define EXT_INT25_MASK_Offset              0x0A10
#define EXT_INT26_MASK_Offset              0x0A14
#define EXT_INT27_MASK_Offset              0x0A18
#define EXT_INT28_MASK_Offset              0x0A1C
#define EXT_INT29_MASK_Offset              0x0A20
#define EXT_INT8_MASK_Offset               0x0A24
#define EXT_INT9_MASK_Offset               0x0A28
#define EXT_INT10_MASK_Offset              0x0A2C
#define EXT_INT11_MASK_Offset              0x0A30
#define EXT_INT12_MASK_Offset              0x0A34

#define EXT_INT_SERVICE_XA_Offset          0x0B08
#define EXT_INT_SERVICE_PEND_XA_Offset     0x0B0C
#define EXT_INT_GRPFIXPRI_XA_Offset        0x0B10

#define EXT_INT23_FIXPRI_Offset            0x0B1C
#define EXT_INT24_FIXPRI_Offset            0x0B20
#define EXT_INT25_FIXPRI_Offset            0x0B24
#define EXT_INT26_FIXPRI_Offset            0x0B28
#define EXT_INT27_FIXPRI_Offset            0x0B2C
#define EXT_INT28_FIXPRI_Offset            0x0B30
#define EXT_INT29_FIXPRI_Offset            0x0B34
#define EXT_INT8_FIXPRI_Offset             0x0B38
#define EXT_INT9_FIXPRI_Offset             0x0B3C
#define EXT_INT10_FIXPRI_Offset            0x0B40
#define EXT_INT11_FIXPRI_Offset            0x0B44
#define EXT_INT12_FIXPRI_Offset            0x0B48

#define GPX0CON_Offset                     0x0C00
#define GPX0DAT_Offset                     0x0C04
#define GPX0PUD_Offset                     0x0C08
#define GPX0DRV_Offset                     0x0C0C

#define GPX1CON_Offset                     0x0C20
#define GPX1DAT_Offset                     0x0C24
#define GPX1PUD_Offset                     0x0C28
#define GPX1DRV_Offset                     0x0C2C

#define GPX2CON_Offset                     0x0C40
#define GPX2DAT_Offset                     0x0C44
#define GPX2PUD_Offset                     0x0C48
#define GPX2DRV_Offset                     0x0C4C

#define GPX3CON_Offset                     0x0C60
#define GPX3DAT_Offset                     0x0C64
#define GPX3PUD_Offset                     0x0C68
#define GPX3DRV_Offset                     0x0C6C

#define EXT_INT40_CON_Offset               0x0E00
#define EXT_INT41_CON_Offset               0x0E04
#define EXT_INT42_CON_Offset               0x0E08
#define EXT_INT43_CON_Offset               0x0E0C

#define EXT_INT40_FLTCON0_Offset           0x0E80
#define EXT_INT40_FLTCON1_Offset           0x0E84
#define EXT_INT41_FLTCON0_Offset           0x0E88
#define EXT_INT41_FLTCON1_Offset           0x0E8C
#define EXT_INT42_FLTCON0_Offset           0x0E90
#define EXT_INT42_FLTCON1_Offset           0x0E94
#define EXT_INT43_FLTCON0_Offset           0x0E98
#define EXT_INT43_FLTCON1_Offset           0x0E9C

#define EXT_INT40_MASK_Offset              0x0F00
#define EXT_INT41_MASK_Offset              0x0F04
#define EXT_INT42_MASK_Offset              0x0F08
#define EXT_INT43_MASK_Offset              0x0F0C

#define EXT_INT40_PEND_Offset              0x0F40
#define EXT_INT41_PEND_Offset              0x0F44
#define EXT_INT42_PEND_Offset              0x0F48
#define EXT_INT43_PEND_Offset              0x0F4C

#define BASE_ADDR_PDNEN_2_Offset           0x0F80

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define GPK0CON_ADDR                     (GPIO_BASE_ADDR_2 + GPK0CON_Offset)
#define GPK0DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPK0DAT_Offset)
#define GPK0PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPK0PUD_Offset)
#define GPK0DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPK0DRV_Offset)
#define GPK0CONPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPK0CONPDN_Offset)
#define GPK0PUDPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPK0PUDPDN_Offset)

#define GPK1CON_ADDR                     (GPIO_BASE_ADDR_2 + GPK1CON_Offset)
#define GPK1DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPK1DAT_Offset)
#define GPK1PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPK1PUD_Offset)
#define GPK1DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPK1DRV_Offset)
#define GPK1CONPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPK1CONPDN_Offset)
#define GPK1PUDPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPK1PUDPDN_Offset)

#define GPK2CON_ADDR                     (GPIO_BASE_ADDR_2 + GPK2CON_Offset)
#define GPK2DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPK2DAT_Offset)
#define GPK2PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPK2PUD_Offset)
#define GPK2DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPK2DRV_Offset)
#define GPK2CONPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPK2CONPDN_Offset)
#define GPK2PUDPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPK2PUDPDN_Offset)

#define GPK3CON_ADDR                     (GPIO_BASE_ADDR_2 + GPK3CON_Offset)
#define GPK3DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPK3DAT_Offset)
#define GPK3PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPK3PUD_Offset)
#define GPK3DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPK3DRV_Offset)
#define GPK3CONPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPK3CONPDN_Offset)
#define GPK3PUDPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPK3PUDPDN_Offset)

#define GPL0CON_ADDR                     (GPIO_BASE_ADDR_2 + GPL0CON_Offset)
#define GPL0DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPL0DAT_Offset)
#define GPL0PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPL0PUD_Offset)
#define GPL0DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPL0DRV_Offset)
#define GPL0CONPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPL0CONPDN_Offset)
#define GPL0PUDPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPL0PUDPDN_Offset)

#define GPL1CON_ADDR                     (GPIO_BASE_ADDR_2 + GPL1CON_Offset)
#define GPL1DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPL1DAT_Offset)
#define GPL1PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPL1PUD_Offset)
#define GPL1DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPL1DRV_Offset)
#define GPL1CONPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPL1CONPDN_Offset)
#define GPL1PUDPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPL1PUDPDN_Offset)

#define GPL2CON_ADDR                     (GPIO_BASE_ADDR_2 + GPL2CON_Offset)
#define GPL2DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPL2DAT_Offset)
#define GPL2PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPL2PUD_Offset)
#define GPL2DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPL2DRV_Offset)
#define GPL2CONPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPL2CONPDN_Offset)
#define GPL2PUDPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPL2PUDPDN_Offset)

#define GPY0CON_ADDR                     (GPIO_BASE_ADDR_2 + GPY0CON_Offset)
#define GPY0DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPY0DAT_Offset)
#define GPY0PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPY0PUD_Offset)
#define GPY0DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPY0DRV_Offset)
#define GPY0CONPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPY0CONPDN_Offset)
#define GPY0PUDPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPY0PUDPDN_Offset)

#define GPY1CON_ADDR                     (GPIO_BASE_ADDR_2 + GPY1CON_Offset)
#define GPY1DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPY1DAT_Offset)
#define GPY1PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPY1PUD_Offset)
#define GPY1DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPY1DRV_Offset)
#define GPY1CONPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPY1CONPDN_Offset)
#define GPY1PUDPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPY1PUDPDN_Offset)

#define GPY2CON_ADDR                     (GPIO_BASE_ADDR_2 + GPY2CON_Offset)
#define GPY2DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPY2DAT_Offset)
#define GPY2PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPY2PUD_Offset)
#define GPY2DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPY2DRV_Offset)
#define GPY2CONPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPY2CONPDN_Offset)
#define GPY2PUDPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPY2PUDPDN_Offset)

#define GPY3CON_ADDR                     (GPIO_BASE_ADDR_2 + GPY3CON_Offset)
#define GPY3DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPY3DAT_Offset)
#define GPY3PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPY3PUD_Offset)
#define GPY3DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPY3DRV_Offset)
#define GPY3CONPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPY3CONPDN_Offset)
#define GPY3PUDPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPY3PUDPDN_Offset)

#define GPY4CON_ADDR                     (GPIO_BASE_ADDR_2 + GPY4CON_Offset)
#define GPY4DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPY4DAT_Offset)
#define GPY4PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPY4PUD_Offset)
#define GPY4DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPY4DRV_Offset)
#define GPY4CONPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPY4CONPDN_Offset)
#define GPY4PUDPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPY4PUDPDN_Offset)

#define GPY5CON_ADDR                     (GPIO_BASE_ADDR_2 + GPY5CON_Offset)
#define GPY5DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPY5DAT_Offset)
#define GPY5PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPY5PUD_Offset)
#define GPY5DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPY5DRV_Offset)
#define GPY5CONPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPY5CONPDN_Offset)
#define GPY5PUDPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPY5PUDPDN_Offset)

#define GPY6CON_ADDR                     (GPIO_BASE_ADDR_2 + GPY6CON_Offset)
#define GPY6DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPY6DAT_Offset)
#define GPY6PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPY6PUD_Offset)
#define GPY6DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPY6DRV_Offset)
#define GPY6CONPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPY6CONPDN_Offset)
#define GPY6PUDPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPY6PUDPDN_Offset)

#define ETC0PUD_ADDR                     (GPIO_BASE_ADDR_2 + ETC0PUD_Offset)
#define ETC0DRV_ADDR                     (GPIO_BASE_ADDR_2 + ETC0DRV_Offset)
#define ETC6PUD_ADDR                     (GPIO_BASE_ADDR_2 + ETC6PUD_Offset)
#define ETC6DRV_ADDR                     (GPIO_BASE_ADDR_2 + ETC6DRV_Offset)

#define GPM0CON_ADDR                     (GPIO_BASE_ADDR_2 + GPM0CON_Offset)
#define GPM0DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPM0DAT_Offset)
#define GPM0PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPM0PUD_Offset)
#define GPM0DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPM0DRV_Offset)
#define GPM0CONPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPM0CONPDN_Offset)
#define GPM0PUDPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPM0PUDPDN_Offset)

#define GPM1CON_ADDR                     (GPIO_BASE_ADDR_2 + GPM1CON_Offset)
#define GPM1DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPM1DAT_Offset)
#define GPM1PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPM1PUD_Offset)
#define GPM1DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPM1DRV_Offset)
#define GPM1CONPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPM1CONPDN_Offset)
#define GPM1PUDPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPM1PUDPDN_Offset)

#define GPM2CON_ADDR                     (GPIO_BASE_ADDR_2 + GPM2CON_Offset)
#define GPM2DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPM2DAT_Offset)
#define GPM2PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPM2PUD_Offset)
#define GPM2DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPM2DRV_Offset)
#define GPM2CONPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPM2CONPDN_Offset)
#define GPM2PUDPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPM2PUDPDN_Offset)

#define GPM3CON_ADDR                     (GPIO_BASE_ADDR_2 + GPM3CON_Offset)
#define GPM3DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPM3DAT_Offset)
#define GPM3PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPM3PUD_Offset)
#define GPM3DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPM3DRV_Offset)
#define GPM3CONPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPM3CONPDN_Offset)
#define GPM3PUDPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPM3PUDPDN_Offset)

#define GPM4CON_ADDR                     (GPIO_BASE_ADDR_2 + GPM4CON_Offset)
#define GPM4DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPM4DAT_Offset)
#define GPM4PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPM4PUD_Offset)
#define GPM4DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPM4DRV_Offset)
#define GPM4CONPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPM4CONPDN_Offset)
#define GPM4PUDPDN_ADDR                  (GPIO_BASE_ADDR_2 + GPM4PUDPDN_Offset)

#define EXT_INT23_CON_ADDR               (GPIO_BASE_ADDR_2 + EXT_INT23_CON_Offset)
#define EXT_INT24_CON_ADDR               (GPIO_BASE_ADDR_2 + EXT_INT24_CON_Offset)
#define EXT_INT25_CON_ADDR               (GPIO_BASE_ADDR_2 + EXT_INT25_CON_Offset)
#define EXT_INT26_CON_ADDR               (GPIO_BASE_ADDR_2 + EXT_INT26_CON_Offset)
#define EXT_INT27_CON_ADDR               (GPIO_BASE_ADDR_2 + EXT_INT27_CON_Offset)
#define EXT_INT28_CON_ADDR               (GPIO_BASE_ADDR_2 + EXT_INT28_CON_Offset)
#define EXT_INT29_CON_ADDR               (GPIO_BASE_ADDR_2 + EXT_INT29_CON_Offset)
#define EXT_INT8_CON_ADDR                (GPIO_BASE_ADDR_2 + EXT_INT8_CON_Offset)
#define EXT_INT9_CON_ADDR                (GPIO_BASE_ADDR_2 + EXT_INT9_CON_Offset)
#define EXT_INT10_CON_ADDR               (GPIO_BASE_ADDR_2 + EXT_INT10_CON_Offset)
#define EXT_INT11_CON_ADDR               (GPIO_BASE_ADDR_2 + EXT_INT11_CON_Offset)
#define EXT_INT12_CON_ADDR               (GPIO_BASE_ADDR_2 + EXT_INT12_CON_Offset)

#define EXT_INT23_FLTCON0_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT23_FLTCON0_Offset)
#define EXT_INT23_FLTCON1_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT23_FLTCON1_Offset)
#define EXT_INT24_FLTCON0_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT24_FLTCON0_Offset)
#define EXT_INT24_FLTCON1_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT24_FLTCON1_Offset)
#define EXT_INT25_FLTCON0_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT25_FLTCON0_Offset)
#define EXT_INT25_FLTCON1_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT25_FLTCON1_Offset)
#define EXT_INT26_FLTCON0_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT26_FLTCON0_Offset)
#define EXT_INT26_FLTCON1_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT26_FLTCON1_Offset)
#define EXT_INT27_FLTCON0_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT27_FLTCON0_Offset)
#define EXT_INT27_FLTCON1_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT27_FLTCON1_Offset)
#define EXT_INT28_FLTCON0_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT28_FLTCON0_Offset)
#define EXT_INT28_FLTCON1_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT28_FLTCON1_Offset)
#define EXT_INT29_FLTCON0_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT29_FLTCON0_Offset)
#define EXT_INT29_FLTCON1_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT29_FLTCON1_Offset)
#define EXT_INT8_FLTCON0_ADDR            (GPIO_BASE_ADDR_2 + EXT_INT8_FLTCON0_Offset)
#define EXT_INT8_FLTCON1_ADDR            (GPIO_BASE_ADDR_2 + EXT_INT8_FLTCON1_Offset)
#define EXT_INT9_FLTCON0_ADDR            (GPIO_BASE_ADDR_2 + EXT_INT9_FLTCON0_Offset)
#define EXT_INT9_FLTCON1_ADDR            (GPIO_BASE_ADDR_2 + EXT_INT9_FLTCON1_Offset)
#define EXT_INT10_FLTCON0_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT10_FLTCON0_Offset)
#define EXT_INT10_FLTCON1_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT10_FLTCON1_Offset)
#define EXT_INT11_FLTCON0_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT11_FLTCON0_Offset)
#define EXT_INT11_FLTCON1_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT11_FLTCON1_Offset)
#define EXT_INT12_FLTCON0_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT12_FLTCON0_Offset)
#define EXT_INT12_FLTCON1_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT12_FLTCON1_Offset)

#define EXT_INT23_MASK_ADDR              (GPIO_BASE_ADDR_2 + EXT_INT23_MASK_Offset)
#define EXT_INT24_MASK_ADDR              (GPIO_BASE_ADDR_2 + EXT_INT24_MASK_Offset)
#define EXT_INT25_MASK_ADDR              (GPIO_BASE_ADDR_2 + EXT_INT25_MASK_Offset)
#define EXT_INT26_MASK_ADDR              (GPIO_BASE_ADDR_2 + EXT_INT26_MASK_Offset)
#define EXT_INT27_MASK_ADDR              (GPIO_BASE_ADDR_2 + EXT_INT27_MASK_Offset)
#define EXT_INT28_MASK_ADDR              (GPIO_BASE_ADDR_2 + EXT_INT28_MASK_Offset)
#define EXT_INT29_MASK_ADDR              (GPIO_BASE_ADDR_2 + EXT_INT29_MASK_Offset)
#define EXT_INT8_MASK_ADDR               (GPIO_BASE_ADDR_2 + EXT_INT8_MASK_Offset)
#define EXT_INT9_MASK_ADDR               (GPIO_BASE_ADDR_2 + EXT_INT9_MASK_Offset)
#define EXT_INT10_MASK_ADDR              (GPIO_BASE_ADDR_2 + EXT_INT10_MASK_Offset)
#define EXT_INT11_MASK_ADDR              (GPIO_BASE_ADDR_2 + EXT_INT11_MASK_Offset)
#define EXT_INT12_MASK_ADDR              (GPIO_BASE_ADDR_2 + EXT_INT12_MASK_Offset)

#define EXT_INT_SERVICE_XA_ADDR          (GPIO_BASE_ADDR_2 + EXT_INT_SERVICE_XA_Offset)
#define EXT_INT_SERVICE_PEND_XA_ADDR     (GPIO_BASE_ADDR_2 + EXT_INT_SERVICE_PEND_XA_Offset)
#define EXT_INT_GRPFIXPRI_XA_ADDR        (GPIO_BASE_ADDR_2 + EXT_INT_GRPFIXPRI_XA_Offset)

#define EXT_INT23_FIXPRI_ADDR            (GPIO_BASE_ADDR_2 + EXT_INT23_FIXPRI_Offset)
#define EXT_INT24_FIXPRI_ADDR            (GPIO_BASE_ADDR_2 + EXT_INT24_FIXPRI_Offset)
#define EXT_INT25_FIXPRI_ADDR            (GPIO_BASE_ADDR_2 + EXT_INT25_FIXPRI_Offset)
#define EXT_INT26_FIXPRI_ADDR            (GPIO_BASE_ADDR_2 + EXT_INT26_FIXPRI_Offset)
#define EXT_INT27_FIXPRI_ADDR            (GPIO_BASE_ADDR_2 + EXT_INT27_FIXPRI_Offset)
#define EXT_INT28_FIXPRI_ADDR            (GPIO_BASE_ADDR_2 + EXT_INT28_FIXPRI_Offset)
#define EXT_INT29_FIXPRI_ADDR            (GPIO_BASE_ADDR_2 + EXT_INT29_FIXPRI_Offset)
#define EXT_INT8_FIXPRI_ADDR             (GPIO_BASE_ADDR_2 + EXT_INT8_FIXPRI_Offset)
#define EXT_INT9_FIXPRI_ADDR             (GPIO_BASE_ADDR_2 + EXT_INT9_FIXPRI_Offset)
#define EXT_INT10_FIXPRI_ADDR            (GPIO_BASE_ADDR_2 + EXT_INT10_FIXPRI_Offset)
#define EXT_INT11_FIXPRI_ADDR            (GPIO_BASE_ADDR_2 + EXT_INT11_FIXPRI_Offset)
#define EXT_INT12_FIXPRI_ADDR            (GPIO_BASE_ADDR_2 + EXT_INT12_FIXPRI_Offset)

#define GPX0CON_ADDR                     (GPIO_BASE_ADDR_2 + GPX0CON_Offset)
#define GPX0DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPX0DAT_Offset)
#define GPX0PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPX0PUD_Offset)
#define GPX0DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPX0DRV_Offset)

#define GPX1CON_ADDR                     (GPIO_BASE_ADDR_2 + GPX1CON_Offset)
#define GPX1DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPX1DAT_Offset)
#define GPX1PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPX1PUD_Offset)
#define GPX1DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPX1DRV_Offset)

#define GPX2CON_ADDR                     (GPIO_BASE_ADDR_2 + GPX2CON_Offset)
#define GPX2DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPX2DAT_Offset)
#define GPX2PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPX2PUD_Offset)
#define GPX2DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPX2DRV_Offset)

#define GPX3CON_ADDR                     (GPIO_BASE_ADDR_2 + GPX3CON_Offset)
#define GPX3DAT_ADDR                     (GPIO_BASE_ADDR_2 + GPX3DAT_Offset)
#define GPX3PUD_ADDR                     (GPIO_BASE_ADDR_2 + GPX3PUD_Offset)
#define GPX3DRV_ADDR                     (GPIO_BASE_ADDR_2 + GPX3DRV_Offset)

#define EXT_INT40_CON_ADDR               (GPIO_BASE_ADDR_2 + EXT_INT40_CON_Offset)
#define EXT_INT41_CON_ADDR               (GPIO_BASE_ADDR_2 + EXT_INT41_CON_Offset)
#define EXT_INT42_CON_ADDR               (GPIO_BASE_ADDR_2 + EXT_INT42_CON_Offset)
#define EXT_INT43_CON_ADDR               (GPIO_BASE_ADDR_2 + EXT_INT43_CON_Offset)

#define EXT_INT40_FLTCON0_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT40_FLTCON0_Offset)
#define EXT_INT40_FLTCON1_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT40_FLTCON1_Offset)
#define EXT_INT41_FLTCON0_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT41_FLTCON0_Offset)
#define EXT_INT41_FLTCON1_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT41_FLTCON1_Offset)
#define EXT_INT42_FLTCON0_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT42_FLTCON0_Offset)
#define EXT_INT42_FLTCON1_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT42_FLTCON1_Offset)
#define EXT_INT43_FLTCON0_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT43_FLTCON0_Offset)
#define EXT_INT43_FLTCON1_ADDR           (GPIO_BASE_ADDR_2 + EXT_INT43_FLTCON1_Offset)

#define EXT_INT40_MASK_ADDR              (GPIO_BASE_ADDR_2 + EXT_INT40_MASK_Offset)
#define EXT_INT41_MASK_ADDR              (GPIO_BASE_ADDR_2 + EXT_INT41_MASK_Offset)
#define EXT_INT42_MASK_ADDR              (GPIO_BASE_ADDR_2 + EXT_INT42_MASK_Offset)
#define EXT_INT43_MASK_ADDR              (GPIO_BASE_ADDR_2 + EXT_INT43_MASK_Offset)

#define EXT_INT40_PEND_ADDR              (GPIO_BASE_ADDR_2 + EXT_INT40_PEND_Offset)
#define EXT_INT41_PEND_ADDR              (GPIO_BASE_ADDR_2 + EXT_INT41_PEND_Offset)
#define EXT_INT42_PEND_ADDR              (GPIO_BASE_ADDR_2 + EXT_INT42_PEND_Offset)
#define EXT_INT43_PEND_ADDR              (GPIO_BASE_ADDR_2 + EXT_INT43_PEND_Offset)

#define BASE_ADDR_PDNEN_2_ADDR           (GPIO_BASE_ADDR_2 + BASE_ADDR_PDNEN_2_Offset)

#pragma endregion       

#pragma region GPIO BASE ADDR 3     

//////////////////////////////////////////////////////
//                  Offset Part                     //
//////////////////////////////////////////////////////
#define GPZ0CON_Offset                     0x0000
#define GPZ0DAT_Offset                     0x0004
#define GPZ0PUD_Offset                     0x0008
#define GPZ0DRV_Offset                     0x000C
#define GPZ0CONPDN_Offset                  0x0010
#define GPZ0PUDPDN_Offset                  0x0014

#define EXT_INT50_CON_Offset               0x0700

#define EXT_INT50_FLTCON0_Offset           0x0800
#define EXT_INT50_FLTCON1_Offset           0x0804

#define EXT_INT50_MASK_Offset              0x0900

#define EXT_INT50_PEND_Offset              0x0A00

#define EXT_INT_SERVICE_XD_Offset          0x0B08
#define EXT_INT_SERVICE_PEND_XD_Offset     0x0B0C
#define EXT_INT_GRPFIXPRI_XD_Offset        0x0B10

#define EXT_INT50_FIXPRI_Offset            0x0B14

#define BASE_ADDR_PDNEN_3_Offset           0x0F80

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define GPZ0CON_ADDR                       (GPIO_BASE_ADDR_3 + GPZ0CON_Offset)
#define GPZ0DAT_ADDR                       (GPIO_BASE_ADDR_3 + GPZ0DAT_Offset)
#define GPZ0PUD_ADDR                       (GPIO_BASE_ADDR_3 + GPZ0PUD_Offset)
#define GPZ0DRV_ADDR                       (GPIO_BASE_ADDR_3 + GPZ0DRV_Offset)
#define GPZ0CONPDN_ADDR                    (GPIO_BASE_ADDR_3 + GPZ0CONPDN_Offset)
#define GPZ0PUDPDN_ADDR                    (GPIO_BASE_ADDR_3 + GPZ0PUDPDN_Offset)

#define EXT_INT50_CON_ADDR                 (GPIO_BASE_ADDR_3 + EXT_INT50_CON_Offset)

#define EXT_INT50_FLTCON0_ADDR             (GPIO_BASE_ADDR_3 + EXT_INT50_FLTCON0_Offset)
#define EXT_INT50_FLTCON1_ADDR             (GPIO_BASE_ADDR_3 + EXT_INT50_FLTCON1_Offset)

#define EXT_INT50_MASK_ADDR                (GPIO_BASE_ADDR_3 + EXT_INT50_MASK_Offset)

#define EXT_INT50_PEND_ADDR                (GPIO_BASE_ADDR_3 + EXT_INT50_PEND_Offset)

#define EXT_INT_SERVICE_XD_ADDR            (GPIO_BASE_ADDR_3 + EXT_INT_SERVICE_XD_Offset)
#define EXT_INT_SERVICE_PEND_XD_ADDR       (GPIO_BASE_ADDR_3 + EXT_INT_SERVICE_PEND_XD_Offset)
#define EXT_INT_GRPFIXPRI_XD_ADDR          (GPIO_BASE_ADDR_3 + EXT_INT_GRPFIXPRI_XD_Offset)

#define EXT_INT50_FIXPRI_ADDR              (GPIO_BASE_ADDR_3 + EXT_INT50_FIXPRI_Offset)

#define BASE_ADDR_PDNEN_3_ADDR             (GPIO_BASE_ADDR_3 + BASE_ADDR_PDNEN_3_Offset)

#pragma endregion

#pragma region GPIO BASE ADDR 4

//////////////////////////////////////////////////////
//                  Offset Part                     //
//////////////////////////////////////////////////////
#define GPV0CON_Offset                     0x0000
#define GPV0DAT_Offset                     0x0004
#define GPV0PUD_Offset                     0x0008
#define GPV0DRV_Offset                     0x000C
#define GPV0CONPDN_Offset                  0x0010
#define GPV0PUDPDN_Offset                  0x0014

#define GPV1CON_Offset                     0x0020
#define GPV1DAT_Offset                     0x0024
#define GPV1PUD_Offset                     0x0028
#define GPV1DRV_Offset                     0x002C
#define GPV1CONPDN_Offset                  0x0030
#define GPV1PUDPDN_Offset                  0x0034

#define ETC7PUD_Offset                     0x0048
#define ETC7DRV_Offset                     0x004C

#define GPV2CON_Offset                     0x0060
#define GPV2DAT_Offset                     0x0064
#define GPV2PUD_Offset                     0x0068
#define GPV2DRV_Offset                     0x006C
#define GPV2CONPDN_Offset                  0x0070
#define GPV2PUDPDN_Offset                  0x0074

#define GPV3CON_Offset                     0x0080
#define GPV3DAT_Offset                     0x0084
#define GPV3PUD_Offset                     0x0088
#define GPV3DRV_Offset                     0x008C
#define GPV3CONPDN_Offset                  0x0090
#define GPV3PUDPDN_Offset                  0x0094

#define ETC8PUD_Offset                     0x00A8
#define ETC8DRV_Offset                     0x00AC

#define GPV4CON_Offset                     0x00C0
#define GPV4DAT_Offset                     0x00C4
#define GPV4PUD_Offset                     0x00C8
#define GPV4DRV_Offset                     0x00CC
#define GPV4CONPDN_Offset                  0x00D0
#define GPV4PUDPDN_Offset                  0x00D4

#define EXT_INT30_CON_Offset               0x0700
#define EXT_INT31_CON_Offset               0x0704
#define EXT_INT32_CON_Offset               0x0708
#define EXT_INT33_CON_Offset               0x070C
#define EXT_INT34_CON_Offset               0x0710

#define EXT_INT30_FLTCON0_Offset           0x0800
#define EXT_INT30_FLTCON1_Offset           0x0804
#define EXT_INT31_FLTCON0_Offset           0x0808
#define EXT_INT31_FLTCON1_Offset           0x080C
#define EXT_INT32_FLTCON0_Offset           0x0810
#define EXT_INT32_FLTCON1_Offset           0x0814
#define EXT_INT33_FLTCON0_Offset           0x0818
#define EXT_INT33_FLTCON1_Offset           0x081C
#define EXT_INT34_FLTCON0_Offset           0x0820
#define EXT_INT34_FLTCON1_Offset           0x0824

#define EXT_INT30_MASK_Offset              0x0900
#define EXT_INT31_MASK_Offset              0x0904
#define EXT_INT32_MASK_Offset              0x0908
#define EXT_INT33_MASK_Offset              0x090C
#define EXT_INT34_MASK_Offset              0x0910

#define EXT_INT30_PEND_Offset              0x0A00
#define EXT_INT31_PEND_Offset              0x0A04
#define EXT_INT32_PEND_Offset              0x0A08
#define EXT_INT33_PEND_Offset              0x0A0C
#define EXT_INT34_PEND_Offset              0x0A10

#define EXT_INT_SERVICE_XC_Offset          0x0B08
#define EXT_INT_SERVICE_PEND_XC_Offset     0x0B0C
#define EXT_INT_GRPFIXPRI_XC_Offset        0x0B10

#define EXT_INT30_FIXPRI_Offset            0x0B14
#define EXT_INT31_FIXPRI_Offset            0x0B18
#define EXT_INT32_FIXPRI_Offset            0x0B1C
#define EXT_INT33_FIXPRI_Offset            0x0B20
#define EXT_INT34_FIXPRI_Offset            0x0B24

#define BASE_ADDR_PDNEN_4_Offset           0x0F80

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define GPV0CON_ADDR                       (GPIO_BASE_ADDR_4 + GPV0CON_Offset)
#define GPV0DAT_ADDR                       (GPIO_BASE_ADDR_4 + GPV0DAT_Offset)
#define GPV0PUD_ADDR                       (GPIO_BASE_ADDR_4 + GPV0PUD_Offset)
#define GPV0DRV_ADDR                       (GPIO_BASE_ADDR_4 + GPV0DRV_Offset)
#define GPV0CONPDN_ADDR                    (GPIO_BASE_ADDR_4 + GPV0CONPDN_Offset)
#define GPV0PUDPDN_ADDR                    (GPIO_BASE_ADDR_4 + GPV0PUDPDN_Offset)

#define GPV1CON_ADDR                       (GPIO_BASE_ADDR_4 + GPV1CON_Offset)
#define GPV1DAT_ADDR                       (GPIO_BASE_ADDR_4 + GPV1DAT_Offset)
#define GPV1PUD_ADDR                       (GPIO_BASE_ADDR_4 + GPV1PUD_Offset)
#define GPV1DRV_ADDR                       (GPIO_BASE_ADDR_4 + GPV1DRV_Offset)
#define GPV1CONPDN_ADDR                    (GPIO_BASE_ADDR_4 + GPV1CONPDN_Offset)
#define GPV1PUDPDN_ADDR                    (GPIO_BASE_ADDR_4 + GPV1PUDPDN_Offset)

#define ETC7PUD_ADDR                       (GPIO_BASE_ADDR_4 + ETC7PUD_Offset)
#define ETC7DRV_ADDR                       (GPIO_BASE_ADDR_4 + ETC7DRV_Offset)

#define GPV2CON_ADDR                       (GPIO_BASE_ADDR_4 + GPV2CON_Offset)
#define GPV2DAT_ADDR                       (GPIO_BASE_ADDR_4 + GPV2DAT_Offset)
#define GPV2PUD_ADDR                       (GPIO_BASE_ADDR_4 + GPV2PUD_Offset)
#define GPV2DRV_ADDR                       (GPIO_BASE_ADDR_4 + GPV2DRV_Offset)
#define GPV2CONPDN_ADDR                    (GPIO_BASE_ADDR_4 + GPV2CONPDN_Offset)
#define GPV2PUDPDN_ADDR                    (GPIO_BASE_ADDR_4 + GPV2PUDPDN_Offset)

#define GPV3CON_ADDR                       (GPIO_BASE_ADDR_4 + GPV3CON_Offset)
#define GPV3DAT_ADDR                       (GPIO_BASE_ADDR_4 + GPV3DAT_Offset)
#define GPV3PUD_ADDR                       (GPIO_BASE_ADDR_4 + GPV3PUD_Offset)
#define GPV3DRV_ADDR                       (GPIO_BASE_ADDR_4 + GPV3DRV_Offset)
#define GPV3CONPDN_ADDR                    (GPIO_BASE_ADDR_4 + GPV3CONPDN_Offset)
#define GPV3PUDPDN_ADDR                    (GPIO_BASE_ADDR_4 + GPV3PUDPDN_Offset)

#define ETC8PUD_ADDR                       (GPIO_BASE_ADDR_4 + ETC8PUD_Offset)
#define ETC8DRV_ADDR                       (GPIO_BASE_ADDR_4 + ETC8DRV_Offset)
 
#define GPV4CON_ADDR                       (GPIO_BASE_ADDR_4 + GPV4CON_Offset)
#define GPV4DAT_ADDR                       (GPIO_BASE_ADDR_4 + GPV4DAT_Offset)
#define GPV4PUD_ADDR                       (GPIO_BASE_ADDR_4 + GPV4PUD_Offset)
#define GPV4DRV_ADDR                       (GPIO_BASE_ADDR_4 + GPV4DRV_Offset)
#define GPV4CONPDN_ADDR                    (GPIO_BASE_ADDR_4 + GPV4CONPDN_Offset)
#define GPV4PUDPDN_ADDR                    (GPIO_BASE_ADDR_4 + GPV4PUDPDN_Offset)

#define EXT_INT30_CON_ADDR                 (GPIO_BASE_ADDR_4 + EXT_INT30_CON_Offset)
#define EXT_INT31_CON_ADDR                 (GPIO_BASE_ADDR_4 + EXT_INT31_CON_Offset)
#define EXT_INT32_CON_ADDR                 (GPIO_BASE_ADDR_4 + EXT_INT32_CON_Offset)
#define EXT_INT33_CON_ADDR                 (GPIO_BASE_ADDR_4 + EXT_INT33_CON_Offset)
#define EXT_INT34_CON_ADDR                 (GPIO_BASE_ADDR_4 + EXT_INT34_CON_Offset)

#define EXT_INT30_FLTCON0_ADDR             (GPIO_BASE_ADDR_4 + EXT_INT30_FLTCON0_Offset)
#define EXT_INT30_FLTCON1_ADDR             (GPIO_BASE_ADDR_4 + EXT_INT30_FLTCON1_Offset)
#define EXT_INT31_FLTCON0_ADDR             (GPIO_BASE_ADDR_4 + EXT_INT31_FLTCON0_Offset)
#define EXT_INT31_FLTCON1_ADDR             (GPIO_BASE_ADDR_4 + EXT_INT31_FLTCON1_Offset)
#define EXT_INT32_FLTCON0_ADDR             (GPIO_BASE_ADDR_4 + EXT_INT32_FLTCON0_Offset)
#define EXT_INT32_FLTCON1_ADDR             (GPIO_BASE_ADDR_4 + EXT_INT32_FLTCON1_Offset)
#define EXT_INT33_FLTCON0_ADDR             (GPIO_BASE_ADDR_4 + EXT_INT33_FLTCON0_Offset)
#define EXT_INT33_FLTCON1_ADDR             (GPIO_BASE_ADDR_4 + EXT_INT33_FLTCON1_Offset)
#define EXT_INT34_FLTCON0_ADDR             (GPIO_BASE_ADDR_4 + EXT_INT34_FLTCON0_Offset)
#define EXT_INT34_FLTCON1_ADDR             (GPIO_BASE_ADDR_4 + EXT_INT34_FLTCON1_Offset)

#define EXT_INT30_MASK_ADDR                (GPIO_BASE_ADDR_4 + EXT_INT30_MASK_Offset)
#define EXT_INT31_MASK_ADDR                (GPIO_BASE_ADDR_4 + EXT_INT31_MASK_Offset)
#define EXT_INT32_MASK_ADDR                (GPIO_BASE_ADDR_4 + EXT_INT32_MASK_Offset)
#define EXT_INT33_MASK_ADDR                (GPIO_BASE_ADDR_4 + EXT_INT33_MASK_Offset)
#define EXT_INT34_MASK_ADDR                (GPIO_BASE_ADDR_4 + EXT_INT34_MASK_Offset)

#define EXT_INT30_PEND_ADDR                (GPIO_BASE_ADDR_4 + EXT_INT30_PEND_Offset)
#define EXT_INT31_PEND_ADDR                (GPIO_BASE_ADDR_4 + EXT_INT31_PEND_Offset)
#define EXT_INT32_PEND_ADDR                (GPIO_BASE_ADDR_4 + EXT_INT32_PEND_Offset)
#define EXT_INT33_PEND_ADDR                (GPIO_BASE_ADDR_4 + EXT_INT33_PEND_Offset)
#define EXT_INT34_PEND_ADDR                (GPIO_BASE_ADDR_4 + EXT_INT34_PEND_Offset)

#define EXT_INT_SERVICE_XC_ADDR            (GPIO_BASE_ADDR_4 + EXT_INT_SERVICE_XC_Offset)
#define EXT_INT_SERVICE_PEND_XC_ADDR       (GPIO_BASE_ADDR_4 + EXT_INT_SERVICE_PEND_XC_Offset)
#define EXT_INT_GRPFIXPRI_XC_ADDR          (GPIO_BASE_ADDR_4 + EXT_INT_GRPFIXPRI_XC_Offset)

#define EXT_INT30_FIXPRI_ADDR              (GPIO_BASE_ADDR_4 + EXT_INT30_FIXPRI_Offset)
#define EXT_INT31_FIXPRI_ADDR              (GPIO_BASE_ADDR_4 + EXT_INT31_FIXPRI_Offset)
#define EXT_INT32_FIXPRI_ADDR              (GPIO_BASE_ADDR_4 + EXT_INT32_FIXPRI_Offset)
#define EXT_INT33_FIXPRI_ADDR              (GPIO_BASE_ADDR_4 + EXT_INT33_FIXPRI_Offset)
#define EXT_INT34_FIXPRI_ADDR              (GPIO_BASE_ADDR_4 + EXT_INT34_FIXPRI_Offset)

#define BASE_ADDR_PDNEN_4_ADDR             (GPIO_BASE_ADDR_4 + BASE_ADDR_PDNEN_4_Offset)

#pragma endregion

#endif