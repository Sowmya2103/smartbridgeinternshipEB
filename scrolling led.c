/*
 * GccApplication4.c
 *
 * Created: 5/10/2019 10:17:58 AM
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
			int i;
    /* Replace with your application code */
    while (1) 
    {
		PORTB=0x01;
		for (i=0;i<8;i++)
		{
			
			PORTB=PORTB<<1;
			_delay_ms(300);
		}
		PORTB=0x80;
		for (i=0;i<8;i++)
		{
			
			PORTB=PORTB>>1;
			_delay_ms(300);
		}
		
	
		
    }
}

