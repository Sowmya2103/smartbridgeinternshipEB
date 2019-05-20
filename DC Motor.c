/*
 * dc motor.c
 *
 * Created: 5/15/2019 2:17:51 PM
 * Author : sreek
 */ 

#include<avr/io.h>
#include<util/delay.h>
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

int main(void)
{
	DDRB=0xFF;
    /* Replace with your application code */
    while (1) 
    {
		PORTB=0X01;
		_delay_ms(15000);
		PORTB=0X00;
		_delay_ms(30000);
		
		PORTB=0X02;
		_delay_ms(15000);
		PORTB=0X00;
		_delay_ms(30000);
		
    }
}

