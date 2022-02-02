#ifndef __UART_UART_ADDR_H__    
#define __UART_UART_ADDR_H__  

#define UART_BASE_ADDR_1 0x13800000
#define UART_BASE_ADDR_2 0x13810000
#define UART_BASE_ADDR_3 0x13820000
#define UART_BASE_ADDR_4 0x13830000
#define UART_BASE_ADDR_5 0x13840000

#pragma region UART_BASE_ADDR_1

//////////////////////////////////////////////////////
//                  Offset Part                     //
//////////////////////////////////////////////////////
#define ULCONn_Offset                       0x0000
#define UCONn_Offset                        0x0004
#define UFCONn_Offset                       0x0008
#define UMCONn_Offset                       0x000C
#define UTRSTATn_Offset                     0x0010
#define UERSTATn_Offset                     0x0014
#define UFSTATn_Offset                      0x0018
#define UMSTATn_Offset                      0x001C
#define UTXHn_Offset                        0x0020
#define URXHn_Offset                        0x0024
#define UBRDIVn_Offset                      0x0028
#define UFRACVALn_Offset                    0x002C
#define UINTPn_Offset                       0x0030
#define UINTSPn_Offset                      0x0034
#define UINTMn_Offset                       0x0038

//////////////////////////////////////////////////////
//                  Address Part                    //
//////////////////////////////////////////////////////


#define ULCON0_ADDR                         (UART_BASE_ADDR_1 + ULCONn_Offset)
#define UCON0_ADDR                         (UART_BASE_ADDR_1 + UCONn_Offset)
#define UFCON0_ADDR                         (UART_BASE_ADDR_1 + UFCONn_Offset)
#define UMCON0_ADDR                         (UART_BASE_ADDR_1 + UMCONn_Offset)
#define UTRSTAT0_ADDR                         (UART_BASE_ADDR_1 + UTRSTATn_Offset)
#define UERSTAT0_ADDR                         (UART_BASE_ADDR_1 + UERSTATn_Offset)
#define UFSTAT0_ADDR                         (UART_BASE_ADDR_1 + UFSTATn_Offset)
#define UMSTAT0_ADDR                         (UART_BASE_ADDR_1 + UMSTATn_Offset)
#define UTXH0_ADDR                         (UART_BASE_ADDR_1 + UTXHn_Offset)
#define URXH0_ADDR                         (UART_BASE_ADDR_1 + URXHn_Offset)
#define UBRDIV0_ADDR                         (UART_BASE_ADDR_1 + UBRDIVn_Offset)
#define UFRACVAL0_ADDR                         (UART_BASE_ADDR_1 + UFRACVALn_Offset)
#define UINTP0_ADDR                         (UART_BASE_ADDR_1 + UINTPn_Offset)
#define UINTSP0_ADDR                         (UART_BASE_ADDR_1 + UINTSPn_Offset)
#define UINTM0_ADDR                         (UART_BASE_ADDR_1 + UINTMn_Offset)

#pragma endregion

#pragma region UART_BASE_ADDR_2

#define ULCON1_ADDR                         (UART_BASE_ADDR_2 + ULCONn_Offset)
#define UCON1_ADDR                         (UART_BASE_ADDR_2 + UCONn_Offset)
#define UFCON1_ADDR                         (UART_BASE_ADDR_2 + UFCONn_Offset)
#define UMCON1_ADDR                         (UART_BASE_ADDR_2 + UMCONn_Offset)
#define UTRSTAT1_ADDR                         (UART_BASE_ADDR_2 + UTRSTATn_Offset)
#define UERSTAT1_ADDR                         (UART_BASE_ADDR_2 + UERSTATn_Offset)
#define UFSTAT1_ADDR                         (UART_BASE_ADDR_2 + UFSTATn_Offset)
#define UMSTAT1_ADDR                         (UART_BASE_ADDR_2 + UMSTATn_Offset)
#define UTXH1_ADDR                         (UART_BASE_ADDR_2 + UTXHn_Offset)
#define URXH1_ADDR                         (UART_BASE_ADDR_2 + URXHn_Offset)
#define UBRDIV1_ADDR                         (UART_BASE_ADDR_2 + UBRDIVn_Offset)
#define UFRACVAL1_ADDR                         (UART_BASE_ADDR_2 + UFRACVALn_Offset)
#define UINTP1_ADDR                         (UART_BASE_ADDR_2 + UINTPn_Offset)
#define UINTSP1_ADDR                         (UART_BASE_ADDR_2 + UINTSPn_Offset)
#define UINTM1_ADDR                         (UART_BASE_ADDR_2 + UINTMn_Offset)

#pragma endregion

#pragma region UART_BASE_ADDR_3

