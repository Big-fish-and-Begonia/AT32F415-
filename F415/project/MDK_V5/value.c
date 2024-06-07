#include "value.h"

struct UART_Struct UART_1,UART_2,UART_3;//���ڽ��ܷ��ͽṹ��

uint8_t debug_rx[512];
uint8_t debug_tx[512];


struct Condition state1;

uint8_t const READ_M[]={0x50,0x00,0x00,0xFF,0xFF,0x03,0x00,0x0C,0x00,0x0A,0x00,0x01,0x04,0x01,0x00,0x00,0x00,0x00,0x90,0x10,0x00};//16λ��ȡ�̶�����
	
uint8_t const READ_D[]={0x50,0x00,0x00,0xFF,0xFF,0x03,0x00,0x0C,0x00,0x0A,0x00,0x01,0x04,0x00,0x00,0x00,0x00,0x00,0xA8,0x10,0x00};//16λ��ȡ�̶�����
																														//���ݳ���																														 //���ݿ�ʼ
uint8_t Write_M[100] = {0x50,0x00,0x00,0xFF,0xFF,0x03,0x00,0x0D,0x00,0x0A,0x00,0x01,0x14,0x01,0x00,0x00,0x00,0x00,0x90,0x01,0x00,0x10};	
																													//���ݳ���																															//���ݿ�ʼ
uint8_t Write_D[100] = {0x50,0x00,0x00,0xFF,0xFF,0x03,0x00,0x10,0x00,0x0A,0x00,0x01,0x14,0x00,0x00,0x00,0x00,0x00,0xA8,0x02,0x00,0x10,0x00,0x00,0x00};
	
void usart1dmarecv(u8 *data,u16 len)
{
	dma_flag_clear(DMA1_FDT1_FLAG);
	dma_channel_enable(DMA1_CHANNEL1,FALSE);
	usart_dma_receiver_enable(USART1,FALSE);
	DMA1_CHANNEL1->dtcnt=len;                       //���յ����ݳ���
  DMA1_CHANNEL1->maddr=(uint32_t)data;            //�������buf��ַ
	dma_channel_enable(DMA1_CHANNEL1, TRUE);        //����ͨ��5����ʼ���գ�
}




void usart2dmarecv(u8 *data,u16 len)
{
	dma_flag_clear(DMA1_FDT3_FLAG);
	dma_channel_enable(DMA1_CHANNEL3,FALSE);
	usart_dma_receiver_enable(USART2,FALSE);
	DMA1_CHANNEL3->dtcnt=len;                       //���յ����ݳ���
  DMA1_CHANNEL3->maddr=(uint32_t)data;            //�������buf��ַ
	dma_channel_enable(DMA1_CHANNEL3, TRUE);        //����ͨ��5����ʼ���գ�
}


void usartd2masend(u8 *data,u16 len)
{
 
    DMA1_CHANNEL4->dtcnt=len;                           //���͵����ݳ���
    DMA1_CHANNEL4->maddr=(uint32_t)data;                //����buf��ַ
    usart_dma_transmitter_enable(USART2,TRUE);          //����USART1 DMA ����
    dma_channel_enable(DMA1_CHANNEL4, TRUE);            //����ͨ��4����ʼ���ͣ� 
    while(dma_flag_get(DMA1_FDT4_FLAG)==RESET );        //�ȴ�������� 
    dma_flag_clear(DMA1_FDT4_FLAG);                     //���־
    dma_channel_enable(DMA1_CHANNEL4, FALSE);           //�ر�ͨ��4
    usart_dma_transmitter_enable(USART2,FALSE);         //�ر�USART1 DMA ����
       
}


