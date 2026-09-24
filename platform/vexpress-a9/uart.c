#ifndef __DEVNAV_UART_H__
#define __DEVNAV_UART_H__

void uart_init(void);
void uart_putc(char c);
void uart_puts(const char* str);

#endif /* __DEVNAV_UART_H__ */