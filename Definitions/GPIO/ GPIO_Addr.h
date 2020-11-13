#ifndef __GPIO_GPIO_ADDRDR_H__     
#define __GPIO_GPIO_ADDR_H__       

#define GPIO_BASE_ADDR_1 0x11400000     
#define GPIO_BASE_ADDR_2 0x11000000     
#define GPIO_BASE_ADDR_3 0x03860000     
#define GPIO_BASE_ADDR_4 0x106E0000     

#pragma region GPIO BASE ADDR 1     

//////////////////////////////////////////////////////
//                  Offset Part                     //
//////////////////////////////////////////////////////
#define GPIO_GPA0CON_Offset                     0x0000
#define GPIO_GPA0DAT_Offset                     0x0004
#define GPIO_GPA0PUD_Offset                     0x0008
#define GPIO_GPA0DRV_Offset                     0x000C
#define GPIO_GPA0CONPDN_Offset                  0x0010
#define GPIO_GPA0PUDPDN_Offset                  0x0014

#define GPIO_GPA1CON_Offset                     0x0020
#define GPIO_GPA1DAT_Offset                     0x0024
#define GPIO_GPA1PUD_Offset                     0x0028
#define GPIO_GPA1DRV_Offset                     0x002C
#define GPIO_GPA1CONPDN_Offset                  0x0030
#define GPIO_GPA1PUDPDN_Offset                  0x0034

#define GPIO_GPBCON_Offset                      0x0040
#define GPIO_GPBDAT_Offset                      0x0044
#define GPIO_GPBPUD_Offset                      0x0048
#define GPIO_GPBDRV_Offset                      0x004C
#define GPIO_GPBCONPDN_Offset                   0x0050
#define GPIO_GPBPUDPDN_Offset                   0x0054

#define GPIO_GPC0CON_Offset                     0x0060
#define GPIO_GPC0DAT_Offset                     0x0064
#define GPIO_GPC0PUD_Offset                     0x0068
#define GPIO_GPC0DRV_Offset                     0x006C
#define GPIO_GPC0CONPDN_Offset                  0x0070
#define GPIO_GPC0PUDPDN_Offset                  0x0074

#define GPIO_GPC1CON_Offset                     0x0080
#define GPIO_GPC1DAT_Offset                     0x0084
#define GPIO_GPC1PUD_Offset                     0x0088
#define GPIO_GPC1DRV_Offset                     0x008C
#define GPIO_GPC1CONPDN_Offset                  0x0090
#define GPIO_GPC1PUDPDN_Offset                  0x0094

#define GPIO_GPD0CON_Offset                     0x00A0
#define GPIO_GPD0DAT_Offset                     0x00A4
#define GPIO_GPD0PUD_Offset                     0x00A8
#define GPIO_GPD0DRV_Offset                     0x00AC
#define GPIO_GPD0CONPDN_Offset                  0x00B0
#define GPIO_GPD0PUDPDN_Offset                  0x00B4

#define GPIO_GPD1CON_Offset                     0x00C0
#define GPIO_GPD1DAT_Offset                     0x00C4
#define GPIO_GPD1PUD_Offset                     0x00C8
#define GPIO_GPD1DRV_Offset                     0x00CC
#define GPIO_GPD1CONPDN_Offset                  0x00D0
#define GPIO_GPD1PUDPDN_Offset                  0x00D4

#define GPIO_GPF0CON_Offset                     0x0180
#define GPIO_GPF0DAT_Offset                     0x0184
#define GPIO_GPF0PUD_Offset                     0x0188
#define GPIO_GPF0DRV_Offset                     0x018C
#define GPIO_GPF0CONPDN_Offset                  0x0190
#define GPIO_GPF0PUDPDN_Offset                  0x0194

#define GPIO_GPF1CON_Offset                     0x01A0
#define GPIO_GPF1DAT_Offset                     0x01A4
#define GPIO_GPF1PUD_Offset                     0x01A8
#define GPIO_GPF1DRV_Offset                     0x01AC
#define GPIO_GPF1CONPDN_Offset                  0x01B0
#define GPIO_GPF1PUDPDN_Offset                  0x01B4

#define GPIO_GPF2CON_Offset                     0x01C0
#define GPIO_GPF2DAT_Offset                     0x01C4
#define GPIO_GPF2PUD_Offset                     0x01C8
#define GPIO_GPF2DRV_Offset                     0x01CC
#define GPIO_GPF2CONPDN_Offset                  0x01D0
#define GPIO_GPF2PUDPDN_Offset                  0x01D4

#define GPIO_GPF3CON_Offset                     0x01E0
#define GPIO_GPF3DAT_Offset                     0x01E4
#define GPIO_GPF3PUD_Offset                     0x01E8
#define GPIO_GPF3DRV_Offset                     0x01EC
#define GPIO_GPF3CONPDN_Offset                  0x01F0
#define GPIO_GPF3PUDPDN_Offset                  0x01F4

#define GPIO_ETC1PUD_Offset                     0x0228
#define GPIO_ETC1DRV_Offset                     0x022C

#define GPIO_GPJ0CON_Offset                     0x0240
#define GPIO_GPJ0DAT_Offset                     0x0244
#define GPIO_GPJ0PUD_Offset                     0x0248
#define GPIO_GPJ0DRV_Offset                     0x024C
#define GPIO_GPJ0CONPDN_Offset                  0x0250
#define GPIO_GPJ0PUDPDN_Offset                  0x0254

#define GPIO_GPJ1CON_Offset                     0x0260
#define GPIO_GPJ1DAT_Offset                     0x0264
#define GPIO_GPJ1PUD_Offset                     0x0268
#define GPIO_GPJ1DRV_Offset                     0x026C
#define GPIO_GPJ1CONPDN_Offset                  0x0270
#define GPIO_GPJ1PUDPDN_Offset                  0x0274

#define GPIO_EXT_INT1_CON_Offset                0x0700
#define GPIO_EXT_INT2_CON_Offset                0x0704
#define GPIO_EXT_INT3_CON_Offset                0x0708
#define GPIO_EXT_INT4_CON_Offset                0x070C
#define GPIO_EXT_INT5_CON_Offset                0x0710
#define GPIO_EXT_INT6_CON_Offset                0x0714
#define GPIO_EXT_INT7_CON_Offset                0x0718
#define GPIO_EXT_INT13_CON_Offset               0x0730
#define GPIO_EXT_INT14_CON_Offset               0x0734
#define GPIO_EXT_INT15_CON_Offset               0x0738
#define GPIO_EXT_INT16_CON_Offset               0x073C
#define GPIO_EXT_INT21_CON_Offset               0x0740
#define GPIO_EXT_INT22_CON_Offset               0x0744

#define GPIO_EXT_INT1_FLTCON0_Offset            0x0800
#define GPIO_EXT_INT1_FLTCON1_Offset            0x0804
#define GPIO_EXT_INT2_FLTCON0_Offset            0x0808
#define GPIO_EXT_INT2_FLTCON1_Offset            0x080C
#define GPIO_EXT_INT3_FLTCON0_Offset            0x0810
#define GPIO_EXT_INT3_FLTCON1_Offset            0x0814
#define GPIO_EXT_INT4_FLTCON0_Offset            0x0818
#define GPIO_EXT_INT4_FLTCON1_Offset            0x081C
#define GPIO_EXT_INT5_FLTCON0_Offset            0x0820
#define GPIO_EXT_INT5_FLTCON1_Offset            0x0824
#define GPIO_EXT_INT6_FLTCON0_Offset            0x0828
#define GPIO_EXT_INT6_FLTCON1_Offset            0x082C
#define GPIO_EXT_INT7_FLTCON0_Offset            0x0830
#define GPIO_EXT_INT7_FLTCON1_Offset            0x0834
#define GPIO_EXT_INT13_FLTCON0_Offset           0x0860
#define GPIO_EXT_INT13_FLTCON1_Offset           0x0864
#define GPIO_EXT_INT14_FLTCON0_Offset           0x0868
#define GPIO_EXT_INT14_FLTCON1_Offset           0x086C
#define GPIO_EXT_INT15_FLTCON0_Offset           0x0870
#define GPIO_EXT_INT15_FLTCON1_Offset           0x0874
#define GPIO_EXT_INT16_FLTCON0_Offset           0x0878
#define GPIO_EXT_INT16_FLTCON1_Offset           0x087C
#define GPIO_EXT_INT21_FLTCON0_Offset           0x0880
#define GPIO_EXT_INT21_FLTCON1_Offset           0x0884
#define GPIO_EXT_INT22_FLTCON0_Offset           0x0888
#define GPIO_EXT_INT22_FLTCON1_Offset           0x088C

#define GPIO_EXT_INT1_MASK_Offset               0x0900
#define GPIO_EXT_INT2_MASK_Offset               0x0904
#define GPIO_EXT_INT3_MASK_Offset               0x0908
#define GPIO_EXT_INT4_MASK_Offset               0x090C
#define GPIO_EXT_INT5_MASK_Offset               0x0910
#define GPIO_EXT_INT6_MASK_Offset               0x0914
#define GPIO_EXT_INT7_MASK_Offset               0x0918
#define GPIO_EXT_INT13_MASK_Offset              0x0930
#define GPIO_EXT_INT14_MASK_Offset              0x0934
#define GPIO_EXT_INT15_MASK_Offset              0x0938
#define GPIO_EXT_INT16_MASK_Offset              0x093C
#define GPIO_EXT_INT21_MASK_Offset              0x0940
#define GPIO_EXT_INT22_MASK_Offset              0x0944

#define GPIO_EXT_INT1_PEND_Offset               0x0A00
#define GPIO_EXT_INT2_PEND_Offset               0x0A04
#define GPIO_EXT_INT3_PEND_Offset               0x0A08
#define GPIO_EXT_INT4_PEND_Offset               0x0A0C
#define GPIO_EXT_INT5_PEND_Offset               0x0A10
#define GPIO_EXT_INT6_PEND_Offset               0x0A14
#define GPIO_EXT_INT7_PEND_Offset               0x0A18
#define GPIO_EXT_INT13_PEND_Offset              0x0A30
#define GPIO_EXT_INT14_PEND_Offset              0x0A34
#define GPIO_EXT_INT15_PEND_Offset              0x0A38
#define GPIO_EXT_INT16_PEND_Offset              0x0A3C
#define GPIO_EXT_INT21_PEND_Offset              0x0A40
#define GPIO_EXT_INT22_PEND_Offset              0x0A44

#define GPIO_EXT_INT_SERVICE_XB_Offset          0x0B08
#define GPIO_EXT_INT_SERVICE_PEND_XB_Offset     0x0B0C
#define GPIO_EXT_INT_GRPFIXPRI_XB_Offset        0x0B10

