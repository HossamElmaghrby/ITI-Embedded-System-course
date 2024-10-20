/*
 * EXTI_pirvate.h
 *
 *  Created on: Jul 30, 2024
 *      Author: Elmag
 */

#ifndef EXTI_EXTI_PIRVATE_H_
#define EXTI_EXTI_PIRVATE_H_

/* EXTI registers */
#define MCUCR_Register	 	*((vu8_t *) 0x55)
#define MCUCSR_Register 	*((vu8_t *) 0x54)
#define GICR_Register		*((vu8_t *) 0x5B)
#define GIFR_Register		*((vu8_t *) 0x5A)

/* MCUCR register bits */
#define ISC00	0
#define ISC01	1
#define ISC10	2
#define ISC11	3
#define SM0		4
#define SM1		5
#define SM2		6
#define SE		7

/* MCUCSR register bits */
#define PORF	0
#define EXTRF	1
#define BORF	2
#define WDRF	3
#define JTRF	4
#define ISC2	6
#define JTD		7

/* GICR register bits */
#define IVCE	0
#define IVSEL	1
#define INT2	5
#define INT0	6
#define INT1	7

/* GIFR register bits */
#define INTF2	5
#define INTF0	6
#define INTF1	7

void (*ptr1)() ;
void (*ptr2)() ;
void (*ptr3)() ;

void __vector_1(void) __attribute__((signal));
void __vector_2(void) __attribute__((signal));
void __vector_3(void) __attribute__((signal));

#endif /* EXTI_EXTI_PIRVATE_H_ */
