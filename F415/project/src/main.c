/* add user code begin Header */
/**
  **************************************************************************
  * @file     main.c
  * @brief    main program
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

/* Includes ------------------------------------------------------------------*/
#include "at32f415_wk_config.h"

/* private includes ----------------------------------------------------------*/
/* add user code begin private includes */
#include "stdio.h"
#include "value.h"
#include "delay.h"
#include "string.h"
/* add user code end private includes */

/* private typedef -----------------------------------------------------------*/
/* add user code begin private typedef */


#if defined ( __GNUC__ ) && !defined (__clang__)
  #define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
  #define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif
 
/**
* @brief  retargets the c library printf function to the usart.
* @param  none
* @retval none
*/
PUTCHAR_PROTOTYPE
{
  while(usart_flag_get(USART1, USART_TDBE_FLAG) == RESET);
  usart_data_transmit(USART1, ch);
  return ch;
}

/* add user code end private typedef */

/* private define ------------------------------------------------------------*/
/* add user code begin private define */

/* add user code end private define */

/* private macro -------------------------------------------------------------*/
/* add user code begin private macro */

/* add user code end private macro */

/* private variables ---------------------------------------------------------*/
/* add user code begin private variables */
uint32_t debugsdsdd = 0;
/* add user code end private variables */

/* private function prototypes --------------------------------------------*/
/* add user code begin function prototypes */

/* add user code end function prototypes */

/* private user code ---------------------------------------------------------*/
/* add user code begin 0 */

/* add user code end 0 */

/**
  * @brief main function.
  * @param  none
  * @retval none
  */
