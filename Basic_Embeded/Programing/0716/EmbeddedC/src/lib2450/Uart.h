#ifndef __UART_H__
#define __UART_H__

#include "2450addr.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>


#ifdef __cplusplus
extern "C" {
#endif
	
//**************************************************************
extern void Uart_Init(int baud);
//extern void printf(const char *fmt, ...);
extern void Uart_SendString(char *pt);
extern void Uart_SendByte(int data);
extern char Uart_GetChar(void);
extern char Uart_GetCh(void);
//**************************************************************
#ifdef __cplusplus
}
#endif




#endif // __UART_H__
