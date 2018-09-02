#ifndef __GPIO_H
#define __GPIO_H

#ifdef __cplusplus
extern "C" {
#endif

void gpio_init();

void gpio_toggle_led(int id);

void gpio_set_led(int id);

void sleep(int ms);

#ifdef __cplusplus
}
#endif

#endif