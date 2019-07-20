/*
	(19) Given a positive integer z , check if z can be written as P^q , where P and q are positive integers than 1 ,
	     if z can be written as P^q return 1 else return 0.

		 Description:
		 A positive integer that needs to be determined if it can be expressed as a power of square number.
*/

#include <stdio.h>
#include <math.h>
int SuperPower(int num);
int main(void)
{
	if(SuperPower(4)==1)
		printf("This Number Is Super Square\n");
	else
		printf("This Number Is Not a Super Square\n");
	while(1);
	return 0 ;
}

int SuperPower(int num)
{
	if( num == ( (int)sqrt(num) )*( (int)sqrt(num)) )
	{
		return 1 ;
	}
	else
	{
		return 0 ;
	}
}

