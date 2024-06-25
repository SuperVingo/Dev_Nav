#include "stdint.h"
#include "board/uart.h"

void main(void)
{
    while(1)
    {
        uint32_t* utrstat = (uint32_t*)(UTRSTAT2_ADDR);
        uint32_t* utxh = (uint32_t*)(UTXH2_ADDR);

        while(!((*utrstat) & 0x2));
        
        *utxh = 0x57575757;
    }
    // Not reached
}