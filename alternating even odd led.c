/*
 * GccApplication5.c
 *
 * Created: 5/10/2019 10:33:19 AM
 * Author : sreek
 */ 

#include <avr/io.h>
#include <util/delay.h>
#ifndef	F_CPU
#define F_CPU 16000000UL
#endif


int main(void)
{
	DDRB=0xFF;
    /* Replace with your application code */
    while (1) 
    {
		PORTB=0xAA;
		_delay_ms(300);
		
		PORTB=0x55;
		_delay_ms(300);
	
		
    }
}

