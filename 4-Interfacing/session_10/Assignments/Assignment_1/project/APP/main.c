/*
 * main.c
 *
 *  Created on: Jul 25, 2024
 *      Author: Elmag
 */

#include "../HAL/LED/LED_interface.h"
#include <util/delay.h>
int main()
{
    LED_voidInit(LED1);
    LED_voidInit(LED2);
    LED_voidInit(LED3);
    LED_voidInit(LED4);
    LED_voidInit(LED5);
while(1)
{
	LED_voidSetLEDHigh(LED1);
	_delay_ms(1000);
	LED_voidSetLEDLow(LED1);
    LED_voidSetLEDHigh(LED2);
	_delay_ms(1000);
	LED_voidSetLEDLow(LED2);
	LED_voidSetLEDHigh(LED3);
	_delay_ms(1000);
	LED_voidSetLEDLow(LED3);
	LED_voidSetLEDHigh(LED4);
	_delay_ms(1000);
	LED_voidSetLEDLow(LED4);
	LED_voidSetLEDHigh(LED5);
	_delay_ms(1000);
	LED_voidSetLEDLow(LED5);
}
	return 0 ;
}
