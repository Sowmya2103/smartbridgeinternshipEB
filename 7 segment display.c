/*
 * GccApplication12.c
 *
 * Created: 5/14/2019 9:56:30 AM
 * Author : sreek
 */ 

#include <avr/io.h>
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include<util/delay.h>

int main(void)
{	DDRA=0XFF;
	
    /* Replace with your application code */
    while (1) 
    {
		PORTA=0XFD;
		_delay_ms(200);
		PORTA=0X60;
		_delay_ms(200);
		PORTA=0XDA;
		_delay_ms(200);
		PORTA=0XF2;
		_delay_ms(200);
		PORTA=0X66;
		_delay_ms(200);
		PORTA=0XB6;
		_delay_ms(200);
		PORTA=0XBE;
		_delay_ms(200);
		PORTA=0XE0;
		_delay_ms(200);
		PORTA=0XFE;
		_delay_ms(200);
		PORTA=0XE6;
		_delay_ms(200);
		
    }
}

