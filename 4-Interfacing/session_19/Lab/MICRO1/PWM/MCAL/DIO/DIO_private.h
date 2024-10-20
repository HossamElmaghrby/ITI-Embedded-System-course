/*
 * DIO_private.h
 *
 *  Created on: Jul 25, 2024
 *      Author: Elmag
 */

#ifndef DIO_DIO_PRIVATE_H_
#define DIO_DIO_PRIVATE_H_

#define PORTA_REG  (*((vu8_t*)0x3B))
#define DDRA_REG   (*((vu8_t*)0x3A))
#define PINA_REG   (*((vu8_t*)0x39))


#define PORTB_REG  (*((vu8_t*)0x38))
#define DDRB_REG   (*((vu8_t*)0x37))
#define PINB_REG   (*((vu8_t*)0x36))

#define PORTC_REG  (*((vu8_t*)0x35))
#define DDRC_REG   (*((vu8_t*)0x34))
#define PINC_REG   (*((vu8_t*)0x33))

#define PORTD_REG  (*((vu8_t*)0x32))
#define DDRD_REG   (*((vu8_t*)0x31))
#define PIND_REG   (*((vu8_t*)0x30))

#endif /* DIO_DIO_PRIVATE_H_ */
