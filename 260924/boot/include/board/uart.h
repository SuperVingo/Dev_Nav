#ifndef __UART_UART_ADDR_H__    
#define __UART_UART_ADDR_H__  

#define UART_BASE_ADDR_1 0x13800000
#define UART_BASE_ADDR_2 0x13810000
#define UART_BASE_ADDR_3 0x13820000
#define UART_BASE_ADDR_4 0x13830000
#define UART_BASE_ADDR_5 0x13840000

//////////////////////////////////////////////////////
//                  Offset Part                     //
//////////////////////////////////////////////////////
#define ULCON_Offset                    0x0000
#define UCON_Offset                     0x0004
#define UFCON_Offset                    0x0008
#define UMCON_Offset                    0x000C
#define UTRSTAT_Offset                  0x0010
#define UERSTAT_Offset                  0x0014
#define UFSTAT_Offset                   0x0018
#define UMSTAT_Offset                   0x001C
#define UTXH_Offset                     0x0020
#define URXH_Offset                     0x0024
#define UBRDIV_Offset                   0x0028
#define UFRACVAL_Offset                 0x002C
#define UINTP_Offset                    0x0030
#define UINTSP_Offset                   0x0034
#define UINTM_Offset                    0x0038


#pragma region SYSTEM REGISTER BASE ADDR 1    

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define ULCON0_ADDR                    (UART_BASE_ADDR_1 + ULCON_Offset)
#define UCON0_ADDR                     (UART_BASE_ADDR_1 + UCON_Offset)
#define UFCON0_ADDR                    (UART_BASE_ADDR_1 + UFCON_Offset)
#define UMCON0_ADDR                    (UART_BASE_ADDR_1 + UMCON_Offset)
#define UTRSTAT0_ADDR                  (UART_BASE_ADDR_1 + UTRSTAT_Offset)
#define UERSTAT0_ADDR                  (UART_BASE_ADDR_1 + UERSTAT_Offset)
#define UFSTAT0_ADDR                   (UART_BASE_ADDR_1 + UFSTAT_Offset)
#define UMSTAT0_ADDR                   (UART_BASE_ADDR_1 + UMSTAT_Offset)
#define UTXH0_ADDR                     (UART_BASE_ADDR_1 + UTXH_Offset)
#define URXH0_ADDR                     (UART_BASE_ADDR_1 + URXH_Offset)
#define UBRDIV0_ADDR                   (UART_BASE_ADDR_1 + UBRDIV_Offset)
#define UFRACVAL0_ADDR                 (UART_BASE_ADDR_1 + UFRACVAL_Offset)
#define UINTP0_ADDR                    (UART_BASE_ADDR_1 + UINTP_Offset)
#define UINTSP0_ADDR                   (UART_BASE_ADDR_1 + UINTSP_Offset)
#define UINTM0_ADDR                    (UART_BASE_ADDR_1 + UINTM_Offset)

#pragma endregion

#pragma region SYSTEM REGISTER BASE ADDR 2    

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define ULCON1_ADDR                    (UART_BASE_ADDR_2 + ULCON_Offset)
#define UCON1_ADDR                     (UART_BASE_ADDR_2 + UCON_Offset)
#define UFCON1_ADDR                    (UART_BASE_ADDR_2 + UFCON_Offset)
#define UMCON1_ADDR                    (UART_BASE_ADDR_2 + UMCON_Offset)
#define UTRSTAT1_ADDR                  (UART_BASE_ADDR_2 + UTRSTAT_Offset)
#define UERSTAT1_ADDR                  (UART_BASE_ADDR_2 + UERSTAT_Offset)
#define UFSTAT1_ADDR                   (UART_BASE_ADDR_2 + UFSTAT_Offset)
#define UMSTAT1_ADDR                   (UART_BASE_ADDR_2 + UMSTAT_Offset)
#define UTXH1_ADDR                     (UART_BASE_ADDR_2 + UTXH_Offset)
#define URXH1_ADDR                     (UART_BASE_ADDR_2 + URXH_Offset)
#define UBRDIV1_ADDR                   (UART_BASE_ADDR_2 + UBRDIV_Offset)
#define UFRACVAL1_ADDR                 (UART_BASE_ADDR_2 + UFRACVAL_Offset)
#define UINTP1_ADDR                    (UART_BASE_ADDR_2 + UINTP_Offset)
#define UINTSP1_ADDR                   (UART_BASE_ADDR_2 + UINTSP_Offset)
#define UINTM1_ADDR                    (UART_BASE_ADDR_2 + UINTM_Offset)

#pragma endregion