#define GPIO_EXT_INT1_FIXPRI_Offset             0x0B14
#define GPIO_EXT_INT2_FIXPRI_Offset             0x0B18
#define GPIO_EXT_INT3_FIXPRI_Offset             0x0B1C
#define GPIO_EXT_INT4_FIXPRI_Offset             0x0B20
#define GPIO_EXT_INT5_FIXPRI_Offset             0x0B24
#define GPIO_EXT_INT6_FIXPRI_Offset             0x0B28
#define GPIO_EXT_INT7_FIXPRI_Offset             0x0B2C
#define GPIO_EXT_INT13_FIXPRI_Offset            0x0B44
#define GPIO_EXT_INT14_FIXPRI_Offset            0x0B48
#define GPIO_EXT_INT15_FIXPRI_Offset            0x0B4C
#define GPIO_EXT_INT16_FIXPRI_Offset            0x0B50
#define GPIO_EXT_INT21_FIXPRI_Offset            0x0B54
#define GPIO_EXT_INT22_FIXPRI_Offset            0x0B58

#define GPIO_BASE_ADDR_1_PDNEN_Offset           0x0F80

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define GPIO_GPA0CON_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPA0CON_Offset
#define GPIO_GPA0DAT_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPA0DAT_Offset
#define GPIO_GPA0PUD_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPA0PUD_Offset
#define GPIO_GPA0DRV_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPA0DRV_Offset
#define GPIO_GPA0CONPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPA0CONPDN_Offset
#define GPIO_GPA0PUDPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPA0PUDPDN_Offset

#define GPIO_GPA1CON_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPA1CON_Offset
#define GPIO_GPA1DAT_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPA1DAT_Offset
#define GPIO_GPA1PUD_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPA1PUD_Offset
#define GPIO_GPA1DRV_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPA1DRV_Offset
#define GPIO_GPA1CONPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPA1CONPDN_Offset
#define GPIO_GPA1PUDPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPA1PUDPDN_Offset

#define GPIO_GPBCON_ADDR                        GPIO_BASE_ADDR_1 + GPIO_GPBCON_Offset
#define GPIO_GPBDAT_ADDR                        GPIO_BASE_ADDR_1 + GPIO_GPBDAT_Offset
#define GPIO_GPBPUD_ADDR                        GPIO_BASE_ADDR_1 + GPIO_GPBPUD_Offset
#define GPIO_GPBDRV_ADDR                        GPIO_BASE_ADDR_1 + GPIO_GPBDRV_Offset
#define GPIO_GPBCONPDN_ADDR                     GPIO_BASE_ADDR_1 + GPIO_GPBCONPDN_Offset
#define GPIO_GPBPUDPDN_ADDR                     GPIO_BASE_ADDR_1 + GPIO_GPBPUDPDN_Offset

#define GPIO_GPC0CON_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPC0CON_Offset   
#define GPIO_GPC0DAT_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPC0DAT_Offset   
#define GPIO_GPC0PUD_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPC0PUD_Offset   
#define GPIO_GPC0DRV_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPC0DRV_Offset   
#define GPIO_GPC0CONPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPC0CONPDN_Offset
#define GPIO_GPC0PUDPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPC0PUDPDN_Offset

#define GPIO_GPC1CON_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPC1CON_Offset                
#define GPIO_GPC1DAT_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPC1DAT_Offset                
#define GPIO_GPC1PUD_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPC1PUD_Offset                
#define GPIO_GPC1DRV_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPC1DRV_Offset                
#define GPIO_GPC1CONPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPC1CONPDN_Offset             
#define GPIO_GPC1PUDPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPC1PUDPDN_Offset             

#define GPIO_GPD0CON_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPD0CON_Offset                
#define GPIO_GPD0DAT_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPD0DAT_Offset                
#define GPIO_GPD0PUD_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPD0PUD_Offset                
#define GPIO_GPD0DRV_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPD0DRV_Offset                
#define GPIO_GPD0CONPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPD0CONPDN_Offset             
#define GPIO_GPD0PUDPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPD0PUDPDN_Offset             

#define GPIO_GPD1CON_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPD1CON_Offset                
#define GPIO_GPD1DAT_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPD1DAT_Offset                
#define GPIO_GPD1PUD_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPD1PUD_Offset                
#define GPIO_GPD1DRV_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPD1DRV_Offset                
#define GPIO_GPD1CONPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPD1CONPDN_Offset             
#define GPIO_GPD1PUDPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPD1PUDPDN_Offset             

#define GPIO_GPF0CON_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPF0CON_Offset                
#define GPIO_GPF0DAT_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPF0DAT_Offset                
#define GPIO_GPF0PUD_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPF0PUD_Offset                
#define GPIO_GPF0DRV_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPF0DRV_Offset                
#define GPIO_GPF0CONPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPF0CONPDN_Offset             
#define GPIO_GPF0PUDPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPF0PUDPDN_Offset             

#define GPIO_GPF1CON_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPF1CON_Offset                
#define GPIO_GPF1DAT_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPF1DAT_Offset                
#define GPIO_GPF1PUD_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPF1PUD_Offset                
#define GPIO_GPF1DRV_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPF1DRV_Offset                
#define GPIO_GPF1CONPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPF1CONPDN_Offset             
#define GPIO_GPF1PUDPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPF1PUDPDN_Offset             

#define GPIO_GPF2CON_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPF2CON_Offset                
#define GPIO_GPF2DAT_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPF2DAT_Offset                
#define GPIO_GPF2PUD_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPF2PUD_Offset                
#define GPIO_GPF2DRV_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPF2DRV_Offset                
#define GPIO_GPF2CONPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPF2CONPDN_Offset             
#define GPIO_GPF2PUDPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPF2PUDPDN_Offset             

#define GPIO_GPF3CON_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPF3CON_Offset                
#define GPIO_GPF3DAT_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPF3DAT_Offset                
#define GPIO_GPF3PUD_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPF3PUD_Offset                
#define GPIO_GPF3DRV_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPF3DRV_Offset                
#define GPIO_GPF3CONPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPF3CONPDN_Offset             
#define GPIO_GPF3PUDPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPF3PUDPDN_Offset             

#define GPIO_ETC1PUD_ADDR                       GPIO_BASE_ADDR_1 + GPIO_ETC1PUD_Offset                
#define GPIO_ETC1DRV_ADDR                       GPIO_BASE_ADDR_1 + GPIO_ETC1DRV_Offset                

#define GPIO_GPJ0CON_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPJ0CON_Offset                
#define GPIO_GPJ0DAT_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPJ0DAT_Offset                
#define GPIO_GPJ0PUD_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPJ0PUD_Offset                
#define GPIO_GPJ0DRV_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPJ0DRV_Offset                
#define GPIO_GPJ0CONPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPJ0CONPDN_Offset             
#define GPIO_GPJ0PUDPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPJ0PUDPDN_Offset             

#define GPIO_GPJ1CON_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPJ1CON_Offset                
#define GPIO_GPJ1DAT_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPJ1DAT_Offset                
#define GPIO_GPJ1PUD_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPJ1PUD_Offset                
#define GPIO_GPJ1DRV_ADDR                       GPIO_BASE_ADDR_1 + GPIO_GPJ1DRV_Offset                
#define GPIO_GPJ1CONPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPJ1CONPDN_Offset             
#define GPIO_GPJ1PUDPDN_ADDR                    GPIO_BASE_ADDR_1 + GPIO_GPJ1PUDPDN_Offset             

#define GPIO_EXT_INT1_CON_ADDR                  GPIO_BASE_ADDR_1 + GPIO_EXT_INT1_CON_Offset           
#define GPIO_EXT_INT2_CON_ADDR                  GPIO_BASE_ADDR_1 + GPIO_EXT_INT2_CON_Offset           
#define GPIO_EXT_INT3_CON_ADDR                  GPIO_BASE_ADDR_1 + GPIO_EXT_INT3_CON_Offset           
#define GPIO_EXT_INT4_CON_ADDR                  GPIO_BASE_ADDR_1 + GPIO_EXT_INT4_CON_Offset           
#define GPIO_EXT_INT5_CON_ADDR                  GPIO_BASE_ADDR_1 + GPIO_EXT_INT5_CON_Offset           
#define GPIO_EXT_INT6_CON_ADDR                  GPIO_BASE_ADDR_1 + GPIO_EXT_INT6_CON_Offset           
#define GPIO_EXT_INT7_CON_ADDR                  GPIO_BASE_ADDR_1 + GPIO_EXT_INT7_CON_Offset           
#define GPIO_EXT_INT13_CON_ADDR                 GPIO_BASE_ADDR_1 + GPIO_EXT_INT13_CON_Offset          
#define GPIO_EXT_INT14_CON_ADDR                 GPIO_BASE_ADDR_1 + GPIO_EXT_INT14_CON_Offset          
#define GPIO_EXT_INT15_CON_ADDR                 GPIO_BASE_ADDR_1 + GPIO_EXT_INT15_CON_Offset          
#define GPIO_EXT_INT16_CON_ADDR                 GPIO_BASE_ADDR_1 + GPIO_EXT_INT16_CON_Offset          
#define GPIO_EXT_INT21_CON_ADDR                 GPIO_BASE_ADDR_1 + GPIO_EXT_INT21_CON_Offset          
#define GPIO_EXT_INT22_CON_ADDR                 GPIO_BASE_ADDR_1 + GPIO_EXT_INT22_CON_Offset          

