#ifndef __GPIO_GPIO_STRUCTURE_H__     
#define __GPIO_GPIO_STRUCTURE_H__    

#include "ustdint.h"

/////////////////////////////////////////////////

typedef union GPA0CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPA0CON0:4; //3:0
        uint32_t GPA0CON1:4; //7:4
        uint32_t GPA0CON2:4; //11:8
        uint32_t GPA0CON3:4; //15:12
        uint32_t GPA0CON4:4; //19:16
        uint32_t GPA0CON5:4; //23:20
        uint32_t GPA0CON6:4; //27:24
        uint32_t GPA0CON7:4; //28:31
    } bits;
} GPA0CON;

typedef union GPA0DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPA0DAT:8; //7:0
    } bits;
} GPA0DAT;

typedef union GPA0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPA0PUD0:2; //1:0
        uint32_t GPA0PUD1:2; //3:2
        uint32_t GPA0PUD2:2; //5:4
        uint32_t GPA0PUD3:2; //7:6
        uint32_t GPA0PUD4:2; //9:8
        uint32_t GPA0PUD5:2; //11:10
        uint32_t GPA0PUD6:2; //13:12
        uint32_t GPA0PUD7:2; //15:14
    } bits;
} GPA0PUD;

typedef union GPA0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPA0DRV0:2; //1:0
        uint32_t GPA0DRV1:2; //3:2
        uint32_t GPA0DRV2:2; //5:4
        uint32_t GPA0DRV3:2; //7:6
        uint32_t GPA0DRV4:2; //9:8
        uint32_t GPA0DRV5:2; //11:10
        uint32_t GPA0DRV6:2; //13:12
        uint32_t GPA0DRV7:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPA0DRV;

typedef union GPA0CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPA00:2; //1:0
        uint32_t GPA01:2; //3:2
        uint32_t GPA02:2; //5:4
        uint32_t GPA03:2; //7:6
        uint32_t GPA04:2; //9:8
        uint32_t GPA05:2; //11:10
        uint32_t GPA06:2; //13:12
        uint32_t GPA07:2; //15:14 
    } bits;   
} GPA0CONPDN;

typedef union GPA0PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPA00:2; //1:0
        uint32_t GPA01:2; //3:2
        uint32_t GPA02:2; //5:4
        uint32_t GPA03:2; //7:6
        uint32_t GPA04:2; //9:8
        uint32_t GPA05:2; //11:10
        uint32_t GPA06:2; //13:12
        uint32_t GPA07:2; //15:14
    } bits;   
} GPA0PUDPDN;

///////////////////////////////////////////

typedef union GPA1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPA1CON0:4; //3:0
        uint32_t GPA1CON1:4; //7:4
        uint32_t GPA1CON2:4; //11:8
        uint32_t GPA1CON3:4; //15:12
        uint32_t GPA1CON4:4; //19:16
        uint32_t GPA1CON5:4; //23:20
    } bits;
} GPA1CON;

typedef union GPA1DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPA1DAT:6; //5:0
    } bits;
} GPA1DAT;

typedef union GPA1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPA1PUD0:2; //1:0
        uint32_t GPA1PUD1:2; //3:2
        uint32_t GPA1PUD2:2; //5:4
        uint32_t GPA1PUD3:2; //7:6
        uint32_t GPA1PUD4:2; //9:8
        uint32_t GPA1PUD5:2; //11:10
    } bits;
} GPA1PUD;

typedef union GPA1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPA1DRV0:2; //1:0
        uint32_t GPA1DRV1:2; //3:2
        uint32_t GPA1DRV2:2; //5:4
        uint32_t GPA1DRV3:2; //7:6
        uint32_t GPA1DRV4:2; //9:8
        uint32_t GPA1DRV5:2; //11:10
        uint32_t Unknown:4;  //15:12
        uint32_t Reserved:8; //23:16
    } bits;
} GPA1DRV;

typedef union GPA1CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPA10:2; //1:0
        uint32_t GPA11:2; //3:2
        uint32_t GPA12:2; //5:4
        uint32_t GPA13:2; //7:6
        uint32_t GPA14:2; //9:8
        uint32_t GPA15:2; //11:10
    } bits;   
} GPA1CONPDN;

typedef union GPA1PUDPDN_u
{
    uint16_t all_val:12;
    struct
    {
        uint32_t GPA10:2; //1:0
        uint32_t GPA11:2; //3:2
        uint32_t GPA12:2; //5:4
        uint32_t GPA13:2; //7:6
        uint32_t GPA14:2; //9:8
        uint32_t GPA15:2; //11:10
    } bits;   
} GPA1PUDPDN;

///////////////////////////////////////////////

typedef union GPBCON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPBCON0:4; //3:0
        uint32_t GPBCON1:4; //7:4
        uint32_t GPBCON2:4; //11:8
        uint32_t GPBCON3:4; //15:12
        uint32_t GPBCON4:4; //19:16
        uint32_t GPBCON5:4; //23:20
        uint32_t GPBCON6:4; //27:24
        uint32_t GPBCON7:4; //28:31
    } bits;
} GPBCON;

typedef union GPBDAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPBDAT:8; //7:0
    } bits;
} GPBDAT;

typedef union GPBPUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPBPUD0:2; //1:0
        uint32_t GPBPUD1:2; //3:2
        uint32_t GPBPUD2:2; //5:4
        uint32_t GPBPUD3:2; //7:6
        uint32_t GPBPUD4:2; //9:8
        uint32_t GPBPUD5:2; //11:10
        uint32_t GPBPUD6:2; //13:12
        uint32_t GPBPUD7:2; //15:14
    } bits;
} GPBPUD;

typedef union GPBDRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPBDRV0:2; //1:0
        uint32_t GPBDRV1:2; //3:2
        uint32_t GPBDRV2:2; //5:4
        uint32_t GPBDRV3:2; //7:6
        uint32_t GPBDRV4:2; //9:8
        uint32_t GPBDRV5:2; //11:10
        uint32_t GPBDRV6:2; //13:12
        uint32_t GPBDRV7:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPBDRV;

typedef union GPBCONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPB0:2; //1:0
        uint32_t GPB1:2; //3:2
        uint32_t GPB2:2; //5:4
        uint32_t GPB3:2; //7:6
        uint32_t GPB4:2; //9:8
        uint32_t GPB5:2; //11:10
        uint32_t GPB6:2; //13:12
        uint32_t GPB7:2; //15:14 
    } bits;   
} GPBCONPDN;

typedef union GPBPUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPB0:2; //1:0
        uint32_t GPB1:2; //3:2
        uint32_t GPB2:2; //5:4
        uint32_t GPB3:2; //7:6
        uint32_t GPB4:2; //9:8
        uint32_t GPB5:2; //11:10
        uint32_t GPB6:2; //13:12
        uint32_t GPB7:2; //15:14
    } bits;   
} GPBPUDPDN;

/////////////////////////////////////////////////

typedef union GPC0CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPC0CON0:4; //3:0
        uint32_t GPC0CON1:4; //7:4
        uint32_t GPC0CON2:4; //11:8
        uint32_t GPC0CON3:4; //15:12
        uint32_t GPC0CON4:4; //19:16
    } bits;
} GPC0CON;

typedef union GPC0DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPC0DAT:5; //4:0
    } bits;
} GPC0DAT;

typedef union GPC0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPC0PUD0:2; //1:0
        uint32_t GPC0PUD1:2; //3:2
        uint32_t GPC0PUD2:2; //5:4
        uint32_t GPC0PUD3:2; //7:6
        uint32_t GPC0PUD4:2; //9:8
    } bits;
} GPC0PUD;

typedef union GPC0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPC0DRV0:2; //1:0
        uint32_t GPC0DRV1:2; //3:2
        uint32_t GPC0DRV2:2; //5:4
        uint32_t GPC0DRV3:2; //7:6
        uint32_t GPC0DRV4:2; //9:8
        uint32_t Unknown:6;  //15:12
        uint32_t Reserved:8; //23:16
    } bits;
} GPC0DRV;

typedef union GPC0CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPC00:2; //1:0
        uint32_t GPC01:2; //3:2
        uint32_t GPC02:2; //5:4
        uint32_t GPC03:2; //7:6
        uint32_t GPC04:2; //9:8
    } bits;   
} GPC0CONPDN;

typedef union GPC0PUDPDN_u
{
    uint16_t all_val:10;
    struct
    {
        uint32_t GPC00:2; //1:0
        uint32_t GPC01:2; //3:2
        uint32_t GPC02:2; //5:4
        uint32_t GPC03:2; //7:6
        uint32_t GPC04:2; //9:8
    } bits;   
} GPC0PUDPDN;

/////////////////////////////////////////////////

typedef union GPC1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPC1CON0:4; //3:0
        uint32_t GPC1CON1:4; //7:4
        uint32_t GPC1CON2:4; //11:8
        uint32_t GPC1CON3:4; //15:12
        uint32_t GPC1CON4:4; //19:16
    } bits;
} GPC1CON;

typedef union GPC1DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPC1DAT:5; //4:0
    } bits;
} GPC1DAT;

typedef union GPC1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPC1PUD0:2; //1:0
        uint32_t GPC1PUD1:2; //3:2
        uint32_t GPC1PUD2:2; //5:4
        uint32_t GPC1PUD3:2; //7:6
        uint32_t GPC1PUD4:2; //9:8
    } bits;
} GPC1PUD;

typedef union GPC1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPC1DRV0:2; //1:0
        uint32_t GPC1DRV1:2; //3:2
        uint32_t GPC1DRV2:2; //5:4
        uint32_t GPC1DRV3:2; //7:6
        uint32_t GPC1DRV4:2; //9:8
        uint32_t Unknown:6;  //15:12
        uint32_t Reserved:8; //23:16
    } bits;
} GPC1DRV;

typedef union GPC1CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPC10:2; //1:0
        uint32_t GPC11:2; //3:2
        uint32_t GPC12:2; //5:4
        uint32_t GPC13:2; //7:6
        uint32_t GPC14:2; //9:8
    } bits;   
} GPC1CONPDN;

typedef union GPC1PUDPDN_u
{
    uint16_t all_val:10;
    struct
    {
        uint32_t GPC10:2; //1:0
        uint32_t GPC11:2; //3:2
        uint32_t GPC12:2; //5:4
        uint32_t GPC13:2; //7:6
        uint32_t GPC14:2; //9:8
    } bits;   
} GPC1PUDPDN;

/////////////////////////////////////////////

typedef union GPD0CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPD0CON0:4; //3:0
        uint32_t GPD0CON1:4; //7:4
        uint32_t GPD0CON2:4; //11:8
        uint32_t GPD0CON3:4; //15:12
    } bits;
} GPD0CON;

typedef union GPD0DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPD0DAT:4; //3:0
    } bits;
} GPD0DAT;

typedef union GPD0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPD0PUD0:2; //1:0
        uint32_t GPD0PUD1:2; //3:2
        uint32_t GPD0PUD2:2; //5:4
        uint32_t GPD0PUD3:2; //7:6
    } bits;
} GPD0PUD;

typedef union GPD0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPD0DRV0:2; //1:0
        uint32_t GPD0DRV1:2; //3:2
        uint32_t GPD0DRV2:2; //5:4
        uint32_t GPD0DRV3:2; //7:6
        uint32_t Unknown:8;  //15:12
        uint32_t Reserved:8; //23:16
    } bits;
} GPD0DRV;

typedef union GPD0CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPD00:2; //1:0
        uint32_t GPD01:2; //3:2
        uint32_t GPD02:2; //5:4
        uint32_t GPD03:2; //7:6
    } bits;   
} GPD0CONPDN;

typedef union GPD0PUDPDN_u
{
    uint16_t all_val:8;
    struct
    {
        uint32_t GPD00:2; //1:0
        uint32_t GPD01:2; //3:2
        uint32_t GPD02:2; //5:4
        uint32_t GPD03:2; //7:6
    } bits;   
} GPD0PUDPDN;

/////////////////////////////////////////

typedef union GPD1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPD1CON0:4; //3:0
        uint32_t GPD1CON1:4; //7:4
        uint32_t GPD1CON2:4; //11:8
        uint32_t GPD1CON3:4; //15:12
    } bits;
} GPD1CON;

typedef union GPD1DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPD1DAT:4; //3:0
    } bits;
} GPD1DAT;

typedef union GPD1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPD1PUD1:2; //1:0
        uint32_t GPD1PUD1:2; //3:2
        uint32_t GPD1PUD2:2; //5:4
        uint32_t GPD1PUD3:2; //7:6
    } bits;
} GPD1PUD;

typedef union GPD1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPD1DRV0:2; //1:0
        uint32_t GPD1DRV1:2; //3:2
        uint32_t GPD1DRV2:2; //5:4
        uint32_t GPD1DRV3:2; //7:6
        uint32_t Unknown:8;  //15:12
        uint32_t Reserved:8; //23:16
    } bits;
} GPD1DRV;

typedef union GPD1CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPD10:2; //1:0
        uint32_t GPD11:2; //3:2
        uint32_t GPD12:2; //5:4
        uint32_t GPD13:2; //7:6
    } bits;   
} GPD1CONPDN;

typedef union GPD1PUDPDN_u
{
    uint16_t all_val:8;
    struct
    {
        uint32_t GPD10:2; //1:0
        uint32_t GPD11:2; //3:2
        uint32_t GPD12:2; //5:4
        uint32_t GPD13:2; //7:6
    } bits;   
} GPD1PUDPDN;

///////////////////////////////////////////

typedef union GPF0CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF0CON0:4; //3:0
        uint32_t GPF0CON1:4; //7:4
        uint32_t GPF0CON2:4; //11:8
        uint32_t GPF0CON3:4; //15:12
        uint32_t GPF0CON4:4; //19:16
        uint32_t GPF0CON5:4; //23:20
        uint32_t GPF0CON6:4; //27:24
        uint32_t GPF0CON7:4; //28:31
    } bits;
} GPF0CON;

typedef union GPF0DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF0DAT:8; //7:0
    } bits;
} GPF0DAT;

typedef union GPF0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF0PUD0:2; //1:0
        uint32_t GPF0PUD1:2; //3:2
        uint32_t GPF0PUD2:2; //5:4
        uint32_t GPF0PUD3:2; //7:6
        uint32_t GPF0PUD4:2; //9:8
        uint32_t GPF0PUD5:2; //11:10
        uint32_t GPF0PUD6:2; //13:12
        uint32_t GPF0PUD7:2; //15:14
    } bits;
} GPF0PUD;

typedef union GPF0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF0DRV0:2; //1:0
        uint32_t GPF0DRV1:2; //3:2
        uint32_t GPF0DRV2:2; //5:4
        uint32_t GPF0DRV3:2; //7:6
        uint32_t GPF0DRV4:2; //9:8
        uint32_t GPF0DRV5:2; //11:10
        uint32_t GPF0DRV6:2; //13:12
        uint32_t GPF0DRV7:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPF0DRV;

typedef union GPF0CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF00:2; //1:0
        uint32_t GPF01:2; //3:2
        uint32_t GPF02:2; //5:4
        uint32_t GPF03:2; //7:6
        uint32_t GPF04:2; //9:8
        uint32_t GPF05:2; //11:10
        uint32_t GPF06:2; //13:12
        uint32_t GPF07:2; //15:14 
    } bits;   
} GPF0CONPDN;

typedef union GPF0PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPF00:2; //1:0
        uint32_t GPF01:2; //3:2
        uint32_t GPF02:2; //5:4
        uint32_t GPF03:2; //7:6
        uint32_t GPF04:2; //9:8
        uint32_t GPF05:2; //11:10
        uint32_t GPF06:2; //13:12
        uint32_t GPF07:2; //15:14
    } bits;   
} GPF0PUDPDN;

///////////////////////////////////////////

typedef union GPF1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF1CON0:4; //3:0
        uint32_t GPF1CON1:4; //7:4
        uint32_t GPF1CON2:4; //11:8
        uint32_t GPF1CON3:4; //15:12
        uint32_t GPF1CON4:4; //19:16
        uint32_t GPF1CON5:4; //23:20
        uint32_t GPF1CON6:4; //27:24
        uint32_t GPF1CON7:4; //28:31
    } bits;
} GPF1CON;

typedef union GPF1DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF1DAT:8; //7:0
    } bits;
} GPF1DAT;

typedef union GPF1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF1PUD0:2; //1:0
        uint32_t GPF1PUD1:2; //3:2
        uint32_t GPF1PUD2:2; //5:4
        uint32_t GPF1PUD3:2; //7:6
        uint32_t GPF1PUD4:2; //9:8
        uint32_t GPF1PUD5:2; //11:10
        uint32_t GPF1PUD6:2; //13:12
        uint32_t GPF1PUD7:2; //15:14
    } bits;
} GPF1PUD;

typedef union GPF1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF1DRV0:2; //1:0
        uint32_t GPF1DRV1:2; //3:2
        uint32_t GPF1DRV2:2; //5:4
        uint32_t GPF1DRV3:2; //7:6
        uint32_t GPF1DRV4:2; //9:8
        uint32_t GPF1DRV5:2; //11:10
        uint32_t GPF1DRV6:2; //13:12
        uint32_t GPF1DRV7:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPF1DRV;

typedef union GPF1CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF10:2; //1:0
        uint32_t GPF11:2; //3:2
        uint32_t GPF12:2; //5:4
        uint32_t GPF13:2; //7:6
        uint32_t GPF14:2; //9:8
        uint32_t GPF15:2; //11:10
        uint32_t GPF16:2; //13:12
        uint32_t GPF17:2; //15:14 
    } bits;   
} GPF1CONPDN;

typedef union GPF1PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPF10:2; //1:0
        uint32_t GPF11:2; //3:2
        uint32_t GPF12:2; //5:4
        uint32_t GPF13:2; //7:6
        uint32_t GPF14:2; //9:8
        uint32_t GPF15:2; //11:10
        uint32_t GPF16:2; //13:12
        uint32_t GPF17:2; //15:14
    } bits;   
} GPF1PUDPDN;

///////////////////////////////////////////

typedef union GPF2CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF2CON0:4; //3:0
        uint32_t GPF2CON1:4; //7:4
        uint32_t GPF2CON2:4; //11:8
        uint32_t GPF2CON3:4; //15:12
        uint32_t GPF2CON4:4; //19:16
        uint32_t GPF2CON5:4; //23:20
        uint32_t GPF2CON6:4; //27:24
        uint32_t GPF2CON7:4; //28:31
    } bits;
} GPF2CON;

typedef union GPF2DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF2DAT:8; //7:0
    } bits;
} GPF2DAT;

typedef union GPF2PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF2PUD0:2; //1:0
        uint32_t GPF2PUD1:2; //3:2
        uint32_t GPF2PUD2:2; //5:4
        uint32_t GPF2PUD3:2; //7:6
        uint32_t GPF2PUD4:2; //9:8
        uint32_t GPF2PUD5:2; //11:10
        uint32_t GPF2PUD6:2; //13:12
        uint32_t GPF2PUD7:2; //15:14
    } bits;
} GPF2PUD;

