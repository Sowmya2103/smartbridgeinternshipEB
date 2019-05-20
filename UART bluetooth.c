/*
 * USART.c
 *
 * Created: 5/16/2019 11:08:04 AM
 * Author : sreek
 */ 

#include <avr/io.h>
#include<inttypes.h>
#include<avr/interrupt.h>

#define F_CPU 16000000UL
//#define USART_BAUDRATE 9600
#define bluetooth 12000000
#define BAUD_PRESCALE (((bluetooth/(USART_BAUDRATE*16UL)))-1)
#define LED PORTB
char buffer[10];

void UART_init(long USART_BAUDRATE)
{
	UCSRB|=(1<<RXEN)|(1<<TXEN);
	UCSRC|=(1<<URSEL)|(1<<UCSZ0)|(1<<UCSZ1);
	UBRRL=BAUD_PRESCALE;
	UBRRH=(BAUD_PRESCALE>>8);
}
unsigned char UART_RXchar()
{
	
	while((UCSRA&(1<<RXC))==0);
	return(UDR);
}
unsigned char UART_TXchar(char data)
{
	
	while(!(UCSRA&(1<<UDRE)));
	UDR=data;
}
/*void UART_sendatring(char data)
{
	unsigned char j=0;
	while(str[j]!=0)
	{
		UART_TXchar(str[j]);
		j++;
	}
}*/
int main()
{
	UART_init(9616);
	DDRB=0xFF;
	char data;
	LED=0;
    /* Replace with your application code */
    while (1) 
    {
		data=UART_RXchar();
		if(data=='1')
		{
			LED=0XFF;
		}
		if (data=='2')
		{
			LED=0X00;
		}
    }
	return 0;
}


