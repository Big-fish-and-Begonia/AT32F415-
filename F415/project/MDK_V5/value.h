#ifndef __VALUE_H
#define __VALUE_H

#include "at32f415.h"

struct UART_Struct
{
	uint16_t USART_RX_LEN ;				//DMA接受长度
	uint8_t USART_RX_Buff[512];		//接受缓冲数组
	uint8_t USART_TX_Buff[512];		//发送缓冲数组
	uint8_t Uartrxsta ;						//接受完成标志位
};

struct Condition
{
	uint8_t USART_RX_LEN ;				//DMA接受长度
	uint8_t USART_RX_Buff[512];		//接受缓冲数组
	uint8_t USART_TX_Buff[512];		//发送缓冲数组
	uint8_t Uartrxsta ;						//接受完成标志位
};



extern uint8_t debug_rx[512];
extern uint8_t debug_tx[512];

extern struct Condition state1;
extern struct UART_Struct UART_1,UART_2,UART_3;

void usart1dmarecv(u8 *data,u16 len);


void usart2dmarecv(u8 *data,u16 len);

void usartd2masend(u8 *data,u16 len);


#endif

