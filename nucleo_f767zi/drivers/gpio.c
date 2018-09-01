#include "gpio.h"
#include "stm32f7xx_hal.h"
#include "stm32f7xx_nucleo_144.h"

void gpio_toggle_led0() {
  HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_0);
}

void sleep(int ms) {
  HAL_Delay(ms);
}