int main(void)
{
  /* add user code begin 1 */
	
	//wk_dma_channel_config(DMA1_CHANNEL1, (uint32_t)&USART1->dt, DMA1_CHANNEL1_MEMORY_BASE_ADDR, DMA1_CHANNEL1_BUFFER_SIZE);
  /* add user code end 1 */

  /* system clock config. */
  wk_system_clock_config();

  /* config periph clock. */
  wk_periph_clock_config();

  /* init debug function. */
  wk_debug_config();

  /* nvic config. */
  wk_nvic_config();

  /* init dma1 channel1 */
  wk_dma1_channel1_init();
  /* config dma channel transfer parameter */
  /* user need to modify define values DMAx_CHANNELy_XXX_BASE_ADDR and DMAx_CHANNELy_BUFFER_SIZE in at32xxx_wk_config.h */
  wk_dma_channel_config(DMA1_CHANNEL1, (uint32_t)&USART1->dt, DMA1_CHANNEL1_MEMORY_BASE_ADDR, DMA1_CHANNEL1_BUFFER_SIZE);
  dma_channel_enable(DMA1_CHANNEL1, TRUE);

  /* init dma1 channel3 */
  wk_dma1_channel3_init();
  /* config dma channel transfer parameter */
  /* user need to modify define values DMAx_CHANNELy_XXX_BASE_ADDR and DMAx_CHANNELy_BUFFER_SIZE in at32xxx_wk_config.h */
  wk_dma_channel_config(DMA1_CHANNEL3, (uint32_t)&USART2->dt, DMA1_CHANNEL3_MEMORY_BASE_ADDR, DMA1_CHANNEL3_BUFFER_SIZE);
  dma_channel_enable(DMA1_CHANNEL3, TRUE);

  /* init dma1 channel4 */
  wk_dma1_channel4_init();
  /* config dma channel transfer parameter */
  /* user need to modify define values DMAx_CHANNELy_XXX_BASE_ADDR and DMAx_CHANNELy_BUFFER_SIZE in at32xxx_wk_config.h */
  wk_dma_channel_config(DMA1_CHANNEL4, (uint32_t)&USART2->dt, DMA1_CHANNEL4_MEMORY_BASE_ADDR, DMA1_CHANNEL4_BUFFER_SIZE);
  dma_channel_enable(DMA1_CHANNEL4, TRUE);

  /* init dma1 channel5 */
  wk_dma1_channel5_init();
  /* config dma channel transfer parameter */
  /* user need to modify define values DMAx_CHANNELy_XXX_BASE_ADDR and DMAx_CHANNELy_BUFFER_SIZE in at32xxx_wk_config.h */
  wk_dma_channel_config(DMA1_CHANNEL5, (uint32_t)&SPI1->dt, DMA1_CHANNEL5_MEMORY_BASE_ADDR, DMA1_CHANNEL5_BUFFER_SIZE);
  dma_channel_enable(DMA1_CHANNEL5, TRUE);

  /* init dma1 channel6 */
  wk_dma1_channel6_init();
  /* config dma channel transfer parameter */
  /* user need to modify define values DMAx_CHANNELy_XXX_BASE_ADDR and DMAx_CHANNELy_BUFFER_SIZE in at32xxx_wk_config.h */
  wk_dma_channel_config(DMA1_CHANNEL6, (uint32_t)&SPI1->dt, DMA1_CHANNEL6_MEMORY_BASE_ADDR, DMA1_CHANNEL6_BUFFER_SIZE);
  dma_channel_enable(DMA1_CHANNEL6, TRUE);

  /* init dma1 channel7 */
  wk_dma1_channel7_init();
  /* config dma channel transfer parameter */
  /* user need to modify define values DMAx_CHANNELy_XXX_BASE_ADDR and DMAx_CHANNELy_BUFFER_SIZE in at32xxx_wk_config.h */
  wk_dma_channel_config(DMA1_CHANNEL7, (uint32_t)&USART3->dt, DMA1_CHANNEL7_MEMORY_BASE_ADDR, DMA1_CHANNEL7_BUFFER_SIZE);
  dma_channel_enable(DMA1_CHANNEL7, TRUE);

  /* init dma2 channel1 */
  wk_dma2_channel1_init();
  /* config dma channel transfer parameter */
  /* user need to modify define values DMAx_CHANNELy_XXX_BASE_ADDR and DMAx_CHANNELy_BUFFER_SIZE in at32xxx_wk_config.h */
  wk_dma_channel_config(DMA2_CHANNEL1, (uint32_t)&USART3->dt, DMA2_CHANNEL1_MEMORY_BASE_ADDR, DMA2_CHANNEL1_BUFFER_SIZE);
  dma_channel_enable(DMA2_CHANNEL1, TRUE);

  /* init dma2 channel2 */
  wk_dma2_channel2_init();
  /* config dma channel transfer parameter */
  /* user need to modify define values DMAx_CHANNELy_XXX_BASE_ADDR and DMAx_CHANNELy_BUFFER_SIZE in at32xxx_wk_config.h */
  wk_dma_channel_config(DMA2_CHANNEL2, (uint32_t)&SPI2->dt, DMA2_CHANNEL2_MEMORY_BASE_ADDR, DMA2_CHANNEL2_BUFFER_SIZE);
  dma_channel_enable(DMA2_CHANNEL2, TRUE);

  /* init dma2 channel3 */
  wk_dma2_channel3_init();
  /* config dma channel transfer parameter */
  /* user need to modify define values DMAx_CHANNELy_XXX_BASE_ADDR and DMAx_CHANNELy_BUFFER_SIZE in at32xxx_wk_config.h */
  wk_dma_channel_config(DMA2_CHANNEL3, (uint32_t)&SPI2->dt, DMA2_CHANNEL3_MEMORY_BASE_ADDR, DMA2_CHANNEL3_BUFFER_SIZE);
  dma_channel_enable(DMA2_CHANNEL3, TRUE);

  /* init dma2 channel4 */
  wk_dma2_channel4_init();
  /* config dma channel transfer parameter */
  /* user need to modify define values DMAx_CHANNELy_XXX_BASE_ADDR and DMAx_CHANNELy_BUFFER_SIZE in at32xxx_wk_config.h */
  wk_dma_channel_config(DMA2_CHANNEL4, (uint32_t)&I2C1->dt, DMA2_CHANNEL4_MEMORY_BASE_ADDR, DMA2_CHANNEL4_BUFFER_SIZE);
  dma_channel_enable(DMA2_CHANNEL4, TRUE);

  /* init dma2 channel5 */
  wk_dma2_channel5_init();
  /* config dma channel transfer parameter */
  /* user need to modify define values DMAx_CHANNELy_XXX_BASE_ADDR and DMAx_CHANNELy_BUFFER_SIZE in at32xxx_wk_config.h */
  wk_dma_channel_config(DMA2_CHANNEL5, (uint32_t)&I2C1->dt, DMA2_CHANNEL5_MEMORY_BASE_ADDR, DMA2_CHANNEL5_BUFFER_SIZE);
  dma_channel_enable(DMA2_CHANNEL5, TRUE);

  /* init usart1 function. */
  wk_usart1_init();

  /* init usart2 function. */
  wk_usart2_init();

  /* init usart3 function. */
  wk_usart3_init();

  /* init spi1 function. */
  wk_spi1_init();

  /* init spi2 function. */
  wk_spi2_init();

  /* init i2c1 function. */
  wk_i2c1_init();

  /* init i2c2 function. */
  wk_i2c2_init();

  /* init ertc function. */
  wk_ertc_init();

  /* init exint function. */
  wk_exint_config();

  /* init tmr3 function. */
  wk_tmr3_init();

  /* init usb_otgfs1 function. */
  wk_usb_otgfs1_init();

  /* init crc function. */
  wk_crc_init();

  /* init gpio function. */
  wk_gpio_config();

  /* add user code begin 2 */

	delay_ms(200);
	//串口1收发完成
  /* add user code end 2 */
	
  while(1)
  {
    /* add user code begin 3 */
		if(UART_1.Uartrxsta == 1)
		{
			printf("接受的数据\r\n");
			usartd1masend(debug_rx,sizeof(debug_rx));
			UART_1.USART_RX_LEN = 0;
			UART_1.Uartrxsta = 0;
			printf("\r\n");
		}
		
		if(0==1)
		{
			sprintf((char*)UART_2.USART_TX_Buff,"page7.t0.txt=\"%d\"\xff\xff\xff",debugsdsdd);
			sprintf((char*)UART_2.USART_TX_Buff,"%s page7.t0.txt=\"%d\"\xff\xff\xff",UART_2.USART_TX_Buff,debugsdsdd);
			
		}

    /* add user code end 3 */
  }
}