#define GPIO_EXT_INT1_FLTCON0_ADDR              GPIO_BASE_ADDR_1 + GPIO_EXT_INT1_FLTCON0_Offset       
#define GPIO_EXT_INT1_FLTCON1_ADDR              GPIO_BASE_ADDR_1 + GPIO_EXT_INT1_FLTCON1_Offset       
#define GPIO_EXT_INT2_FLTCON0_ADDR              GPIO_BASE_ADDR_1 + GPIO_EXT_INT2_FLTCON0_Offset       
#define GPIO_EXT_INT2_FLTCON1_ADDR              GPIO_BASE_ADDR_1 + GPIO_EXT_INT2_FLTCON1_Offset       
#define GPIO_EXT_INT3_FLTCON0_ADDR              GPIO_BASE_ADDR_1 + GPIO_EXT_INT3_FLTCON0_Offset       
#define GPIO_EXT_INT3_FLTCON1_ADDR              GPIO_BASE_ADDR_1 + GPIO_EXT_INT3_FLTCON1_Offset       
#define GPIO_EXT_INT4_FLTCON0_ADDR              GPIO_BASE_ADDR_1 + GPIO_EXT_INT4_FLTCON0_Offset       
#define GPIO_EXT_INT4_FLTCON1_ADDR              GPIO_BASE_ADDR_1 + GPIO_EXT_INT4_FLTCON1_Offset       
#define GPIO_EXT_INT5_FLTCON0_ADDR              GPIO_BASE_ADDR_1 + GPIO_EXT_INT5_FLTCON0_Offset       
#define GPIO_EXT_INT5_FLTCON1_ADDR              GPIO_BASE_ADDR_1 + GPIO_EXT_INT5_FLTCON1_Offset       
#define GPIO_EXT_INT6_FLTCON0_ADDR              GPIO_BASE_ADDR_1 + GPIO_EXT_INT6_FLTCON0_Offset       
#define GPIO_EXT_INT6_FLTCON1_ADDR              GPIO_BASE_ADDR_1 + GPIO_EXT_INT6_FLTCON1_Offset       
#define GPIO_EXT_INT7_FLTCON0_ADDR              GPIO_BASE_ADDR_1 + GPIO_EXT_INT7_FLTCON0_Offset       
#define GPIO_EXT_INT7_FLTCON1_ADDR              GPIO_BASE_ADDR_1 + GPIO_EXT_INT7_FLTCON1_Offset       
#define GPIO_EXT_INT13_FLTCON0_ADDR             GPIO_BASE_ADDR_1 + GPIO_EXT_INT13_FLTCON0_Offset      
#define GPIO_EXT_INT13_FLTCON1_ADDR             GPIO_BASE_ADDR_1 + GPIO_EXT_INT13_FLTCON1_Offset      
#define GPIO_EXT_INT14_FLTCON0_ADDR             GPIO_BASE_ADDR_1 + GPIO_EXT_INT14_FLTCON0_Offset      
#define GPIO_EXT_INT14_FLTCON1_ADDR             GPIO_BASE_ADDR_1 + GPIO_EXT_INT14_FLTCON1_Offset      
#define GPIO_EXT_INT15_FLTCON0_ADDR             GPIO_BASE_ADDR_1 + GPIO_EXT_INT15_FLTCON0_Offset      
#define GPIO_EXT_INT15_FLTCON1_ADDR             GPIO_BASE_ADDR_1 + GPIO_EXT_INT15_FLTCON1_Offset      
#define GPIO_EXT_INT16_FLTCON0_ADDR             GPIO_BASE_ADDR_1 + GPIO_EXT_INT16_FLTCON0_Offset      
#define GPIO_EXT_INT16_FLTCON1_ADDR             GPIO_BASE_ADDR_1 + GPIO_EXT_INT16_FLTCON1_Offset      
#define GPIO_EXT_INT21_FLTCON0_ADDR             GPIO_BASE_ADDR_1 + GPIO_EXT_INT21_FLTCON0_Offset      
#define GPIO_EXT_INT21_FLTCON1_ADDR             GPIO_BASE_ADDR_1 + GPIO_EXT_INT21_FLTCON1_Offset      
#define GPIO_EXT_INT22_FLTCON0_ADDR             GPIO_BASE_ADDR_1 + GPIO_EXT_INT22_FLTCON0_Offset      
#define GPIO_EXT_INT22_FLTCON1_ADDR             GPIO_BASE_ADDR_1 + GPIO_EXT_INT22_FLTCON1_Offset      

#define GPIO_EXT_INT1_MASK_ADDR                 GPIO_BASE_ADDR_1 + GPIO_EXT_INT1_MASK_Offset          
#define GPIO_EXT_INT2_MASK_ADDR                 GPIO_BASE_ADDR_1 + GPIO_EXT_INT2_MASK_Offset          
#define GPIO_EXT_INT3_MASK_ADDR                 GPIO_BASE_ADDR_1 + GPIO_EXT_INT3_MASK_Offset          
#define GPIO_EXT_INT4_MASK_ADDR                 GPIO_BASE_ADDR_1 + GPIO_EXT_INT4_MASK_Offset          
#define GPIO_EXT_INT5_MASK_ADDR                 GPIO_BASE_ADDR_1 + GPIO_EXT_INT5_MASK_Offset          
#define GPIO_EXT_INT6_MASK_ADDR                 GPIO_BASE_ADDR_1 + GPIO_EXT_INT6_MASK_Offset          
#define GPIO_EXT_INT7_MASK_ADDR                 GPIO_BASE_ADDR_1 + GPIO_EXT_INT7_MASK_Offset          
#define GPIO_EXT_INT13_MASK_ADDR                GPIO_BASE_ADDR_1 + GPIO_EXT_INT13_MASK_Offset         
#define GPIO_EXT_INT14_MASK_ADDR                GPIO_BASE_ADDR_1 + GPIO_EXT_INT14_MASK_Offset         
#define GPIO_EXT_INT15_MASK_ADDR                GPIO_BASE_ADDR_1 + GPIO_EXT_INT15_MASK_Offset         
#define GPIO_EXT_INT16_MASK_ADDR                GPIO_BASE_ADDR_1 + GPIO_EXT_INT16_MASK_Offset         
#define GPIO_EXT_INT21_MASK_ADDR                GPIO_BASE_ADDR_1 + GPIO_EXT_INT21_MASK_Offset         
#define GPIO_EXT_INT22_MASK_ADDR                GPIO_BASE_ADDR_1 + GPIO_EXT_INT22_MASK_Offset         

#define GPIO_EXT_INT1_PEND_ADDR                 GPIO_BASE_ADDR_1 + GPIO_EXT_INT1_PEND_Offset          
#define GPIO_EXT_INT2_PEND_ADDR                 GPIO_BASE_ADDR_1 + GPIO_EXT_INT2_PEND_Offset          
#define GPIO_EXT_INT3_PEND_ADDR                 GPIO_BASE_ADDR_1 + GPIO_EXT_INT3_PEND_Offset          
#define GPIO_EXT_INT4_PEND_ADDR                 GPIO_BASE_ADDR_1 + GPIO_EXT_INT4_PEND_Offset          
#define GPIO_EXT_INT5_PEND_ADDR                 GPIO_BASE_ADDR_1 + GPIO_EXT_INT5_PEND_Offset          
#define GPIO_EXT_INT6_PEND_ADDR                 GPIO_BASE_ADDR_1 + GPIO_EXT_INT6_PEND_Offset          
#define GPIO_EXT_INT7_PEND_ADDR                 GPIO_BASE_ADDR_1 + GPIO_EXT_INT7_PEND_Offset          
#define GPIO_EXT_INT13_PEND_ADDR                GPIO_BASE_ADDR_1 + GPIO_EXT_INT13_PEND_Offset         
#define GPIO_EXT_INT14_PEND_ADDR                GPIO_BASE_ADDR_1 + GPIO_EXT_INT14_PEND_Offset         
#define GPIO_EXT_INT15_PEND_ADDR                GPIO_BASE_ADDR_1 + GPIO_EXT_INT15_PEND_Offset         
#define GPIO_EXT_INT16_PEND_ADDR                GPIO_BASE_ADDR_1 + GPIO_EXT_INT16_PEND_Offset         
#define GPIO_EXT_INT21_PEND_ADDR                GPIO_BASE_ADDR_1 + GPIO_EXT_INT21_PEND_Offset         
#define GPIO_EXT_INT22_PEND_ADDR                GPIO_BASE_ADDR_1 + GPIO_EXT_INT22_PEND_Offset         

#define GPIO_EXT_INT_SERVICE_XB_ADDR            GPIO_BASE_ADDR_1 + GPIO_EXT_INT_SERVICE_XB_Offset     
#define GPIO_EXT_INT_SERVICE_PEND_XB_ADDR       GPIO_BASE_ADDR_1 + GPIO_EXT_INT_SERVICE_PEND_XB_Offset
#define GPIO_EXT_INT_GRPFIXPRI_XB_ADDR          GPIO_BASE_ADDR_1 + GPIO_EXT_INT_GRPFIXPRI_XB_Offset   

#define GPIO_EXT_INT1_FIXPRI_ADDR               GPIO_BASE_ADDR_1 + GPIO_EXT_INT1_FIXPRI_Offset        
#define GPIO_EXT_INT2_FIXPRI_ADDR               GPIO_BASE_ADDR_1 + GPIO_EXT_INT2_FIXPRI_Offset        
#define GPIO_EXT_INT3_FIXPRI_ADDR               GPIO_BASE_ADDR_1 + GPIO_EXT_INT3_FIXPRI_Offset        
#define GPIO_EXT_INT4_FIXPRI_ADDR               GPIO_BASE_ADDR_1 + GPIO_EXT_INT4_FIXPRI_Offset        
#define GPIO_EXT_INT5_FIXPRI_ADDR               GPIO_BASE_ADDR_1 + GPIO_EXT_INT5_FIXPRI_Offset        
#define GPIO_EXT_INT6_FIXPRI_ADDR               GPIO_BASE_ADDR_1 + GPIO_EXT_INT6_FIXPRI_Offset        
#define GPIO_EXT_INT7_FIXPRI_ADDR               GPIO_BASE_ADDR_1 + GPIO_EXT_INT7_FIXPRI_Offset        
#define GPIO_EXT_INT13_FIXPRI_ADDR              GPIO_BASE_ADDR_1 + GPIO_EXT_INT13_FIXPRI_Offset       
#define GPIO_EXT_INT14_FIXPRI_ADDR              GPIO_BASE_ADDR_1 + GPIO_EXT_INT14_FIXPRI_Offset       
#define GPIO_EXT_INT15_FIXPRI_ADDR              GPIO_BASE_ADDR_1 + GPIO_EXT_INT15_FIXPRI_Offset       
#define GPIO_EXT_INT16_FIXPRI_ADDR              GPIO_BASE_ADDR_1 + GPIO_EXT_INT16_FIXPRI_Offset       
#define GPIO_EXT_INT21_FIXPRI_ADDR              GPIO_BASE_ADDR_1 + GPIO_EXT_INT21_FIXPRI_Offset       
#define GPIO_EXT_INT22_FIXPRI_ADDR              GPIO_BASE_ADDR_1 + GPIO_EXT_INT22_FIXPRI_Offset       

#define GPIO_BASE_ADDR_1_PDNEN_ADDR             GPIO_BASE_ADDR_1 + GPIO_BASE_ADDR_1_PDNEN_Offset      
#pragma endregion       

#pragma region GPIO BASE ADDR 2     

//////////////////////////////////////////////////////
//                  Offset Part                     //
//////////////////////////////////////////////////////
#define GPIO_GPK0CON_Offset                     0x0040
#define GPIO_GPK0DAT_Offset                     0x0044
#define GPIO_GPK0PUD_Offset                     0x0048
#define GPIO_GPK0DRV_Offset                     0x004C
#define GPIO_GPK0CONPDN_Offset                  0x0050
#define GPIO_GPK0PUDPDN_Offset                  0x0054

#define GPIO_GPK1CON_Offset                     0x0060
#define GPIO_GPK1DAT_Offset                     0x0064
#define GPIO_GPK1PUD_Offset                     0x0068
#define GPIO_GPK1DRV_Offset                     0x006C
#define GPIO_GPK1CONPDN_Offset                  0x0070
#define GPIO_GPK1PUDPDN_Offset                  0x0074

