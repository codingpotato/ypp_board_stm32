#ifndef __UART_H
#define __UART_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

#define USARTx USART3
#define USARTx_CLK_ENABLE() __HAL_RCC_USART3_CLK_ENABLE();
#define USARTx_RX_GPIO_CLK_ENABLE() __HAL_RCC_GPIOD_CLK_ENABLE()
#define USARTx_TX_GPIO_CLK_ENABLE() __HAL_RCC_GPIOD_CLK_ENABLE()

#define USARTx_FORCE_RESET() __HAL_RCC_USART3_FORCE_RESET()
#define USARTx_RELEASE_RESET() __HAL_RCC_USART3_RELEASE_RESET()

/* Definition for USARTx Pins */
#define USARTx_TX_PIN GPIO_PIN_8
#define USARTx_TX_GPIO_PORT GPIOD
#define USARTx_TX_AF GPIO_AF7_USART3
#define USARTx_RX_PIN GPIO_PIN_9
#define USARTx_RX_GPIO_PORT GPIOD
#define USARTx_RX_AF GPIO_AF7_USART3

bool uart_init();

int uart_write(char *ptr, int len);

#ifdef __cplusplus
}
#endif

#endif