typedef union GPF2DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF2DRV0:2; //1:0
        uint32_t GPF2DRV1:2; //3:2
        uint32_t GPF2DRV2:2; //5:4
        uint32_t GPF2DRV3:2; //7:6
        uint32_t GPF2DRV4:2; //9:8
        uint32_t GPF2DRV5:2; //11:10
        uint32_t GPF2DRV6:2; //13:12
        uint32_t GPF2DRV7:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPF2DRV;

typedef union GPF2CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF20:2; //1:0
        uint32_t GPF21:2; //3:2
        uint32_t GPF22:2; //5:4
        uint32_t GPF23:2; //7:6
        uint32_t GPF24:2; //9:8
        uint32_t GPF25:2; //11:10
        uint32_t GPF26:2; //13:12
        uint32_t GPF27:2; //15:14 
    } bits;   
} GPF2CONPDN;

typedef union GPF2PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPF20:2; //1:0
        uint32_t GPF21:2; //3:2
        uint32_t GPF22:2; //5:4
        uint32_t GPF23:2; //7:6
        uint32_t GPF24:2; //9:8
        uint32_t GPF25:2; //11:10
        uint32_t GPF26:2; //13:12
        uint32_t GPF27:2; //15:14
    } bits;   
} GPF2PUDPDN;

///////////////////////////////////////////

typedef union GPF3CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF3CON0:4; //3:0
        uint32_t GPF3CON1:4; //7:4
        uint32_t GPF3CON2:4; //11:8
        uint32_t GPF3CON3:4; //15:12
        uint32_t GPF3CON4:4; //19:16
        uint32_t GPF3CON5:4; //23:20
    } bits;
} GPF3CON;

typedef union GPF3DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF3DAT:6; //5:0
    } bits;
} GPF3DAT;

typedef union GPF3PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF3PUD0:2; //1:0
        uint32_t GPF3PUD1:2; //3:2
        uint32_t GPF3PUD2:2; //5:4
        uint32_t GPF3PUD3:2; //7:6
        uint32_t GPF3PUD4:2; //9:8
        uint32_t GPF3PUD5:2; //11:10
    } bits;
} GPF3PUD;

typedef union GPF3DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF3DRV0:2; //1:0
        uint32_t GPF3DRV1:2; //3:2
        uint32_t GPF3DRV2:2; //5:4
        uint32_t GPF3DRV3:2; //7:6
        uint32_t GPF3DRV4:2; //9:8
        uint32_t GPF3DRV5:2; //11:10
        uint32_t Unknown:4;  //15:12
        uint32_t Reserved:8; //23:16
    } bits;
} GPF3DRV;

typedef union GPF3CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPF30:2; //1:0
        uint32_t GPF31:2; //3:2
        uint32_t GPF32:2; //5:4
        uint32_t GPF33:2; //7:6
        uint32_t GPF34:2; //9:8
        uint32_t GPF35:2; //11:10
    } bits;   
} GPF3CONPDN;

typedef union GPF3PUDPDN_u
{
    uint16_t all_val:12;
    struct
    {
        uint32_t GPF30:2; //1:0
        uint32_t GPF31:2; //3:2
        uint32_t GPF32:2; //5:4
        uint32_t GPF33:2; //7:6
        uint32_t GPF34:2; //9:8
        uint32_t GPF35:2; //11:10
    } bits;   
} GPF3PUDPDN;

/////////////////////////////////////////

typedef union ETC1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ETC1PUD0:2; //1:0
        uint32_t ETC1PUD1:2; //3:2
        uint32_t ETC1PUD2:2; //5:4
        uint32_t ETC1PUD3:2; //7:6
        uint32_t ETC1PUD4:2; //9:8
        uint32_t ETC1PUD5:2; //11:10
    } bits;   
} ETC1PUD;

typedef union ETC1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ETC1DRV0:2; //1:0
        uint32_t ETC1DRV1:2; //3:2
        uint32_t ETC1DRV2:2; //5:4
        uint32_t ETC1DRV3:2; //7:6
        uint32_t ETC1DRV4:2; //9:8
        uint32_t ETC1DRV5:2; //11:10
        uint32_t Unknown:4;  //15:12
        uint32_t Reserved:8; //23:16
    } bits;   
} ETC1DRV;

/////////////////////////////////////////////////

typedef union GPJ0CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPJ0CON0:4; //3:0
        uint32_t GPJ0CON1:4; //7:4
        uint32_t GPJ0CON2:4; //11:8
        uint32_t GPJ0CON3:4; //15:12
        uint32_t GPJ0CON4:4; //19:16
        uint32_t GPJ0CON5:4; //23:20
        uint32_t GPJ0CON6:4; //27:24
        uint32_t GPJ0CON7:4; //28:31
    } bits;
} GPJ0CON;

typedef union GPJ0DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPJ0DAT:8; //7:0
    } bits;
} GPJ0DAT;

typedef union GPJ0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPJ0PUD0:2; //1:0
        uint32_t GPJ0PUD1:2; //3:2
        uint32_t GPJ0PUD2:2; //5:4
        uint32_t GPJ0PUD3:2; //7:6
        uint32_t GPJ0PUD4:2; //9:8
        uint32_t GPJ0PUD5:2; //11:10
        uint32_t GPJ0PUD6:2; //13:12
        uint32_t GPJ0PUD7:2; //15:14
    } bits;
} GPJ0PUD;

typedef union GPJ0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPJ0DRV0:2; //1:0
        uint32_t GPJ0DRV1:2; //3:2
        uint32_t GPJ0DRV2:2; //5:4
        uint32_t GPJ0DRV3:2; //7:6
        uint32_t GPJ0DRV4:2; //9:8
        uint32_t GPJ0DRV5:2; //11:10
        uint32_t GPJ0DRV6:2; //13:12
        uint32_t GPJ0DRV7:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPJ0DRV;

typedef union GPJ0CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPJ00:2; //1:0
        uint32_t GPJ01:2; //3:2
        uint32_t GPJ02:2; //5:4
        uint32_t GPJ03:2; //7:6
        uint32_t GPJ04:2; //9:8
        uint32_t GPJ05:2; //11:10
        uint32_t GPJ06:2; //13:12
        uint32_t GPJ07:2; //15:14 
    } bits;   
} GPJ0CONPDN;

typedef union GPJ0PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPJ00:2; //1:0
        uint32_t GPJ01:2; //3:2
        uint32_t GPJ02:2; //5:4
        uint32_t GPJ03:2; //7:6
        uint32_t GPJ04:2; //9:8
        uint32_t GPJ05:2; //11:10
        uint32_t GPJ06:2; //13:12
        uint32_t GPJ07:2; //15:14
    } bits;   
} GPJ0PUDPDN;

/////////////////////////////////////////////////

typedef union GPJ1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPJ1CON0:4; //3:0
        uint32_t GPJ1CON1:4; //7:4
        uint32_t GPJ1CON2:4; //11:8
        uint32_t GPJ1CON3:4; //15:12
        uint32_t GPJ1CON4:4; //19:16
    } bits;
} GPJ1CON;

typedef union GPJ1DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPJ1DAT:5; //4:0
    } bits;
} GPJ1DAT;

typedef union GPJ1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPJ1PUD0:2; //1:0
        uint32_t GPJ1PUD1:2; //3:2
        uint32_t GPJ1PUD2:2; //5:4
        uint32_t GPJ1PUD3:2; //7:6
        uint32_t GPJ1PUD4:2; //9:8
    } bits;
} GPJ1PUD;

typedef union GPJ1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPJ1DRV0:2; //1:0
        uint32_t GPJ1DRV1:2; //3:2
        uint32_t GPJ1DRV2:2; //5:4
        uint32_t GPJ1DRV3:2; //7:6
        uint32_t GPJ1DRV4:2; //9:8
        uint32_t Unknown:6;  //15:12
        uint32_t Reserved:8; //23:16
    } bits;
} GPJ1DRV;

typedef union GPJ1CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPJ10:2; //1:0
        uint32_t GPJ11:2; //3:2
        uint32_t GPJ12:2; //5:4
        uint32_t GPJ13:2; //7:6
        uint32_t GPJ14:2; //9:8
    } bits;   
} GPJ1CONPDN;

typedef union GPJ1PUDPDN_u
{
    uint16_t all_val:10;
    struct
    {
        uint32_t GPJ10:2; //1:0
        uint32_t GPJ11:2; //3:2
        uint32_t GPJ12:2; //5:4
        uint32_t GPJ13:2; //7:6
        uint32_t GPJ14:2; //9:8
    } bits;   
} GPJ1PUDPDN;

////////////////////////////////////////////

typedef union EXTINT1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT1CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT1CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT1CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT1CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT1CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT1CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT1CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT1CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT1CON;

typedef union EXTINT2CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT2CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT2CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT2CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT2CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT2CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT2CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t Reserved6:8;   //31:24
    } bits;   
} EXTINT2CON;

typedef union EXTINT3CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT3CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT3CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT3CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT3CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT3CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT3CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT3CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT3CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT3CON;

typedef union EXTINT4CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT4CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT4CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT4CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT4CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT4CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t Reserved5:12;  //31:20
    } bits;   
} EXTINT4CON;

typedef union EXTINT5CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT5CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT5CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT5CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT5CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT5CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t Reserved5:12;  //31:20
    } bits;   
} EXTINT5CON;

typedef union EXTINT6CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT6CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT6CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT6CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT6CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t Reserved4:16;  //31:16
    } bits;   
} EXTINT6CON;

typedef union EXTINT7CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT7CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT7CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT7CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT7CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t Reserved4:16;  //31:16
    } bits;   
} EXTINT7CON;

typedef union EXTINT13CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT13CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT13CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT13CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT13CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT13CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT13CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT13CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT13CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT13CON;

typedef union EXTINT14CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT14CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT14CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT14CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT14CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT14CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT14CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT14CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT14CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT14CON;

typedef union EXTINT15CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT15CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT15CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT15CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT15CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT15CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT15CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT15CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT15CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT15CON;

typedef union EXTINT16CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT16CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT16CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT16CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT16CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT16CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT16CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t Reserved6:8;   //31:24
    } bits;   
} EXTINT16CON;

typedef union EXTINT21CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT21CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT21CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT21CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT21CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT21CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT21CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT21CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT21CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT21CON;

typedef union EXTINT22CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT22CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT22CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT22CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT22CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT22CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t Reserved5:12;  //31:20
    } bits;   
} EXTINT22CON;

////////////////////////////////////////////////////////

typedef union EXTINT1FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH10:7;  //6:0
        uint32_t FLTEN10:1;     //7
        uint32_t FLTWIDTH11:7;  //14:8
        uint32_t FLTEN11:1;     //15
        uint32_t FLTWIDTH12:7;  //22:16
        uint32_t FLTEN12:1;     //23
        uint32_t FLTWIDTH13:7;  //30:24
        uint32_t FLTEN13:1;     //31
    } bits;    
} EXTINT1FLTCON0;

typedef union EXTINT1FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH14:7;  //6:0
        uint32_t FLTEN14:1;     //7
        uint32_t FLTWIDTH15:7;  //14:8
        uint32_t FLTEN15:1;     //15
        uint32_t FLTWIDTH16:7;  //22:16
        uint32_t FLTEN16:1;     //23
        uint32_t FLTWIDTH17:7;  //30:24
        uint32_t FLTEN17:1;     //31
    } bits;    
} EXTINT1FLTCON1;

typedef union EXTINT2FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH20:7;  //6:0
        uint32_t FLTEN20:1;     //7
        uint32_t FLTWIDTH21:7;  //14:8
        uint32_t FLTEN21:1;     //15
        uint32_t FLTWIDTH22:7;  //22:16
        uint32_t FLTEN22:1;     //23
        uint32_t FLTWIDTH23:7;  //30:24
        uint32_t FLTEN23:1;     //31
    } bits;    
} EXTINT2FLTCON0;

typedef union EXTINT2FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH24:7;  //6:0
        uint32_t FLTEN24:1;     //7
        uint32_t FLTWIDTH25:7;  //14:8
        uint32_t FLTEN25:1;     //15
        uint32_t Reserved:16;   //31:16
    } bits;    
} EXTINT2FLTCON1;

typedef union EXTINT3FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH30:7;  //6:0
        uint32_t FLTEN30:1;     //7
        uint32_t FLTWIDTH31:7;  //14:8
        uint32_t FLTEN31:1;     //15
        uint32_t FLTWIDTH32:7;  //22:16
        uint32_t FLTEN32:1;     //23
        uint32_t FLTWIDTH33:7;  //30:24
        uint32_t FLTEN33:1;     //31
    } bits;    
} EXTINT3FLTCON0;

typedef union EXTINT3FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH34:7;  //6:0
        uint32_t FLTEN34:1;     //7
        uint32_t FLTWIDTH35:7;  //14:8
        uint32_t FLTEN35:1;     //15
        uint32_t FLTWIDTH36:7;  //22:16
        uint32_t FLTEN36:1;     //23
        uint32_t FLTWIDTH37:7;  //30:24
        uint32_t FLTEN37:1;     //31
    } bits;    
} EXTINT3FLTCON1;

typedef union EXTINT4FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH40:7;  //6:0
        uint32_t FLTEN40:1;     //7
        uint32_t FLTWIDTH41:7;  //14:8
        uint32_t FLTEN41:1;     //15
        uint32_t FLTWIDTH42:7;  //22:16
        uint32_t FLTEN42:1;     //23
        uint32_t FLTWIDTH43:7;  //30:24
        uint32_t FLTEN43:1;     //31
    } bits;    
} EXTINT4FLTCON0;

typedef union EXTINT4FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH44:7;  //6:0
        uint32_t FLTEN44:1;     //7
        uint32_t Reserved:24;   //31:8
    } bits;    
} EXTINT4FLTCON1;

typedef union EXTINT5FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH50:7;  //6:0
        uint32_t FLTEN50:1;     //7
        uint32_t FLTWIDTH51:7;  //14:8
        uint32_t FLTEN51:1;     //15
        uint32_t FLTWIDTH52:7;  //22:16
        uint32_t FLTEN52:1;     //23
        uint32_t FLTWIDTH53:7;  //30:24
        uint32_t FLTEN53:1;     //31
    } bits;    
} EXTINT5FLTCON0;

typedef union EXTINT5FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH54:7;  //6:0
        uint32_t FLTEN54:1;     //7
        uint32_t Reserved:24;   //31:8
    } bits;    
} EXTINT5FLTCON1;

typedef union EXTINT6FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH60:7;  //6:0
        uint32_t FLTEN60:1;     //7
        uint32_t FLTWIDTH61:7;  //14:8
        uint32_t FLTEN61:1;     //15
        uint32_t FLTWIDTH62:7;  //22:16
        uint32_t FLTEN62:1;     //23
        uint32_t FLTWIDTH63:7;  //30:24
        uint32_t FLTEN63:1;     //31
    } bits;    
} EXTINT6FLTCON0;

typedef union EXTINT6FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t Reserved;   //31:0
    } bits;    
} EXTINT6FLTCON1;

typedef union EXTINT7FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH70:7;  //6:0
        uint32_t FLTEN70:1;     //7
        uint32_t FLTWIDTH71:7;  //14:8
        uint32_t FLTEN71:1;     //15
        uint32_t FLTWIDTH72:7;  //22:16
        uint32_t FLTEN72:1;     //23
        uint32_t FLTWIDTH73:7;  //30:24
        uint32_t FLTEN73:1;     //31
    } bits;    
} EXTINT7FLTCON0;

typedef union EXTINT7FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t Reserved;   //31:0
    } bits;    
} EXTINT7FLTCON1;

typedef union EXTINT13FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH130:7;  //6:0
        uint32_t FLTEN130:1;     //7
        uint32_t FLTWIDTH131:7;  //14:8
        uint32_t FLTEN131:1;     //15
        uint32_t FLTWIDTH132:7;  //22:16
        uint32_t FLTEN132:1;     //23
        uint32_t FLTWIDTH133:7;  //30:24
        uint32_t FLTEN133:1;     //31
    } bits;    
} EXTINT13FLTCON0;

typedef union EXTINT13FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH134:7;  //6:0
        uint32_t FLTEN134:1;     //7
        uint32_t FLTWIDTH135:7;  //14:8
        uint32_t FLTEN135:1;     //15
        uint32_t FLTWIDTH136:7;  //22:16
        uint32_t FLTEN136:1;     //23
        uint32_t FLTWIDTH137:7;  //30:24
        uint32_t FLTEN137:1;     //31
    } bits;    
} EXTINT13FLTCON1;

typedef union EXTINT14FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH140:7;  //6:0
        uint32_t FLTEN140:1;     //7
        uint32_t FLTWIDTH141:7;  //14:8
        uint32_t FLTEN141:1;     //15
        uint32_t FLTWIDTH142:7;  //22:16
        uint32_t FLTEN142:1;     //23
        uint32_t FLTWIDTH143:7;  //30:24
        uint32_t FLTEN143:1;     //31
    } bits;    
} EXTINT14FLTCON0;

typedef union EXTINT14FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH144:7;  //6:0
        uint32_t FLTEN144:1;     //7
        uint32_t FLTWIDTH145:7;  //14:8
        uint32_t FLTEN145:1;     //15
        uint32_t FLTWIDTH146:7;  //22:16
        uint32_t FLTEN146:1;     //23
        uint32_t FLTWIDTH147:7;  //30:24
        uint32_t FLTEN147:1;     //31
    } bits;    
} EXTINT14FLTCON1;

typedef union EXTINT15FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH150:7;  //6:0
        uint32_t FLTEN150:1;     //7
        uint32_t FLTWIDTH151:7;  //14:8
        uint32_t FLTEN151:1;     //15
        uint32_t FLTWIDTH152:7;  //22:16
        uint32_t FLTEN152:1;     //23
        uint32_t FLTWIDTH153:7;  //30:24
        uint32_t FLTEN153:1;     //31
    } bits;    
} EXTINT15FLTCON0;

typedef union EXTINT15FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH154:7;  //6:0
        uint32_t FLTEN154:1;     //7
        uint32_t FLTWIDTH155:7;  //14:8
        uint32_t FLTEN155:1;     //15
        uint32_t FLTWIDTH156:7;  //22:16
        uint32_t FLTEN156:1;     //23
        uint32_t FLTWIDTH157:7;  //30:24
        uint32_t FLTEN157:1;     //31
    } bits;    
} EXTINT15FLTCON1;

typedef union EXTINT16FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH160:7;  //6:0
        uint32_t FLTEN160:1;     //7
        uint32_t FLTWIDTH161:7;  //14:8
        uint32_t FLTEN161:1;     //15
        uint32_t FLTWIDTH162:7;  //22:16
        uint32_t FLTEN162:1;     //23
        uint32_t FLTWIDTH163:7;  //30:24
        uint32_t FLTEN163:1;     //31
    } bits;    
} EXTINT16FLTCON0;

