/*
 * main.c
 *
 *  Created on: Jul 25, 2024
 *      Author: Elmag
 */


#include  "../LIB/STD_Types.h"

#include "../MCAL/GIE/GIE_interface.h"


#include "../MCAL/TIM0/TIM0_interface.h"

#include "../HAL/LED/LED_interface.h"


#include "../HAL/Steper/Steper_interface.h"
#include "util/delay.h"

void f1();

int main()
{
	LED_voidInit(LED1);
	TIM0_Init();
	TIM0_SetOVFCallback(f1);
	TIM0_SetValueUS(1000000);
	GIE_Enable();

	while(1){

		// Useful Job
	}

	return 0;
}

void f1(void) // 1ms
{
	static u8_t x = 0;
	if(x == 0)
	{
		LED_voidSetLEDHigh(LED1);
		x = 1;
	}
	else
	{
		LED_voidSetLEDLow(LED1);
		x = 0;
	}

}
