/*
 * potentiometer based  DC motor.c
 *
 * Created: 5/15/2019 2:50:58 PM
 * Author : sreek
 */ 

#include<avr/io.h>
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

{
	int duty=0;
	DDRA=0X00;
	DDRB=0xFF;
	PWM_init();
	
	_delay_ms(50);
	ADMUX |=(1<<REFS0)|(1<<REFS1);
	ADCSRA|=(1<<ADEN)|(1<<ADATE)|(1<<ADPS0)|(1<<ADPS1)|(1<<ADPS2);
	//int COUNTA=0;
	ADCSRA|=(1<<ADSC);
	PORTB=0<<PB0;
	
    /* Replace with your application code */
    while (1) 
    {
		/*if(ADC>200)
		{
			PORTB=0x01;
			_delay_ms(15000);
		}*/
		duty=ADC/4;
		OCR0=duty;
		
    }
}



