/*
 (5) Write a C function to check if the input is an even number or an odd number,
     if even number return 0 if odd number return 1.
     Example: Input 7, Output = 1 (Odd) Input 6, Output = 0 (Even)
*/

#include <stdio.h>

char IsOdd(int);

int main(void)
{
	int x = 3 ;
	if( IsOdd(x) )
		printf("%d Is Odd Number\n" , x);
	else
		printf("%d Is Even Number\n" , x);
	return 0 ;
}
char IsOdd(int num)
{
	if(num%2 == 2 )
		return 0 ;
	else
		return 1 ;
}
