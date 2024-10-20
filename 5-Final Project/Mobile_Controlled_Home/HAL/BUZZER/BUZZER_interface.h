/*
 * BUZZER_interface.h
 *
 *  Created on: Aug 17, 2024
 *      Author: Elmag
 */

#ifndef HAL_BUZZER_BUZZER_INTERFACE_H_
#define HAL_BUZZER_BUZZER_INTERFACE_H_

#define BUZZER1 1
#define BUZZER2 2


void BUZZER_voidInit(u8 L_u8Buzzer);
void BUZZER_voidSetBuzzerHigh(u8 L_u8Buzzer);
void BUZZER_voidSetBuzzerLow(u8 L_u8Buzzer);

#endif /* HAL_BUZZER_BUZZER_INTERFACE_H_ */
