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

#include "PWM_interface.h"
#include "PWM_private.h"


void PWM_Init()
{
	  DIO_u8SetPinDirection(PORTD, PIN5 , OUTPUT);
	  TIM1_InitPWM();
	  TIM1_PWMSetMode(PWM_CHAAMEL , PWM_NON_INVERTING);
	  TIM1_SetPeriod(PWM_PERIOD);
	  TIM1_StartPWM();
}
void PWM_GeneratePulls(u8_t presange)
{

   u16_t T_on = (presange*(PWM_PERIOD/100));
   TIM1_T_ON(PWM_CHAAMEL ,T_on);
}
