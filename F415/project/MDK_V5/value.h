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
	float Axis_1_Pos;							//轴1数据
	float Axis_2_Pos;							//轴2数据
	float Axis_3_Pos;							//轴3数据
	float Axis_4_Pos;							//轴4数据
	float Axis_5_Pos;							//轴5数据
	float Axis_6_Pos;							//轴6数据
	
	uint8_t FOC;									//手轮状态
	uint8_t FOC_En;								//手轮使能
	uint8_t FOC_POSDate;					//手轮数据
	
	uint8_t Axis_1_Speed;					//轴1速度
	uint8_t Axis_2_Speed;         //轴2速度
	uint8_t Axis_3_Speed;					//轴3速度
	uint8_t Axis_4_Speed;					//轴1速度
	uint8_t Axis_5_Speed;         //轴2速度
	uint8_t Axis_6_Speed;					//轴3速度
	
};



extern uint8_t debug_rx[512];
extern uint8_t debug_tx[512];

extern uint8_t const READ_M[];//读16个M
extern uint8_t const READ_D[];//读16个D

extern struct Condition state1;
extern struct UART_Struct UART_1,UART_2,UART_3;

void usart1dmarecv(u8 *data,u16 len);


void usart2dmarecv(u8 *data,u16 len);

void usartd2masend(u8 *data,u16 len);


#endif