typedef union EXTINT16FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH164:7;  //6:0
        uint32_t FLTEN164:1;     //7
        uint32_t FLTWIDTH165:7;  //14:8
        uint32_t FLTEN165:1;     //15
        uint32_t Reserved:16;   //31:16
    } bits;    
} EXTINT16FLTCON1;

typedef union EXTINT21FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH210:7;  //6:0
        uint32_t FLTEN210:1;     //7
        uint32_t FLTWIDTH211:7;  //14:8
        uint32_t FLTEN211:1;     //15
        uint32_t FLTWIDTH212:7;  //22:16
        uint32_t FLTEN212:1;     //23
        uint32_t FLTWIDTH213:7;  //30:24
        uint32_t FLTEN213:1;     //31
    } bits;    
} EXTINT21FLTCON0;

typedef union EXTINT21FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH214:7;  //6:0
        uint32_t FLTEN214:1;     //7
        uint32_t FLTWIDTH215:7;  //14:8
        uint32_t FLTEN215:1;     //15
        uint32_t FLTWIDTH216:7;  //22:16
        uint32_t FLTEN216:1;     //23
        uint32_t FLTWIDTH217:7;  //30:24
        uint32_t FLTEN217:1;     //31
    } bits;    
} EXTINT21FLTCON1;

typedef union EXTINT22FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH220:7;  //6:0
        uint32_t FLTEN220:1;     //7
        uint32_t FLTWIDTH221:7;  //14:8
        uint32_t FLTEN221:1;     //15
        uint32_t FLTWIDTH222:7;  //22:16
        uint32_t FLTEN222:1;     //23
        uint32_t FLTWIDTH223:7;  //30:24
        uint32_t FLTEN223:1;     //31
    } bits;    
} EXTINT22FLTCON0;

typedef union EXTINT22FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH224:7;  //6:0
        uint32_t FLTEN224:1;     //7
        uint32_t Reserved:24;    //31:8
    } bits;    
} EXTINT22FLTCON1;

///////////////////////////////////////////////////

typedef union EXTINT1MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT1MASK0:1; //0
        uint32_t EXTINT1MASK1:1; //1
        uint32_t EXTINT1MASK2:1; //2
        uint32_t EXTINT1MASK3:1; //3
        uint32_t EXTINT1MASK4:1; //4
        uint32_t EXTINT1MASK5:1; //5
        uint32_t EXTINT1MASK6:1; //6
        uint32_t EXTINT1MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT1MASK;

typedef union EXTINT2MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT2MASK0:1; //0
        uint32_t EXTINT2MASK1:1; //1
        uint32_t EXTINT2MASK2:1; //2
        uint32_t EXTINT2MASK3:1; //3
        uint32_t EXTINT2MASK4:1; //4
        uint32_t EXTINT2MASK5:1; //5
        uint32_t Reserved:26;    //31:6
    } bits;
} EXTINT2MASK;

typedef union EXTINT3MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT3MASK0:1; //0
        uint32_t EXTINT3MASK1:1; //1
        uint32_t EXTINT3MASK2:1; //2
        uint32_t EXTINT3MASK3:1; //3
        uint32_t EXTINT3MASK4:1; //4
        uint32_t EXTINT3MASK5:1; //5
        uint32_t EXTINT3MASK6:1; //6
        uint32_t EXTINT3MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT3MASK;

typedef union EXTINT4MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT4MASK0:1; //0
        uint32_t EXTINT4MASK1:1; //1
        uint32_t EXTINT4MASK2:1; //2
        uint32_t EXTINT4MASK3:1; //3
        uint32_t EXTINT4MASK4:1; //4
        uint32_t Reserved:27;    //31:5
    } bits;
} EXTINT4MASK;

typedef union EXTINT5MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT5MASK0:1; //0
        uint32_t EXTINT5MASK1:1; //1
        uint32_t EXTINT5MASK2:1; //2
        uint32_t EXTINT5MASK3:1; //3
        uint32_t EXTINT5MASK4:1; //4
        uint32_t Reserved:27;    //31:5
    } bits;
} EXTINT5MASK;

typedef union EXTINT6MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT6MASK0:1; //0
        uint32_t EXTINT6MASK1:1; //1
        uint32_t EXTINT6MASK2:1; //2
        uint32_t EXTINT6MASK3:1; //3
        uint32_t Reserved:28;    //31:4
    } bits;
} EXTINT6MASK;

typedef union EXTINT7MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT7MASK0:1; //0
        uint32_t EXTINT7MASK1:1; //1
        uint32_t EXTINT7MASK2:1; //2
        uint32_t EXTINT7MASK3:1; //3
        uint32_t Reserved:28;    //31:4
    } bits;
} EXTINT7MASK;

typedef union EXTINT13MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT13MASK0:1; //0
        uint32_t EXTINT13MASK1:1; //1
        uint32_t EXTINT13MASK2:1; //2
        uint32_t EXTINT13MASK3:1; //3
        uint32_t EXTINT13MASK4:1; //4
        uint32_t EXTINT13MASK5:1; //5
        uint32_t EXTINT13MASK6:1; //6
        uint32_t EXTINT13MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT13MASK;

typedef union EXTINT14MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT14MASK0:1; //0
        uint32_t EXTINT14MASK1:1; //1
        uint32_t EXTINT14MASK2:1; //2
        uint32_t EXTINT14MASK3:1; //3
        uint32_t EXTINT14MASK4:1; //4
        uint32_t EXTINT14MASK5:1; //5
        uint32_t EXTINT14MASK6:1; //6
        uint32_t EXTINT14MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT14MASK;

typedef union EXTINT15MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT15MASK0:1; //0
        uint32_t EXTINT15MASK1:1; //1
        uint32_t EXTINT15MASK2:1; //2
        uint32_t EXTINT15MASK3:1; //3
        uint32_t EXTINT15MASK4:1; //4
        uint32_t EXTINT15MASK5:1; //5
        uint32_t EXTINT15MASK6:1; //6
        uint32_t EXTINT15MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT15MASK;

typedef union EXTINT16MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT16MASK0:1; //0
        uint32_t EXTINT16MASK1:1; //1
        uint32_t EXTINT16MASK2:1; //2
        uint32_t EXTINT16MASK3:1; //3
        uint32_t EXTINT16MASK4:1; //4
        uint32_t EXTINT16MASK5:1; //5
        uint32_t Reserved:26;    //31:6
    } bits;
} EXTINT16MASK;

typedef union EXTINT21MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT21MASK0:1; //0
        uint32_t EXTINT21MASK1:1; //1
        uint32_t EXTINT21MASK2:1; //2
        uint32_t EXTINT21MASK3:1; //3
        uint32_t EXTINT21MASK4:1; //4
        uint32_t EXTINT21MASK5:1; //5
        uint32_t EXTINT21MASK6:1; //6
        uint32_t EXTINT21MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT21MASK;

typedef union EXTINT22MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT22MASK0:1; //0
        uint32_t EXTINT22MASK1:1; //1
        uint32_t EXTINT22MASK2:1; //2
        uint32_t EXTINT22MASK3:1; //3
        uint32_t EXTINT22MASK4:1; //4
        uint32_t Reserved:27;    //31:5
    } bits;
} EXTINT22MASK;

///////////////////////////////////////////////////////////

typedef union EXTINT1PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT1PEND0:1; //0
        uint32_t EXTINT1PEND1:1; //1
        uint32_t EXTINT1PEND2:1; //2
        uint32_t EXTINT1PEND3:1; //3
        uint32_t EXTINT1PEND4:1; //4
        uint32_t EXTINT1PEND5:1; //5
        uint32_t EXTINT1PEND6:1; //6
        uint32_t EXTINT1PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT1PEND;

typedef union EXTINT2PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT2PEND0:1; //0
        uint32_t EXTINT2PEND1:1; //1
        uint32_t EXTINT2PEND2:1; //2
        uint32_t EXTINT2PEND3:1; //3
        uint32_t EXTINT2PEND4:1; //4
        uint32_t EXTINT2PEND5:1; //5
        uint32_t Reserved:26;    //31:6
    } bits;
} EXTINT2PEND;

typedef union EXTINT3PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT3PEND0:1; //0
        uint32_t EXTINT3PEND1:1; //1
        uint32_t EXTINT3PEND2:1; //2
        uint32_t EXTINT3PEND3:1; //3
        uint32_t EXTINT3PEND4:1; //4
        uint32_t EXTINT3PEND5:1; //5
        uint32_t EXTINT3PEND6:1; //6
        uint32_t EXTINT3PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT3PEND;

typedef union EXTINT4PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT4PEND0:1; //0
        uint32_t EXTINT4PEND1:1; //1
        uint32_t EXTINT4PEND2:1; //2
        uint32_t EXTINT4PEND3:1; //3
        uint32_t EXTINT4PEND4:1; //4
        uint32_t Reserved:27;    //31:5
    } bits;
} EXTINT4PEND;

typedef union EXTINT5PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT5PEND0:1; //0
        uint32_t EXTINT5PEND1:1; //1
        uint32_t EXTINT5PEND2:1; //2
        uint32_t EXTINT5PEND3:1; //3
        uint32_t EXTINT5PEND4:1; //4
        uint32_t Reserved:27;    //31:5
    } bits;
} EXTINT5PEND;

typedef union EXTINT6PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT6PEND0:1; //0
        uint32_t EXTINT6PEND1:1; //1
        uint32_t EXTINT6PEND2:1; //2
        uint32_t EXTINT6PEND3:1; //3
        uint32_t Reserved:28;    //31:5
    } bits;
} EXTINT6PEND;

typedef union EXTINT7PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT7PEND0:1; //0
        uint32_t EXTINT7PEND1:1; //1
        uint32_t EXTINT7PEND2:1; //2
        uint32_t EXTINT7PEND3:1; //3
        uint32_t Reserved:28;    //31:5
    } bits;
} EXTINT7PEND;

typedef union EXTINT13PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT13PEND0:1; //0
        uint32_t EXTINT13PEND1:1; //1
        uint32_t EXTINT13PEND2:1; //2
        uint32_t EXTINT13PEND3:1; //3
        uint32_t EXTINT13PEND4:1; //4
        uint32_t EXTINT13PEND5:1; //5
        uint32_t EXTINT13PEND6:1; //6
        uint32_t EXTINT13PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT13PEND;

typedef union EXTINT14PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT14PEND0:1; //0
        uint32_t EXTINT14PEND1:1; //1
        uint32_t EXTINT14PEND2:1; //2
        uint32_t EXTINT14PEND3:1; //3
        uint32_t EXTINT14PEND4:1; //4
        uint32_t EXTINT14PEND5:1; //5
        uint32_t EXTINT14PEND6:1; //6
        uint32_t EXTINT14PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT14PEND;

typedef union EXTINT15PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT15PEND0:1; //0
        uint32_t EXTINT15PEND1:1; //1
        uint32_t EXTINT15PEND2:1; //2
        uint32_t EXTINT15PEND3:1; //3
        uint32_t EXTINT15PEND4:1; //4
        uint32_t EXTINT15PEND5:1; //5
        uint32_t EXTINT15PEND6:1; //6
        uint32_t EXTINT15PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT15PEND;

typedef union EXTINT16PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT16PEND0:1; //0
        uint32_t EXTINT16PEND1:1; //1
        uint32_t EXTINT16PEND2:1; //2
        uint32_t EXTINT16PEND3:1; //3
        uint32_t EXTINT16PEND4:1; //4
        uint32_t EXTINT16PEND5:1; //5
        uint32_t Reserved:26;    //31:6
    } bits;
} EXTINT16PEND;

typedef union EXTINT21PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT21PEND0:1; //0
        uint32_t EXTINT21PEND1:1; //1
        uint32_t EXTINT21PEND2:1; //2
        uint32_t EXTINT21PEND3:1; //3
        uint32_t EXTINT21PEND4:1; //4
        uint32_t EXTINT21PEND5:1; //5
        uint32_t EXTINT21PEND6:1; //6
        uint32_t EXTINT21PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT21PEND;

typedef union EXTINT22PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT22PEND0:1; //0
        uint32_t EXTINT22PEND1:1; //1
        uint32_t EXTINT22PEND2:1; //2
        uint32_t EXTINT22PEND3:1; //3
        uint32_t EXTINT22PEND4:1; //4
        uint32_t Reserved:27;    //31:5
    } bits;
} EXTINT22PEND;

////////////////////////////////////////////

typedef union EXTINTSERVICEXB_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t SVCNUM:3;       //2:0
        uint32_t SVCGROUPNUM:5;  //7:3
        uint32_t Reserved:24;                   //31:8
    } bits;
} EXTINTSERVICEXB;

typedef union EXTINTSERVICEPENDXB_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t SVCPEND:8;  //7:0
        uint32_t Reserved:24;                   //31:8
    } bits;
} EXTINTSERVICEPENDXB;

typedef union EXTINTGRPFIXPRIXB_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTGRPNUM:4;  //3:0
        uint32_t Reserved:28;   //31:4
    } bits;
} EXTINTGRPFIXPRIXB;

///////////////////////////////////////////////////

typedef union EXTINT1FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT1FIXPRI;

typedef union EXTINT2FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT2FIXPRI;

typedef union EXTINT3FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT3FIXPRI;

typedef union EXTINT4FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT4FIXPRI;

typedef union EXTINT5FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT5FIXPRI;

typedef union EXTINT6FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT6FIXPRI;

typedef union EXTINT7FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT7FIXPRI;

typedef union EXTINT13FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HHIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT13FIXPRI;

typedef union EXTINT14FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT14FIXPRI;

typedef union EXTINT15FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT15FIXPRI;

typedef union EXTINT16FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT16FIXPRI;

typedef union EXTINT21FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT21FIXPRI;

typedef union EXTINT22FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT22FIXPRI;

////////////////////////////////////////////////

typedef union BASEADDR1PDNEN_u
{
    uint8_t all_val;
    struct 
    {
        uint32_t PDNEN:1; //0
        uint32_t PDNENCFG:1; //1
        uint32_t Reserved:6; //7:2
    } bits;
} BASEADDR1PDNEN;

/////////////////////////////////////////////////

typedef union GPK0CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK0CON0:4; //3:0
        uint32_t GPK0CON1:4; //7:4
        uint32_t GPK0CON2:4; //11:8
        uint32_t GPK0CON3:4; //15:12
        uint32_t GPK0CON4:4; //19:16
        uint32_t GPK0CON5:4; //23:20
        uint32_t GPK0CON6:4; //27:24
    } bits;
} GPK0CON;

typedef union GPK0DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK0DAT:8; //7:0
    } bits;
} GPK0DAT;

typedef union GPK0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK0PUD0:2; //1:0
        uint32_t GPK0PUD1:2; //3:2
        uint32_t GPK0PUD2:2; //5:4
        uint32_t GPK0PUD3:2; //7:6
        uint32_t GPK0PUD4:2; //9:8
        uint32_t GPK0PUD5:2; //11:10
        uint32_t GPK0PUD6:2; //13:12
    } bits;
} GPK0PUD;

typedef union GPK0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK0DRV0:2; //1:0
        uint32_t GPK0DRV1:2; //3:2
        uint32_t GPK0DRV2:2; //5:4
        uint32_t GPK0DRV3:2; //7:6
        uint32_t GPK0DRV4:2; //9:8
        uint32_t GPK0DRV5:2; //11:10
        uint32_t GPK0DRV6:2; //13:12
        uint32_t Unknown:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPK0DRV;

typedef union GPK0CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK00:2; //1:0
        uint32_t GPK01:2; //3:2
        uint32_t GPK02:2; //5:4
        uint32_t GPK03:2; //7:6
        uint32_t GPK04:2; //9:8
        uint32_t GPK05:2; //11:10
        uint32_t GPK06:2; //13:12
    } bits;   
} GPK0CONPDN;

typedef union GPK0PUDPDN_u
{
    uint16_t all_val:14;
    struct
    {
        uint32_t GPK00:2; //1:0
        uint32_t GPK01:2; //3:2
        uint32_t GPK02:2; //5:4
        uint32_t GPK03:2; //7:6
        uint32_t GPK04:2; //9:8
        uint32_t GPK05:2; //11:10
        uint32_t GPK06:2; //13:12
    } bits;   
} GPK0PUDPDN;

/////////////////////////////////////////////////

typedef union GPK1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK1CON0:4; //3:0
        uint32_t GPK1CON1:4; //7:4
        uint32_t GPK1CON2:4; //11:8
        uint32_t GPK1CON3:4; //15:12
        uint32_t GPK1CON4:4; //19:16
        uint32_t GPK1CON5:4; //23:20
        uint32_t GPK1CON6:4; //27:24
    } bits;
} GPK1CON;

typedef union GPK1DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK1DAT:7; //6:0
    } bits;
} GPK1DAT;

typedef union GPK1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK1PUD0:2; //1:0
        uint32_t GPK1PUD1:2; //3:2
        uint32_t GPK1PUD2:2; //5:4
        uint32_t GPK1PUD3:2; //7:6
        uint32_t GPK1PUD4:2; //9:8
        uint32_t GPK1PUD5:2; //11:10
        uint32_t GPK1PUD6:2; //13:12
    } bits;
} GPK1PUD;

typedef union GPK1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK1DRV0:2; //1:0
        uint32_t GPK1DRV1:2; //3:2
        uint32_t GPK1DRV2:2; //5:4
        uint32_t GPK1DRV3:2; //7:6
        uint32_t GPK1DRV4:2; //9:8
        uint32_t GPK1DRV5:2; //11:10
        uint32_t GPK1DRV6:2; //13:12
        uint32_t Unknown:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPK1DRV;

typedef union GPK1CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK10:2; //1:0
        uint32_t GPK11:2; //3:2
        uint32_t GPK12:2; //5:4
        uint32_t GPK13:2; //7:6
        uint32_t GPK14:2; //9:8
        uint32_t GPK15:2; //11:10
        uint32_t GPK16:2; //13:12
    } bits;   
} GPK1CONPDN;

typedef union GPK1PUDPDN_u
{
    uint16_t all_val:14;
    struct
    {
        uint32_t GPK10:2; //1:0
        uint32_t GPK11:2; //3:2
        uint32_t GPK12:2; //5:4
        uint32_t GPK13:2; //7:6
        uint32_t GPK14:2; //9:8
        uint32_t GPK15:2; //11:10
        uint32_t GPK16:2; //13:12
    } bits;   
} GPK1PUDPDN;

/////////////////////////////////////////////////

typedef union GPK2CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK2CON0:4; //3:0
        uint32_t GPK2CON1:4; //7:4
        uint32_t GPK2CON2:4; //11:8
        uint32_t GPK2CON3:4; //15:12
        uint32_t GPK2CON4:4; //19:16
        uint32_t GPK2CON5:4; //23:20
        uint32_t GPK2CON6:4; //27:24
    } bits;
} GPK2CON;

