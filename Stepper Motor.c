/*
 * stepper motor.c
 *
 * Created: 5/16/2019 3:30:48 PM
 * Author : sreek
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>


int main(void)
{	DDRA=0Xff;
	int period=2;
	
    /* Replace with your application code */
    while (1) 
    {
		for(int i=0;i<200;i++)
		{
			/*PORTA=0x09;
			_delay_ms(2);
			PORTA=0X0C;
			_delay_ms(2);
			PORTA=0X06;
			_delay_ms(2);
			PORTA=0X03;
			_delay_ms(2);*/
			PORTA=0x09;
			_delay_ms(period);
			PORTA=0x08;
			_delay_ms(period);
			PORTA=0x0C;
			_delay_ms(period);
			PORTA=0x06;
			_delay_ms(period);
			PORTA=0x04;
			_delay_ms(period);
			PORTA=0x02;
			_delay_ms(period);
			PORTA=0x03;
			_delay_ms(period);
			PORTA=0x01;
			_delay_ms(period);
			
			
		}
		PORTA=0x09;
		_delay_ms(period);
		_delay_ms(1000);
		
		for(int i=0;i<200;i++)
		{
			/*PORTA=0x03;
			_delay_ms(2);
			PORTA=0X06;
			_delay_ms(2);
			PORTA=0X0C;
			_delay_ms(2);
			PORTA=0X09;
			_delay_ms(2);*/
			PORTA=0x01;
			_delay_ms(period);
			PORTA=0x03;
			_delay_ms(period);
			PORTA=0x02;
			_delay_ms(period);
			PORTA=0x04;
			_delay_ms(period);
			PORTA=0x06;
			_delay_ms(period);
			PORTA=0x0C;
			_delay_ms(period);
			PORTA=0x08;
			_delay_ms(period);
			PORTA=0x01;
			_delay_ms(period);
			
		}	
		
    }
	
	
}

