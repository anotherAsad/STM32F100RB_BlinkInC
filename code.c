// arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -O0 code.c -o main.S
#include <stdint.h>

#define RCC_APB2ENR	*((uint32_t*)0x40021018)
#define GPIOC_CRH	*((uint32_t*)0x40011004)
#define GPIOC_ODR	*((uint32_t*)0x4001100C)

void main(){
	RCC_APB2ENR = 0x10;
	GPIOC_CRH = 0x1;
	GPIOC_ODR = 0x0100;
}
