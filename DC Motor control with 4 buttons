/*
 * dc motor with 4 buttons.c
 *
 * Created: 5/20/2019 12:04:12 PM
 * Author : sreek
 */ 
#include <avr/io.h>
#include<util/delay.h>
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
void PWM_init0()
{
	TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);
	DDRB=(1<<PB3);
	DDRD=(0<<PD7);
}

void PWM_init2()
{
	TCCR2=(1<<WGM20)|(1<<WGM21)|(1<<COM21)|(1<<CS20);
	DDRD=(1<<PD7);
	DDRB=(0<<PB3);
	
}

int main(void)
{	int duty;
	
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
			PWM_init0();
			//PORTB=0X80;
			_delay_ms(15000);
			duty=255;
			OCR0=duty;
		}
		if ((PIND &(1<<PD1))==0)
		{	
			PWM_init0();
			//PORTB=0X80;
			_delay_ms(15000);
			duty=150;
			OCR0=duty;
		}
		
		if((PIND &(1<<PD2))==0)
		{	PWM_init2();
			//PORTB=0x80;
			_delay_ms(15000);
			duty=255;
			OCR2=duty;
		}
		
		if ((PIND &(1<<PD3))==0)
		{
			PWM_init2();
			//PORTD=0X80;
			_delay_ms(15000);
			duty=150;
			OCR2=duty;
		}
	}
}
