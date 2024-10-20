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
#include "../HAL/LED/LED_interface.h"
#include <avr/delay.h>

int main()
{

	ICU_Init();
	GIE_Enable();
	while(1){

	}

	return 0;
}





