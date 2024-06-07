#include "value.h"

struct UART_Struct UART_1,UART_2,UART_3;//串口接受发送结构体

uint8_t debug_rx[512];
uint8_t debug_tx[512];


struct Condition state1;

uint8_t const READ_M[]={0x50,0x00,0x00,0xFF,0xFF,0x03,0x00,0x0C,0x00,0x0A,0x00,0x01,0x04,0x01,0x00,0x00,0x00,0x00,0x90,0x10,0x00};//16位读取固定发送
	
uint8_t const READ_D[]={0x50,0x00,0x00,0xFF,0xFF,0x03,0x00,0x0C,0x00,0x0A,0x00,0x01,0x04,0x00,0x00,0x00,0x00,0x00,0xA8,0x10,0x00};//16位读取固定发送
																														//数据长度																														 //数据开始
uint8_t Write_M[100] = {0x50,0x00,0x00,0xFF,0xFF,0x03,0x00,0x0D,0x00,0x0A,0x00,0x01,0x14,0x01,0x00,0x00,0x00,0x00,0x90,0x01,0x00,0x10};	
																													//数据长度																															//数据开始
uint8_t Write_D[100] = {0x50,0x00,0x00,0xFF,0xFF,0x03,0x00,0x10,0x00,0x0A,0x00,0x01,0x14,0x00,0x00,0x00,0x00,0x00,0xA8,0x02,0x00,0x10,0x00,0x00,0x00};
	
void usart1dmarecv(u8 *data,u16 len)
{
	dma_flag_clear(DMA1_FDT1_FLAG);
	dma_channel_enable(DMA1_CHANNEL1,FALSE);
	usart_dma_receiver_enable(USART1,FALSE);
	DMA1_CHANNEL1->dtcnt=len;                       //接收的数据长度
  DMA1_CHANNEL1->maddr=(uint32_t)data;            //存放数据buf地址
	dma_channel_enable(DMA1_CHANNEL1, TRUE);        //开启通道5（开始接收）
}




void usart2dmarecv(u8 *data,u16 len)
{
	dma_flag_clear(DMA1_FDT3_FLAG);
	dma_channel_enable(DMA1_CHANNEL3,FALSE);
	usart_dma_receiver_enable(USART2,FALSE);
	DMA1_CHANNEL3->dtcnt=len;                       //接收的数据长度
  DMA1_CHANNEL3->maddr=(uint32_t)data;            //存放数据buf地址
	dma_channel_enable(DMA1_CHANNEL3, TRUE);        //开启通道5（开始接收）
}


void usartd2masend(u8 *data,u16 len)
{
 
    DMA1_CHANNEL4->dtcnt=len;                           //发送的数据长度
    DMA1_CHANNEL4->maddr=(uint32_t)data;                //数据buf地址
    usart_dma_transmitter_enable(USART2,TRUE);          //开启USART1 DMA 发送
    dma_channel_enable(DMA1_CHANNEL4, TRUE);            //开启通道4（开始发送） 
    while(dma_flag_get(DMA1_FDT4_FLAG)==RESET );        //等待传输完成 
    dma_flag_clear(DMA1_FDT4_FLAG);                     //清标志
    dma_channel_enable(DMA1_CHANNEL4, FALSE);           //关闭通道4
    usart_dma_transmitter_enable(USART2,FALSE);         //关闭USART1 DMA 发送
       
}


