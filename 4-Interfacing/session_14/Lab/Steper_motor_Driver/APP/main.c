/*
 * main.c
 *
 *  Created on: Jul 25, 2024
 *      Author: Elmag
 */


#include  "../LIB/STD_Types.h"

#include "../MCAL/DIO/DIO_interface.h"

#include "../MCAL/GIE/GIE_interface.h"


#include "../MCAL/EXTI/EXTI_interface.h"

#include "../HAL/LED/LED_interface.h"

#include "../HAL/Button/Button_interface.h"


#include "../HAL/Steper/Steper_interface.h"
#include "util/delay.h"

void func();

int main()
{
	Steper_Init();
	Steper_StepCW();
	_delay_ms(1000);
	return  0 ;
}

void func()
{
	static int i = 0;
	if((i++)%2 == 0) LED_voidSetLEDHigh(LED1);
	else LED_voidSetLEDLow(LED1);
}
