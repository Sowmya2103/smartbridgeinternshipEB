/*
 * GccApplication8.c
 *
 * Created: 5/10/2019 2:21:26 PM
 * Author : sreek
 */ 
#include <avr/io.h>
#include<util/delay.h>
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#define RS 7
#define E 5
void send_command(unsigned char command);
void send_character(unsigned char character);

int main(void)
{   
	DDRC=0xFF;
	DDRD=0XFF;
	_delay_ms(1000);
	while(1)
	{
	send_command(0X01);
	send_command(0X38);
	
	send_character(77);
	_delay_ms(1000);
	send_character(79);
	_delay_ms(1000);
	send_character(84);
	_delay_ms(1000);
	send_character(73);
	_delay_ms(1000);
	send_character(32);
	_delay_ms(1000);
	send_character(66);
	_delay_ms(1000);
	send_character(72);
	_delay_ms(1000);
	send_character(65);
	_delay_ms(1000);
	send_character(73);
	_delay_ms(1000);
	send_character(78);
    _delay_ms(1000);
	send_character(83);
		}
}
void send_command(unsigned char command)
{
	PORTC=command;
	PORTD&=~(1<<RS);
	PORTD|=(1<<E);
	_delay_ms(50);
	PORTD&=~(1<<E);
	PORTC=0;
}
void send_character(unsigned char character)
{
	PORTC=character;
	PORTD|=(1<<RS);
	PORTD|=(1<<E);
	_delay_ms(50);
	PORTD&=~(1<<E);
	PORTC=0;
}
