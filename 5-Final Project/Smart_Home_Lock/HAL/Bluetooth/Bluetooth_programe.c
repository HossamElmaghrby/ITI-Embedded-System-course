/*
 * Bluetooth_programe.c
 *
 *  Created on: Aug 16, 2024
 *      Author: Elmag
 */

#include "../../LIB/STD_Types.h"
#include "../../MCAL/DIO/DIO_interface.h"

#include "../../MCAL/USART/USART_interface.h"

#include "Bluetooth_interface.h"
#include "Bluetooth_private.h"


void Bluetooth_Init(void)
{
 USART_enuInit();
}
void Bluetooth_SendData(u8 data)
{
	 USART_enuSendCharacter( data);
}
void  Bluetooth_RecieveData(u8 *Copy_Pu8ReceivedChar )
{
	USART_enuReceiveCharacter(Copy_Pu8ReceivedChar );
}