typedef union GPK2DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK2DAT:7; //6:0
    } bits;
} GPK2DAT;

typedef union GPK2PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK2PUD0:2; //1:0
        uint32_t GPK2PUD1:2; //3:2
        uint32_t GPK2PUD2:2; //5:4
        uint32_t GPK2PUD3:2; //7:6
        uint32_t GPK2PUD4:2; //9:8
        uint32_t GPK2PUD5:2; //11:10
        uint32_t GPK2PUD6:2; //13:12
    } bits;
} GPK2PUD;

typedef union GPK2DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK2DRV0:2; //1:0
        uint32_t GPK2DRV1:2; //3:2
        uint32_t GPK2DRV2:2; //5:4
        uint32_t GPK2DRV3:2; //7:6
        uint32_t GPK2DRV4:2; //9:8
        uint32_t GPK2DRV5:2; //11:10
        uint32_t GPK2DRV6:2; //13:12
        uint32_t Unknown:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPK2DRV;

typedef union GPK2CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK20:2; //1:0
        uint32_t GPK21:2; //3:2
        uint32_t GPK22:2; //5:4
        uint32_t GPK23:2; //7:6
        uint32_t GPK24:2; //9:8
        uint32_t GPK25:2; //11:10
        uint32_t GPK26:2; //13:12
    } bits;   
} GPK2CONPDN;

typedef union GPK2PUDPDN_u
{
    uint16_t all_val:14;
    struct
    {
        uint32_t GPK20:2; //1:0
        uint32_t GPK21:2; //3:2
        uint32_t GPK22:2; //5:4
        uint32_t GPK23:2; //7:6
        uint32_t GPK24:2; //9:8
        uint32_t GPK25:2; //11:10
        uint32_t GPK26:2; //13:12
    } bits;   
} GPK2PUDPDN;

/////////////////////////////////////////////////

typedef union GPK3CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK3CON0:4; //3:0
        uint32_t GPK3CON1:4; //7:4
        uint32_t GPK3CON2:4; //11:8
        uint32_t GPK3CON3:4; //15:12
        uint32_t GPK3CON4:4; //19:16
        uint32_t GPK3CON5:4; //23:20
        uint32_t GPK3CON6:4; //27:24
    } bits;
} GPK3CON;

typedef union GPK3DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK2DAT:7; //6:0
    } bits;
} GPK3DAT;

typedef union GPK3PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK3PUD0:2; //1:0
        uint32_t GPK3PUD1:2; //3:2
        uint32_t GPK3PUD2:2; //5:4
        uint32_t GPK3PUD3:2; //7:6
        uint32_t GPK3PUD4:2; //9:8
        uint32_t GPK3PUD5:2; //11:10
        uint32_t GPK3PUD6:2; //13:12
    } bits;
} GPK3PUD;

typedef union GPK3DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK3DRV0:2; //1:0
        uint32_t GPK3DRV1:2; //3:2
        uint32_t GPK3DRV2:2; //5:4
        uint32_t GPK3DRV3:2; //7:6
        uint32_t GPK3DRV4:2; //9:8
        uint32_t GPK3DRV5:2; //11:10
        uint32_t GPK3DRV6:2; //13:12
        uint32_t Unknown:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPK3DRV;

typedef union GPK3CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPK30:2; //1:0
        uint32_t GPK31:2; //3:2
        uint32_t GPK32:2; //5:4
        uint32_t GPK33:2; //7:6
        uint32_t GPK34:2; //9:8
        uint32_t GPK35:2; //11:10
        uint32_t GPK36:2; //13:12
    } bits;   
} GPK3CONPDN;

typedef union GPK3PUDPDN_u
{
    uint16_t all_val:14;
    struct
    {
        uint32_t GPK30:2; //1:0
        uint32_t GPK31:2; //3:2
        uint32_t GPK32:2; //5:4
        uint32_t GPK33:2; //7:6
        uint32_t GPK34:2; //9:8
        uint32_t GPK35:2; //11:10
        uint32_t GPK36:2; //13:12
    } bits;   
} GPK3PUDPDN;

/////////////////////////////////////////////////

typedef union GPL0CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL0CON0:4; //3:0
        uint32_t GPL0CON1:4; //7:4
        uint32_t GPL0CON2:4; //11:8
        uint32_t GPL0CON3:4; //15:12
        uint32_t GPL0CON4:4; //19:16
        uint32_t GPL0CON5:4; //23:20
        uint32_t GPL0CON6:4; //27:24
    } bits;
} GPL0CON;

typedef union GPL0DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL0DAT:7; //6:0
    } bits;
} GPL0DAT;

typedef union GPL0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL0PUD0:2; //1:0
        uint32_t GPL0PUD1:2; //3:2
        uint32_t GPL0PUD2:2; //5:4
        uint32_t GPL0PUD3:2; //7:6
        uint32_t GPL0PUD4:2; //9:8
        uint32_t GPL0PUD5:2; //11:10
        uint32_t GPL0PUD6:2; //13:12
    } bits;
} GPL0PUD;

typedef union GPL0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL0DRV0:2; //1:0
        uint32_t GPL0DRV1:2; //3:2
        uint32_t GPL0DRV2:2; //5:4
        uint32_t GPL0DRV3:2; //7:6
        uint32_t GPL0DRV4:2; //9:8
        uint32_t GPL0DRV5:2; //11:10
        uint32_t GPL0DRV6:2; //13:12
        uint32_t Unknown:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPL0DRV;

typedef union GPL0CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL00:2; //1:0
        uint32_t GPL01:2; //3:2
        uint32_t GPL02:2; //5:4
        uint32_t GPL03:2; //7:6
        uint32_t GPL04:2; //9:8
        uint32_t GPL05:2; //11:10
        uint32_t GPL06:2; //13:12
    } bits;   
} GPL0CONPDN;

typedef union GPL0PUDPDN_u
{
    uint16_t all_val:14;
    struct
    {
        uint32_t GPL00:2; //1:0
        uint32_t GPL01:2; //3:2
        uint32_t GPL02:2; //5:4
        uint32_t GPL03:2; //7:6
        uint32_t GPL04:2; //9:8
        uint32_t GPL05:2; //11:10
        uint32_t GPL06:2; //13:12
    } bits;   
} GPL0PUDPDN;

/////////////////////////////////////////////////

typedef union GPL1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL1CON0:4; //3:0
        uint32_t GPL1CON1:4; //7:4
    } bits;
} GPL1CON;

typedef union GPL1DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL1DAT:2; //1:0
    } bits;
} GPL1DAT;

typedef union GPL1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL1PUD0:2; //1:0
        uint32_t GPL1PUD1:2; //3:2
    } bits;
} GPL1PUD;

typedef union GPL1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL1DRV0:2; //1:0
        uint32_t GPL1DRV1:2; //3:2
        uint32_t Unknown:2; //15:4 
        uint32_t Reserved:8; //23:16
    } bits;
} GPL1DRV;

typedef union GPL1CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL10:2; //1:0
        uint32_t GPL11:2; //3:2
    } bits;   
} GPL1CONPDN;

typedef union GPL1PUDPDN_u
{
    uint16_t all_val:4;
    struct
    {
        uint32_t GPL10:2; //1:0
        uint32_t GPL11:2; //3:2
    } bits;   
} GPL1PUDPDN;

/////////////////////////////////////////////////

typedef union GPL2CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL2CON0:4; //3:0
        uint32_t GPL2CON1:4; //7:4
        uint32_t GPL2CON2:4; //11:8
        uint32_t GPL2CON3:4; //15:12
        uint32_t GPL2CON4:4; //19:16
        uint32_t GPL2CON5:4; //23:20
        uint32_t GPL2CON6:4; //27:24
        uint32_t GPL2CON7:4; //31:28
    } bits;
} GPL2CON;

typedef union GPL2DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL2DAT:8; //7:0
    } bits;
} GPL2DAT;

typedef union GPL2PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL2PUD0:2; //1:0
        uint32_t GPL2PUD1:2; //3:2
        uint32_t GPL2PUD2:2; //5:4
        uint32_t GPL2PUD3:2; //7:6
        uint32_t GPL2PUD4:2; //9:8
        uint32_t GPL2PUD5:2; //11:10
        uint32_t GPL2PUD6:2; //13:12
        uint32_t GPL2PUD7:2; //15:14
    } bits;
} GPL2PUD;

typedef union GPL2DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL2DRV0:2; //1:0
        uint32_t GPL2DRV1:2; //3:2
        uint32_t GPL2DRV2:2; //5:4
        uint32_t GPL2DRV3:2; //7:6
        uint32_t GPL2DRV4:2; //9:8
        uint32_t GPL2DRV5:2; //11:10
        uint32_t GPL2DRV6:2; //13:12
        uint32_t GPL2DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPL2DRV;

typedef union GPL2CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPL20:2; //1:0
        uint32_t GPL21:2; //3:2
        uint32_t GPL22:2; //5:4
        uint32_t GPL23:2; //7:6
        uint32_t GPL24:2; //9:8
        uint32_t GPL25:2; //11:10
        uint32_t GPL26:2; //13:12
        uint32_t GPL27:2; //15:14
    } bits;   
} GPL2CONPDN;

typedef union GPL2PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPL20:2; //1:0
        uint32_t GPL21:2; //3:2
        uint32_t GPL22:2; //5:4
        uint32_t GPL23:2; //7:6
        uint32_t GPL24:2; //9:8
        uint32_t GPL25:2; //11:10
        uint32_t GPL26:2; //13:12
        uint32_t GPL27:2; //15:14
    } bits;   
} GPL2PUDPDN;

/////////////////////////////////////////////////

typedef union GPY0CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY0CON0:4; //3:0
        uint32_t GPY0CON1:4; //7:4
        uint32_t GPY0CON2:4; //11:8
        uint32_t GPY0CON3:4; //15:12
        uint32_t GPY0CON4:4; //19:16
        uint32_t GPY0CON5:4; //23:20
    } bits;
} GPY0CON;

typedef union GPY0DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY0DAT:6; //5:0
    } bits;
} GPY0DAT;

typedef union GPY0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY0PUD0:2; //1:0
        uint32_t GPY0PUD1:2; //3:2
        uint32_t GPY0PUD2:2; //5:4
        uint32_t GPY0PUD3:2; //7:6
        uint32_t GPY0PUD4:2; //9:8
        uint32_t GPY0PUD5:2; //11:10
    } bits;
} GPY0PUD;

typedef union GPY0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY0DRV0:2; //1:0
        uint32_t GPY0DRV1:2; //3:2
        uint32_t GPY0DRV2:2; //5:4
        uint32_t GPY0DRV3:2; //7:6
        uint32_t GPY0DRV4:2; //9:8
        uint32_t GPY0DRV5:2; //11:10
        uint32_t Unknown:4; //15:12 
        uint32_t Reserved:8; //23:16
    } bits;
} GPY0DRV;

typedef union GPY0CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY00:2; //1:0
        uint32_t GPY01:2; //3:2
        uint32_t GPY02:2; //5:4
        uint32_t GPY03:2; //7:6
        uint32_t GPY04:2; //9:8
        uint32_t GPY05:2; //11:10
    } bits;   
} GPY0CONPDN;

typedef union GPY0PUDPDN_u
{
    uint16_t all_val:12;
    struct
    {
        uint32_t GPY00:2; //1:0
        uint32_t GPY01:2; //3:2
        uint32_t GPY02:2; //5:4
        uint32_t GPY03:2; //7:6
        uint32_t GPY04:2; //9:8
        uint32_t GPY05:2; //11:10
    } bits;   
} GPY0PUDPDN;

/////////////////////////////////////////////////

typedef union GPY1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY1CON0:4; //3:0
        uint32_t GPY1CON1:4; //7:4
        uint32_t GPY1CON2:4; //11:8
        uint32_t GPY1CON3:4; //15:12
    } bits;
} GPY1CON;

typedef union GPY1DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY1DAT:4; //3:0
    } bits;
} GPY1DAT;

typedef union GPY1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY1PUD0:2; //1:0
        uint32_t GPY1PUD1:2; //3:2
        uint32_t GPY1PUD2:2; //5:4
        uint32_t GPY1PUD3:2; //7:6
    } bits;
} GPY1PUD;

typedef union GPY1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY1DRV0:2; //1:0
        uint32_t GPY1DRV1:2; //3:2
        uint32_t GPY1DRV2:2; //5:4
        uint32_t GPY1DRV3:2; //7:6
        uint32_t Unknown:8; //15:8 
        uint32_t Reserved:8; //23:16
    } bits;
} GPY1DRV;

typedef union GPY1CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY10:2; //1:0
        uint32_t GPY11:2; //3:2
        uint32_t GPY12:2; //5:4
        uint32_t GPY13:2; //7:6
    } bits;   
} GPY1CONPDN;

typedef union GPY1PUDPDN_u
{
    uint16_t all_val:8;
    struct
    {
        uint32_t GPY10:2; //1:0
        uint32_t GPY11:2; //3:2
        uint32_t GPY12:2; //5:4
        uint32_t GPY13:2; //7:6
    } bits;   
} GPY1PUDPDN;

/////////////////////////////////////////////////

typedef union GPY2CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY2CON0:4; //3:0
        uint32_t GPY2CON1:4; //7:4
        uint32_t GPY2CON2:4; //11:8
        uint32_t GPY2CON3:4; //15:12
        uint32_t GPY2CON4:4; //19:16
        uint32_t GPY2CON5:4; //23:20
    } bits;
} GPY2CON;

typedef union GPY2DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY2DAT:6; //5:0
    } bits;
} GPY2DAT;

typedef union GPY2PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY2PUD0:2; //1:0
        uint32_t GPY2PUD1:2; //3:2
        uint32_t GPY2PUD2:2; //5:4
        uint32_t GPY2PUD3:2; //7:6
        uint32_t GPY2PUD4:2; //9:8
        uint32_t GPY2PUD5:2; //11:10
    } bits;
} GPY2PUD;

typedef union GPY2DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY2DRV0:2; //1:0
        uint32_t GPY2DRV1:2; //3:2
        uint32_t GPY2DRV2:2; //5:4
        uint32_t GPY2DRV3:2; //7:6
        uint32_t GPY2DRV4:2; //9:8
        uint32_t GPY2DRV5:2; //11:10
        uint32_t Unknown:4; //15:12 
        uint32_t Reserved:8; //23:16
    } bits;
} GPY2DRV;

typedef union GPY2CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY20:2; //1:0
        uint32_t GPY21:2; //3:2
        uint32_t GPY22:2; //5:4
        uint32_t GPY23:2; //7:6
        uint32_t GPY24:2; //9:8
        uint32_t GPY25:2; //11:10
    } bits;   
} GPY2CONPDN;

typedef union GPY2PUDPDN_u
{
    uint16_t all_val:12;
    struct
    {
        uint32_t GPY20:2; //1:0
        uint32_t GPY21:2; //3:2
        uint32_t GPY22:2; //5:4
        uint32_t GPY23:2; //7:6
        uint32_t GPY24:2; //9:8
        uint32_t GPY25:2; //11:10
    } bits;   
} GPY2PUDPDN;

/////////////////////////////////////////////////

typedef union GPY3CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY3CON0:4; //3:0
        uint32_t GPY3CON1:4; //7:4
        uint32_t GPY3CON2:4; //11:8
        uint32_t GPY3CON3:4; //15:12
        uint32_t GPY3CON4:4; //19:16
        uint32_t GPY3CON5:4; //23:20
        uint32_t GPY3CON6:4; //27:24
        uint32_t GPY3CON7:4; //31:28
    } bits;
} GPY3CON;

typedef union GPY3DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY3DAT:8; //7:0
    } bits;
} GPY3DAT;

typedef union GPY3PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY3PUD0:2; //1:0
        uint32_t GPY3PUD1:2; //3:2
        uint32_t GPY3PUD2:2; //5:4
        uint32_t GPY3PUD3:2; //7:6
        uint32_t GPY3PUD4:2; //9:8
        uint32_t GPY3PUD5:2; //11:10
        uint32_t GPY3PUD6:2; //13:12
        uint32_t GPY3PUD7:2; //15:14
    } bits;
} GPY3PUD;

typedef union GPY3DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY3DRV0:2; //1:0
        uint32_t GPY3DRV1:2; //3:2
        uint32_t GPY3DRV2:2; //5:4
        uint32_t GPY3DRV3:2; //7:6
        uint32_t GPY3DRV4:2; //9:8
        uint32_t GPY3DRV5:2; //11:10
        uint32_t GPY3DRV6:2; //13:12
        uint32_t GPY3DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPY3DRV;

typedef union GPY3CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY30:2; //1:0
        uint32_t GPY31:2; //3:2
        uint32_t GPY32:2; //5:4
        uint32_t GPY33:2; //7:6
        uint32_t GPY34:2; //9:8
        uint32_t GPY35:2; //11:10
        uint32_t GPY36:2; //13:12
        uint32_t GPY37:2; //15:14
    } bits;   
} GPY3CONPDN;

typedef union GPY3PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPY30:2; //1:0
        uint32_t GPY31:2; //3:2
        uint32_t GPY32:2; //5:4
        uint32_t GPY33:2; //7:6
        uint32_t GPY34:2; //9:8
        uint32_t GPY35:2; //11:10
        uint32_t GPY36:2; //13:12
        uint32_t GPY37:2; //15:14
    } bits;   
} GPY3PUDPDN;

/////////////////////////////////////////////////

typedef union GPY4CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY4CON0:4; //3:0
        uint32_t GPY4CON1:4; //7:4
        uint32_t GPY4CON2:4; //11:8
        uint32_t GPY4CON3:4; //15:12
        uint32_t GPY4CON4:4; //19:16
        uint32_t GPY4CON5:4; //23:20
        uint32_t GPY4CON6:4; //27:24
        uint32_t GPY4CON7:4; //31:28
    } bits;
} GPY4CON;

typedef union GPY4DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY4DAT:8; //7:0
    } bits;
} GPY4DAT;

typedef union GPY4PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY4PUD0:2; //1:0
        uint32_t GPY4PUD1:2; //3:2
        uint32_t GPY4PUD2:2; //5:4
        uint32_t GPY4PUD3:2; //7:6
        uint32_t GPY4PUD4:2; //9:8
        uint32_t GPY4PUD5:2; //11:10
        uint32_t GPY4PUD6:2; //13:12
        uint32_t GPY4PUD7:2; //15:14
    } bits;
} GPY4PUD;

