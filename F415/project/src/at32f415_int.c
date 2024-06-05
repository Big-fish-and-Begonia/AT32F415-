/* add user code begin Header */
/**
  **************************************************************************
  * @file     at32f415_int.c
  * @brief    main interrupt service routines.
  **************************************************************************
  *                       Copyright notice & Disclaimer
  *
  * The software Board Support Package (BSP) that is made available to
  * download from Artery official website is the copyrighted work of Artery.
  * Artery authorizes customers to use, copy, and distribute the BSP
  * software and its related documentation for the purpose of design and
  * development in conjunction with Artery microcontrollers. Use of the
  * software is governed by this copyright notice and the following disclaimer.
  *
  * THIS SOFTWARE IS PROVIDED ON "AS IS" BASIS WITHOUT WARRANTIES,
  * GUARANTEES OR REPRESENTATIONS OF ANY KIND. ARTERY EXPRESSLY DISCLAIMS,
  * TO THE FULLEST EXTENT PERMITTED BY LAW, ALL EXPRESS, IMPLIED OR
  * STATUTORY OR OTHER WARRANTIES, GUARANTEES OR REPRESENTATIONS,
  * INCLUDING BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY,
  * FITNESS FOR A PARTICULAR PURPOSE, OR NON-INFRINGEMENT.
  *
  **************************************************************************
  */
/* add user code end Header */

/* includes ------------------------------------------------------------------*/
#include "at32f415_int.h"

/* private includes ----------------------------------------------------------*/
/* add user code begin private includes */
#include "value.h"
#include "string.h"
/* add user code end private includes */

/* private typedef -----------------------------------------------------------*/
/* add user code begin private typedef */

/* add user code end private typedef */

/* private define ------------------------------------------------------------*/
/* add user code begin private define */

/* add user code end private define */

/* private macro -------------------------------------------------------------*/
/* add user code begin private macro */

/* add user code end private macro */

/* private variables ---------------------------------------------------------*/
/* add user code begin private variables */

/* add user code end private variables */

/* private function prototypes --------------------------------------------*/
/* add user code begin function prototypes */

/* add user code end function prototypes */

/* private user code ---------------------------------------------------------*/
/* add user code begin 0 */

/* add user code end 0 */

/* external variables ---------------------------------------------------------*/
/* add user code begin external variables */

/* add user code end external variables */

/**
  * @brief  this function handles nmi exception.
  * @param  none
  * @retval none
  */
void NMI_Handler(void)
{
  /* add user code begin NonMaskableInt_IRQ 0 */

  /* add user code end NonMaskableInt_IRQ 0 */

  /* add user code begin NonMaskableInt_IRQ 1 */

  /* add user code end NonMaskableInt_IRQ 1 */
}

/**
  * @brief  this function handles hard fault exception.
  * @param  none
  * @retval none
  */
void HardFault_Handler(void)
{
  /* add user code begin HardFault_IRQ 0 */

  /* add user code end HardFault_IRQ 0 */
  /* go to infinite loop when hard fault exception occurs */
  while (1)
  {
    /* add user code begin W1_HardFault_IRQ 0 */

    /* add user code end W1_HardFault_IRQ 0 */
  }
}

/**
  * @brief  this function handles memory manage exception.
  * @param  none
  * @retval none
  */
void MemManage_Handler(void)
{
  /* add user code begin MemoryManagement_IRQ 0 */

  /* add user code end MemoryManagement_IRQ 0 */
  /* go to infinite loop when memory manage exception occurs */
  while (1)
  {
    /* add user code begin W1_MemoryManagement_IRQ 0 */

    /* add user code end W1_MemoryManagement_IRQ 0 */
  }
}

/**
  * @brief  this function handles bus fault exception.
  * @param  none
  * @retval none
  */
void BusFault_Handler(void)
{
  /* add user code begin BusFault_IRQ 0 */

  /* add user code end BusFault_IRQ 0 */
  /* go to infinite loop when bus fault exception occurs */
  while (1)
  {
    /* add user code begin W1_BusFault_IRQ 0 */

    /* add user code end W1_BusFault_IRQ 0 */
  }
}

