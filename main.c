#include <stm32l1xx.h>
#include "system_clock.h"
#include "color_control.h"
#include "usart.h"
#include "parsing.h"
#include "esp_init.h"
#include "pins.h"
#include "timers.h"

int main()
	{
		RCC->AHBENR |= RCC_AHBENR_GPIOBEN | RCC_AHBENR_GPIOAEN;;
		GPIOB->MODER |= GPIO_MODER_MODER7_0 | GPIO_MODER_MODER6_0;
		GPIOB->OTYPER &= ~GPIO_OTYPER_OT_7 | GPIO_OTYPER_OT_6;
		GPIOB->PUPDR &= ~GPIO_PUPDR_PUPDR7 | GPIO_PUPDR_PUPDR6;
		GPIOB->OSPEEDR |= GPIO_OSPEEDER_OSPEEDR7 | GPIO_OSPEEDER_OSPEEDR6;
		GPIOB->ODR |= GPIO_ODR_ODR_7 | GPIO_ODR_ODR_6;
		
		
		SystemClock_Init();
		Color_Init();
		Color_SetR(0);
		Color_SetG(0);
		Color_SetB(0);
		GPIO_Init();
		USART_Init(1);
		USART_Init(3);
		USART_SetCB_Data_Received_Ptr(Data_Received);
		TIM6_Init();
		ESP_Init("reset");

	/*GPIOA->MODER |= GPIO_MODER_MODER2_0;
	GPIOA->OTYPER &= ~GPIO_OTYPER_OT_2;
	GPIOA->PUPDR &= ~GPIO_PUPDR_PUPDR2;
	GPIOA->OSPEEDR |= GPIO_OSPEEDER_OSPEEDR2;
	GPIOA->ODR |= GPIO_ODR_ODR_2;
	GPIOA->ODR &= ~GPIO_ODR_ODR_2;*/

while(1)
		{
		}
	}