typedef union GPY4DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY4DRV0:2; //1:0
        uint32_t GPY4DRV1:2; //3:2
        uint32_t GPY4DRV2:2; //5:4
        uint32_t GPY4DRV3:2; //7:6
        uint32_t GPY4DRV4:2; //9:8
        uint32_t GPY4DRV5:2; //11:10
        uint32_t GPY4DRV6:2; //13:12
        uint32_t GPY4DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPY4DRV;

typedef union GPY4CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY40:2; //1:0
        uint32_t GPY41:2; //3:2
        uint32_t GPY42:2; //5:4
        uint32_t GPY43:2; //7:6
        uint32_t GPY44:2; //9:8
        uint32_t GPY45:2; //11:10
        uint32_t GPY46:2; //13:12
        uint32_t GPY47:2; //15:14
    } bits;   
} GPY4CONPDN;

typedef union GPY4PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPY40:2; //1:0
        uint32_t GPY41:2; //3:2
        uint32_t GPY42:2; //5:4
        uint32_t GPY43:2; //7:6
        uint32_t GPY44:2; //9:8
        uint32_t GPY45:2; //11:10
        uint32_t GPY46:2; //13:12
        uint32_t GPY47:2; //15:14
    } bits;   
} GPY4PUDPDN;

/////////////////////////////////////////////////

typedef union GPY5CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY5CON0:4; //3:0
        uint32_t GPY5CON1:4; //7:4
        uint32_t GPY5CON2:4; //11:8
        uint32_t GPY5CON3:4; //15:12
        uint32_t GPY5CON4:4; //19:16
        uint32_t GPY5CON5:4; //23:20
        uint32_t GPY5CON6:4; //27:24
        uint32_t GPY5CON7:4; //31:28
    } bits;
} GPY5CON;

typedef union GPY5DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY5DAT:8; //7:0
    } bits;
} GPY5DAT;

typedef union GPY5PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY5PUD0:2; //1:0
        uint32_t GPY5PUD1:2; //3:2
        uint32_t GPY5PUD2:2; //5:4
        uint32_t GPY5PUD3:2; //7:6
        uint32_t GPY5PUD4:2; //9:8
        uint32_t GPY5PUD5:2; //11:10
        uint32_t GPY5PUD6:2; //13:12
        uint32_t GPY5PUD7:2; //15:14
    } bits;
} GPY5PUD;

typedef union GPY5DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY5DRV0:2; //1:0
        uint32_t GPY5DRV1:2; //3:2
        uint32_t GPY5DRV2:2; //5:4
        uint32_t GPY5DRV3:2; //7:6
        uint32_t GPY5DRV4:2; //9:8
        uint32_t GPY5DRV5:2; //11:10
        uint32_t GPY5DRV6:2; //13:12
        uint32_t GPY5DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPY5DRV;

typedef union GPY5CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY50:2; //1:0
        uint32_t GPY51:2; //3:2
        uint32_t GPY52:2; //5:4
        uint32_t GPY53:2; //7:6
        uint32_t GPY54:2; //9:8
        uint32_t GPY55:2; //11:10
        uint32_t GPY56:2; //13:12
        uint32_t GPY57:2; //15:14
    } bits;   
} GPY5CONPDN;

typedef union GPY5PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPY50:2; //1:0
        uint32_t GPY51:2; //3:2
        uint32_t GPY52:2; //5:4
        uint32_t GPY53:2; //7:6
        uint32_t GPY54:2; //9:8
        uint32_t GPY55:2; //11:10
        uint32_t GPY56:2; //13:12
        uint32_t GPY57:2; //15:14
    } bits;   
} GPY5PUDPDN;

/////////////////////////////////////////////////

typedef union GPY6CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY6CON0:4; //3:0
        uint32_t GPY6CON1:4; //7:4
        uint32_t GPY6CON2:4; //11:8
        uint32_t GPY6CON3:4; //15:12
        uint32_t GPY6CON4:4; //19:16
        uint32_t GPY6CON5:4; //23:20
        uint32_t GPY6CON6:4; //27:24
        uint32_t GPY6CON7:4; //31:28
    } bits;
} GPY6CON;

typedef union GPY6DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY6DAT:8; //7:0
    } bits;
} GPY6DAT;

typedef union GPY6PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY6PUD0:2; //1:0
        uint32_t GPY6PUD1:2; //3:2
        uint32_t GPY6PUD2:2; //5:4
        uint32_t GPY6PUD3:2; //7:6
        uint32_t GPY6PUD4:2; //9:8
        uint32_t GPY6PUD5:2; //11:10
        uint32_t GPY6PUD6:2; //13:12
        uint32_t GPY6PUD7:2; //15:14
    } bits;
} GPY6PUD;

typedef union GPY6DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY6DRV0:2; //1:0
        uint32_t GPY6DRV1:2; //3:2
        uint32_t GPY6DRV2:2; //5:4
        uint32_t GPY6DRV3:2; //7:6
        uint32_t GPY6DRV4:2; //9:8
        uint32_t GPY6DRV5:2; //11:10
        uint32_t GPY6DRV6:2; //13:12
        uint32_t GPY6DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPY6DRV;

typedef union GPY6CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPY60:2; //1:0
        uint32_t GPY61:2; //3:2
        uint32_t GPY62:2; //5:4
        uint32_t GPY63:2; //7:6
        uint32_t GPY64:2; //9:8
        uint32_t GPY65:2; //11:10
        uint32_t GPY66:2; //13:12
        uint32_t GPY67:2; //15:14
    } bits;   
} GPY6CONPDN;

typedef union GPY6PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPY60:2; //1:0
        uint32_t GPY61:2; //3:2
        uint32_t GPY62:2; //5:4
        uint32_t GPY63:2; //7:6
        uint32_t GPY64:2; //9:8
        uint32_t GPY65:2; //11:10
        uint32_t GPY66:2; //13:12
        uint32_t GPY67:2; //15:14
    } bits;   
} GPY6PUDPDN;

/////////////////////////////////////////////////

typedef union ETC0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ETC0PUD0:2; //1:0
        uint32_t ETC0PUD1:2; //3:2
        uint32_t ETC0PUD2:2; //5:4
        uint32_t ETC0PUD3:2; //7:6
        uint32_t ETC0PUD4:2; //9:8
        uint32_t ETC0PUD5:2; //11:10
    } bits;
} ETC0PUD;

typedef union ETC0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ETC0DRV0:2; //1:0
        uint32_t ETC0DRV1:2; //3:2
        uint32_t ETC0DRV2:2; //5:4
        uint32_t ETC0DRV3:2; //7:6
        uint32_t ETC0DRV4:2; //9:8
        uint32_t ETC0DRV5:2; //11:10
        uint32_t Unknown:4; //15:12
        uint32_t Reserved:8; //23:16
    } bits;
} ETC0DRV;

typedef union ETC6PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ETC6PUD0:2; //1:0
        uint32_t ETC6PUD1:2; //3:2
        uint32_t ETC6PUD2:2; //5:4
        uint32_t ETC6PUD3:2; //7:6
        uint32_t ETC6PUD4:2; //9:8
        uint32_t ETC6PUD5:2; //11:10
        uint32_t ETC6PUD6:2; //13:12
        uint32_t ETC6PUD7:2; //15:14
    } bits;
} ETC6PUD;

typedef union ETC6DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ETC6DRV0:2; //1:0
        uint32_t ETC6DRV1:2; //3:2
        uint32_t ETC6DRV2:2; //5:4
        uint32_t ETC6DRV3:2; //7:6
        uint32_t ETC6DRV4:2; //9:8
        uint32_t ETC6DRV5:2; //11:10
        uint32_t ETC6DRV6:2; //13:12
        uint32_t ETC6DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} ETC6DRV;

/////////////////////////////////////////////////

typedef union GPM0CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM0CON0:4; //3:0
        uint32_t GPM0CON1:4; //7:4
        uint32_t GPM0CON2:4; //11:8
        uint32_t GPM0CON3:4; //15:12
        uint32_t GPM0CON4:4; //19:16
        uint32_t GPM0CON5:4; //23:20
        uint32_t GPM0CON6:4; //27:24
        uint32_t GPM0CON7:4; //31:28
    } bits;
} GPM0CON;

typedef union GPM0DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM0DAT:8; //7:0
    } bits;
} GPM0DAT;

typedef union GPM0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM0PUD0:2; //1:0
        uint32_t GPM0PUD1:2; //3:2
        uint32_t GPM0PUD2:2; //5:4
        uint32_t GPM0PUD3:2; //7:6
        uint32_t GPM0PUD4:2; //9:8
        uint32_t GPM0PUD5:2; //11:10
        uint32_t GPM0PUD6:2; //13:12
        uint32_t GPM0PUD7:2; //15:14
    } bits;
} GPM0PUD;

typedef union GPM0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM0DRV0:2; //1:0
        uint32_t GPM0DRV1:2; //3:2
        uint32_t GPM0DRV2:2; //5:4
        uint32_t GPM0DRV3:2; //7:6
        uint32_t GPM0DRV4:2; //9:8
        uint32_t GPM0DRV5:2; //11:10
        uint32_t GPM0DRV6:2; //13:12
        uint32_t GPM0DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPM0DRV;

typedef union GPM0CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM00:2; //1:0
        uint32_t GPM01:2; //3:2
        uint32_t GPM02:2; //5:4
        uint32_t GPM03:2; //7:6
        uint32_t GPM04:2; //9:8
        uint32_t GPM05:2; //11:10
        uint32_t GPM06:2; //13:12
        uint32_t GPM07:2; //15:14
    } bits;   
} GPM0CONPDN;

typedef union GPM0PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPM00:2; //1:0
        uint32_t GPM01:2; //3:2
        uint32_t GPM02:2; //5:4
        uint32_t GPM03:2; //7:6
        uint32_t GPM04:2; //9:8
        uint32_t GPM05:2; //11:10
        uint32_t GPM06:2; //13:12
        uint32_t GPM07:2; //15:14
    } bits;   
} GPM0PUDPDN;

/////////////////////////////////////////////////

typedef union GPM1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM1CON0:4; //3:0
        uint32_t GPM1CON1:4; //7:4
        uint32_t GPM1CON2:4; //11:8
        uint32_t GPM1CON3:4; //15:12
        uint32_t GPM1CON4:4; //19:16
        uint32_t GPM1CON5:4; //23:20
        uint32_t GPM1CON6:4; //27:24
    } bits;
} GPM1CON;

typedef union GPM1DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM1DAT:7; //6:0
    } bits;
} GPM1DAT;

typedef union GPM1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM1PUD0:2; //1:0
        uint32_t GPM1PUD1:2; //3:2
        uint32_t GPM1PUD2:2; //5:4
        uint32_t GPM1PUD3:2; //7:6
        uint32_t GPM1PUD4:2; //9:8
        uint32_t GPM1PUD5:2; //11:10
        uint32_t GPM1PUD6:2; //13:12
    } bits;
} GPM1PUD;

typedef union GPM1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM1DRV0:2; //1:0
        uint32_t GPM1DRV1:2; //3:2
        uint32_t GPM1DRV2:2; //5:4
        uint32_t GPM1DRV3:2; //7:6
        uint32_t GPM1DRV4:2; //9:8
        uint32_t GPM1DRV5:2; //11:10
        uint32_t GPM1DRV6:2; //13:12
        uint32_t Unknown:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPM1DRV;

typedef union GPM1CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM10:2; //1:0
        uint32_t GPM11:2; //3:2
        uint32_t GPM12:2; //5:4
        uint32_t GPM13:2; //7:6
        uint32_t GPM14:2; //9:8
        uint32_t GPM15:2; //11:10
        uint32_t GPM16:2; //13:12
    } bits;   
} GPM1CONPDN;

typedef union GPM1PUDPDN_u
{
    uint16_t all_val:14;
    struct
    {
        uint32_t GPM10:2; //1:0
        uint32_t GPM11:2; //3:2
        uint32_t GPM12:2; //5:4
        uint32_t GPM13:2; //7:6
        uint32_t GPM14:2; //9:8
        uint32_t GPM15:2; //11:10
        uint32_t GPM16:2; //13:12
    } bits;   
} GPM1PUDPDN;

/////////////////////////////////////////////////

typedef union GPM2CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM2CON0:4; //3:0
        uint32_t GPM2CON1:4; //7:4
        uint32_t GPM2CON2:4; //11:8
        uint32_t GPM2CON3:4; //15:12
        uint32_t GPM2CON4:4; //19:16
    } bits;
} GPM2CON;

typedef union GPM2DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM2DAT:5; //4:0
    } bits;
} GPM2DAT;

typedef union GPM2PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM2PUD0:2; //1:0
        uint32_t GPM2PUD1:2; //3:2
        uint32_t GPM2PUD2:2; //5:4
        uint32_t GPM2PUD3:2; //7:6
        uint32_t GPM2PUD4:2; //9:8
    } bits;
} GPM2PUD;

typedef union GPM2DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM2DRV0:2; //1:0
        uint32_t GPM2DRV1:2; //3:2
        uint32_t GPM2DRV2:2; //5:4
        uint32_t GPM2DRV3:2; //7:6
        uint32_t GPM2DRV4:2; //9:8
        uint32_t Unknown:6; //15:10
        uint32_t Reserved:8; //23:16
    } bits;
} GPM2DRV;

typedef union GPM2CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM20:2; //1:0
        uint32_t GPM21:2; //3:2
        uint32_t GPM22:2; //5:4
        uint32_t GPM23:2; //7:6
        uint32_t GPM24:2; //9:8
    } bits;   
} GPM2CONPDN;

typedef union GPM2PUDPDN_u
{
    uint16_t all_val:10;
    struct
    {
        uint32_t GPM20:2; //1:0
        uint32_t GPM21:2; //3:2
        uint32_t GPM22:2; //5:4
        uint32_t GPM23:2; //7:6
        uint32_t GPM24:2; //9:8
    } bits;   
} GPM2PUDPDN;

/////////////////////////////////////////////////

typedef union GPM3CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM3CON0:4; //3:0
        uint32_t GPM3CON1:4; //7:4
        uint32_t GPM3CON2:4; //11:8
        uint32_t GPM3CON3:4; //15:12
        uint32_t GPM3CON4:4; //19:16
        uint32_t GPM3CON5:4; //23:20
        uint32_t GPM3CON6:4; //27:24
        uint32_t GPM3CON7:4; //31:28
    } bits;
} GPM3CON;

typedef union GPM3DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM3DAT:8; //7:0
    } bits;
} GPM3DAT;

typedef union GPM3PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM3PUD0:2; //1:0
        uint32_t GPM3PUD1:2; //3:2
        uint32_t GPM3PUD2:2; //5:4
        uint32_t GPM3PUD3:2; //7:6
        uint32_t GPM3PUD4:2; //9:8
        uint32_t GPM3PUD5:2; //11:10
        uint32_t GPM3PUD6:2; //13:12
        uint32_t GPM3PUD7:2; //15:14
    } bits;
} GPM3PUD;

typedef union GPM3DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM3DRV0:2; //1:0
        uint32_t GPM3DRV1:2; //3:2
        uint32_t GPM3DRV2:2; //5:4
        uint32_t GPM3DRV3:2; //7:6
        uint32_t GPM3DRV4:2; //9:8
        uint32_t GPM3DRV5:2; //11:10
        uint32_t GPM3DRV6:2; //13:12
        uint32_t GPM3DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPM3DRV;

typedef union GPM3CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM30:2; //1:0
        uint32_t GPM31:2; //3:2
        uint32_t GPM32:2; //5:4
        uint32_t GPM33:2; //7:6
        uint32_t GPM34:2; //9:8
        uint32_t GPM35:2; //11:10
        uint32_t GPM36:2; //13:12
        uint32_t GPM37:2; //15:14
    } bits;   
} GPM3CONPDN;

typedef union GPM3PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPM30:2; //1:0
        uint32_t GPM31:2; //3:2
        uint32_t GPM32:2; //5:4
        uint32_t GPM33:2; //7:6
        uint32_t GPM34:2; //9:8
        uint32_t GPM35:2; //11:10
        uint32_t GPM36:2; //13:12
        uint32_t GPM37:2; //15:14
    } bits;   
} GPM3PUDPDN;

/////////////////////////////////////////////////

typedef union GPM4CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM4CON0:4; //3:0
        uint32_t GPM4CON1:4; //7:4
        uint32_t GPM4CON2:4; //11:8
        uint32_t GPM4CON3:4; //15:12
        uint32_t GPM4CON4:4; //19:16
        uint32_t GPM4CON5:4; //23:20
        uint32_t GPM4CON6:4; //27:24
        uint32_t GPM4CON7:4; //31:28
    } bits;
} GPM4CON;

typedef union GPM4DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM4DAT:8; //7:0
    } bits;
} GPM4DAT;

typedef union GPM4PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM4PUD0:2; //1:0
        uint32_t GPM4PUD1:2; //3:2
        uint32_t GPM4PUD2:2; //5:4
        uint32_t GPM4PUD3:2; //7:6
        uint32_t GPM4PUD4:2; //9:8
        uint32_t GPM4PUD5:2; //11:10
        uint32_t GPM4PUD6:2; //13:12
        uint32_t GPM4PUD7:2; //15:14
    } bits;
} GPM4PUD;

typedef union GPM4DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM4DRV0:2; //1:0
        uint32_t GPM4DRV1:2; //3:2
        uint32_t GPM4DRV2:2; //5:4
        uint32_t GPM4DRV3:2; //7:6
        uint32_t GPM4DRV4:2; //9:8
        uint32_t GPM4DRV5:2; //11:10
        uint32_t GPM4DRV6:2; //13:12
        uint32_t GPM4DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPM4DRV;

typedef union GPM4CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPM40:2; //1:0
        uint32_t GPM41:2; //3:2
        uint32_t GPM42:2; //5:4
        uint32_t GPM43:2; //7:6
        uint32_t GPM44:2; //9:8
        uint32_t GPM45:2; //11:10
        uint32_t GPM46:2; //13:12
        uint32_t GPM47:2; //15:14
    } bits;   
} GPM4CONPDN;

typedef union GPM4PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPM40:2; //1:0
        uint32_t GPM41:2; //3:2
        uint32_t GPM42:2; //5:4
        uint32_t GPM43:2; //7:6
        uint32_t GPM44:2; //9:8
        uint32_t GPM45:2; //11:10
        uint32_t GPM46:2; //13:12
        uint32_t GPM47:2; //15:14
    } bits;   
} GPM4PUDPDN;

/////////////////////////////////////////////////

typedef union EXTINT23CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT23CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT23CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT23CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT23CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT23CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT23CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT23CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t Reserved7:4;   //31:28
    } bits;   
} EXTINT23CON;

typedef union EXTINT24CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT24CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT24CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT24CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT24CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT24CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT24CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT24CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t Reserved7:4;   //31:28
    } bits;   
} EXTINT24CON;

typedef union EXTINT25CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT25CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT25CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT25CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT25CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT25CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT25CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT25CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t Reserved7:4;   //31:28
    } bits;   
} EXTINT25CON;