#define GPIO_GPK2CON_Offset                     0x0080
#define GPIO_GPK2DAT_Offset                     0x0084
#define GPIO_GPK2PUD_Offset                     0x0088
#define GPIO_GPK2DRV_Offset                     0x008C
#define GPIO_GPK2CONPDN_Offset                  0x0090
#define GPIO_GPK2PUDPDN_Offset                  0x0094

#define GPIO_GPK3CON_Offset                     0x00A0
#define GPIO_GPK3DAT_Offset                     0x00A4
#define GPIO_GPK3PUD_Offset                     0x00A8
#define GPIO_GPK3DRV_Offset                     0x00AC
#define GPIO_GPK3CONPDN_Offset                  0x00B0
#define GPIO_GPK3PUDPDN_Offset                  0x00B4

#define GPIO_GPL0CON_Offset                     0x00C0
#define GPIO_GPL0DAT_Offset                     0x00C4
#define GPIO_GPL0PUD_Offset                     0x00C8
#define GPIO_GPL0DRV_Offset                     0x00CC
#define GPIO_GPL0CONPDN_Offset                  0x00D0
#define GPIO_GPL0PUDPDN_Offset                  0x00D4

#define GPIO_GPL1CON_Offset                     0x00E0
#define GPIO_GPL1DAT_Offset                     0x00E4
#define GPIO_GPL1PUD_Offset                     0x00E8
#define GPIO_GPL1DRV_Offset                     0x00EC
#define GPIO_GPL1CONPDN_Offset                  0x00F0
#define GPIO_GPL1PUDPDN_Offset                  0x00F4

#define GPIO_GPL2CON_Offset                     0x0100
#define GPIO_GPL2DAT_Offset                     0x0104
#define GPIO_GPL2PUD_Offset                     0x0108
#define GPIO_GPL2DRV_Offset                     0x010C
#define GPIO_GPL2CONPDN_Offset                  0x0110
#define GPIO_GPL2PUDPDN_Offset                  0x0114

#define GPIO_GPY0CON_Offset                     0x0120
#define GPIO_GPY0DAT_Offset                     0x0124
#define GPIO_GPY0PUD_Offset                     0x0128
#define GPIO_GPY0DRV_Offset                     0x012C
#define GPIO_GPY0CONPDN_Offset                  0x0130
#define GPIO_GPY0PUDPDN_Offset                  0x0134

#define GPIO_GPY1CON_Offset                     0x0140
#define GPIO_GPY1DAT_Offset                     0x0144
#define GPIO_GPY1PUD_Offset                     0x0148
#define GPIO_GPY1DRV_Offset                     0x014C
#define GPIO_GPY1CONPDN_Offset                  0x0150
#define GPIO_GPY1PUDPDN_Offset                  0x0154

#define GPIO_GPY2CON_Offset                     0x0160
#define GPIO_GPY2DAT_Offset                     0x0164
#define GPIO_GPY2PUD_Offset                     0x0168
#define GPIO_GPY2DRV_Offset                     0x016C
#define GPIO_GPY2CONPDN_Offset                  0x0170
#define GPIO_GPY2PUDPDN_Offset                  0x0174

#define GPIO_GPY3CON_Offset                     0x0180
#define GPIO_GPY3DAT_Offset                     0x0184
#define GPIO_GPY3PUD_Offset                     0x0188
#define GPIO_GPY3DRV_Offset                     0x018C
#define GPIO_GPY3CONPDN_Offset                  0x0190
#define GPIO_GPY3PUDPDN_Offset                  0x0194

#define GPIO_GPY4CON_Offset                     0x01A0
#define GPIO_GPY4DAT_Offset                     0x01A4
#define GPIO_GPY4PUD_Offset                     0x01A8
#define GPIO_GPY4DRV_Offset                     0x01AC
#define GPIO_GPY4CONPDN_Offset                  0x01B0
#define GPIO_GPY4PUDPDN_Offset                  0x01B4

#define GPIO_GPY5CON_Offset                     0x01C0
#define GPIO_GPY5DAT_Offset                     0x01C4
#define GPIO_GPY5PUD_Offset                     0x01C8
#define GPIO_GPY5DRV_Offset                     0x01CC
#define GPIO_GPY5CONPDN_Offset                  0x01D0
#define GPIO_GPY5PUDPDN_Offset                  0x01D4

#define GPIO_GPY6CON_Offset                     0x01E0
#define GPIO_GPY6DAT_Offset                     0x01E4
#define GPIO_GPY6PUD_Offset                     0x01E8
#define GPIO_GPY6DRV_Offset                     0x01EC
#define GPIO_GPY6CONPDN_Offset                  0x01F0
#define GPIO_GPY6PUDPDN_Offset                  0x01F4

#define GPIO_ETC0PUD_Offset                     0x0208
#define GPIO_ETC0DRV_Offset                     0x020C
#define GPIO_ETC6PUD_Offset                     0x0228
#define GPIO_ETC6DRV_Offset                     0x022C

#define GPIO_GPM0CON_Offset                     0x0260
#define GPIO_GPM0DAT_Offset                     0x0264
#define GPIO_GPM0PUD_Offset                     0x0268
#define GPIO_GPM0DRV_Offset                     0x026C
#define GPIO_GPM0CONPDN_Offset                  0x0270
#define GPIO_GPM0PUDPDN_Offset                  0x0274

#define GPIO_GPM1CON_Offset                     0x0280
#define GPIO_GPM1DAT_Offset                     0x0284
#define GPIO_GPM1PUD_Offset                     0x0288
#define GPIO_GPM1DRV_Offset                     0x028C
#define GPIO_GPM1CONPDN_Offset                  0x0290
#define GPIO_GPM1PUDPDN_Offset                  0x0294

#define GPIO_GPM2CON_Offset                     0x02A0
#define GPIO_GPM2DAT_Offset                     0x02A4
#define GPIO_GPM2PUD_Offset                     0x02A8
#define GPIO_GPM2DRV_Offset                     0x02AC
#define GPIO_GPM2CONPDN_Offset                  0x02B0
#define GPIO_GPM2PUDPDN_Offset                  0x02B4

#define GPIO_GPM3CON_Offset                     0x02C0
#define GPIO_GPM3DAT_Offset                     0x02C4
#define GPIO_GPM3PUD_Offset                     0x02C8
#define GPIO_GPM3DRV_Offset                     0x02CC
#define GPIO_GPM3CONPDN_Offset                  0x02D0
#define GPIO_GPM3PUDPDN_Offset                  0x02D4

#define GPIO_GPM4CON_Offset                     0x02E0
#define GPIO_GPM4DAT_Offset                     0x02E4
#define GPIO_GPM4PUD_Offset                     0x02E8
#define GPIO_GPM4DRV_Offset                     0x02EC
#define GPIO_GPM4CONPDN_Offset                  0x02F0
#define GPIO_GPM4PUDPDN_Offset                  0x02F4

#define GPIO_EXT_INT23_CON_Offset               0x0708
#define GPIO_EXT_INT24_CON_Offset               0x070C
#define GPIO_EXT_INT25_CON_Offset               0x0710
#define GPIO_EXT_INT26_CON_Offset               0x0714
#define GPIO_EXT_INT27_CON_Offset               0x0718
#define GPIO_EXT_INT28_CON_Offset               0x071C
#define GPIO_EXT_INT29_CON_Offset               0x0720
#define GPIO_EXT_INT8_CON_Offset                0x0724
#define GPIO_EXT_INT9_CON_Offset                0x0728
#define GPIO_EXT_INT10_CON_Offset               0x072C
#define GPIO_EXT_INT11_CON_Offset               0x0730
#define GPIO_EXT_INT12_CON_Offset               0x0734

#define GPIO_EXT_INT23_FLTCON0_Offset           0x0810
#define GPIO_EXT_INT23_FLTCON1_Offset           0x0814
#define GPIO_EXT_INT24_FLTCON0_Offset           0x0818
#define GPIO_EXT_INT24_FLTCON1_Offset           0x081C
#define GPIO_EXT_INT25_FLTCON0_Offset           0x0820
#define GPIO_EXT_INT25_FLTCON1_Offset           0x0824
#define GPIO_EXT_INT26_FLTCON0_Offset           0x0828
#define GPIO_EXT_INT26_FLTCON1_Offset           0x082C
#define GPIO_EXT_INT27_FLTCON0_Offset           0x0830
#define GPIO_EXT_INT27_FLTCON1_Offset           0x0834
#define GPIO_EXT_INT28_FLTCON0_Offset           0x0838
#define GPIO_EXT_INT28_FLTCON1_Offset           0x083C
#define GPIO_EXT_INT29_FLTCON0_Offset           0x0840
#define GPIO_EXT_INT29_FLTCON1_Offset           0x0844
#define GPIO_EXT_INT8_FLTCON0_Offset            0x0848
#define GPIO_EXT_INT8_FLTCON1_Offset            0x084C
#define GPIO_EXT_INT9_FLTCON0_Offset            0x0850
#define GPIO_EXT_INT9_FLTCON1_Offset            0x0854
#define GPIO_EXT_INT10_FLTCON0_Offset           0x0858
#define GPIO_EXT_INT10_FLTCON1_Offset           0x085C
#define GPIO_EXT_INT11_FLTCON0_Offset           0x0860
#define GPIO_EXT_INT11_FLTCON1_Offset           0x0864
#define GPIO_EXT_INT12_FLTCON0_Offset           0x0868
#define GPIO_EXT_INT12_FLTCON1_Offset           0x086C

#define GPIO_EXT_INT23_MASK_Offset              0x0A08
#define GPIO_EXT_INT24_MASK_Offset              0x0A0C
#define GPIO_EXT_INT25_MASK_Offset              0x0A10
#define GPIO_EXT_INT26_MASK_Offset              0x0A14
#define GPIO_EXT_INT27_MASK_Offset              0x0A18
#define GPIO_EXT_INT28_MASK_Offset              0x0A1C
#define GPIO_EXT_INT29_MASK_Offset              0x0A20
#define GPIO_EXT_INT8_MASK_Offset               0x0A24
#define GPIO_EXT_INT9_MASK_Offset               0x0A28
#define GPIO_EXT_INT10_MASK_Offset              0x0A2C
#define GPIO_EXT_INT11_MASK_Offset              0x0A30
#define GPIO_EXT_INT12_MASK_Offset              0x0A34

#define GPIO_EXT_INT_SERVICE_XA_Offset          0x0B08
#define GPIO_EXT_INT_SERVICE_PEND_XA_Offset     0x0B0C
#define GPIO_EXT_INT_GRPFIXPRI_XA_Offset        0x0B10

