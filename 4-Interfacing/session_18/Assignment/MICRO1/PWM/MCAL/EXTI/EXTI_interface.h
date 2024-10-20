/*
 * EXTI_interface.h
 *
 *  Created on: Jul 30, 2024
 *      Author: Elmag
 */

#ifndef EXTI_EXTI_INTERFACE_H_
#define EXTI_EXTI_INTERFACE_H_

#define EXTI0 0
#define EXTI1 1
#define EXTI2 2

void EXTI_Init();
void EXTI_Enable(u8_t EXTI_Num);
void EXTI_Disable(u8_t EXTI_Num);
void Exti_setCallback(u8_t EXTI_num,void (*ptr)());

#endif /* EXTI_EXTI_INTERFACE_H_ */