/**
  * @brief  this function handles usage fault exception.
  * @param  none
  * @retval none
  */
void UsageFault_Handler(void)
{
  /* add user code begin UsageFault_IRQ 0 */

  /* add user code end UsageFault_IRQ 0 */
  /* go to infinite loop when usage fault exception occurs */
  while (1)
  {
    /* add user code begin W1_UsageFault_IRQ 0 */

    /* add user code end W1_UsageFault_IRQ 0 */
  }
}

/**
  * @brief  this function handles svcall exception.
  * @param  none
  * @retval none
  */
void SVC_Handler(void)
{
  /* add user code begin SVCall_IRQ 0 */

  /* add user code end SVCall_IRQ 0 */
  /* add user code begin SVCall_IRQ 1 */

  /* add user code end SVCall_IRQ 1 */
}

/**
  * @brief  this function handles debug monitor exception.
  * @param  none
  * @retval none
  */
void DebugMon_Handler(void)
{
  /* add user code begin DebugMonitor_IRQ 0 */

  /* add user code end DebugMonitor_IRQ 0 */
  /* add user code begin DebugMonitor_IRQ 1 */

  /* add user code end DebugMonitor_IRQ 1 */
}

/**
  * @brief  this function handles pendsv_handler exception.
  * @param  none
  * @retval none
  */
void PendSV_Handler(void)
{
  /* add user code begin PendSV_IRQ 0 */

  /* add user code end PendSV_IRQ 0 */
  /* add user code begin PendSV_IRQ 1 */

  /* add user code end PendSV_IRQ 1 */
}

/**
  * @brief  this function handles EXINT Line 1 handler.
  * @param  none
  * @retval none
  */
void EXINT1_IRQHandler(void)
{
  /* add user code begin EXINT1_IRQ 0 */

  /* add user code end EXINT1_IRQ 0 */
  /* add user code begin EXINT1_IRQ 1 */

  /* add user code end EXINT1_IRQ 1 */
}

/**
  * @brief  this function handles DMA1 Channel 1 handler.
  * @param  none
  * @retval none
  */
void DMA1_Channel1_IRQHandler(void)
{
  /* add user code begin DMA1_Channel1_IRQ 0 */

  /* add user code end DMA1_Channel1_IRQ 0 */
  /* add user code begin DMA1_Channel1_IRQ 1 */

  /* add user code end DMA1_Channel1_IRQ 1 */
}

/**
  * @brief  this function handles DMA1 Channel 3 handler.
  * @param  none
  * @retval none
  */
void DMA1_Channel3_IRQHandler(void)
{
  /* add user code begin DMA1_Channel3_IRQ 0 */

  /* add user code end DMA1_Channel3_IRQ 0 */
  /* add user code begin DMA1_Channel3_IRQ 1 */

  /* add user code end DMA1_Channel3_IRQ 1 */
}

/**
  * @brief  this function handles DMA1 Channel 4 handler.
  * @param  none
  * @retval none
  */
void DMA1_Channel4_IRQHandler(void)
{
  /* add user code begin DMA1_Channel4_IRQ 0 */

  /* add user code end DMA1_Channel4_IRQ 0 */
  /* add user code begin DMA1_Channel4_IRQ 1 */

  /* add user code end DMA1_Channel4_IRQ 1 */
}

/**
  * @brief  this function handles DMA1 Channel 5 handler.
  * @param  none
  * @retval none
  */
void DMA1_Channel5_IRQHandler(void)
{
  /* add user code begin DMA1_Channel5_IRQ 0 */

  /* add user code end DMA1_Channel5_IRQ 0 */
  /* add user code begin DMA1_Channel5_IRQ 1 */

  /* add user code end DMA1_Channel5_IRQ 1 */
}

/**
  * @brief  this function handles DMA1 Channel 6 handler.
  * @param  none
  * @retval none
  */
void DMA1_Channel6_IRQHandler(void)
{
  /* add user code begin DMA1_Channel6_IRQ 0 */

  /* add user code end DMA1_Channel6_IRQ 0 */
  /* add user code begin DMA1_Channel6_IRQ 1 */

  /* add user code end DMA1_Channel6_IRQ 1 */
}