#define GPIO_EXT_INT23_FIXPRI_Offset            0x0B1C
#define GPIO_EXT_INT24_FIXPRI_Offset            0x0B20
#define GPIO_EXT_INT25_FIXPRI_Offset            0x0B24
#define GPIO_EXT_INT26_FIXPRI_Offset            0x0B28
#define GPIO_EXT_INT27_FIXPRI_Offset            0x0B2C
#define GPIO_EXT_INT28_FIXPRI_Offset            0x0B30
#define GPIO_EXT_INT29_FIXPRI_Offset            0x0B34
#define GPIO_EXT_INT8_FIXPRI_Offset             0x0B38
#define GPIO_EXT_INT9_FIXPRI_Offset             0x0B3C
#define GPIO_EXT_INT10_FIXPRI_Offset            0x0B40
#define GPIO_EXT_INT11_FIXPRI_Offset            0x0B44
#define GPIO_EXT_INT12_FIXPRI_Offset            0x0B48

#define GPIO_GPX0CON_Offset                     0x0C00
#define GPIO_GPX0DAT_Offset                     0x0C04
#define GPIO_GPX0PUD_Offset                     0x0C08
#define GPIO_GPX0DRV_Offset                     0x0C0C

#define GPIO_GPX1CON_Offset                     0x0C20
#define GPIO_GPX1DAT_Offset                     0x0C24
#define GPIO_GPX1PUD_Offset                     0x0C28
#define GPIO_GPX1DRV_Offset                     0x0C2C

#define GPIO_GPX2CON_Offset                     0x0C40
#define GPIO_GPX2DAT_Offset                     0x0C44
#define GPIO_GPX2PUD_Offset                     0x0C48
#define GPIO_GPX2DRV_Offset                     0x0C4C

#define GPIO_GPX3CON_Offset                     0x0C60
#define GPIO_GPX3DAT_Offset                     0x0C64
#define GPIO_GPX3PUD_Offset                     0x0C68
#define GPIO_GPX3DRV_Offset                     0x0C6C

#define GPIO_EXT_INT40_CON_Offset               0x0E00
#define GPIO_EXT_INT41_CON_Offset               0x0E04
#define GPIO_EXT_INT42_CON_Offset               0x0E08
#define GPIO_EXT_INT43_CON_Offset               0x0E0C

#define GPIO_EXT_INT40_FLTCON0_Offset           0x0E80
#define GPIO_EXT_INT40_FLTCON1_Offset           0x0E84
#define GPIO_EXT_INT41_FLTCON0_Offset           0x0E88
#define GPIO_EXT_INT41_FLTCON1_Offset           0x0E8C
#define GPIO_EXT_INT42_FLTCON0_Offset           0x0E90
#define GPIO_EXT_INT42_FLTCON1_Offset           0x0E94
#define GPIO_EXT_INT43_FLTCON0_Offset           0x0E98
#define GPIO_EXT_INT43_FLTCON1_Offset           0x0E9C

#define GPIO_EXT_INT40_MASK_Offset              0x0F00
#define GPIO_EXT_INT41_MASK_Offset              0x0F04
#define GPIO_EXT_INT42_MASK_Offset              0x0F08
#define GPIO_EXT_INT43_MASK_Offset              0x0F0C

#define GPIO_EXT_INT40_PEND_Offset              0x0F40
#define GPIO_EXT_INT41_PEND_Offset              0x0F44
#define GPIO_EXT_INT42_PEND_Offset              0x0F48
#define GPIO_EXT_INT43_PEND_Offset              0x0F4C

#define GPIO_BASE_ADDR_PDNEN_2_Offset           0x0F80

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define GPIO_GPK0CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPK0CON_Offset                 
#define GPIO_GPK0DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPK0DAT_Offset                 
#define GPIO_GPK0PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPK0PUD_Offset                 
#define GPIO_GPK0DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPK0DRV_Offset                 
#define GPIO_GPK0CONPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPK0CONPDN_Offset              
#define GPIO_GPK0PUDPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPK0PUDPDN_Offset              

#define GPIO_GPK1CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPK1CON_Offset                 
#define GPIO_GPK1DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPK1DAT_Offset                 
#define GPIO_GPK1PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPK1PUD_Offset                 
#define GPIO_GPK1DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPK1DRV_Offset                 
#define GPIO_GPK1CONPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPK1CONPDN_Offset              
#define GPIO_GPK1PUDPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPK1PUDPDN_Offset              

#define GPIO_GPK2CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPK2CON_Offset                 
#define GPIO_GPK2DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPK2DAT_Offset                 
#define GPIO_GPK2PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPK2PUD_Offset                 
#define GPIO_GPK2DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPK2DRV_Offset                 
#define GPIO_GPK2CONPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPK2CONPDN_Offset              
#define GPIO_GPK2PUDPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPK2PUDPDN_Offset              

#define GPIO_GPK3CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPK3CON_Offset                 
#define GPIO_GPK3DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPK3DAT_Offset                 
#define GPIO_GPK3PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPK3PUD_Offset                 
#define GPIO_GPK3DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPK3DRV_Offset                 
#define GPIO_GPK3CONPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPK3CONPDN_Offset              
#define GPIO_GPK3PUDPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPK3PUDPDN_Offset              

#define GPIO_GPL0CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPL0CON_Offset                 
#define GPIO_GPL0DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPL0DAT_Offset                 
#define GPIO_GPL0PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPL0PUD_Offset                 
#define GPIO_GPL0DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPL0DRV_Offset                 
#define GPIO_GPL0CONPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPL0CONPDN_Offset              
#define GPIO_GPL0PUDPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPL0PUDPDN_Offset              

#define GPIO_GPL1CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPL1CON_Offset                 
#define GPIO_GPL1DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPL1DAT_Offset                 
#define GPIO_GPL1PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPL1PUD_Offset                 
#define GPIO_GPL1DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPL1DRV_Offset                 
#define GPIO_GPL1CONPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPL1CONPDN_Offset              
#define GPIO_GPL1PUDPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPL1PUDPDN_Offset              

#define GPIO_GPL2CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPL2CON_Offset                 
#define GPIO_GPL2DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPL2DAT_Offset                 
#define GPIO_GPL2PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPL2PUD_Offset                 
#define GPIO_GPL2DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPL2DRV_Offset                 
#define GPIO_GPL2CONPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPL2CONPDN_Offset              
#define GPIO_GPL2PUDPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPL2PUDPDN_Offset              

#define GPIO_GPY0CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY0CON_Offset                 
#define GPIO_GPY0DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY0DAT_Offset                 
#define GPIO_GPY0PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY0PUD_Offset                 
#define GPIO_GPY0DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY0DRV_Offset                 
#define GPIO_GPY0CONPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPY0CONPDN_Offset              
#define GPIO_GPY0PUDPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPY0PUDPDN_Offset              

#define GPIO_GPY1CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY1CON_Offset                 
#define GPIO_GPY1DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY1DAT_Offset                 
#define GPIO_GPY1PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY1PUD_Offset                 
#define GPIO_GPY1DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY1DRV_Offset                 
#define GPIO_GPY1CONPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPY1CONPDN_Offset              
#define GPIO_GPY1PUDPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPY1PUDPDN_Offset              

#define GPIO_GPY2CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY2CON_Offset                 
#define GPIO_GPY2DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY2DAT_Offset                 
#define GPIO_GPY2PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY2PUD_Offset                 
#define GPIO_GPY2DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY2DRV_Offset                 
#define GPIO_GPY2CONPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPY2CONPDN_Offset              
#define GPIO_GPY2PUDPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPY2PUDPDN_Offset              

#define GPIO_GPY3CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY3CON_Offset                 
#define GPIO_GPY3DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY3DAT_Offset                 
#define GPIO_GPY3PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY3PUD_Offset                 
#define GPIO_GPY3DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY3DRV_Offset                 
#define GPIO_GPY3CONPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPY3CONPDN_Offset              
#define GPIO_GPY3PUDPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPY3PUDPDN_Offset              

#define GPIO_GPY4CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY4CON_Offset                 
#define GPIO_GPY4DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY4DAT_Offset                 
#define GPIO_GPY4PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY4PUD_Offset                 
#define GPIO_GPY4DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY4DRV_Offset                 
#define GPIO_GPY4CONPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPY4CONPDN_Offset              
#define GPIO_GPY4PUDPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPY4PUDPDN_Offset              

#define GPIO_GPY5CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY5CON_Offset                 
#define GPIO_GPY5DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY5DAT_Offset                 
#define GPIO_GPY5PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY5PUD_Offset                 
#define GPIO_GPY5DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY5DRV_Offset                 
#define GPIO_GPY5CONPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPY5CONPDN_Offset              
#define GPIO_GPY5PUDPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPY5PUDPDN_Offset              

#define GPIO_GPY6CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY6CON_Offset                 
#define GPIO_GPY6DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY6DAT_Offset                 
#define GPIO_GPY6PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY6PUD_Offset                 
#define GPIO_GPY6DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPY6DRV_Offset                 
#define GPIO_GPY6CONPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPY6CONPDN_Offset              
#define GPIO_GPY6PUDPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPY6PUDPDN_Offset              

#define GPIO_ETC0PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_ETC0PUD_Offset                 
#define GPIO_ETC0DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_ETC0DRV_Offset                 
#define GPIO_ETC6PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_ETC6PUD_Offset                 
#define GPIO_ETC6DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_ETC6DRV_Offset                 

#define GPIO_GPM0CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPM0CON_Offset                 
#define GPIO_GPM0DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPM0DAT_Offset                 
#define GPIO_GPM0PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPM0PUD_Offset                 
#define GPIO_GPM0DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPM0DRV_Offset                 
#define GPIO_GPM0CONPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPM0CONPDN_Offset              
#define GPIO_GPM0PUDPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPM0PUDPDN_Offset              

#define GPIO_GPM1CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPM1CON_Offset                 
#define GPIO_GPM1DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPM1DAT_Offset                 
#define GPIO_GPM1PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPM1PUD_Offset                 
#define GPIO_GPM1DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPM1DRV_Offset                 
#define GPIO_GPM1CONPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPM1CONPDN_Offset              
#define GPIO_GPM1PUDPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPM1PUDPDN_Offset              

#define GPIO_GPM2CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPM2CON_Offset                 
#define GPIO_GPM2DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPM2DAT_Offset                 
#define GPIO_GPM2PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPM2PUD_Offset                 
#define GPIO_GPM2DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPM2DRV_Offset                 
#define GPIO_GPM2CONPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPM2CONPDN_Offset              
#define GPIO_GPM2PUDPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPM2PUDPDN_Offset              

#define GPIO_GPM3CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPM3CON_Offset                 
#define GPIO_GPM3DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPM3DAT_Offset                 
#define GPIO_GPM3PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPM3PUD_Offset                 
#define GPIO_GPM3DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPM3DRV_Offset                 
#define GPIO_GPM3CONPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPM3CONPDN_Offset              
#define GPIO_GPM3PUDPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPM3PUDPDN_Offset              

