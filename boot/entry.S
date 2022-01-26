#include "include/ARMv7.h"
#include "include/MemMap.h"

.text
    .code 32
    .global vector_start
    .global vector_end

vector_start:
    ldr     pc, reset_handler_addr
    ldr     pc, undef_handler_addr
    ldr     pc, svc_handler_addr
    ldr     pc, pftch_abt_handler_addr
    ldr     pc, data_abt_handler_addr
    B       .
    ldr     pc, irq_handler_addr
    ldr     pc, fiq_handler_addr

    reset_handler_addr:         .word reset_handler
    undef_handler_addr:         .word dummy_handler
    svc_handler_addr:           .word dummy_handler
    pftch_abt_handler_addr:     .word dummy_handler
    data_abt_handler_addr:      .word dummy_handler
    irq_handler_addr:           .word dummy_handler
    fiq_handler_addr:           .word dummy_handler

vector_end:

reset_handler:
    mrs     r0, cpsr
    bic     r1, r0, #0x1F
    orr     r1, r1, #ARM_MODE_BIT_SVC

dummy_handler:
    B   .

.end