typedef union EXTINT26CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT26CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT26CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT26CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT26CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT26CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT26CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT26CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t Reserved7:4;   //31:28
    } bits;   
} EXTINT26CON;

typedef union EXTINT27CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT27CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT27CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT27CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT27CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT27CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT27CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT27CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t Reserved7:4;   //31:28
    } bits;   
} EXTINT27CON;

typedef union EXTINT28CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT28CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT28CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t Reserved2:24;   //31:8
    } bits;   
} EXTINT28CON;

typedef union EXTINT29CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT29CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT29CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT29CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT29CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT29CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT29CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT29CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT29CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT29CON;

typedef union EXTINT8CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT8CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT8CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT8CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT8CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT8CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT8CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT8CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT8CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT8CON;

typedef union EXTINT9CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT9CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT9CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT9CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT9CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT9CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT9CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT9CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t Reserved7:4;   //31:28
    } bits;   
} EXTINT9CON;

typedef union EXTINT10CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT10CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT10CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT10CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT10CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT10CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t Reserved5:12; //31:20
    } bits;   
} EXTINT10CON;

typedef union EXTINT11CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT11CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT11CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT11CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT11CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT11CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT11CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT11CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT11CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT11CON;

typedef union EXTINT12CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT12CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT12CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT12CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT12CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT12CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT12CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT12CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT12CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT12CON;

/////////////////////////////////////////////////

typedef union EXTINT23FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH30:7;  //6:0
        uint32_t FLTEN30:1;     //7
        uint32_t FLTWIDTH31:7;  //14:8
        uint32_t FLTEN31:1;     //15
        uint32_t FLTWIDTH32:7;  //22:16
        uint32_t FLTEN32:1;     //23
        uint32_t FLTWIDTH33:7;  //30:24
        uint32_t FLTEN33:1;     //31
    } bits;    
} EXTINT23FLTCON0;

typedef union EXTINT23FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH34:7;  //6:0
        uint32_t FLTEN34:1;     //7
        uint32_t FLTWIDTH35:7;  //14:8
        uint32_t FLTEN35:1;     //15
        uint32_t FLTWIDTH36:7;  //22:16
        uint32_t FLTEN36:1;     //23
        uint32_t FLTWIDTH37:7;  //30:24
        uint32_t FLTEN37:1;     //31
    } bits;    
} EXTINT23FLTCON1;

typedef union EXTINT24FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH40:7;  //6:0
        uint32_t FLTEN40:1;     //7
        uint32_t FLTWIDTH41:7;  //14:8
        uint32_t FLTEN41:1;     //15
        uint32_t FLTWIDTH42:7;  //22:16
        uint32_t FLTEN42:1;     //23
        uint32_t FLTWIDTH43:7;  //30:24
        uint32_t FLTEN43:1;     //31
    } bits;    
} EXTINT24FLTCON0;

typedef union EXTINT24FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH44:7;  //6:0
        uint32_t FLTEN44:1;     //7
        uint32_t FLTWIDTH45:7;  //14:8
        uint32_t FLTEN45:1;     //15
        uint32_t FLTWIDTH46:7;  //22:16
        uint32_t FLTEN46:1;     //23
        uint32_t FLTWIDTH47:7;  //30:24
        uint32_t FLTEN47:1;     //31
    } bits;    
} EXTINT24FLTCON1;

typedef union EXTINT25FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH50:7;  //6:0
        uint32_t FLTEN50:1;     //7
        uint32_t FLTWIDTH51:7;  //14:8
        uint32_t FLTEN51:1;     //15
        uint32_t FLTWIDTH52:7;  //22:16
        uint32_t FLTEN52:1;     //23
        uint32_t FLTWIDTH53:7;  //30:24
        uint32_t FLTEN53:1;     //31
    } bits;    
} EXTINT25FLTCON0;

typedef union EXTINT25FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH54:7;  //6:0
        uint32_t FLTEN54:1;     //7
        uint32_t FLTWIDTH55:7;  //14:8
        uint32_t FLTEN55:1;     //15
        uint32_t FLTWIDTH56:7;  //22:16
        uint32_t FLTEN56:1;     //23
        uint32_t FLTWIDTH57:7;  //30:24
        uint32_t FLTEN57:1;     //31
    } bits;    
} EXTINT25FLTCON1;

typedef union EXTINT26FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH60:7;  //6:0
        uint32_t FLTEN60:1;     //7
        uint32_t FLTWIDTH61:7;  //14:8
        uint32_t FLTEN61:1;     //15
        uint32_t FLTWIDTH62:7;  //22:16
        uint32_t FLTEN62:1;     //23
        uint32_t FLTWIDTH63:7;  //30:24
        uint32_t FLTEN63:1;     //31
    } bits;    
} EXTINT26FLTCON0;

typedef union EXTINT26FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH64:7;  //6:0
        uint32_t FLTEN64:1;     //7
        uint32_t FLTWIDTH65:7;  //14:8
        uint32_t FLTEN65:1;     //15
        uint32_t FLTWIDTH66:7;  //22:16
        uint32_t FLTEN66:1;     //23
        uint32_t FLTWIDTH67:7;  //30:24
        uint32_t FLTEN67:1;     //31
    } bits;    
} EXTINT26FLTCON1;

typedef union EXTINT27FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH70:7;  //6:0
        uint32_t FLTEN70:1;     //7
        uint32_t FLTWIDTH71:7;  //14:8
        uint32_t FLTEN71:1;     //15
        uint32_t FLTWIDTH72:7;  //22:16
        uint32_t FLTEN72:1;     //23
        uint32_t FLTWIDTH73:7;  //30:24
        uint32_t FLTEN73:1;     //31
    } bits;    
} EXTINT27FLTCON0;

typedef union EXTINT27FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH74:7;  //6:0
        uint32_t FLTEN74:1;     //7
        uint32_t FLTWIDTH75:7;  //14:8
        uint32_t FLTEN75:1;     //15
        uint32_t FLTWIDTH76:7;  //22:16
        uint32_t FLTEN76:1;     //23
        uint32_t FLTWIDTH77:7;  //30:24
        uint32_t FLTEN77:1;     //31
    } bits;    
} EXTINT27FLTCON1;

typedef union EXTINT28FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH80:7;  //6:0
        uint32_t FLTEN80:1;     //7
        uint32_t FLTWIDTH81:7;  //14:8
        uint32_t FLTEN81:1;     //15
        uint32_t Reserved:16;   //31:16
    } bits;    
} EXTINT28FLTCON0;

typedef union EXTINT28FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t Reserved;
    } bits;    
} EXTINT28FLTCON1;

typedef union EXTINT29FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH90:7;  //6:0
        uint32_t FLTEN90:1;     //7
        uint32_t FLTWIDTH91:7;  //14:8
        uint32_t FLTEN91:1;     //15
        uint32_t FLTWIDTH92:7;  //22:16
        uint32_t FLTEN92:1;     //23
        uint32_t FLTWIDTH93:7;  //30:24
        uint32_t FLTEN93:1;     //31
    } bits;    
} EXTINT29FLTCON0;

typedef union EXTINT29FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH94:7;  //6:0
        uint32_t FLTEN94:1;     //7
        uint32_t FLTWIDTH95:7;  //14:8
        uint32_t FLTEN95:1;     //15
        uint32_t FLTWIDTH96:7;  //22:16
        uint32_t FLTEN96:1;     //23
        uint32_t FLTWIDTH97:7;  //30:24
        uint32_t FLTEN97:1;     //31
    } bits;    
} EXTINT29FLTCON1;

typedef union EXTINT8FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH100:7;  //6:0
        uint32_t FLTEN100:1;     //7
        uint32_t FLTWIDTH101:7;  //14:8
        uint32_t FLTEN101:1;     //15
        uint32_t FLTWIDTH102:7;  //22:16
        uint32_t FLTEN102:1;     //23
        uint32_t FLTWIDTH103:7;  //30:24
        uint32_t FLTEN103:1;     //31
    } bits;    
} EXTINT8FLTCON0;

typedef union EXTINT8FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH104:7;  //6:0
        uint32_t FLTEN104:1;     //7
        uint32_t FLTWIDTH105:7;  //14:8
        uint32_t FLTEN105:1;     //15
        uint32_t FLTWIDTH106:7;  //22:16
        uint32_t FLTEN106:1;     //23
        uint32_t FLTWIDTH107:7;  //30:24
        uint32_t FLTEN107:1;     //31
    } bits;    
} EXTINT8FLTCON1;

typedef union EXTINT9FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH110:7;  //6:0
        uint32_t FLTEN110:1;     //7
        uint32_t FLTWIDTH111:7;  //14:8
        uint32_t FLTEN111:1;     //15
        uint32_t FLTWIDTH112:7;  //22:16
        uint32_t FLTEN112:1;     //23
        uint32_t FLTWIDTH113:7;  //30:24
        uint32_t FLTEN113:1;     //31
    } bits;    
} EXTINT9FLTCON0;

typedef union EXTINT9FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH114:7;  //6:0
        uint32_t FLTEN114:1;     //7
        uint32_t FLTWIDTH115:7;  //14:8
        uint32_t FLTEN115:1;     //15
        uint32_t FLTWIDTH116:7;  //22:16
        uint32_t FLTEN116:1;     //23
        uint32_t FLTWIDTH117:7;  //30:24
        uint32_t FLTEN117:1;     //31
    } bits;    
} EXTINT9FLTCON1;

typedef union EXTINT10FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH120:7;  //6:0
        uint32_t FLTEN120:1;     //7
        uint32_t FLTWIDTH121:7;  //14:8
        uint32_t FLTEN121:1;     //15
        uint32_t FLTWIDTH122:7;  //22:16
        uint32_t FLTEN122:1;     //23
        uint32_t FLTWIDTH123:7;  //30:24
        uint32_t FLTEN123:1;     //31
    } bits;    
} EXTINT10FLTCON0;

typedef union EXTINT10FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH124:7;  //6:0
        uint32_t FLTEN124:1;     //7
        uint32_t Reserved:24;    //31:8
    } bits;    
} EXTINT10FLTCON1;

typedef union EXTINT11FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH130:7;  //6:0
        uint32_t FLTEN130:1;     //7
        uint32_t FLTWIDTH131:7;  //14:8
        uint32_t FLTEN131:1;     //15
        uint32_t FLTWIDTH132:7;  //22:16
        uint32_t FLTEN132:1;     //23
        uint32_t FLTWIDTH133:7;  //30:24
        uint32_t FLTEN133:1;     //31
    } bits;    
} EXTINT11FLTCON0;

typedef union EXTINT11FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH134:7;  //6:0
        uint32_t FLTEN134:1;     //7
        uint32_t FLTWIDTH135:7;  //14:8
        uint32_t FLTEN135:1;     //15
        uint32_t FLTWIDTH136:7;  //22:16
        uint32_t FLTEN136:1;     //23
        uint32_t FLTWIDTH137:7;  //30:24
        uint32_t FLTEN137:1;     //31
    } bits;    
} EXTINT11FLTCON1;

typedef union EXTINT12FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH140:7;  //6:0
        uint32_t FLTEN140:1;     //7
        uint32_t FLTWIDTH141:7;  //14:8
        uint32_t FLTEN141:1;     //15
        uint32_t FLTWIDTH142:7;  //22:16
        uint32_t FLTEN142:1;     //23
        uint32_t FLTWIDTH143:7;  //30:24
        uint32_t FLTEN143:1;     //31
    } bits;    
} EXTINT12FLTCON0;

typedef union EXTINT12FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH144:7;  //6:0
        uint32_t FLTEN144:1;     //7
        uint32_t FLTWIDTH145:7;  //14:8
        uint32_t FLTEN145:1;     //15
        uint32_t FLTWIDTH146:7;  //22:16
        uint32_t FLTEN146:1;     //23
        uint32_t FLTWIDTH147:7;  //30:24
        uint32_t FLTEN147:1;     //31
    } bits;    
} EXTINT12FLTCON1;

///////////////////////////////////////////////////

typedef union EXTINT23MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT23MASK0:1; //0
        uint32_t EXTINT23MASK1:1; //1
        uint32_t EXTINT23MASK2:1; //2
        uint32_t EXTINT23MASK3:1; //3
        uint32_t EXTINT23MASK4:1; //4
        uint32_t EXTINT23MASK5:1; //5
        uint32_t EXTINT23MASK6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT23MASK;

typedef union EXTINT24MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT24MASK0:1; //0
        uint32_t EXTINT24MASK1:1; //1
        uint32_t EXTINT24MASK2:1; //2
        uint32_t EXTINT24MASK3:1; //3
        uint32_t EXTINT24MASK4:1; //4
        uint32_t EXTINT24MASK5:1; //5
        uint32_t EXTINT24MASK6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT24MASK;

typedef union EXTINT25MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT25MASK0:1; //0
        uint32_t EXTINT25MASK1:1; //1
        uint32_t EXTINT25MASK2:1; //2
        uint32_t EXTINT25MASK3:1; //3
        uint32_t EXTINT25MASK4:1; //4
        uint32_t EXTINT25MASK5:1; //5
        uint32_t EXTINT25MASK6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT25MASK;

typedef union EXTINT26MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT26MASK0:1; //0
        uint32_t EXTINT26MASK1:1; //1
        uint32_t EXTINT26MASK2:1; //2
        uint32_t EXTINT26MASK3:1; //3
        uint32_t EXTINT26MASK4:1; //4
        uint32_t EXTINT26MASK5:1; //5
        uint32_t EXTINT26MASK6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT26MASK;

typedef union EXTINT27MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT27MASK0:1; //0
        uint32_t EXTINT27MASK1:1; //1
        uint32_t EXTINT27MASK2:1; //2
        uint32_t EXTINT27MASK3:1; //3
        uint32_t EXTINT27MASK4:1; //4
        uint32_t EXTINT27MASK5:1; //5
        uint32_t EXTINT27MASK6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT27MASK;

typedef union EXTINT28MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT28MASK0:1; //0
        uint32_t EXTINT28MASK1:1; //1
        uint32_t Reserved:30;    //31:2
    } bits;
} EXTINT28MASK;

typedef union EXTINT29MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT29MASK0:1; //0
        uint32_t EXTINT29MASK1:1; //1
        uint32_t EXTINT29MASK2:1; //2
        uint32_t EXTINT29MASK3:1; //3
        uint32_t EXTINT29MASK4:1; //4
        uint32_t EXTINT29MASK5:1; //5
        uint32_t EXTINT29MASK6:1; //6
        uint32_t EXTINT29MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT29MASK;

typedef union EXTINT8MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT8MASK0:1; //0
        uint32_t EXTINT8MASK1:1; //1
        uint32_t EXTINT8MASK2:1; //2
        uint32_t EXTINT8MASK3:1; //3
        uint32_t EXTINT8MASK4:1; //4
        uint32_t EXTINT8MASK5:1; //5
        uint32_t EXTINT8MASK6:1; //6
        uint32_t EXTINT8MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT8MASK;

typedef union EXTINT9MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT9MASK0:1; //0
        uint32_t EXTINT9MASK1:1; //1
        uint32_t EXTINT9MASK2:1; //2
        uint32_t EXTINT9MASK3:1; //3
        uint32_t EXTINT9MASK4:1; //4
        uint32_t EXTINT9MASK5:1; //5
        uint32_t EXTINT9MASK6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT9MASK;

typedef union EXTINT10MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT10MASK0:1; //0
        uint32_t EXTINT10MASK1:1; //1
        uint32_t EXTINT10MASK2:1; //2
        uint32_t EXTINT10MASK3:1; //3
        uint32_t EXTINT10MASK4:1; //4
        uint32_t Reserved:27;    //31:5
    } bits;
} EXTINT10MASK;

typedef union EXTINT11MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT11MASK0:1; //0
        uint32_t EXTINT11MASK1:1; //1
        uint32_t EXTINT11MASK2:1; //2
        uint32_t EXTINT11MASK3:1; //3
        uint32_t EXTINT11MASK4:1; //4
        uint32_t EXTINT11MASK5:1; //5
        uint32_t EXTINT11MASK6:1; //6
        uint32_t EXTINT11MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT11MASK;

typedef union EXTINT12MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT12MASK0:1; //0
        uint32_t EXTINT12MASK1:1; //1
        uint32_t EXTINT12MASK2:1; //2
        uint32_t EXTINT12MASK3:1; //3
        uint32_t EXTINT12MASK4:1; //4
        uint32_t EXTINT12MASK5:1; //5
        uint32_t EXTINT12MASK6:1; //6
        uint32_t EXTINT12MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT12MASK;

///////////////////////////////////////////////////////////

typedef union EXTINT23PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT23PEND0:1; //0
        uint32_t EXTINT23PEND1:1; //1
        uint32_t EXTINT23PEND2:1; //2
        uint32_t EXTINT23PEND3:1; //3
        uint32_t EXTINT23PEND4:1; //4
        uint32_t EXTINT23PEND5:1; //5
        uint32_t EXTINT23PEND6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT23PEND;

typedef union EXTINT24PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT24PEND0:1; //0
        uint32_t EXTINT24PEND1:1; //1
        uint32_t EXTINT24PEND2:1; //2
        uint32_t EXTINT24PEND3:1; //3
        uint32_t EXTINT24PEND4:1; //4
        uint32_t EXTINT24PEND5:1; //5
        uint32_t EXTINT24PEND6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT24PEND;

typedef union EXTINT25PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT25PEND0:1; //0
        uint32_t EXTINT25PEND1:1; //1
        uint32_t EXTINT25PEND2:1; //2
        uint32_t EXTINT25PEND3:1; //3
        uint32_t EXTINT25PEND4:1; //4
        uint32_t EXTINT25PEND5:1; //5
        uint32_t EXTINT25PEND6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT25PEND;

typedef union EXTINT26PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT26PEND0:1; //0
        uint32_t EXTINT26PEND1:1; //1
        uint32_t EXTINT26PEND2:1; //2
        uint32_t EXTINT26PEND3:1; //3
        uint32_t EXTINT26PEND4:1; //4
        uint32_t EXTINT26PEND5:1; //5
        uint32_t EXTINT26PEND6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT23PEND;

typedef union EXTINT27PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT27PEND0:1; //0
        uint32_t EXTINT27PEND1:1; //1
        uint32_t EXTINT27PEND2:1; //2
        uint32_t EXTINT27PEND3:1; //3
        uint32_t EXTINT27PEND4:1; //4
        uint32_t EXTINT27PEND5:1; //5
        uint32_t EXTINT27PEND6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT27PEND;

typedef union EXTINT28PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT28PEND0:1; //0
        uint32_t EXTINT28PEND1:1; //1
        uint32_t Reserved:30;    //31:2
    } bits;
} EXTINT28PEND;

