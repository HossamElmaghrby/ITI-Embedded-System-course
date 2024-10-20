/*
 * main.c
 *
 *  Created on: Jul 25, 2024
 *      Author: Elmag
 */


#include "../HAL/Airbag/Airbag_interface.h"
#include  "../LIB/STD_Types.h"

#include "../MCAL/DIO/DIO_interface.h"

#include "../MCAL/GIE/GIE_interface.h"


#include "../MCAL/EXTI/EXTI_interface.h"

#include "../HAL/Sensor/Sensor_interface.h"

#include "util/delay.h"

void func();

int main()
{

	LED_voidInit(LED1);

    Button_Init(BUTTON3);

    EXTI_Init();
    Exti_setCallback(EXTI0 , func );
    EXTI_Enable(EXTI0);

	GIE_Enable();
	LED_voidSetLEDLow(LED1);
	while(1)
	{

	}
	return  0 ;
}

void func()
{
	static int i = 0;
	if((i++)%2 == 0) LED_voidSetLEDHigh(LED1);
	else LED_voidSetLEDLow(LED1);
}
