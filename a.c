//display 0 to 9 using 7segment display//
#include<msp430.h>
void delay()
{
int i=50000;
while(i)
i--;
}
void main()
{
while(1)
{
	P1DIR=BIT0|BIT1|BIT2|BIT3|BIT4|BIT6;
	P1OUT=BIT0|BIT1|BIT2|BIT3|BIT4|BIT6;
	delay();
	P1DIR=BIT1|BIT2;
	P1OUT=BIT1|BIT2;
	delay();
	P1DIR=BIT0|BIT1|BIT5|BIT4|BIT3;
	P1OUT=BIT0|BIT1|BIT5|BIT4|BIT3;
	delay();
	P1DIR=BIT0|BIT1|BIT2|BIT3|BIT5;
	P1OUT=BIT0|BIT1|BIT2|BIT3|BIT5;
	delay();
	P1DIR=BIT6|BIT5|BIT2;
	P1OUT=BIT6|BIT5|BIT2;
	delay();
	P1DIR=P1DIR|BIT0|BIT3;
	P1OUT=P1OUT|BIT0|BIT3;
	delay();
	P1DIR=P1DIR|BIT4;
	P1OUT=P1OUT|BIT4;
	delay();
	P1DIR=BIT0|BIT1|BIT2;
	P1OUT=BIT0|BIT1|BIT2;
	delay();
	P1DIR=P1DIR|BIT3|BIT4|BIT5|BIT6;
	P1OUT=P1OUT|BIT3|BIT4|BIT5|BIT6;
	delay();
	P1DIR=P1DIR&(~BIT4);
	P1OUT=P1OUT&(~BIT4);
	delay();
	
}
}
