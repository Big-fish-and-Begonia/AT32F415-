#ifndef __VALUE_H
#define __VALUE_H

#include "at32f415.h"

struct UART_Struct
{
	uint16_t USART_RX_LEN ;				//DMA���ܳ���
	uint8_t USART_RX_Buff[512];		//���ܻ�������
	uint8_t USART_TX_Buff[512];		//���ͻ�������
	uint8_t Uartrxsta ;						//������ɱ�־λ
};

struct Condition
{
	uint8_t USART_RX_LEN ;				//DMA���ܳ���
	uint8_t USART_RX_Buff[512];		//���ܻ�������
	uint8_t USART_TX_Buff[512];		//���ͻ�������
	uint8_t Uartrxsta ;						//������ɱ�־λ
};



extern uint8_t debug_rx[512];
extern uint8_t debug_tx[512];

extern struct Condition state1;
extern struct UART_Struct UART_1,UART_2,UART_3;

void usart1dmarecv(u8 *data,u16 len);


void usart2dmarecv(u8 *data,u16 len);

void usartd2masend(u8 *data,u16 len);


#endif