/**
  * @brief  this function handles DMA1 Channel 7 handler.
  * @param  none
  * @retval none
  */
void DMA1_Channel7_IRQHandler(void)
{
  /* add user code begin DMA1_Channel7_IRQ 0 */

  /* add user code end DMA1_Channel7_IRQ 0 */
  /* add user code begin DMA1_Channel7_IRQ 1 */

  /* add user code end DMA1_Channel7_IRQ 1 */
}

/**
  * @brief  this function handles TMR3 handler.
  * @param  none
  * @retval none
  */
void TMR3_GLOBAL_IRQHandler(void)
{
  /* add user code begin TMR3_GLOBAL_IRQ 0 */

  /* add user code end TMR3_GLOBAL_IRQ 0 */
  /* add user code begin TMR3_GLOBAL_IRQ 1 */

  /* add user code end TMR3_GLOBAL_IRQ 1 */
}

/**
  * @brief  this function handles I2C1 Event handler.
  * @param  none
  * @retval none
  */
void I2C1_EVT_IRQHandler(void)
{
  /* add user code begin I2C1_EVT_IRQ 0 */

  /* add user code end I2C1_EVT_IRQ 0 */
  /* add user code begin I2C1_EVT_IRQ 1 */

  /* add user code end I2C1_EVT_IRQ 1 */
}

/**
  * @brief  this function handles I2C1 Error handler.
  * @param  none
  * @retval none
  */
void I2C1_ERR_IRQHandler(void)
{
  /* add user code begin I2C1_ERR_IRQ 0 */

  /* add user code end I2C1_ERR_IRQ 0 */
  /* add user code begin I2C1_ERR_IRQ 1 */

  /* add user code end I2C1_ERR_IRQ 1 */
}

/**
  * @brief  this function handles I2C2 Event handler.
  * @param  none
  * @retval none
  */
void I2C2_EVT_IRQHandler(void)
{
  /* add user code begin I2C2_EVT_IRQ 0 */

  /* add user code end I2C2_EVT_IRQ 0 */
  /* add user code begin I2C2_EVT_IRQ 1 */

  /* add user code end I2C2_EVT_IRQ 1 */
}

/**
  * @brief  this function handles I2C2 Error handler.
  * @param  none
  * @retval none
  */
void I2C2_ERR_IRQHandler(void)
{
  /* add user code begin I2C2_ERR_IRQ 0 */

  /* add user code end I2C2_ERR_IRQ 0 */
  /* add user code begin I2C2_ERR_IRQ 1 */

  /* add user code end I2C2_ERR_IRQ 1 */
}

/**
  * @brief  this function handles SPI1 handler.
  * @param  none
  * @retval none
  */
void SPI1_IRQHandler(void)
{
  /* add user code begin SPI1_IRQ 0 */

  /* add user code end SPI1_IRQ 0 */
  /* add user code begin SPI1_IRQ 1 */

  /* add user code end SPI1_IRQ 1 */
}

/**
  * @brief  this function handles SPI2 handler.
  * @param  none
  * @retval none
  */
void SPI2_IRQHandler(void)
{
  /* add user code begin SPI2_IRQ 0 */

  /* add user code end SPI2_IRQ 0 */
  /* add user code begin SPI2_IRQ 1 */

  /* add user code end SPI2_IRQ 1 */
}

/**
  * @brief  this function handles USART1 handler.
  * @param  none
  * @retval none
  */
void USART1_IRQHandler(void)
{
  /* add user code begin USART1_IRQ 0 */
	uint8_t clear;
	if(usart_flag_get(USART1, USART_IDLEF_FLAG) != RESET)
	{
		clear=USART1->sts;    
		clear=USART1->dt;	
		clear&=0;
		UART_1.Uartrxsta = 1; 
		UART_1.USART_RX_LEN = 512 - dma_data_number_get(DMA1_CHANNEL1);
		memcpy(debug_rx,UART_1.USART_RX_Buff,UART_1.USART_RX_LEN);
		usart1dmarecv(UART_1.USART_RX_Buff,UART_1.USART_RX_LEN);
	}
  /* add user code end USART1_IRQ 0 */
  /* add user code begin USART1_IRQ 1 */

  /* add user code end USART1_IRQ 1 */
}