#define GPIO_GPM4CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPM4CON_Offset                 
#define GPIO_GPM4DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPM4DAT_Offset                 
#define GPIO_GPM4PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPM4PUD_Offset                 
#define GPIO_GPM4DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPM4DRV_Offset                 
#define GPIO_GPM4CONPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPM4CONPDN_Offset              
#define GPIO_GPM4PUDPDN_Offset                  GPIO_BASE_ADDR_2 + GPIO_GPM4PUDPDN_Offset              

#define GPIO_EXT_INT23_CON_Offset               GPIO_BASE_ADDR_2 + GPIO_EXT_INT23_CON_Offset           
#define GPIO_EXT_INT24_CON_Offset               GPIO_BASE_ADDR_2 + GPIO_EXT_INT24_CON_Offset           
#define GPIO_EXT_INT25_CON_Offset               GPIO_BASE_ADDR_2 + GPIO_EXT_INT25_CON_Offset           
#define GPIO_EXT_INT26_CON_Offset               GPIO_BASE_ADDR_2 + GPIO_EXT_INT26_CON_Offset           
#define GPIO_EXT_INT27_CON_Offset               GPIO_BASE_ADDR_2 + GPIO_EXT_INT27_CON_Offset           
#define GPIO_EXT_INT28_CON_Offset               GPIO_BASE_ADDR_2 + GPIO_EXT_INT28_CON_Offset           
#define GPIO_EXT_INT29_CON_Offset               GPIO_BASE_ADDR_2 + GPIO_EXT_INT29_CON_Offset           
#define GPIO_EXT_INT8_CON_Offset                GPIO_BASE_ADDR_2 + GPIO_EXT_INT8_CON_Offset            
#define GPIO_EXT_INT9_CON_Offset                GPIO_BASE_ADDR_2 + GPIO_EXT_INT9_CON_Offset            
#define GPIO_EXT_INT10_CON_Offset               GPIO_BASE_ADDR_2 + GPIO_EXT_INT10_CON_Offset           
#define GPIO_EXT_INT11_CON_Offset               GPIO_BASE_ADDR_2 + GPIO_EXT_INT11_CON_Offset           
#define GPIO_EXT_INT12_CON_Offset               GPIO_BASE_ADDR_2 + GPIO_EXT_INT12_CON_Offset           

#define GPIO_EXT_INT23_FLTCON0_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT23_FLTCON0_Offset       
#define GPIO_EXT_INT23_FLTCON1_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT23_FLTCON1_Offset       
#define GPIO_EXT_INT24_FLTCON0_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT24_FLTCON0_Offset       
#define GPIO_EXT_INT24_FLTCON1_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT24_FLTCON1_Offset       
#define GPIO_EXT_INT25_FLTCON0_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT25_FLTCON0_Offset       
#define GPIO_EXT_INT25_FLTCON1_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT25_FLTCON1_Offset       
#define GPIO_EXT_INT26_FLTCON0_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT26_FLTCON0_Offset       
#define GPIO_EXT_INT26_FLTCON1_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT26_FLTCON1_Offset       
#define GPIO_EXT_INT27_FLTCON0_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT27_FLTCON0_Offset       
#define GPIO_EXT_INT27_FLTCON1_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT27_FLTCON1_Offset       
#define GPIO_EXT_INT28_FLTCON0_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT28_FLTCON0_Offset       
#define GPIO_EXT_INT28_FLTCON1_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT28_FLTCON1_Offset       
#define GPIO_EXT_INT29_FLTCON0_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT29_FLTCON0_Offset       
#define GPIO_EXT_INT29_FLTCON1_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT29_FLTCON1_Offset       
#define GPIO_EXT_INT8_FLTCON0_Offset            GPIO_BASE_ADDR_2 + GPIO_EXT_INT8_FLTCON0_Offset        
#define GPIO_EXT_INT8_FLTCON1_Offset            GPIO_BASE_ADDR_2 + GPIO_EXT_INT8_FLTCON1_Offset        
#define GPIO_EXT_INT9_FLTCON0_Offset            GPIO_BASE_ADDR_2 + GPIO_EXT_INT9_FLTCON0_Offset        
#define GPIO_EXT_INT9_FLTCON1_Offset            GPIO_BASE_ADDR_2 + GPIO_EXT_INT9_FLTCON1_Offset        
#define GPIO_EXT_INT10_FLTCON0_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT10_FLTCON0_Offset       
#define GPIO_EXT_INT10_FLTCON1_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT10_FLTCON1_Offset       
#define GPIO_EXT_INT11_FLTCON0_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT11_FLTCON0_Offset       
#define GPIO_EXT_INT11_FLTCON1_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT11_FLTCON1_Offset       
#define GPIO_EXT_INT12_FLTCON0_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT12_FLTCON0_Offset       
#define GPIO_EXT_INT12_FLTCON1_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT12_FLTCON1_Offset       

#define GPIO_EXT_INT23_MASK_Offset              GPIO_BASE_ADDR_2 + GPIO_EXT_INT23_MASK_Offset          
#define GPIO_EXT_INT24_MASK_Offset              GPIO_BASE_ADDR_2 + GPIO_EXT_INT24_MASK_Offset          
#define GPIO_EXT_INT25_MASK_Offset              GPIO_BASE_ADDR_2 + GPIO_EXT_INT25_MASK_Offset          
#define GPIO_EXT_INT26_MASK_Offset              GPIO_BASE_ADDR_2 + GPIO_EXT_INT26_MASK_Offset          
#define GPIO_EXT_INT27_MASK_Offset              GPIO_BASE_ADDR_2 + GPIO_EXT_INT27_MASK_Offset          
#define GPIO_EXT_INT28_MASK_Offset              GPIO_BASE_ADDR_2 + GPIO_EXT_INT28_MASK_Offset          
#define GPIO_EXT_INT29_MASK_Offset              GPIO_BASE_ADDR_2 + GPIO_EXT_INT29_MASK_Offset          
#define GPIO_EXT_INT8_MASK_Offset               GPIO_BASE_ADDR_2 + GPIO_EXT_INT8_MASK_Offset           
#define GPIO_EXT_INT9_MASK_Offset               GPIO_BASE_ADDR_2 + GPIO_EXT_INT9_MASK_Offset           
#define GPIO_EXT_INT10_MASK_Offset              GPIO_BASE_ADDR_2 + GPIO_EXT_INT10_MASK_Offset          
#define GPIO_EXT_INT11_MASK_Offset              GPIO_BASE_ADDR_2 + GPIO_EXT_INT11_MASK_Offset          
#define GPIO_EXT_INT12_MASK_Offset              GPIO_BASE_ADDR_2 + GPIO_EXT_INT12_MASK_Offset          

#define GPIO_EXT_INT_SERVICE_XA_Offset          GPIO_BASE_ADDR_2 + GPIO_EXT_INT_SERVICE_XA_Offset      
#define GPIO_EXT_INT_SERVICE_PEND_XA_Offset     GPIO_BASE_ADDR_2 + GPIO_EXT_INT_SERVICE_PEND_XA_Offset 
#define GPIO_EXT_INT_GRPFIXPRI_XA_Offset        GPIO_BASE_ADDR_2 + GPIO_EXT_INT_GRPFIXPRI_XA_Offset    

#define GPIO_EXT_INT23_FIXPRI_Offset            GPIO_BASE_ADDR_2 + GPIO_EXT_INT23_FIXPRI_Offset        
#define GPIO_EXT_INT24_FIXPRI_Offset            GPIO_BASE_ADDR_2 + GPIO_EXT_INT24_FIXPRI_Offset        
#define GPIO_EXT_INT25_FIXPRI_Offset            GPIO_BASE_ADDR_2 + GPIO_EXT_INT25_FIXPRI_Offset        
#define GPIO_EXT_INT26_FIXPRI_Offset            GPIO_BASE_ADDR_2 + GPIO_EXT_INT26_FIXPRI_Offset        
#define GPIO_EXT_INT27_FIXPRI_Offset            GPIO_BASE_ADDR_2 + GPIO_EXT_INT27_FIXPRI_Offset        
#define GPIO_EXT_INT28_FIXPRI_Offset            GPIO_BASE_ADDR_2 + GPIO_EXT_INT28_FIXPRI_Offset        
#define GPIO_EXT_INT29_FIXPRI_Offset            GPIO_BASE_ADDR_2 + GPIO_EXT_INT29_FIXPRI_Offset        
#define GPIO_EXT_INT8_FIXPRI_Offset             GPIO_BASE_ADDR_2 + GPIO_EXT_INT8_FIXPRI_Offset         
#define GPIO_EXT_INT9_FIXPRI_Offset             GPIO_BASE_ADDR_2 + GPIO_EXT_INT9_FIXPRI_Offset         
#define GPIO_EXT_INT10_FIXPRI_Offset            GPIO_BASE_ADDR_2 + GPIO_EXT_INT10_FIXPRI_Offset        
#define GPIO_EXT_INT11_FIXPRI_Offset            GPIO_BASE_ADDR_2 + GPIO_EXT_INT11_FIXPRI_Offset        
#define GPIO_EXT_INT12_FIXPRI_Offset            GPIO_BASE_ADDR_2 + GPIO_EXT_INT12_FIXPRI_Offset        

#define GPIO_GPX0CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPX0CON_Offset                 
#define GPIO_GPX0DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPX0DAT_Offset                 
#define GPIO_GPX0PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPX0PUD_Offset                 
#define GPIO_GPX0DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPX0DRV_Offset                 

#define GPIO_GPX1CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPX1CON_Offset                 
#define GPIO_GPX1DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPX1DAT_Offset                 
#define GPIO_GPX1PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPX1PUD_Offset                 
#define GPIO_GPX1DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPX1DRV_Offset                 

#define GPIO_GPX2CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPX2CON_Offset                 
#define GPIO_GPX2DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPX2DAT_Offset                 
#define GPIO_GPX2PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPX2PUD_Offset                 
#define GPIO_GPX2DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPX2DRV_Offset                 

#define GPIO_GPX3CON_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPX3CON_Offset                 
#define GPIO_GPX3DAT_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPX3DAT_Offset                 
#define GPIO_GPX3PUD_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPX3PUD_Offset                 
#define GPIO_GPX3DRV_Offset                     GPIO_BASE_ADDR_2 + GPIO_GPX3DRV_Offset                 

#define GPIO_EXT_INT40_CON_Offset               GPIO_BASE_ADDR_2 + GPIO_EXT_INT40_CON_Offset           
#define GPIO_EXT_INT41_CON_Offset               GPIO_BASE_ADDR_2 + GPIO_EXT_INT41_CON_Offset           
#define GPIO_EXT_INT42_CON_Offset               GPIO_BASE_ADDR_2 + GPIO_EXT_INT42_CON_Offset           
#define GPIO_EXT_INT43_CON_Offset               GPIO_BASE_ADDR_2 + GPIO_EXT_INT43_CON_Offset           

