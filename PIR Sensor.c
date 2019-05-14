/*
 * GccApplication10.c
 *
 * Created: 5/13/2019 10:55:49 AM
 * Author : sreek
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#define led_out PORTB
#define Pir_in PINC


int main(void)
{	DDRC=0x00;
	DDRB=0XFF;
    /* Replace with your application code */
    while (1) 
    {	
		led_out=Pir_in;
    }
}

