/*
        (14) Write a C Function that calculate the Fibonacci series using recursive method.
        The Fibonacci Series : 0,1,1,2,3,5,8,13,21,…
 */

#include <stdio.h>
long Fibonacci(int num );
int main(void)
{
	int num ;
	long result ;
	printf("Enter a Number :  ") ;
	scanf("%d" , &num);

	result = Fibonacci(num);
	printf("Fibonacci of %d is = %ld\n" , num , result);
	while(1);

	return 0 ;
}

long Fibonacci(int num )
{
	if(num == 0 || num == 1)
	{
		return num ;
	}
	else
	{
		return Fibonacci(num-1)+Fibonacci(num-2);
	}
}
