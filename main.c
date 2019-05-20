/*
 * servo with buttton.c
 *
 * Created: 5/16/2019 3:27:19 PM
 * Author : sreek
 */ 


#include <avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>



int main(void)
{	TCCR1A|=(1<<COM1A1)|(1<<COM1B1)|(1<<WGM11);
	TCCR1B|=(1<<WGM13)|(1<<WGM12)|(1<<CS11)|(1<<CS10);
	ICR1=4999;
	DDRD|=(1<<PD5);
    /* Replace with your application code */
    while (1) 
    {	OCR1A=97;
	
		if((PIND&(1<<PD0))==0)
		{
			OCR1A=280;
			_delay_ms(500);
		}
		if((PIND&(1<<PD1))==0)
		{
			OCR1A=535;
			_delay_ms(500);
		}
		
    }
}



