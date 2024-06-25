#include "ARMv7.h"
#include "MemMap.h"
#include "board/gpio.h"
#include "board/clock.h"
#include "board/uart.h"
#include "board/smdk4412.h"

.text
    .code 32
    .global vector_start
    .global vector_end
    .global uart_init

    vector_start:
        ldr     pc, reset_handler_addr
        ldr     pc, undef_handler_addr
        ldr     pc, svc_handler_addr
        ldr     pc, pftch_abt_handler_addr
        ldr     pc, data_abt_handler_addr
        ldr     pc, not_used_handler_addr
        ldr     pc, irq_handler_addr
        ldr     pc, fiq_handler_addr

        reset_handler_addr:         .word reset_handler
        undef_handler_addr:         .word dummy_handler
        svc_handler_addr:           .word dummy_handler
        pftch_abt_handler_addr:     .word dummy_handler
        data_abt_handler_addr:      .word dummy_handler
        not_used_handler_addr:      .word dummy_handler
        irq_handler_addr:           .word dummy_handler
        fiq_handler_addr:           .word dummy_handler

    vector_end:

    reset_handler:
        mrs     r0, cpsr
        bic     r1, r0, #0x1F
        orr     r1, r1, #ARM_MODE_BIT_SVC
        msr     cpsr, r1
        ldr     sp, =SVC_STACK_TOP

        mrs     r0, cpsr
        bic     r1, r0, #0x1F
        orr     r1, r1, #ARM_MODE_BIT_IRQ
        msr     cpsr, r1
        ldr     sp, =IRQ_STACK_TOP

        mrs     r0, cpsr
        bic     r1, r0, #0x1F
        orr     r1, r1, #ARM_MODE_BIT_FIQ
        msr     cpsr, r1
        ldr     sp, =FIQ_STACK_TOP

        mrs     r0, cpsr
        bic     r1, r0, #0x1F
        orr     r1, r1, #ARM_MODE_BIT_ABT
        msr     cpsr, r1
        ldr     sp, =ABT_STACK_TOP

        mrs     r0, cpsr
        bic     r1, r0, #0x1F
        orr     r1, r1, #ARM_MODE_BIT_UND
        msr     cpsr, r1
        ldr     sp, =UND_STACK_TOP

        mrs     r0, cpsr
        bic     r1, r0, #0x1F
        orr     r1, r1, #ARM_MODE_BIT_SYS
        msr     cpsr, r1
        ldr     sp, =USRSYS_STACK_TOP

        bl uart_init

    dummy_handler:
        b   .

    uart_init:
        ldr	r0, =GPIO_GPA0CON_ADDR
        ldr	r1, =0x22222222
        str r1, [r0]
        ldr	r0, =GPIO_GPA1CON_ADDR
        ldr	r1, =0x222222
        str r1, [r0]

        ldr	r0, =CLK_SRC_PERIL0_ADDR
        ldr	r1, =CLK_SRC_PERIL0_VAL
        str	r1, [r0]
        ldr	r0, =CLK_DIV_PERIL0_ADDR
        ldr	r1, =CLK_DIV_PERIL0_VAL
        str	r1, [r0]

        ldr	r0, =UFCON2_ADDR
        ldr r1, =0x111
        str	r1, [r0]

        ldr	r0, =ULCON2_ADDR
        mov	r1, #0x3
        str	r1, [r0]

        ldr	r0, =UCON2_ADDR
        ldr	r1, =0x3c5
        str	r1, [r0]

        ldr	r0, =UBRDIV2_ADDR
        ldr	r1, =UART_UBRDIV_VAL
        str	r1, [r0]

        ldr	r0, =UFRACVAL2_ADDR
        ldr	r1, =UART_UDIVSLOT_VAL
        str	r1, [r0]

        ldr	r0, =UTXH2_ADDR
    /*	ldr	r1, =0x4f4f4f4f*/  
        ldr	r1, =0x57575757			@'W'
        str	r1, [r0]		        @'O'

        bl main
.end