typedef union EXTINT29PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT29PEND0:1; //0
        uint32_t EXTINT29PEND1:1; //1
        uint32_t EXTINT29PEND2:1; //2
        uint32_t EXTINT29PEND3:1; //3
        uint32_t EXTINT29PEND4:1; //4
        uint32_t EXTINT29PEND5:1; //5
        uint32_t EXTINT29PEND6:1; //6
        uint32_t EXTINT29PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT29PEND;

typedef union EXTINT8PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT8PEND0:1; //0
        uint32_t EXTINT8PEND1:1; //1
        uint32_t EXTINT8PEND2:1; //2
        uint32_t EXTINT8PEND3:1; //3
        uint32_t EXTINT8PEND4:1; //4
        uint32_t EXTINT8PEND5:1; //5
        uint32_t EXTINT8PEND6:1; //6
        uint32_t EXTINT8PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT8PEND;

typedef union EXTINT9PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT9PEND0:1; //0
        uint32_t EXTINT9PEND1:1; //1
        uint32_t EXTINT9PEND2:1; //2
        uint32_t EXTINT9PEND3:1; //3
        uint32_t EXTINT9PEND4:1; //4
        uint32_t EXTINT9PEND5:1; //5
        uint32_t EXTINT9PEND6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT9PEND;

typedef union EXTINT10PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT10PEND0:1; //0
        uint32_t EXTINT10PEND1:1; //1
        uint32_t EXTINT10PEND2:1; //2
        uint32_t EXTINT10PEND3:1; //3
        uint32_t EXTINT10PEND4:1; //4
        uint32_t Reserved:27;    //31:5
    } bits;
} EXTINT10PEND;

typedef union EXTINT11PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT11PEND0:1; //0
        uint32_t EXTINT11PEND1:1; //1
        uint32_t EXTINT11PEND2:1; //2
        uint32_t EXTINT11PEND3:1; //3
        uint32_t EXTINT11PEND4:1; //4
        uint32_t EXTINT11PEND5:1; //5
        uint32_t EXTINT11PEND6:1; //6
        uint32_t EXTINT11PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT11PEND;

typedef union EXTINT12PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT12PEND0:1; //0
        uint32_t EXTINT12PEND1:1; //1
        uint32_t EXTINT12PEND2:1; //2
        uint32_t EXTINT12PEND3:1; //3
        uint32_t EXTINT12PEND4:1; //4
        uint32_t EXTINT12PEND5:1; //5
        uint32_t EXTINT12PEND6:1; //6
        uint32_t EXTINT12PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT12PEND;

////////////////////////////////////////////

typedef union EXTINTSERVICEXA_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t SVCNUM:3;       //2:0
        uint32_t SVCGROUPNUM:5;  //7:3
        uint32_t Reserved:24;                   //31:8
    } bits;
} EXTINTSERVICEXA;

typedef union EXTINTSERVICEPENDXA_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t SVCPEND:8;  //7:0
        uint32_t Reserved:24;                   //31:8
    } bits;
} EXTINTSERVICEPENDXA;

typedef union EXTINTGRPFIXPRIXA_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTGRPNUM:4;  //3:0
        uint32_t Reserved:28;   //31:4
    } bits;
} EXTINTGRPFIXPRIXA;

///////////////////////////////////////////////////

typedef union EXTINT23FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT23FIXPRI;

typedef union EXTINT24FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT24FIXPRI;

typedef union EXTINT25FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT25FIXPRI;

typedef union EXTINT26FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT26FIXPRI;

typedef union EXTINT27FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT27FIXPRI;

typedef union EXTINT28FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT28FIXPRI;

typedef union EXTINT29FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT29FIXPRI;

typedef union EXTINT8FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT8FIXPRI;

typedef union EXTINT9FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT9FIXPRI;

typedef union EXTINT10FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT10FIXPRI;

typedef union EXTINT11FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT11FIXPRI;

typedef union EXTINT12FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT12FIXPRI;

/////////////////////////////////////////////////

typedef union GPX0CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX0CON0:4; //3:0
        uint32_t GPX0CON1:4; //7:4
        uint32_t GPX0CON2:4; //11:8
        uint32_t GPX0CON3:4; //15:12
        uint32_t GPX0CON4:4; //19:16
        uint32_t GPX0CON5:4; //23:20
        uint32_t GPX0CON6:4; //27:24
        uint32_t GPX0CON7:4; //31:28
    } bits;
} GPX0CON;

typedef union GPX0DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX0DAT:8; //7:0
    } bits;
} GPX0DAT;

typedef union GPX0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX0PUD0:2; //1:0
        uint32_t GPX0PUD1:2; //3:2
        uint32_t GPX0PUD2:2; //5:4
        uint32_t GPX0PUD3:2; //7:6
        uint32_t GPX0PUD4:2; //9:8
        uint32_t GPX0PUD5:2; //11:10
        uint32_t GPX0PUD6:2; //13:12
        uint32_t GPX0PUD7:2; //15:14
    } bits;
} GPX0PUD;

typedef union GPX0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX0DRV0:2; //1:0
        uint32_t GPX0DRV1:2; //3:2
        uint32_t GPX0DRV2:2; //5:4
        uint32_t GPX0DRV3:2; //7:6
        uint32_t GPX0DRV4:2; //9:8
        uint32_t GPX0DRV5:2; //11:10
        uint32_t GPX0DRV6:2; //13:12
        uint32_t GPX0DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPX0DRV;

/////////////////////////////////////////////////

typedef union GPX1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX1CON0:4; //3:0
        uint32_t GPX1CON1:4; //7:4
        uint32_t GPX1CON2:4; //11:8
        uint32_t GPX1CON3:4; //15:12
        uint32_t GPX1CON4:4; //19:16
        uint32_t GPX1CON5:4; //23:20
        uint32_t GPX1CON6:4; //27:24
        uint32_t GPX1CON7:4; //31:28
    } bits;
} GPX1CON;

typedef union GPX1DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX1DAT:8; //7:0
    } bits;
} GPX1DAT;

typedef union GPX1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX1PUD0:2; //1:0
        uint32_t GPX1PUD1:2; //3:2
        uint32_t GPX1PUD2:2; //5:4
        uint32_t GPX1PUD3:2; //7:6
        uint32_t GPX1PUD4:2; //9:8
        uint32_t GPX1PUD5:2; //11:10
        uint32_t GPX1PUD6:2; //13:12
        uint32_t GPX1PUD7:2; //15:14
    } bits;
} GPX1PUD;

typedef union GPX1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX1DRV0:2; //1:0
        uint32_t GPX1DRV1:2; //3:2
        uint32_t GPX1DRV2:2; //5:4
        uint32_t GPX1DRV3:2; //7:6
        uint32_t GPX1DRV4:2; //9:8
        uint32_t GPX1DRV5:2; //11:10
        uint32_t GPX1DRV6:2; //13:12
        uint32_t GPX1DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPX1DRV;

/////////////////////////////////////////////////

typedef union GPX2CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX2CON0:4; //3:0
        uint32_t GPX2CON1:4; //7:4
        uint32_t GPX2CON2:4; //11:8
        uint32_t GPX2CON3:4; //15:12
        uint32_t GPX2CON4:4; //19:16
        uint32_t GPX2CON5:4; //23:20
        uint32_t GPX2CON6:4; //27:24
        uint32_t GPX2CON7:4; //31:28
    } bits;
} GPX2CON;

typedef union GPX2DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX2DAT:8; //7:0
    } bits;
} GPX2DAT;

typedef union GPX2PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX2PUD0:2; //1:0
        uint32_t GPX2PUD1:2; //3:2
        uint32_t GPX2PUD2:2; //5:4
        uint32_t GPX2PUD3:2; //7:6
        uint32_t GPX2PUD4:2; //9:8
        uint32_t GPX2PUD5:2; //11:10
        uint32_t GPX2PUD6:2; //13:12
        uint32_t GPX2PUD7:2; //15:14
    } bits;
} GPX2PUD;

typedef union GPX2DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX2DRV0:2; //1:0
        uint32_t GPX2DRV1:2; //3:2
        uint32_t GPX2DRV2:2; //5:4
        uint32_t GPX2DRV3:2; //7:6
        uint32_t GPX2DRV4:2; //9:8
        uint32_t GPX2DRV5:2; //11:10
        uint32_t GPX2DRV6:2; //13:12
        uint32_t GPX2DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPX2DRV;

/////////////////////////////////////////////////

typedef union GPX3CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX3CON0:4; //3:0
        uint32_t GPX3CON1:4; //7:4
        uint32_t GPX3CON2:4; //11:8
        uint32_t GPX3CON3:4; //15:12
        uint32_t GPX3CON4:4; //19:16
        uint32_t GPX3CON5:4; //23:20
        uint32_t GPX3CON6:4; //27:24
        uint32_t GPX3CON7:4; //31:28
    } bits;
} GPX3CON;

typedef union GPX3DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX3DAT:8; //7:0
    } bits;
} GPX3DAT;

typedef union GPX3PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX3PUD0:2; //1:0
        uint32_t GPX3PUD1:2; //3:2
        uint32_t GPX3PUD2:2; //5:4
        uint32_t GPX3PUD3:2; //7:6
        uint32_t GPX3PUD4:2; //9:8
        uint32_t GPX3PUD5:2; //11:10
        uint32_t GPX3PUD6:2; //13:12
        uint32_t GPX3PUD7:2; //15:14
    } bits;
} GPX3PUD;

typedef union GPX3DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPX3DRV0:2; //1:0
        uint32_t GPX3DRV1:2; //3:2
        uint32_t GPX3DRV2:2; //5:4
        uint32_t GPX3DRV3:2; //7:6
        uint32_t GPX3DRV4:2; //9:8
        uint32_t GPX3DRV5:2; //11:10
        uint32_t GPX3DRV6:2; //13:12
        uint32_t GPX3DRV7:2; //15:14
        uint32_t Reserved:8; //23:16
    } bits;
} GPX3DRV;

/////////////////////////////////////////////////

typedef union EXTINT40CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT40CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT40CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT40CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT40CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT40CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT40CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT40CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT40CON6:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT40CON;

typedef union EXTINT41CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT41CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT41CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT41CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT41CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT41CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT41CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT41CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT41CON6:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT41CON;

typedef union EXTINT42CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT42CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT42CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT42CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT42CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT42CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT42CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT42CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT42CON6:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT42CON;

typedef union EXTINT43CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT43CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT43CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT43CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT43CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT43CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT43CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT43CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT43CON6:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT43CON;

/////////////////////////////////////////////////

typedef union EXTINT40FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH150:6; //5:0
        uint32_t FLTSEL150:1;   //6
        uint32_t FLTEN150:1;    //7
        uint32_t FLTWIDTH151:6; //13:8
        uint32_t FLTSEL151:1;   //14
        uint32_t FLTEN151:1;    //15
        uint32_t FLTWIDTH152:6; //21:16
        uint32_t FLTSEL152:1;   //22
        uint32_t FLTEN152:1;    //23
        uint32_t FLTWIDTH153:6; //29:24
        uint32_t FLTSEL153:1;   //30
        uint32_t FLTEN153:1;    //31
    } bits;    
} EXTINT40FLTCON0;

typedef union EXTINT40FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH154:6; //5:0
        uint32_t FLTSEL154:1;   //6
        uint32_t FLTEN154:1;    //7
        uint32_t FLTWIDTH155:6; //13:8
        uint32_t FLTSEL155:1;   //14
        uint32_t FLTEN155:1;    //15
        uint32_t FLTWIDTH156:6; //21:16
        uint32_t FLTSEL156:1;   //22
        uint32_t FLTEN156:1;    //23
        uint32_t FLTWIDTH157:6; //29:24
        uint32_t FLTSEL157:1;   //30
        uint32_t FLTEN157:1;    //31
    } bits;    
} EXTINT40FLTCON1;

typedef union EXTINT41FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH160:6; //5:0
        uint32_t FLTSEL160:1;   //6
        uint32_t FLTEN160:1;    //7
        uint32_t FLTWIDTH161:6; //13:8
        uint32_t FLTSEL161:1;   //14
        uint32_t FLTEN161:1;    //15
        uint32_t FLTWIDTH162:6; //21:16
        uint32_t FLTSEL162:1;   //22
        uint32_t FLTEN162:1;    //23
        uint32_t FLTWIDTH163:6; //29:24
        uint32_t FLTSEL163:1;   //30
        uint32_t FLTEN163:1;    //31
    } bits;    
} EXTINT41FLTCON0;

typedef union EXTINT41FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH164:6; //5:0
        uint32_t FLTSEL164:1;   //6
        uint32_t FLTEN164:1;    //7
        uint32_t FLTWIDTH165:6; //13:8
        uint32_t FLTSEL165:1;   //14
        uint32_t FLTEN165:1;    //15
        uint32_t FLTWIDTH166:6; //21:16
        uint32_t FLTSEL166:1;   //22
        uint32_t FLTEN166:1;    //23
        uint32_t FLTWIDTH167:6; //29:24
        uint32_t FLTSEL167:1;   //30
        uint32_t FLTEN167:1;    //31
    } bits;    
} EXTINT41FLTCON1;

typedef union EXTINT42FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH170:6; //5:0
        uint32_t FLTSEL170:1;   //6
        uint32_t FLTEN170:1;    //7
        uint32_t FLTWIDTH171:6; //13:8
        uint32_t FLTSEL171:1;   //14
        uint32_t FLTEN171:1;    //15
        uint32_t FLTWIDTH172:6; //21:16
        uint32_t FLTSEL172:1;   //22
        uint32_t FLTEN172:1;    //23
        uint32_t FLTWIDTH173:6; //29:24
        uint32_t FLTSEL173:1;   //30
        uint32_t FLTEN173:1;    //31
    } bits;    
} EXTINT42FLTCON0;

typedef union EXTINT42FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH174:6; //5:0
        uint32_t FLTSEL174:1;   //6
        uint32_t FLTEN174:1;    //7
        uint32_t FLTWIDTH175:6; //13:8
        uint32_t FLTSEL175:1;   //14
        uint32_t FLTEN175:1;    //15
        uint32_t FLTWIDTH176:6; //21:16
        uint32_t FLTSEL176:1;   //22
        uint32_t FLTEN176:1;    //23
        uint32_t FLTWIDTH177:6; //29:24
        uint32_t FLTSEL177:1;   //30
        uint32_t FLTEN177:1;    //31
    } bits;    
} EXTINT42FLTCON1;

typedef union EXTINT43FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH180:6; //5:0
        uint32_t FLTSEL180:1;   //6
        uint32_t FLTEN180:1;    //7
        uint32_t FLTWIDTH181:6; //13:8
        uint32_t FLTSEL181:1;   //14
        uint32_t FLTEN181:1;    //15
        uint32_t FLTWIDTH182:6; //21:16
        uint32_t FLTSEL182:1;   //22
        uint32_t FLTEN182:1;    //23
        uint32_t FLTWIDTH183:6; //29:24
        uint32_t FLTSEL183:1;   //30
        uint32_t FLTEN183:1;    //31
    } bits;    
} EXTINT43FLTCON0;

typedef union EXTINT43FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH184:6; //5:0
        uint32_t FLTSEL184:1;   //6
        uint32_t FLTEN184:1;    //7
        uint32_t FLTWIDTH185:6; //13:8
        uint32_t FLTSEL185:1;   //14
        uint32_t FLTEN185:1;    //15
        uint32_t FLTWIDTH186:6; //21:16
        uint32_t FLTSEL186:1;   //22
        uint32_t FLTEN186:1;    //23
        uint32_t FLTWIDTH187:6; //29:24
        uint32_t FLTSEL187:1;   //30
        uint32_t FLTEN187:1;    //31
    } bits;    
} EXTINT43FLTCON1;

///////////////////////////////////////////////////

typedef union EXTINT40MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT40MASK0:1; //0
        uint32_t EXTINT40MASK1:1; //1
        uint32_t EXTINT40MASK2:1; //2
        uint32_t EXTINT40MASK3:1; //3
        uint32_t EXTINT40MASK4:1; //4
        uint32_t EXTINT40MASK5:1; //5
        uint32_t EXTINT40MASK6:1; //6
        uint32_t EXTINT40MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT40MASK;

typedef union EXTINT41MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT41MASK0:1; //0
        uint32_t EXTINT41MASK1:1; //1
        uint32_t EXTINT41MASK2:1; //2
        uint32_t EXTINT41MASK3:1; //3
        uint32_t EXTINT41MASK4:1; //4
        uint32_t EXTINT41MASK5:1; //5
        uint32_t EXTINT41MASK6:1; //6
        uint32_t EXTINT41MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT41MASK;

typedef union EXTINT42MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT42MASK0:1; //0
        uint32_t EXTINT42MASK1:1; //1
        uint32_t EXTINT42MASK2:1; //2
        uint32_t EXTINT42MASK3:1; //3
        uint32_t EXTINT42MASK4:1; //4
        uint32_t EXTINT42MASK5:1; //5
        uint32_t EXTINT42MASK6:1; //6
        uint32_t EXTINT42MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT42MASK;

typedef union EXTINT43MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT43MASK0:1; //0
        uint32_t EXTINT43MASK1:1; //1
        uint32_t EXTINT43MASK2:1; //2
        uint32_t EXTINT43MASK3:1; //3
        uint32_t EXTINT43MASK4:1; //4
        uint32_t EXTINT43MASK5:1; //5
        uint32_t EXTINT43MASK6:1; //6
        uint32_t EXTINT43MASK7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT43MASK;

///////////////////////////////////////////////////////////

typedef union EXTINT40PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT40PEND0:1; //0
        uint32_t EXTINT40PEND1:1; //1
        uint32_t EXTINT40PEND2:1; //2
        uint32_t EXTINT40PEND3:1; //3
        uint32_t EXTINT40PEND4:1; //4
        uint32_t EXTINT40PEND5:1; //5
        uint32_t EXTINT40PEND6:1; //6
        uint32_t EXTINT40PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT40PEND;

typedef union EXTINT41PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT41PEND0:1; //0
        uint32_t EXTINT41PEND1:1; //1
        uint32_t EXTINT41PEND2:1; //2
        uint32_t EXTINT41PEND3:1; //3
        uint32_t EXTINT41PEND4:1; //4
        uint32_t EXTINT41PEND5:1; //5
        uint32_t EXTINT41PEND6:1; //6
        uint32_t EXTINT41PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT41PEND;

typedef union EXTINT42PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT42PEND0:1; //0
        uint32_t EXTINT42PEND1:1; //1
        uint32_t EXTINT42PEND2:1; //2
        uint32_t EXTINT42PEND3:1; //3
        uint32_t EXTINT42PEND4:1; //4
        uint32_t EXTINT42PEND5:1; //5
        uint32_t EXTINT42PEND6:1; //6
        uint32_t EXTINT42PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT42PEND;

