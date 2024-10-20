/*
 * main.c
 *
 *  Created on: Jul 25, 2024
 *      Author: Hossam Bahaa
 */

#include  "../LIB/STD_Types.h"
#include "../HAL/ICU/ICU_interface.h"
#include "../MCAL/DIO/DIO_interface.h"
#include "../MCAL/GIE/GIE_interface.h"

#include "../MCAL/I2C/I2C_interface.h"
#include <avr/delay.h>
#define SLAVE1 0x12

//#define MASTER
#define SLAVE

u8 arr1[20]= {} ;
int main()
{

    DIO_u8SetPinDirection(PORTC , PIN0 , INPUT);
    DIO_u8SetPinDirection(PORTC , PIN1 , INPUT);

#ifdef MASTER

	I2C_InitMaster(10000);
   u8 arr[]  = {1,2,3,4,5};
   I2C_SendFram(SLAVE1 , arr ,5);
   _delay_ms(100);
   I2C_SendFram(SLAVE1 , arr1 ,4);
   _delay_ms(100);
	while(1){
	}

#endif

#ifdef SLAVE
	I2C_InitSlave();

   u8 var =  0 ;
	while(1)
	{
			arr1[var] = I2C_ReceiveWihtAck();
			var++ ;

	}
#endif
	return 0;
}





