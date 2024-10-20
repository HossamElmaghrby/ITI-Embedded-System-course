/*
 * TIM0_interface.h
 *
 *  Created on: Aug 1, 2024
 *      Author: Mohammed Mansour
 */

#ifndef MCAL_TIM2_TIM2_INTERFACE_H_
#define MCAL_TIM2_TIM2_INTERFACE_H_

void TIM2_Init(void);
void TIM2_SetValueUS(u32_t us);
void TIM2_Disable(void);
void TIM2_SetOVFCallback(void (* ptr)(void));

#endif /* MCAL_TIM2_TIM2_INTERFACE_H_ */
