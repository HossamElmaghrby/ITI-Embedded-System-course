/*
 * Servo_program.c
 *
 *  Created on: Aug 5, 2024
 *      Author: Elmag
 */


#include "../../LIB/STD_Types.h"
#include "../../LIB/Bit_Math.h"
#include "../../MCAL/DIO/DIO_interface.h"
#include "../../MCAL/TIM1/TIM1_interface.h"

#include "Servo_interface.h"
#include "Servo_private.h"


void Servo_Init()
{
	  DIO_u8SetPinDirection(PORTD , PIN5 , OUTPUT);
	  TIM1_InitPWM();
	  TIM1_PWMSetMode(SERVO_CHAAMEL , PWM_NON_INVERTING);
	  TIM1_SetPeriod(SERVO_PERIOD);
	  TIM1_StartPWM();
}
void Servo_SetAngle(u8_t angle)
{

   angle +=90 ;
   u16_t T_on = 1000+((angle/180.0)*1000);
   TIM1_T_ON(SERVO_CHAAMEL ,T_on);
}
