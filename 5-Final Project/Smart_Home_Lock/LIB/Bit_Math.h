/*
 * Bit_Math.h
 *
 *  Created on: Jul 25, 2024
 *      Author: Mohammed Mansour
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(reg,bit)  reg|=(1<<bit)

#define CLEAR_BIT(reg,bit) reg&=~(1<<bit)

#define ToggleBit(reg,bit) reg^=(1<<bit)

#define GET_BIT(reg,bit)   ((reg>>bit) & 1)

#endif /* BIT_MATH_H_ */
