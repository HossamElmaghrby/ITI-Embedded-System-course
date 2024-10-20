/*
 * main.c
 *
 *  Created on: Jul 25, 2024
 *      Author: Elmag
 */


#include  "../LIB/STD_Types.h"

#include "../MCAL/GIE/GIE_interface.h"


#include "../MCAL/TIM2/TIM2_interface.h"

#include "../MCAL/DIO/DIO_interface.h"

#include "../HAL/LED/LED_interface.h"


#include "../HAL/Steper/Steper_interface.h"
#include "util/delay.h"

#include "../MCAL/ADC/ADC_interface.h"


int main()
{

	   DIO_u8SetPortDirection(PORTC , OUTPUT);
	   DIO_u8SetPinDirection(PORTA , PIN0 ,INPUT);
	   ADC_Init();
	   ADC_Selectchannel(ADC_CH_CH0);
	   u16_t res  = ADC_StartConversion();

	   while(1)
	   {
		   u16_t res  = ADC_StartConversion();
		   if(res >=200)DIO_u8SetPinValue(PORTC ,PIN0 ,HIGH);
		   else DIO_u8SetPinValue(PORTC ,PIN0 ,LOW);
		   if(res >=400)DIO_u8SetPinValue(PORTC ,PIN1 ,HIGH);
		   else DIO_u8SetPinValue(PORTC ,PIN1 ,LOW);
		   if(res >=600)DIO_u8SetPinValue(PORTC ,PIN2 ,HIGH);
		   else DIO_u8SetPinValue(PORTC ,PIN2 ,LOW);
		   if(res >=800)DIO_u8SetPinValue(PORTC ,PIN3 ,HIGH);
		   else DIO_u8SetPinValue(PORTC ,PIN3 ,LOW);
		   if(res >=900)DIO_u8SetPinValue(PORTC ,PIN4 ,HIGH);
		   else DIO_u8SetPinValue(PORTC ,PIN4 ,LOW);
	   }
		return 0;
}
