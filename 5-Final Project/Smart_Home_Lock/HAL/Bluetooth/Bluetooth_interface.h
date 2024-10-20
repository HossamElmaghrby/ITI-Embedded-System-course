/*
 * Bluetooth_interface.h
 *
 *  Created on: Aug 16, 2024
 *      Author: Elmag
 */

#ifndef HAL_BLUETOOTH_BLUETOOTH_INTERFACE_H_
#define HAL_BLUETOOTH_BLUETOOTH_INTERFACE_H_

void Bluetooth_Init(void);
void Bluetooth_SendData(u8 data);
void  Bluetooth_RecieveData(u8 *Copy_Pu8ReceivedChar );

void Led_on_off(u8 state);
#endif /* HAL_BLUETOOTH_BLUETOOTH_INTERFACE_H_ */
