/* add user code begin Header */
/**
  **************************************************************************
  * @file     at32f415_wk_config.h
  * @brief    header file of work bench config
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

/* define to prevent recursive inclusion -----------------------------------*/
#ifndef __AT32F415_WK_CONFIG_H
#define __AT32F415_WK_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif

/* includes -----------------------------------------------------------------------*/
#include "at32f415.h"

/* private includes -------------------------------------------------------------*/
/* add user code begin private includes */

/* add user code end private includes */

/* exported types -------------------------------------------------------------*/
/* add user code begin exported types */

/* add user code end exported types */

/* exported constants --------------------------------------------------------*/
/* add user code begin exported constants */

/* add user code end exported constants */

/* exported macro ------------------------------------------------------------*/
/* add user code begin exported macro */

/* add user code end exported macro */

/* add user code begin dma define */
/* user can only modify the dma define value */
#define DMA1_CHANNEL1_BUFFER_SIZE   512
#define DMA1_CHANNEL1_MEMORY_BASE_ADDR   0
//#define DMA1_CHANNEL1_PERIPHERAL_BASE_ADDR  0

//#define DMA1_CHANNEL2_BUFFER_SIZE   0
//#define DMA1_CHANNEL2_MEMORY_BASE_ADDR   0
//#define DMA1_CHANNEL2_PERIPHERAL_BASE_ADDR   0

#define DMA1_CHANNEL3_BUFFER_SIZE   0
#define DMA1_CHANNEL3_MEMORY_BASE_ADDR   0
//#define DMA1_CHANNEL3_PERIPHERAL_BASE_ADDR   0

#define DMA1_CHANNEL4_BUFFER_SIZE   0
#define DMA1_CHANNEL4_MEMORY_BASE_ADDR   0
//#define DMA1_CHANNEL4_PERIPHERAL_BASE_ADDR   0

#define DMA1_CHANNEL5_BUFFER_SIZE   0
#define DMA1_CHANNEL5_MEMORY_BASE_ADDR   0
//#define DMA1_CHANNEL5_PERIPHERAL_BASE_ADDR   0

#define DMA1_CHANNEL6_BUFFER_SIZE   0
#define DMA1_CHANNEL6_MEMORY_BASE_ADDR   0
//#define DMA1_CHANNEL6_PERIPHERAL_BASE_ADDR   0

#define DMA1_CHANNEL7_BUFFER_SIZE   0
#define DMA1_CHANNEL7_MEMORY_BASE_ADDR   0
//#define DMA1_CHANNEL7_PERIPHERAL_BASE_ADDR   0

#define DMA2_CHANNEL1_BUFFER_SIZE   0
#define DMA2_CHANNEL1_MEMORY_BASE_ADDR   0
//#define DMA2_CHANNEL1_PERIPHERAL_BASE_ADDR   0

#define DMA2_CHANNEL2_BUFFER_SIZE   0
#define DMA2_CHANNEL2_MEMORY_BASE_ADDR   0
//#define DMA2_CHANNEL2_PERIPHERAL_BASE_ADDR   0

#define DMA2_CHANNEL3_BUFFER_SIZE   0
#define DMA2_CHANNEL3_MEMORY_BASE_ADDR   0
//#define DMA2_CHANNEL3_PERIPHERAL_BASE_ADDR   0

#define DMA2_CHANNEL4_BUFFER_SIZE   0
#define DMA2_CHANNEL4_MEMORY_BASE_ADDR   0
//#define DMA2_CHANNEL4_PERIPHERAL_BASE_ADDR   0

#define DMA2_CHANNEL5_BUFFER_SIZE   0
#define DMA2_CHANNEL5_MEMORY_BASE_ADDR   0
//#define DMA2_CHANNEL5_PERIPHERAL_BASE_ADDR   0

//#define DMA2_CHANNEL6_BUFFER_SIZE   0
//#define DMA2_CHANNEL6_MEMORY_BASE_ADDR   0
//#define DMA2_CHANNEL6_PERIPHERAL_BASE_ADDR   0

//#define DMA2_CHANNEL7_BUFFER_SIZE   0
//#define DMA2_CHANNEL7_MEMORY_BASE_ADDR   0
//#define DMA2_CHANNEL7_PERIPHERAL_BASE_ADDR   0
/* add user code end dma define */

/* exported functions ------------------------------------------------------- */
  /* system clock config. */
  void wk_system_clock_config(void);

  /* config periph clock. */
  void wk_periph_clock_config(void);

  /* init debug function. */
  void wk_debug_config(void);

  /* nvic config. */
  void wk_nvic_config(void);

  /* init gpio function. */
  void wk_gpio_config(void);

  /* init exint function. */
  void wk_exint_config(void);

  /* init ertc function. */
  void wk_ertc_init(void);

  /* init i2c1 function. */
  void wk_i2c1_init(void);

  /* init i2c2 function. */
  void wk_i2c2_init(void);

  /* init spi1 function. */
  void wk_spi1_init(void);

  /* init spi2 function. */
  void wk_spi2_init(void);

  /* init usart1 function. */
  void wk_usart1_init(void);

  /* init usart2 function. */
  void wk_usart2_init(void);

  /* init usart3 function. */
  void wk_usart3_init(void);

  /* init tmr3 function. */
  void wk_tmr3_init(void);

  /* init usb_otgfs1 function. */
  void wk_usb_otgfs1_init(void);

  /* init crc function. */
  void wk_crc_init(void);

  /* init dma1 channel1 */
  void wk_dma1_channel1_init(void);

  /* init dma1 channel3 */
  void wk_dma1_channel3_init(void);

  /* init dma1 channel4 */
  void wk_dma1_channel4_init(void);

  /* init dma1 channel5 */
  void wk_dma1_channel5_init(void);

  /* init dma1 channel6 */
  void wk_dma1_channel6_init(void);

  /* init dma1 channel7 */
  void wk_dma1_channel7_init(void);

  /* init dma2 channel1 */
  void wk_dma2_channel1_init(void);

  /* init dma2 channel2 */
  void wk_dma2_channel2_init(void);

  /* init dma2 channel3 */
  void wk_dma2_channel3_init(void);

  /* init dma2 channel4 */
  void wk_dma2_channel4_init(void);

  /* init dma2 channel5 */
  void wk_dma2_channel5_init(void);

  /* config dma channel transfer parameter */
  /* user need to modify parameters memory_base_addr and buffer_size */
  void wk_dma_channel_config(dma_channel_type* dmax_channely, uint32_t peripheral_base_addr, uint32_t memory_base_addr, uint16_t buffer_size);

/* add user code begin exported functions */

/* add user code end exported functions */

#ifdef __cplusplus
}
#endif

#endif
