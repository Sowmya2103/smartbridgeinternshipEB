/*
 * button controlled speed.c
 *
 * Created: 5/16/2019 2:29:55 PM
 * Author : sreek
 */  

#include <avr/io.h>
#include<util/delay.h>
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
void PWM_init()
{
	TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);
	DDRB=(1<<PB3);
}


int main(void)
{	int duty;
	PWM_init();
	DDRB=0xFF;
	DDRA=0x00;
	DDRD=0x00;
	_delay_ms(50);
	ADMUX |=(1<<REFS0)|(1<<REFS1);
	ADCSRA|=(1<<ADEN)|(1<<ADATE)|(1<<ADPS0)|(1<<ADPS1)|(1<<ADPS2);
	//int COUNTA=0;
	ADCSRA|=(1<<ADSC);
	
	/* Replace with your application code */
	while (1)
	{
		if((PIND &(1<<PD0))==0)
		{
			duty=255;
			OCR0=duty;
		}
		else
		{
			duty=150;
			OCR0=duty;
		}
	}
}

