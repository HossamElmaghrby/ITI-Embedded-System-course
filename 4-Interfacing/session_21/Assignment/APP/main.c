/*
 * main.c
 *
 *  Created on: Jul 25, 2024
 *      Author: Mohammed Mansour
 */

#include  "../LIB/STD_Types.h"
#include "../HAL/ICU/ICU_interface.h"
#include "../MCAL/DIO/DIO_interface.h"
#include "../MCAL/GIE/GIE_interface.h"

#include "../MCAL/I2C/I2C_interface.h"
#include <avr/delay.h>

int main()
{

    DIO_u8SetPinDirection(PORTC , PIN0 , INPUT);
    DIO_u8SetPinDirection(PORTC , PIN1 , INPUT);
	I2C_InitMaster(10000);
	I2C_SendStart();
	I2C_SendAddress(0x11 ,I2C_WRITE_OPP );
	I2C_SendData(0x10);
	I2C_SendStop();
	while(1){

	}

	return 0;
}





