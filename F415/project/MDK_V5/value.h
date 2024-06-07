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
	float Axis_1_Pos;							//��1����
	float Axis_2_Pos;							//��2����
	float Axis_3_Pos;							//��3����
	float Axis_4_Pos;							//��4����
	float Axis_5_Pos;							//��5����
	float Axis_6_Pos;							//��6����
	
	uint8_t FOC;									//����״̬
	uint8_t FOC_En;								//����ʹ��
	uint8_t FOC_POSDate;					//��������
	
	uint8_t Axis_1_Speed;					//��1�ٶ�
	uint8_t Axis_2_Speed;         //��2�ٶ�
	uint8_t Axis_3_Speed;					//��3�ٶ�
	uint8_t Axis_4_Speed;					//��1�ٶ�
	uint8_t Axis_5_Speed;         //��2�ٶ�
	uint8_t Axis_6_Speed;					//��3�ٶ�
	
};



extern uint8_t debug_rx[512];
extern uint8_t debug_tx[512];

extern uint8_t const READ_M[];//��16��M
extern uint8_t const READ_D[];//��16��D

extern struct Condition state1;
extern struct UART_Struct UART_1,UART_2,UART_3;

void usart1dmarecv(u8 *data,u16 len);


void usart2dmarecv(u8 *data,u16 len);

void usartd2masend(u8 *data,u16 len);


#endif

