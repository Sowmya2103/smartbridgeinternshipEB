/*
 * GccApplication6.c
 *
 * Created: 5/10/2019 11:22:10 AM
 * Author : sreek
 */ 

#include <avr/io.h>
#include<util/delay.h>
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

int main(void)
{   DDRC=0xFF;
	//DDRD|=~(1<<PD0);
	DDRD=0x00;
	int i;
    /* Replace with your application code */
    while (1) 
    {if((PIND &(1<<PD0))==0)
		{   PORTC=0X01;
			for(i=0;i<8;i++)
			{
				PORTC=PORTC<<1;
				_delay_ms(1000);
			}
		}
		if((PIND &(1<<PD7))==0)
		{   PORTC=0X80;
			for(i=0;i<8;i++)
			{
				PORTC=PORTC>>1;
				_delay_ms(1000);
			}
		}
    }
}

