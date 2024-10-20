/*
 * TIM1_interface.h
 *
 *  Created on: Aug 5, 2024
 *      Author: Elmag
 */

#ifndef MCAL_TIM1_TIM1_INTERFACE_H_
#define MCAL_TIM1_TIM1_INTERFACE_H_

#define PWM_OCR1A  0
#define PWM_OCR1B  1

#define PWM_INVERTING          0b11
#define PWM_NON_INVERTING      0b10

void TIM1_InitPWM(void);
void TIM1_StartPWM();
void TIM1_SetDutyCycle(u8_t channel , u8_t duty);
void TIM1_T_ON(u8_t channel , u16_t value);
void TIM1_SetPeriod(u16_t us);
void TIM1_PWMSetMode(u8_t mode ,u8_t channel);


#endif /* MCAL_TIM1_TIM1_INTERFACE_H_ */
