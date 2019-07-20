/*
 * Write a program that reads a positive integer and checks if it is a prime.
 */

#include <stdio.h>
int main(void)
{
	int num ;
	int prime = 1 ;

	printf("Enter a Positive Number : ") ;
	scanf("%d" , &num );

	for(int i = 2 ; i<num/2 ;i++)
	{
		if(num%i == 0 )
		{
			prime = 0 ;
			break ;
		}
	}

	if(1 == prime)
	{
		printf("%d is a Prime Number\n" , num) ;
	}
	else
	{
		printf("%d is not a Prime Number\n" , num) ;

	}

	while(1);
	return 0 ;
}
