/*
 * Bit_Math.h
 *
 *  Created on: Jul 25, 2024
 *      Author: Elmag
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SetBit(reg,bit)  reg|=(1<<bit)

#define CleartBit(reg,bit) reg&=~(1<<bit)

#define ToggleBit(reg,bit) reg^=(1<<bit)

#define ReadBit(reg,bit)   ((reg>>bit) & 1)

#endif /* BIT_MATH_H_ */