#define GPIO_EXT_INT40_FLTCON0_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT40_FLTCON0_Offset       
#define GPIO_EXT_INT40_FLTCON1_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT40_FLTCON1_Offset       
#define GPIO_EXT_INT41_FLTCON0_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT41_FLTCON0_Offset       
#define GPIO_EXT_INT41_FLTCON1_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT41_FLTCON1_Offset       
#define GPIO_EXT_INT42_FLTCON0_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT42_FLTCON0_Offset       
#define GPIO_EXT_INT42_FLTCON1_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT42_FLTCON1_Offset       
#define GPIO_EXT_INT43_FLTCON0_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT43_FLTCON0_Offset       
#define GPIO_EXT_INT43_FLTCON1_Offset           GPIO_BASE_ADDR_2 + GPIO_EXT_INT43_FLTCON1_Offset       

#define GPIO_EXT_INT40_MASK_Offset              GPIO_BASE_ADDR_2 + GPIO_EXT_INT40_MASK_Offset          
#define GPIO_EXT_INT41_MASK_Offset              GPIO_BASE_ADDR_2 + GPIO_EXT_INT41_MASK_Offset          
#define GPIO_EXT_INT42_MASK_Offset              GPIO_BASE_ADDR_2 + GPIO_EXT_INT42_MASK_Offset          
#define GPIO_EXT_INT43_MASK_Offset              GPIO_BASE_ADDR_2 + GPIO_EXT_INT43_MASK_Offset          

#define GPIO_EXT_INT40_PEND_Offset              GPIO_BASE_ADDR_2 + GPIO_EXT_INT40_PEND_Offset          
#define GPIO_EXT_INT41_PEND_Offset              GPIO_BASE_ADDR_2 + GPIO_EXT_INT41_PEND_Offset          
#define GPIO_EXT_INT42_PEND_Offset              GPIO_BASE_ADDR_2 + GPIO_EXT_INT42_PEND_Offset          
#define GPIO_EXT_INT43_PEND_Offset              GPIO_BASE_ADDR_2 + GPIO_EXT_INT43_PEND_Offset          

#define GPIO_BASE_ADDR_PDNEN_2_Offset           GPIO_BASE_ADDR_2 + GPIO_BASE_ADDR_PDNEN_2_Offset       

#pragma endregion       

#pragma region GPIO BASE ADDR 3     

//////////////////////////////////////////////////////
//                  Offset Part                     //
//////////////////////////////////////////////////////
#define GPIO_GPZ0CON_Offset                     0x0000
#define GPIO_GPZ0DAT_Offset                     0x0004
#define GPIO_GPZ0PUD_Offset                     0x0008
#define GPIO_GPZ0DRV_Offset                     0x000C
#define GPIO_GPZ0CONPDN_Offset                  0x0010
#define GPIO_GPZ0PUDPDN_Offset                  0x0014

#define GPIO_EXT_INT50_CON_Offset               0x0700

#define GPIO_EXT_INT50_FLTCON0_Offset           0x0800
#define GPIO_EXT_INT50_FLTCON1_Offset           0x0804

#define GPIO_EXT_INT50_MASK_Offset              0x0900

#define GPIO_EXT_INT50_PEND_Offset              0x0A00

#define GPIO_EXT_INT_SERVICE_XD_Offset          0x0B08
#define GPIO_EXT_INT_SERVICE_PEND_XD_Offset     0x0B0C
#define GPIO_EXT_INT_GRPFIXPRI_XD_Offset        0x0B10

#define GPIO_EXT_INT50_FIXPRI_Offset            0x0B14

#define GPIO_BASE_ADDR_PDNEN_3_Offset           0x0F80

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define GPIO_GPZ0CON_ADDR                       GPIO_BASE_ADDR_3 + GPIO_GPZ0CON_Offset                
#define GPIO_GPZ0DAT_ADDR                       GPIO_BASE_ADDR_3 + GPIO_GPZ0DAT_Offset                
#define GPIO_GPZ0PUD_ADDR                       GPIO_BASE_ADDR_3 + GPIO_GPZ0PUD_Offset                
#define GPIO_GPZ0DRV_ADDR                       GPIO_BASE_ADDR_3 + GPIO_GPZ0DRV_Offset                
#define GPIO_GPZ0CONPDN_ADDR                    GPIO_BASE_ADDR_3 + GPIO_GPZ0CONPDN_Offset             
#define GPIO_GPZ0PUDPDN_ADDR                    GPIO_BASE_ADDR_3 + GPIO_GPZ0PUDPDN_Offset             

#define GPIO_EXT_INT50_CON_ADDR                 GPIO_BASE_ADDR_3 + GPIO_EXT_INT50_CON_Offset          

#define GPIO_EXT_INT50_FLTCON0_ADDR             GPIO_BASE_ADDR_3 + GPIO_EXT_INT50_FLTCON0_Offset      
#define GPIO_EXT_INT50_FLTCON1_ADDR             GPIO_BASE_ADDR_3 + GPIO_EXT_INT50_FLTCON1_Offset      

#define GPIO_EXT_INT50_MASK_ADDR                GPIO_BASE_ADDR_3 + GPIO_EXT_INT50_MASK_Offset         

#define GPIO_EXT_INT50_PEND_ADDR                GPIO_BASE_ADDR_3 + GPIO_EXT_INT50_PEND_Offset         

#define GPIO_EXT_INT_SERVICE_XD_ADDR            GPIO_BASE_ADDR_3 + GPIO_EXT_INT_SERVICE_XD_Offset     
#define GPIO_EXT_INT_SERVICE_PEND_XD_ADDR       GPIO_BASE_ADDR_3 + GPIO_EXT_INT_SERVICE_PEND_XD_Offset
#define GPIO_EXT_INT_GRPFIXPRI_XD_ADDR          GPIO_BASE_ADDR_3 + GPIO_EXT_INT_GRPFIXPRI_XD_Offset   

#define GPIO_EXT_INT50_FIXPRI_ADDR              GPIO_BASE_ADDR_3 + GPIO_EXT_INT50_FIXPRI_Offset       

#define GPIO_BASE_ADDR_PDNEN_3_ADDR             GPIO_BASE_ADDR_3 + GPIO_BASE_ADDR_PDNEN_3_Offset      

#pragma endregion

#pragma region GPIO BASE ADDR 4

//////////////////////////////////////////////////////
//                  Offset Part                     //
//////////////////////////////////////////////////////
#define GPIO_GPV0CON_Offset                     0x0000
#define GPIO_GPV0DAT_Offset                     0x0004
#define GPIO_GPV0PUD_Offset                     0x0008
#define GPIO_GPV0DRV_Offset                     0x000C
#define GPIO_GPV0CONPDN_Offset                  0x0010
#define GPIO_GPV0PUDPDN_Offset                  0x0014

#define GPIO_GPV1CON_Offset                     0x0020
#define GPIO_GPV1DAT_Offset                     0x0024
#define GPIO_GPV1PUD_Offset                     0x0028
#define GPIO_GPV1DRV_Offset                     0x002C
#define GPIO_GPV1CONPDN_Offset                  0x0030
#define GPIO_GPV1PUDPDN_Offset                  0x0034

#define GPIO_ETC7PUD_Offset                     0x0048
#define GPIO_ETC7DRV_Offset                     0x004C

#define GPIO_GPV2CON_Offset                     0x0060
#define GPIO_GPV2DAT_Offset                     0x0064
#define GPIO_GPV2PUD_Offset                     0x0068
#define GPIO_GPV2DRV_Offset                     0x006C
#define GPIO_GPV2CONPDN_Offset                  0x0070
#define GPIO_GPV2PUDPDN_Offset                  0x0074

#define GPIO_GPV3CON_Offset                     0x0080
#define GPIO_GPV3DAT_Offset                     0x0084
#define GPIO_GPV3PUD_Offset                     0x0088
#define GPIO_GPV3DRV_Offset                     0x008C
#define GPIO_GPV3CONPDN_Offset                  0x0090
#define GPIO_GPV3PUDPDN_Offset                  0x0094

#define GPIO_ETC8PUD_Offset                     0x00A8
#define GPIO_ETC8DRV_Offset                     0x00AC

#define GPIO_GPV4CON_Offset                     0x00C0
#define GPIO_GPV4DAT_Offset                     0x00C4
#define GPIO_GPV4PUD_Offset                     0x00C8
#define GPIO_GPV4DRV_Offset                     0x00CC
#define GPIO_GPV4CONPDN_Offset                  0x00D0
#define GPIO_GPV4PUDPDN_Offset                  0x00D4

#define GPIO_EXT_INT30_CON_Offset               0x0700
#define GPIO_EXT_INT31_CON_Offset               0x0704
#define GPIO_EXT_INT32_CON_Offset               0x0708
#define GPIO_EXT_INT33_CON_Offset               0x070C
#define GPIO_EXT_INT34_CON_Offset               0x0710

#define GPIO_EXT_INT30_FLTCON0_Offset           0x0800
#define GPIO_EXT_INT30_FLTCON1_Offset           0x0804
#define GPIO_EXT_INT31_FLTCON0_Offset           0x0808
#define GPIO_EXT_INT31_FLTCON1_Offset           0x080C
#define GPIO_EXT_INT32_FLTCON0_Offset           0x0810
#define GPIO_EXT_INT32_FLTCON1_Offset           0x0814
#define GPIO_EXT_INT33_FLTCON0_Offset           0x0818
#define GPIO_EXT_INT33_FLTCON1_Offset           0x081C
#define GPIO_EXT_INT34_FLTCON0_Offset           0x0820
#define GPIO_EXT_INT34_FLTCON1_Offset           0x0824

#define GPIO_EXT_INT30_MASK_Offset              0x0900
#define GPIO_EXT_INT31_MASK_Offset              0x0904
#define GPIO_EXT_INT32_MASK_Offset              0x0908
#define GPIO_EXT_INT33_MASK_Offset              0x090C
#define GPIO_EXT_INT34_MASK_Offset              0x0910

#define GPIO_EXT_INT30_PEND_Offset              0x0A00
#define GPIO_EXT_INT31_PEND_Offset              0x0A04
#define GPIO_EXT_INT32_PEND_Offset              0x0A08
#define GPIO_EXT_INT33_PEND_Offset              0x0A0C
#define GPIO_EXT_INT34_PEND_Offset              0x0A10

#define GPIO_EXT_INT_SERVICE_XC_Offset          0x0B08
#define GPIO_EXT_INT_SERVICE_PEND_XC_Offset     0x0B0C
#define GPIO_EXT_INT_GRPFIXPRI_XC_Offset        0x0B10

