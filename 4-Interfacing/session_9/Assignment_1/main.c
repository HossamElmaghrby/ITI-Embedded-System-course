/*
 * main.c
 *
 *  Created on: Jul 24, 2024
 *      Author: Elmag
 */



#include<avr/io.h>
#include<util/delay.h>

#define delay_s(x) _delay_ms(x*1000)

int main(){
	DDRA = 0xff ;
	while(1)
	{
		PORTA = 0x01 ;
		delay_s(1);
		PORTA = 0x02 ;
		delay_s(1);

	}
	return 0 ;
}