/**
  * @brief  this function handles USART2 handler.
  * @param  none
  * @retval none
  */
void USART2_IRQHandler(void)
{
  /* add user code begin USART2_IRQ 0 */
//	uint8_t clear1;
//	if(usart_flag_get(USART2, USART_IDLEF_FLAG) != RESET)
//	{
//		clear1=USART2->sts;    
//		clear1=USART2->dt;	
//		clear1&=0;
//		UART_2.Uartrxsta = 1; 
//		UART_2.USART_RX_LEN = 512 - dma_data_number_get(DMA1_CHANNEL3);
//		//memcpy(debug_rx,UART_2.USART_RX_Buff,UART_2.USART_RX_LEN);
//		usart1dmarecv(UART_2.USART_RX_Buff,UART_2.USART_RX_LEN);
//	}
  /* add user code end USART2_IRQ 0 */
  /* add user code begin USART2_IRQ 1 */

  /* add user code end USART2_IRQ 1 */
}

/**
  * @brief  this function handles USART3 handler.
  * @param  none
  * @retval none
  */
void USART3_IRQHandler(void)
{
  /* add user code begin USART3_IRQ 0 */
	uint8_t clear2;
	if(usart_flag_get(USART3, USART_IDLEF_FLAG) != RESET)
	{
		clear2=USART3->sts;    
		clear2=USART3->dt;	
		clear2&=0;
		UART_3.Uartrxsta = 1; 
		UART_3.USART_RX_LEN = 512 - dma_data_number_get(DMA1_CHANNEL5);
		//memcpy(debug_rx,UART_3.USART_RX_Buff,UART_3.USART_RX_LEN);
		usart1dmarecv(UART_3.USART_RX_Buff,UART_3.USART_RX_LEN);
	}
  /* add user code end USART3_IRQ 0 */
  /* add user code begin USART3_IRQ 1 */

  /* add user code end USART3_IRQ 1 */
}

/**
  * @brief  this function handles DMA2 Channel 1 handler.
  * @param  none
  * @retval none
  */
void DMA2_Channel1_IRQHandler(void)
{
  /* add user code begin DMA2_Channel1_IRQ 0 */

  /* add user code end DMA2_Channel1_IRQ 0 */
  /* add user code begin DMA2_Channel1_IRQ 1 */

  /* add user code end DMA2_Channel1_IRQ 1 */
}

/**
  * @brief  this function handles DMA2 Channel 2 handler.
  * @param  none
  * @retval none
  */
void DMA2_Channel2_IRQHandler(void)
{
  /* add user code begin DMA2_Channel2_IRQ 0 */

  /* add user code end DMA2_Channel2_IRQ 0 */
  /* add user code begin DMA2_Channel2_IRQ 1 */

  /* add user code end DMA2_Channel2_IRQ 1 */
}

/**
  * @brief  this function handles DMA2 Channel 3 handler.
  * @param  none
  * @retval none
  */
void DMA2_Channel3_IRQHandler(void)
{
  /* add user code begin DMA2_Channel3_IRQ 0 */

  /* add user code end DMA2_Channel3_IRQ 0 */
  /* add user code begin DMA2_Channel3_IRQ 1 */

  /* add user code end DMA2_Channel3_IRQ 1 */
}

/**
  * @brief  this function handles DMA2 Channel4 & Channel5 handler.
  * @param  none
  * @retval none
  */
void DMA2_Channel4_5_IRQHandler(void)
{
  /* add user code begin DMA2_Channel4_5_IRQ 0 */

  /* add user code end DMA2_Channel4_5_IRQ 0 */
  /* add user code begin DMA2_Channel4_5_IRQ 1 */

  /* add user code end DMA2_Channel4_5_IRQ 1 */
}

/* add user code begin 1 */

/* add user code end 1 */
