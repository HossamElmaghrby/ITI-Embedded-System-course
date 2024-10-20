/*
 * TIM1_program.c
 *
 *  Created on: Aug 5, 2024
 *      Author: Elmag
 */

#include "../../LIB/STD_Types.h"
#include "../../LIB/Bit_Math.h"

#include "TIM1_interface.h"
#include "TIM1_private.h"
#include "TIM1_config.h"

void TIM1_InitPWM(void)
{
  //select fast mode
  CleartBit(TCCR1A_Register , WGM10);
  SetBit(TCCR1A_Register , WGM11);
  SetBit(TCCR1B_Register , WGM12);
  SetBit(TCCR1B_Register , WGM13);

  //set mode channel A
  CleartBit(TCCR1A_Register , COM1A0);
  SetBit(TCCR1A_Register , COM1A1);

  //set mode channel A
  CleartBit(TCCR1A_Register , COM1B0);
  SetBit(TCCR1A_Register , COM1B1);

}
void TIM1_StartPWM()
{
	  //select pre-scaler
	  CleartBit(TCCR1B_Register , CS10);
	  SetBit(TCCR1B_Register , CS11);
	  CleartBit(TCCR1B_Register , CS12);
}
void TIM1_SetDutyCycle(u8_t channel , u8_t duty)
{
  u32_t t_on = (u32_t) duty*ICR1_Register/100 ;

  switch(channel)
  {
  case PWM_OCR1A : OCR1A_Register = (u16_t)t_on ;break ;
  case PWM_OCR1B : OCR1B_Register = (u16_t)t_on ;break ;
  }
  TIM1_T_ON(channel , duty);
}
void TIM1_SetPeriod(u16_t us)
{
  ICR1_Register =us ;
}
void TIM1_PWMSetMode(u8_t mode ,u8_t channel)
{
	  switch(channel)
	  {
	  case PWM_OCR1A :
		  TCCR1A_Register &= ~(0b11<<COM1A0) ;
		  TCCR1A_Register |= (mode<<COM1A0) ;
	  break ;
	  case PWM_OCR1B :
		  TCCR1B_Register &= ~(0b11<<COM1B0) ;
		  TCCR1B_Register |= (mode<<COM1B0) ;
	  break ;
	  }
}
void TIM1_T_ON(u8_t channel , u16_t value)
{
	  switch(channel)
	  {
	  case PWM_OCR1A : OCR1A_Register = (u16_t)value ;break ;
	  case PWM_OCR1B : OCR1B_Register = (u16_t)value ;break ;
	  }
}