#define ULCON2_ADDR                         (UART_BASE_ADDR_3 + ULCONn_Offset)
#define UCON2_ADDR                         (UART_BASE_ADDR_3 + UCONn_Offset)
#define UFCON2_ADDR                         (UART_BASE_ADDR_3 + UFCONn_Offset)
#define UMCON2_ADDR                         (UART_BASE_ADDR_3 + UMCONn_Offset)
#define UTRSTAT2_ADDR                         (UART_BASE_ADDR_3 + UTRSTATn_Offset)
#define UERSTAT2_ADDR                         (UART_BASE_ADDR_3 + UERSTATn_Offset)
#define UFSTAT2_ADDR                         (UART_BASE_ADDR_3 + UFSTATn_Offset)
#define UMSTAT2_ADDR                         (UART_BASE_ADDR_3 + UMSTATn_Offset)
#define UTXH2_ADDR                         (UART_BASE_ADDR_3 + UTXHn_Offset)
#define URXH2_ADDR                         (UART_BASE_ADDR_3 + URXHn_Offset)
#define UBRDIV2_ADDR                         (UART_BASE_ADDR_3 + UBRDIVn_Offset)
#define UFRACVAL2_ADDR                         (UART_BASE_ADDR_3 + UFRACVALn_Offset)
#define UINTP2_ADDR                         (UART_BASE_ADDR_3 + UINTPn_Offset)
#define UINTSP2_ADDR                         (UART_BASE_ADDR_3 + UINTSPn_Offset)
#define UINTM2_ADDR                         (UART_BASE_ADDR_3 + UINTMn_Offset)

#pragma endregion

#pragma region UART_BASE_ADDR_4

#define ULCON3_ADDR                         (UART_BASE_ADDR_4 + ULCONn_Offset)
#define UCON3_ADDR                         (UART_BASE_ADDR_4 + UCONn_Offset)
#define UFCON3_ADDR                         (UART_BASE_ADDR_4 + UFCONn_Offset)
#define UMCON3_ADDR                         (UART_BASE_ADDR_4 + UMCONn_Offset)
#define UTRSTAT3_ADDR                         (UART_BASE_ADDR_4 + UTRSTATn_Offset)
#define UERSTAT3_ADDR                         (UART_BASE_ADDR_4 + UERSTATn_Offset)
#define UFSTAT3_ADDR                         (UART_BASE_ADDR_4 + UFSTATn_Offset)
#define UMSTAT3_ADDR                         (UART_BASE_ADDR_4 + UMSTATn_Offset)
#define UTXH3_ADDR                         (UART_BASE_ADDR_4 + UTXHn_Offset)
#define URXH3_ADDR                         (UART_BASE_ADDR_4 + URXHn_Offset)
#define UBRDIV3_ADDR                         (UART_BASE_ADDR_4 + UBRDIVn_Offset)
#define UFRACVAL3_ADDR                         (UART_BASE_ADDR_4 + UFRACVALn_Offset)
#define UINTP3_ADDR                         (UART_BASE_ADDR_4 + UINTPn_Offset)
#define UINTSP3_ADDR                         (UART_BASE_ADDR_4 + UINTSPn_Offset)
#define UINTM3_ADDR                         (UART_BASE_ADDR_4 + UINTMn_Offset)

#pragma endregion

#pragma region UART_BASE_ADDR_5

#define ULCON4_ADDR                         (UART_BASE_ADDR_5 + ULCONn_Offset)
#define UCON4_ADDR                         (UART_BASE_ADDR_5 + UCONn_Offset)
#define UFCON4_ADDR                         (UART_BASE_ADDR_5 + UFCONn_Offset)
#define UMCON4_ADDR                         (UART_BASE_ADDR_5 + UMCONn_Offset)
#define UTRSTAT4_ADDR                         (UART_BASE_ADDR_5 + UTRSTATn_Offset)
#define UERSTAT4_ADDR                         (UART_BASE_ADDR_5 + UERSTATn_Offset)
#define UFSTAT4_ADDR                         (UART_BASE_ADDR_5 + UFSTATn_Offset)
#define UMSTAT4_ADDR                         (UART_BASE_ADDR_5 + UMSTATn_Offset)
#define UTXH4_ADDR                         (UART_BASE_ADDR_5 + UTXHn_Offset)
#define URXH4_ADDR                         (UART_BASE_ADDR_5 + URXHn_Offset)
#define UBRDIV4_ADDR                         (UART_BASE_ADDR_5 + UBRDIVn_Offset)
#define UFRACVAL4_ADDR                         (UART_BASE_ADDR_5 + UFRACVALn_Offset)
#define UINTP4_ADDR                         (UART_BASE_ADDR_5 + UINTPn_Offset)
#define UINTSP4_ADDR                         (UART_BASE_ADDR_5 + UINTSPn_Offset)
#define UINTM4_ADDR                         (UART_BASE_ADDR_5 + UINTMn_Offset)

#pragma endregion

#endif