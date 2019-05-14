/*
 * GccApplication13.c
 *
 * Created: 5/14/2019 11:56:31 AM
 * Author : sreek
 */ 


#include <avr/io.h>
#define F_CPU 1000000
#include <util/delay.h>
#include <stdlib.h>




int main(void)
{
	/* Replace with your application code */
	DDRB=0xFF;
	DDRA=0x00;
	_delay_ms(50);
	ADMUX |=(1<<REFS0)|(1<<REFS1);
	ADCSRA|=(1<<ADEN)|(1<<ADATE)|(1<<ADPS0)|(1<<ADPS1)|(1<<ADPS2);
	int COUNTA=0;
	ADCSRA|=(1<<ADSC);
	while (1)
	{
		COUNTA=ADC/4;
		if (COUNTA<120)
		{
			PORTB=0xFF;
			_delay_ms(3000);
			
		} 
		else
		{
			PORTB=0x00;
		}
	}
}


