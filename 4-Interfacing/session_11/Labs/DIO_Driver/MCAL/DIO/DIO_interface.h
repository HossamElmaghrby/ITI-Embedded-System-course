/*
 * DIO_interface.h
 *
 *  Created on: Jul 25, 2024
 *      Author: Elmag
 */

#ifndef DIO_DIO_INTERFACE_H_
#define DIO_DIO_INTERFACE_H_

typedef enum
{
ERROR,
NO_ERROR
}ERROR_t;

#define HIGH 1
#define LOW 0

#define INPUT 0
#define OUTPUT 1

#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3

#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

u8_t DIO_u8SetPinValue(u8_t L_u8Port ,u8_t L_u8Pin ,u8_t L_u8Value);
u8_t DIO_u8SetPinDirection(u8_t L_u8Port ,u8_t L_u8Pin ,u8_t u8Direction);
u8_t DIO_u8GetBit(u8_t L_u8Port ,u8_t L_u8Pin );
u8_t DIO_u8GetPort(u8_t L_u8Port);
u8_t DIO_u8SetPortValue(u8_t L_u8Port ,u8_t L_u8Value);
u8_t DIO_u8SetPortDirection(u8_t L_u8Port ,u8_t u8Direction);

#endif /* DIO_DIO_INTERFACE_H_ */
