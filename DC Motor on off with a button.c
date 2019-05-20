/*
 * dc motor button.c
 *
 * Created: 5/16/2019 2:17:51 PM
 * Author : sreek
 */ 

#include<avr/io.h>
#include<util/delay.h>
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

int main(void)
{	
	DDRD=0X00;
	DDRB=0xFF;
    /* Replace with your application code */
    while (1) 
    {	if((PIND &(1<<PD0))==0)
		{
			PORTB=0X01;
			_delay_ms(15000);
			
		}
		
		if((PIND &(1<<PD2))==0)
		{
	
			PORTB=0X02;
			_delay_ms(15000);
		
		}
		
		
    }
}
