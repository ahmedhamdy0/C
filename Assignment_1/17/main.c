/* Write a program to count number of digits in a decimal number */

#include <stdio.h>
int main(void)
{
	int num ;
	int digits = 0 ;

	printf("Enter a Number : ");
	scanf("%d" , &num);

	while(num!=0)
	{
		num = num/10 ;
		digits++ ;
	}
	printf("Number of Digits is %d\n" , digits);
	return 0 ;
}