#define GPIO_EXT_INT30_FIXPRI_Offset            0x0B14
#define GPIO_EXT_INT31_FIXPRI_Offset            0x0B18
#define GPIO_EXT_INT32_FIXPRI_Offset            0x0B1C
#define GPIO_EXT_INT33_FIXPRI_Offset            0x0B20
#define GPIO_EXT_INT34_FIXPRI_Offset            0x0B24

#define GPIO_BASE_ADDR_PDNEN_4_Offset           0x0F80

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define GPIO_GPV0CON_ADDR                       GPIO_BASE_ADDR_4 + GPIO_GPV0CON_Offset                
#define GPIO_GPV0DAT_ADDR                       GPIO_BASE_ADDR_4 + GPIO_GPV0DAT_Offset                
#define GPIO_GPV0PUD_ADDR                       GPIO_BASE_ADDR_4 + GPIO_GPV0PUD_Offset                
#define GPIO_GPV0DRV_ADDR                       GPIO_BASE_ADDR_4 + GPIO_GPV0DRV_Offset                
#define GPIO_GPV0CONPDN_ADDR                    GPIO_BASE_ADDR_4 + GPIO_GPV0CONPDN_Offset             
#define GPIO_GPV0PUDPDN_ADDR                    GPIO_BASE_ADDR_4 + GPIO_GPV0PUDPDN_Offset             

#define GPIO_GPV1CON_ADDR                       GPIO_BASE_ADDR_4 + GPIO_GPV1CON_Offset                
#define GPIO_GPV1DAT_ADDR                       GPIO_BASE_ADDR_4 + GPIO_GPV1DAT_Offset                
#define GPIO_GPV1PUD_ADDR                       GPIO_BASE_ADDR_4 + GPIO_GPV1PUD_Offset                
#define GPIO_GPV1DRV_ADDR                       GPIO_BASE_ADDR_4 + GPIO_GPV1DRV_Offset                
#define GPIO_GPV1CONPDN_ADDR                    GPIO_BASE_ADDR_4 + GPIO_GPV1CONPDN_Offset             
#define GPIO_GPV1PUDPDN_ADDR                    GPIO_BASE_ADDR_4 + GPIO_GPV1PUDPDN_Offset             

#define GPIO_ETC7PUD_ADDR                       GPIO_BASE_ADDR_4 + GPIO_ETC7PUD_Offset                
#define GPIO_ETC7DRV_ADDR                       GPIO_BASE_ADDR_4 + GPIO_ETC7DRV_Offset                

#define GPIO_GPV2CON_ADDR                       GPIO_BASE_ADDR_4 + GPIO_GPV2CON_Offset                
#define GPIO_GPV2DAT_ADDR                       GPIO_BASE_ADDR_4 + GPIO_GPV2DAT_Offset                
#define GPIO_GPV2PUD_ADDR                       GPIO_BASE_ADDR_4 + GPIO_GPV2PUD_Offset                
#define GPIO_GPV2DRV_ADDR                       GPIO_BASE_ADDR_4 + GPIO_GPV2DRV_Offset                
#define GPIO_GPV2CONPDN_ADDR                    GPIO_BASE_ADDR_4 + GPIO_GPV2CONPDN_Offset             
#define GPIO_GPV2PUDPDN_ADDR                    GPIO_BASE_ADDR_4 + GPIO_GPV2PUDPDN_Offset             

#define GPIO_GPV3CON_ADDR                       GPIO_BASE_ADDR_4 + GPIO_GPV3CON_Offset                
#define GPIO_GPV3DAT_ADDR                       GPIO_BASE_ADDR_4 + GPIO_GPV3DAT_Offset                
#define GPIO_GPV3PUD_ADDR                       GPIO_BASE_ADDR_4 + GPIO_GPV3PUD_Offset                
#define GPIO_GPV3DRV_ADDR                       GPIO_BASE_ADDR_4 + GPIO_GPV3DRV_Offset                
#define GPIO_GPV3CONPDN_ADDR                    GPIO_BASE_ADDR_4 + GPIO_GPV3CONPDN_Offset             
#define GPIO_GPV3PUDPDN_ADDR                    GPIO_BASE_ADDR_4 + GPIO_GPV3PUDPDN_Offset             

#define GPIO_ETC8PUD_ADDR                       GPIO_BASE_ADDR_4 + GPIO_ETC8PUD_Offset                
#define GPIO_ETC8DRV_ADDR                       GPIO_BASE_ADDR_4 + GPIO_ETC8DRV_Offset                
 
#define GPIO_GPV4CON_ADDR                       GPIO_BASE_ADDR_4 + GPIO_GPV4CON_Offset                
#define GPIO_GPV4DAT_ADDR                       GPIO_BASE_ADDR_4 + GPIO_GPV4DAT_Offset                
#define GPIO_GPV4PUD_ADDR                       GPIO_BASE_ADDR_4 + GPIO_GPV4PUD_Offset                
#define GPIO_GPV4DRV_ADDR                       GPIO_BASE_ADDR_4 + GPIO_GPV4DRV_Offset                
#define GPIO_GPV4CONPDN_ADDR                    GPIO_BASE_ADDR_4 + GPIO_GPV4CONPDN_Offset             
#define GPIO_GPV4PUDPDN_ADDR                    GPIO_BASE_ADDR_4 + GPIO_GPV4PUDPDN_Offset             

#define GPIO_EXT_INT30_CON_ADDR                 GPIO_BASE_ADDR_4 + GPIO_EXT_INT30_CON_Offset          
#define GPIO_EXT_INT31_CON_ADDR                 GPIO_BASE_ADDR_4 + GPIO_EXT_INT31_CON_Offset          
#define GPIO_EXT_INT32_CON_ADDR                 GPIO_BASE_ADDR_4 + GPIO_EXT_INT32_CON_Offset          
#define GPIO_EXT_INT33_CON_ADDR                 GPIO_BASE_ADDR_4 + GPIO_EXT_INT33_CON_Offset          
#define GPIO_EXT_INT34_CON_ADDR                 GPIO_BASE_ADDR_4 + GPIO_EXT_INT34_CON_Offset          

#define GPIO_EXT_INT30_FLTCON0_ADDR             GPIO_BASE_ADDR_4 + GPIO_EXT_INT30_FLTCON0_Offset      
#define GPIO_EXT_INT30_FLTCON1_ADDR             GPIO_BASE_ADDR_4 + GPIO_EXT_INT30_FLTCON1_Offset      
#define GPIO_EXT_INT31_FLTCON0_ADDR             GPIO_BASE_ADDR_4 + GPIO_EXT_INT31_FLTCON0_Offset      
#define GPIO_EXT_INT31_FLTCON1_ADDR             GPIO_BASE_ADDR_4 + GPIO_EXT_INT31_FLTCON1_Offset      
#define GPIO_EXT_INT32_FLTCON0_ADDR             GPIO_BASE_ADDR_4 + GPIO_EXT_INT32_FLTCON0_Offset      
#define GPIO_EXT_INT32_FLTCON1_ADDR             GPIO_BASE_ADDR_4 + GPIO_EXT_INT32_FLTCON1_Offset      
#define GPIO_EXT_INT33_FLTCON0_ADDR             GPIO_BASE_ADDR_4 + GPIO_EXT_INT33_FLTCON0_Offset      
#define GPIO_EXT_INT33_FLTCON1_ADDR             GPIO_BASE_ADDR_4 + GPIO_EXT_INT33_FLTCON1_Offset      
#define GPIO_EXT_INT34_FLTCON0_ADDR             GPIO_BASE_ADDR_4 + GPIO_EXT_INT34_FLTCON0_Offset      
#define GPIO_EXT_INT34_FLTCON1_ADDR             GPIO_BASE_ADDR_4 + GPIO_EXT_INT34_FLTCON1_Offset      

#define GPIO_EXT_INT30_MASK_ADDR                GPIO_BASE_ADDR_4 + GPIO_EXT_INT30_MASK_Offset         
#define GPIO_EXT_INT31_MASK_ADDR                GPIO_BASE_ADDR_4 + GPIO_EXT_INT31_MASK_Offset         
#define GPIO_EXT_INT32_MASK_ADDR                GPIO_BASE_ADDR_4 + GPIO_EXT_INT32_MASK_Offset         
#define GPIO_EXT_INT33_MASK_ADDR                GPIO_BASE_ADDR_4 + GPIO_EXT_INT33_MASK_Offset         
#define GPIO_EXT_INT34_MASK_ADDR                GPIO_BASE_ADDR_4 + GPIO_EXT_INT34_MASK_Offset         

#define GPIO_EXT_INT30_PEND_ADDR                GPIO_BASE_ADDR_4 + GPIO_EXT_INT30_PEND_Offset         
#define GPIO_EXT_INT31_PEND_ADDR                GPIO_BASE_ADDR_4 + GPIO_EXT_INT31_PEND_Offset         
#define GPIO_EXT_INT32_PEND_ADDR                GPIO_BASE_ADDR_4 + GPIO_EXT_INT32_PEND_Offset         
#define GPIO_EXT_INT33_PEND_ADDR                GPIO_BASE_ADDR_4 + GPIO_EXT_INT33_PEND_Offset         
#define GPIO_EXT_INT34_PEND_ADDR                GPIO_BASE_ADDR_4 + GPIO_EXT_INT34_PEND_Offset         

#define GPIO_EXT_INT_SERVICE_XC_ADDR            GPIO_BASE_ADDR_4 + GPIO_EXT_INT_SERVICE_XC_Offset     
#define GPIO_EXT_INT_SERVICE_PEND_XC_ADDR       GPIO_BASE_ADDR_4 + GPIO_EXT_INT_SERVICE_PEND_XC_Offset
#define GPIO_EXT_INT_GRPFIXPRI_XC_ADDR          GPIO_BASE_ADDR_4 + GPIO_EXT_INT_GRPFIXPRI_XC_Offset   

#define GPIO_EXT_INT30_FIXPRI_ADDR              GPIO_BASE_ADDR_4 + GPIO_EXT_INT30_FIXPRI_Offset       
#define GPIO_EXT_INT31_FIXPRI_ADDR              GPIO_BASE_ADDR_4 + GPIO_EXT_INT31_FIXPRI_Offset       
#define GPIO_EXT_INT32_FIXPRI_ADDR              GPIO_BASE_ADDR_4 + GPIO_EXT_INT32_FIXPRI_Offset       
#define GPIO_EXT_INT33_FIXPRI_ADDR              GPIO_BASE_ADDR_4 + GPIO_EXT_INT33_FIXPRI_Offset       
#define GPIO_EXT_INT34_FIXPRI_ADDR              GPIO_BASE_ADDR_4 + GPIO_EXT_INT34_FIXPRI_Offset       

#define GPIO_BASE_ADDR_PDNEN_4_ADDR             GPIO_BASE_ADDR_4 + GPIO_BASE_ADDR_PDNEN_4_Offset      

#pragma endregion

#endif