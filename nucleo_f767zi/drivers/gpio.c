#include "gpio.h"
#include "stm32f7xx_hal.h"
#include "stm32f7xx_nucleo_144.h"

void gpio_init() {
  BSP_LED_Init(LED1);
  BSP_LED_Init(LED2);
  BSP_LED_Init(LED3);
}

void gpio_toggle_led(int id) {
  switch (id) {
  case 0:
    BSP_LED_Toggle(LED1);
    break;
  case 1:
    BSP_LED_Toggle(LED2);
    break;
  case 2:
    BSP_LED_Toggle(LED3);
    break;
  default:
    break;
  }
}

void gpio_set_led(int id) {
  switch (id) {
  case 0:
    BSP_LED_ON(LED1);
    break;
  case 1:
    BSP_LED_ON(LED2);
    break;
  case 2:
    BSP_LED_ON(LED3);
    break;
  default:
    break;
  }
}

void sleep(int ms) {
  HAL_Delay(ms);
}