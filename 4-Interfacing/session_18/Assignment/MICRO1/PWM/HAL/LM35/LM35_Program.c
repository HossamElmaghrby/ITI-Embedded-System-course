/*
 * LM35_Program.c
 *
 *  Created on: Aug 5, 2024
 *      Author: Elmag
 */

#include "../../LIB/STD_Types.h"
#include "../../LIB/Bit_Math.h"
#include "../../MCAL/DIO/DIO_interface.h"
#include "../../MCAL/ADC/ADC_interface.h"

void LM35_Init()
{
	DIO_u8SetPinDirection(PORTA , PIN1 ,INPUT);
    ADC_Selectchannel(ADC_CH_CH0);
	ADC_Init();
}

u32_t LM35_GetTemp(void)
{

  u32_t res = ADC_StartConversion();

  res = res *(5.0/1024.0)*100 ;
  return res ;
}

#include "LM35_interface.h"
#include "LM35_private.h"

