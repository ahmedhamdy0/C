/* (8)Write a C Function that display Prime Numbers between Intervals (two numbers) by Making Function */

#include <stdio.h>

void DisplayPrimeNumbers(int , int );

int main(void)
{
	DisplayPrimeNumbers(2 , 35);
	while(1);
	return 0 ;
}


void DisplayPrimeNumbers(int num1 , int num2)
{
	int flag = 1 ; // 1 = prime
	for(int i = num1 ; i<num2 ; i++)
	{
		flag = 1 ;
		for(int j = 2 ; j<i ; j++)
		{
			if(i%j == 0 )	// is not a prime number
			{
				flag = 0 ;
				break ;
			}
			else
			{
				flag = 1 ;
			}
		}
		if(flag == 1 )
			printf(" %d " , i);

	}
}