typedef union EXTINT43PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT43PEND0:1; //0
        uint32_t EXTINT43PEND1:1; //1
        uint32_t EXTINT43PEND2:1; //2
        uint32_t EXTINT43PEND3:1; //3
        uint32_t EXTINT43PEND4:1; //4
        uint32_t EXTINT43PEND5:1; //5
        uint32_t EXTINT43PEND6:1; //6
        uint32_t EXTINT43PEND7:1; //7
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINT43PEND;

////////////////////////////////////////////////

typedef union BASEADDR2PDNEN_u
{
    uint8_t all_val;
    struct 
    {
        uint32_t PDNEN:1; //0
        uint32_t PDNENCFG:1; //1
        uint32_t Reserved:6; //7:2
    } bits;
} BASEADDR2PDNEN;

/////////////////////////////////////////////////

typedef union GPZCON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPZCON0:4; //3:0
        uint32_t GPZCON1:4; //7:4
        uint32_t GPZCON2:4; //11:8
        uint32_t GPZCON3:4; //15:12
        uint32_t GPZCON4:4; //19:16
        uint32_t GPZCON5:4; //23:20
        uint32_t GPZCON6:4; //27:24
    } bits;
} GPZCON;

typedef union GPZDAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPZDAT:7; //6:0
    } bits;
} GPZDAT;

typedef union GPZPUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPZPUD0:2; //1:0
        uint32_t GPZPUD1:2; //3:2
        uint32_t GPZPUD2:2; //5:4
        uint32_t GPZPUD3:2; //7:6
        uint32_t GPZPUD4:2; //9:8
        uint32_t GPZPUD5:2; //11:10
        uint32_t GPZPUD6:2; //13:12
    } bits;
} GPZPUD;

typedef union GPZDRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPZDRV0:2; //1:0
        uint32_t GPZDRV1:2; //3:2
        uint32_t GPZDRV2:2; //5:4
        uint32_t GPZDRV3:2; //7:6
        uint32_t GPZDRV4:2; //9:8
        uint32_t GPZDRV5:2; //11:10
        uint32_t GPZDRV6:2; //13:12
        uint32_t Unknown:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPZDRV;

typedef union GPZCONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPZ0:2; //1:0
        uint32_t GPZ1:2; //3:2
        uint32_t GPZ2:2; //5:4
        uint32_t GPZ3:2; //7:6
        uint32_t GPZ4:2; //9:8
        uint32_t GPZ5:2; //11:10
        uint32_t GPZ6:2; //13:12
    } bits;   
} GPZCONPDN;

typedef union GPZPUDPDN_u
{
    uint16_t all_val:14;
    struct
    {
        uint32_t GPZ0:2; //1:0
        uint32_t GPZ1:2; //3:2
        uint32_t GPZ2:2; //5:4
        uint32_t GPZ3:2; //7:6
        uint32_t GPZ4:2; //9:8
        uint32_t GPZ5:2; //11:10
        uint32_t GPZ6:2; //13:12
    } bits;   
} GPZPUDPDN;

/////////////////////////////////////////////////

typedef union EXTINT50CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT50CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT50CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT50CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT50CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT50CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT50CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT50CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t Reserved7:4;   //31:28
    } bits;   
} EXTINT50CON;

////////////////////////////////////////////////////////

typedef union EXTINT50FLTCON0_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH10:7;  //6:0
        uint32_t FLTEN10:1;     //7
        uint32_t FLTWIDTH11:7;  //14:8
        uint32_t FLTEN11:1;     //15
        uint32_t FLTWIDTH12:7;  //22:16
        uint32_t FLTEN12:1;     //23
        uint32_t FLTWIDTH13:7;  //30:24
        uint32_t FLTEN13:1;     //31
    } bits;    
} EXTINT50FLTCON0;

typedef union EXTINT50FLTCON1_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t FLTWIDTH14:7;  //6:0
        uint32_t FLTEN14:1;     //7
        uint32_t FLTWIDTH15:7;  //14:8
        uint32_t FLTEN15:1;     //15
        uint32_t FLTWIDTH16:7;  //22:16
        uint32_t FLTEN16:1;     //23
        uint32_t Reserved:8;    //31:24
    } bits;    
} EXTINT50FLTCON1;

///////////////////////////////////////////////////

typedef union EXTINT50MASK_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT50MASK0:1; //0
        uint32_t EXTINT50MASK1:1; //1
        uint32_t EXTINT50MASK2:1; //2
        uint32_t EXTINT50MASK3:1; //3
        uint32_t EXTINT50MASK4:1; //4
        uint32_t EXTINT50MASK5:1; //5
        uint32_t EXTINT50MASK6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT50MASK;

///////////////////////////////////////////////////////////

typedef union EXTINT50PEND_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t EXTINT50PEND0:1; //0
        uint32_t EXTINT50PEND1:1; //1
        uint32_t EXTINT50PEND2:1; //2
        uint32_t EXTINT50PEND3:1; //3
        uint32_t EXTINT50PEND4:1; //4
        uint32_t EXTINT50PEND5:1; //5
        uint32_t EXTINT50PEND6:1; //6
        uint32_t Reserved:25;    //31:7
    } bits;
} EXTINT50PEND;

////////////////////////////////////////////

typedef union EXTINTSERVICEXD_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t SVCNUM:3;       //2:0
        uint32_t SVCGROUPNUM:5;  //7:3
        uint32_t Reserved:24;    //31:8
    } bits;
} EXTINTSERVICEXD;

typedef union EXTINTSERVICEPENDXD_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t SVCPEND:8;   //7:0
        uint32_t Reserved:24; //31:8
    } bits;
} EXTINTSERVICEPENDXD;

typedef union EXTINTGRPFIXPRIXD_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTGRPNUM:4;  //3:0
        uint32_t Reserved:28;      //31:4
    } bits;
} EXTINTGRPFIXPRIXD;

///////////////////////////////////////////////////

typedef union EXTINT50FIXPRI_u
{
    uint32_t all_val;
    struct 
    {
        uint32_t HIGHESTEINTNUM:3;  //2:0
        uint32_t Reserved:29;   //31:3
    } bits;
} EXTINT50FIXPRI;

////////////////////////////////////////////////

typedef union BASEADDR3PDNEN_u
{
    uint8_t all_val;
    struct 
    {
        uint32_t PDNEN:1; //0
        uint32_t PDNENCFG:1; //1
        uint32_t Reserved:6; //7:2
    } bits;
} BASEADDR3PDNEN;

////////////////////////////////////////////////

typedef union GPV0CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV0CON0:4; //3:0
        uint32_t GPV0CON1:4; //7:4
        uint32_t GPV0CON2:4; //11:8
        uint32_t GPV0CON3:4; //15:12
        uint32_t GPV0CON4:4; //19:16
        uint32_t GPV0CON5:4; //23:20
        uint32_t GPV0CON6:4; //27:24
        uint32_t GPV0CON7:4; //28:31
    } bits;
} GPV0CON;

typedef union GPV0DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV0DAT:8; //7:0
    } bits;
} GPV0DAT;

typedef union GPV0PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV0PUD0:2; //1:0
        uint32_t GPV0PUD1:2; //3:2
        uint32_t GPV0PUD2:2; //5:4
        uint32_t GPV0PUD3:2; //7:6
        uint32_t GPV0PUD4:2; //9:8
        uint32_t GPV0PUD5:2; //11:10
        uint32_t GPV0PUD6:2; //13:12
        uint32_t GPV0PUD7:2; //15:14
    } bits;
} GPV0PUD;

typedef union GPV0DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV0DRV0:2; //1:0
        uint32_t GPV0DRV1:2; //3:2
        uint32_t GPV0DRV2:2; //5:4
        uint32_t GPV0DRV3:2; //7:6
        uint32_t GPV0DRV4:2; //9:8
        uint32_t GPV0DRV5:2; //11:10
        uint32_t GPV0DRV6:2; //13:12
        uint32_t GPV0DRV7:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPV0DRV;

typedef union GPV0CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV00:2; //1:0
        uint32_t GPV01:2; //3:2
        uint32_t GPV02:2; //5:4
        uint32_t GPV03:2; //7:6
        uint32_t GPV04:2; //9:8
        uint32_t GPV05:2; //11:10
        uint32_t GPV06:2; //13:12
        uint32_t GPV07:2; //15:14 
    } bits;   
} GPV0CONPDN;

typedef union GPV0PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPV00:2; //1:0
        uint32_t GPV01:2; //3:2
        uint32_t GPV02:2; //5:4
        uint32_t GPV03:2; //7:6
        uint32_t GPV04:2; //9:8
        uint32_t GPV05:2; //11:10
        uint32_t GPV06:2; //13:12
        uint32_t GPV07:2; //15:14
    } bits;   
} GPV0PUDPDN;

////////////////////////////////////////////////

typedef union GPV1CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV1CON0:4; //3:0
        uint32_t GPV1CON1:4; //7:4
        uint32_t GPV1CON2:4; //11:8
        uint32_t GPV1CON3:4; //15:12
        uint32_t GPV1CON4:4; //19:16
        uint32_t GPV1CON5:4; //23:20
        uint32_t GPV1CON6:4; //27:24
        uint32_t GPV1CON7:4; //28:31
    } bits;
} GPV1CON;

typedef union GPV1DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV1DAT:8; //7:0
    } bits;
} GPV1DAT;

typedef union GPV1PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV1PUD0:2; //1:0
        uint32_t GPV1PUD1:2; //3:2
        uint32_t GPV1PUD2:2; //5:4
        uint32_t GPV1PUD3:2; //7:6
        uint32_t GPV1PUD4:2; //9:8
        uint32_t GPV1PUD5:2; //11:10
        uint32_t GPV1PUD6:2; //13:12
        uint32_t GPV1PUD7:2; //15:14
    } bits;
} GPV1PUD;

typedef union GPV1DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV1DRV0:2; //1:0
        uint32_t GPV1DRV1:2; //3:2
        uint32_t GPV1DRV2:2; //5:4
        uint32_t GPV1DRV3:2; //7:6
        uint32_t GPV1DRV4:2; //9:8
        uint32_t GPV1DRV5:2; //11:10
        uint32_t GPV1DRV6:2; //13:12
        uint32_t GPV1DRV7:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPV1DRV;

typedef union GPV1CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV10:2; //1:0
        uint32_t GPV11:2; //3:2
        uint32_t GPV12:2; //5:4
        uint32_t GPV13:2; //7:6
        uint32_t GPV14:2; //9:8
        uint32_t GPV15:2; //11:10
        uint32_t GPV16:2; //13:12
        uint32_t GPV17:2; //15:14 
    } bits;   
} GPV1CONPDN;

typedef union GPV1PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPV10:2; //1:0
        uint32_t GPV11:2; //3:2
        uint32_t GPV12:2; //5:4
        uint32_t GPV13:2; //7:6
        uint32_t GPV14:2; //9:8
        uint32_t GPV15:2; //11:10
        uint32_t GPV16:2; //13:12
        uint32_t GPV17:2; //15:14
    } bits;   
} GPV1PUDPDN;

/////////////////////////////////////////

typedef union ETC7PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ETC7PUD0:2; //1:0
        uint32_t ETC7PUD1:2; //3:2
    } bits;   
} ETC7PUD;

typedef union ETC7DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ETC7DRV0:2; //1:0
        uint32_t ETC7DRV1:2; //3:2
        uint32_t Unknown:12;  //15:4
        uint32_t Reserved:8; //23:16
    } bits;   
} ETC7DRV;

////////////////////////////////////////////////

typedef union GPV2CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV2CON0:4; //3:0
        uint32_t GPV2CON1:4; //7:4
        uint32_t GPV2CON2:4; //11:8
        uint32_t GPV2CON3:4; //15:12
        uint32_t GPV2CON4:4; //19:16
        uint32_t GPV2CON5:4; //23:20
        uint32_t GPV2CON6:4; //27:24
        uint32_t GPV2CON7:4; //28:31
    } bits;
} GPV2CON;

typedef union GPV2DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV2DAT:8; //7:0
    } bits;
} GPV2DAT;

typedef union GPV2PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV2PUD0:2; //1:0
        uint32_t GPV2PUD1:2; //3:2
        uint32_t GPV2PUD2:2; //5:4
        uint32_t GPV2PUD3:2; //7:6
        uint32_t GPV2PUD4:2; //9:8
        uint32_t GPV2PUD5:2; //11:10
        uint32_t GPV2PUD6:2; //13:12
        uint32_t GPV2PUD7:2; //15:14
    } bits;
} GPV2PUD;

typedef union GPV2DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV2DRV0:2; //1:0
        uint32_t GPV2DRV1:2; //3:2
        uint32_t GPV2DRV2:2; //5:4
        uint32_t GPV2DRV3:2; //7:6
        uint32_t GPV2DRV4:2; //9:8
        uint32_t GPV2DRV5:2; //11:10
        uint32_t GPV2DRV6:2; //13:12
        uint32_t GPV2DRV7:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPV2DRV;

typedef union GPV2CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV20:2; //1:0
        uint32_t GPV21:2; //3:2
        uint32_t GPV22:2; //5:4
        uint32_t GPV23:2; //7:6
        uint32_t GPV24:2; //9:8
        uint32_t GPV25:2; //11:10
        uint32_t GPV26:2; //13:12
        uint32_t GPV27:2; //15:14 
    } bits;   
} GPV2CONPDN;

typedef union GPV2PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPV20:2; //1:0
        uint32_t GPV21:2; //3:2
        uint32_t GPV22:2; //5:4
        uint32_t GPV23:2; //7:6
        uint32_t GPV24:2; //9:8
        uint32_t GPV25:2; //11:10
        uint32_t GPV26:2; //13:12
        uint32_t GPV27:2; //15:14
    } bits;   
} GPV2PUDPDN;

////////////////////////////////////////////////

typedef union GPV3CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV3CON0:4; //3:0
        uint32_t GPV3CON1:4; //7:4
        uint32_t GPV3CON2:4; //11:8
        uint32_t GPV3CON3:4; //15:12
        uint32_t GPV3CON4:4; //19:16
        uint32_t GPV3CON5:4; //23:20
        uint32_t GPV3CON6:4; //27:24
        uint32_t GPV3CON7:4; //28:31
    } bits;
} GPV3CON;

typedef union GPV3DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV3DAT:8; //7:0
    } bits;
} GPV3DAT;

typedef union GPV3PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV3PUD0:2; //1:0
        uint32_t GPV3PUD1:2; //3:2
        uint32_t GPV3PUD2:2; //5:4
        uint32_t GPV3PUD3:2; //7:6
        uint32_t GPV3PUD4:2; //9:8
        uint32_t GPV3PUD5:2; //11:10
        uint32_t GPV3PUD6:2; //13:12
        uint32_t GPV3PUD7:2; //15:14
    } bits;
} GPV3PUD;

typedef union GPV3DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV3DRV0:2; //1:0
        uint32_t GPV3DRV1:2; //3:2
        uint32_t GPV3DRV2:2; //5:4
        uint32_t GPV3DRV3:2; //7:6
        uint32_t GPV3DRV4:2; //9:8
        uint32_t GPV3DRV5:2; //11:10
        uint32_t GPV3DRV6:2; //13:12
        uint32_t GPV3DRV7:2; //15:14 
        uint32_t Reserved:8; //23:16
    } bits;
} GPV3DRV;

typedef union GPV3CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV30:2; //1:0
        uint32_t GPV31:2; //3:2
        uint32_t GPV32:2; //5:4
        uint32_t GPV33:2; //7:6
        uint32_t GPV34:2; //9:8
        uint32_t GPV35:2; //11:10
        uint32_t GPV36:2; //13:12
        uint32_t GPV37:2; //15:14 
    } bits;   
} GPV3CONPDN;

typedef union GPV3PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPV30:2; //1:0
        uint32_t GPV31:2; //3:2
        uint32_t GPV32:2; //5:4
        uint32_t GPV33:2; //7:6
        uint32_t GPV34:2; //9:8
        uint32_t GPV35:2; //11:10
        uint32_t GPV36:2; //13:12
        uint32_t GPV37:2; //15:14
    } bits;   
} GPV3PUDPDN;

/////////////////////////////////////////

typedef union ETC8PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ETC8PUD0:2; //1:0
        uint32_t ETC8PUD1:2; //3:2
    } bits;   
} ETC8PUD;

typedef union ETC8DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t ETC8DRV0:2; //1:0
        uint32_t ETC8DRV1:2; //3:2
        uint32_t Unknown:12;  //15:4
        uint32_t Reserved:8; //23:16
    } bits;   
} ETC8DRV;

////////////////////////////////////////////////

typedef union GPV4CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV4CON0:4; //3:0
        uint32_t GPV4CON1:4; //7:4
    } bits;
} GPV4CON;

typedef union GPV4DAT_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV4DAT:2; //1:0
    } bits;
} GPV4DAT;

typedef union GPV4PUD_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV4PUD0:2; //1:0
        uint32_t GPV4PUD1:2; //3:2
    } bits;
} GPV4PUD;

typedef union GPV4DRV_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV4DRV0:2; //1:0
        uint32_t GPV4DRV1:2; //3:2
        uint32_t Unknown:12; //15:4
        uint32_t Reserved:8; //23:16
    } bits;
} GPV4DRV;

typedef union GPV4CONPDN_u
{
    uint32_t all_val;
    struct
    {
        uint32_t GPV40:2; //1:0
        uint32_t GPV41:2; //3:2
    } bits;   
} GPV4CONPDN;

typedef union GPV4PUDPDN_u
{
    uint16_t all_val;
    struct
    {
        uint32_t GPV40:2; //1:0
        uint32_t GPV41:2; //3:2
    } bits;   
} GPV4PUDPDN;

/////////////////////////////////////////////////

typedef union EXTINT30CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT30CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT30CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT30CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT30CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT30CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT30CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT30CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT30CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT30CON;

typedef union EXTINT31CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT31CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT31CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT31CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT31CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT31CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT31CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT31CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT31CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT31CON;

typedef union EXTINT32CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT32CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT32CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT32CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT32CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT32CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT32CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT32CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT32CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT32CON;

typedef union EXTINT33CON_u
{
    uint32_t all_val;
    struct
    {
        uint32_t EXTINT33CON0:3; //2:0
        uint32_t Reserved0:1;   //3
        uint32_t EXTINT33CON1:3; //6:4
        uint32_t Reserved1:1;   //7
        uint32_t EXTINT33CON2:3; //10:8
        uint32_t Reserved2:1;   //11
        uint32_t EXTINT33CON3:3; //14:12
        uint32_t Reserved3:1;   //15
        uint32_t EXTINT33CON4:3; //18:16
        uint32_t Reserved4:1;   //19
        uint32_t EXTINT33CON5:3; //22:20
        uint32_t Reserved5:1;   //23
        uint32_t EXTINT33CON6:3; //26:24
        uint32_t Reserved6:1;   //27
        uint32_t EXTINT33CON7:3; //30:28
        uint32_t Reserved7:1;   //31
    } bits;   
} EXTINT33CON;

#endif 