#pragma region SYSTEM REGISTER BASE ADDR 3    

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define ULCON2_ADDR                    (UART_BASE_ADDR_3 + ULCON_Offset)
#define UCON2_ADDR                     (UART_BASE_ADDR_3 + UCON_Offset)
#define UFCON2_ADDR                    (UART_BASE_ADDR_3 + UFCON_Offset)
#define UMCON2_ADDR                    (UART_BASE_ADDR_3 + UMCON_Offset)
#define UTRSTAT2_ADDR                  (UART_BASE_ADDR_3 + UTRSTAT_Offset)
#define UERSTAT2_ADDR                  (UART_BASE_ADDR_3 + UERSTAT_Offset)
#define UFSTAT2_ADDR                   (UART_BASE_ADDR_3 + UFSTAT_Offset)
#define UMSTAT2_ADDR                   (UART_BASE_ADDR_3 + UMSTAT_Offset)
#define UTXH2_ADDR                     (UART_BASE_ADDR_3 + UTXH_Offset)
#define URXH2_ADDR                     (UART_BASE_ADDR_3 + URXH_Offset)
#define UBRDIV2_ADDR                   (UART_BASE_ADDR_3 + UBRDIV_Offset)
#define UFRACVAL2_ADDR                 (UART_BASE_ADDR_3 + UFRACVAL_Offset)
#define UINTP2_ADDR                    (UART_BASE_ADDR_3 + UINTP_Offset)
#define UINTSP2_ADDR                   (UART_BASE_ADDR_3 + UINTSP_Offset)
#define UINTM2_ADDR                    (UART_BASE_ADDR_3 + UINTM_Offset)

#pragma endregion

#pragma region SYSTEM REGISTER BASE ADDR 4   

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define ULCON3_ADDR                    (UART_BASE_ADDR_4 + ULCON_Offset)
#define UCON3_ADDR                     (UART_BASE_ADDR_4 + UCON_Offset)
#define UFCON3_ADDR                    (UART_BASE_ADDR_4 + UFCON_Offset)
#define UMCON3_ADDR                    (UART_BASE_ADDR_4 + UMCON_Offset)
#define UTRSTAT3_ADDR                  (UART_BASE_ADDR_4 + UTRSTAT_Offset)
#define UERSTAT3_ADDR                  (UART_BASE_ADDR_4 + UERSTAT_Offset)
#define UFSTAT3_ADDR                   (UART_BASE_ADDR_4 + UFSTAT_Offset)
#define UMSTAT3_ADDR                   (UART_BASE_ADDR_4 + UMSTAT_Offset)
#define UTXH3_ADDR                     (UART_BASE_ADDR_4 + UTXH_Offset)
#define URXH3_ADDR                     (UART_BASE_ADDR_4 + URXH_Offset)
#define UBRDIV3_ADDR                   (UART_BASE_ADDR_4 + UBRDIV_Offset)
#define UFRACVAL3_ADDR                 (UART_BASE_ADDR_4 + UFRACVAL_Offset)
#define UINTP3_ADDR                    (UART_BASE_ADDR_4 + UINTP_Offset)
#define UINTSP3_ADDR                   (UART_BASE_ADDR_4 + UINTSP_Offset)
#define UINTM3_ADDR                    (UART_BASE_ADDR_4 + UINTM_Offset)

#pragma endregion

#pragma region SYSTEM REGISTER BASE ADDR 5    

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////
#define ULCON4_ADDR                    (UART_BASE_ADDR_5 + ULCON_Offset)
#define UCON4_ADDR                     (UART_BASE_ADDR_5 + UCON_Offset)
#define UFCON4_ADDR                    (UART_BASE_ADDR_5 + UFCON_Offset)
#define UMCON4_ADDR                    (UART_BASE_ADDR_5 + UMCON_Offset)
#define UTRSTAT4_ADDR                  (UART_BASE_ADDR_5 + UTRSTAT_Offset)
#define UERSTAT4_ADDR                  (UART_BASE_ADDR_5 + UERSTAT_Offset)
#define UFSTAT4_ADDR                   (UART_BASE_ADDR_5 + UFSTAT_Offset)
#define UMSTAT4_ADDR                   (UART_BASE_ADDR_5 + UMSTAT_Offset)
#define UTXH4_ADDR                     (UART_BASE_ADDR_5 + UTXH_Offset)
#define URXH4_ADDR                     (UART_BASE_ADDR_5 + URXH_Offset)
#define UBRDIV4_ADDR                   (UART_BASE_ADDR_5 + UBRDIV_Offset)
#define UFRACVAL4_ADDR                 (UART_BASE_ADDR_5 + UFRACVAL_Offset)
#define UINTP4_ADDR                    (UART_BASE_ADDR_5 + UINTP_Offset)
#define UINTSP4_ADDR                   (UART_BASE_ADDR_5 + UINTSP_Offset)
#define UINTM4_ADDR                    (UART_BASE_ADDR_5 + UINTM_Offset)

#pragma endregion

#endif