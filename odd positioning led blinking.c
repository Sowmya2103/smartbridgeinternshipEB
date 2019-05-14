/*
 * GccApplication3.c
 *
 * Created: 5/10/2019 10:02:13 AM
 * Author : sreek
 */ 

#include <avr/io.h>
#include<util/delay.h>
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

int main(void)
{
	DDRB=0XFF;
    /* Replace with your application code */
    while (1) 
    {
		PORTB=0X55;
	    _delay_ms(500);
		PORTB=0X00;
		_delay_ms(500);
		
    }
}

