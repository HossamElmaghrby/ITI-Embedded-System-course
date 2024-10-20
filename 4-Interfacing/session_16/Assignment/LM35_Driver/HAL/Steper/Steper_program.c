/*
 * Steper_program.c
 *
 *  Created on: Jul 31, 2024
 *      Author: Elmag
 */


#include "../../LIB/STD_Types.h"
#include "../../LIB/Bit_Math.h"
#include "../../MCAL/DIO/DIO_interface.h"

#include "Steper_config.h"
#include "Steper_interface.h"
#include "Steper_private.h"

 static u8_t Current_pattern = 0 ;

void Steper_Init()
{
	for(u8_t i = 0 ; i< NUM_OF_COILS ;i++)
    DIO_u8SetPinDirection(coils[i].port ,coils[i].pin ,OUTPUT );
}
void Steper_StepCW()
{


   for(u8_t i = 0 ;i<NUM_OF_COILS ;i++)
   {
	   DIO_u8SetPinValue(coils[i].port ,coils[i].pin ,GetBit(sequnce[Current_pattern],i));
   }
  Current_pattern++ ;
  if(Current_pattern>7) Current_pattern = 0 ;
}
void Steper_StepCCW()
{

	   for(u8_t i = 0 ;i<NUM_OF_COILS ;i++)
	   {
		   DIO_u8SetPinValue(coils[i].port ,coils[i].pin ,GetBit(sequnce[Current_pattern],i));
	   }
	  Current_pattern++ ;
	  if(Current_pattern >7) Current_pattern = 7 ;
}
