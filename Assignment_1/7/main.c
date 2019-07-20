/* Write a program that takes three integers, and prints out the smallest number. */
#include <stdio.h>
int main(void)
{
	int num1 , num2, num3 ;
	int smallest ;

	printf("Enter First Number : ") ;
	scanf("%d" , &num1) ;

	printf("Enter Second Number : ") ;
	scanf("%d" , &num2) ;

	printf("Enter Third Number : ") ;
	scanf("%d" , &num3) ;

	smallest = num1 ;
	if(num2<smallest)
	{
		smallest = num2 ;
	}
	if(num3<smallest)
	{
		smallest = num3;
	}

	printf("Smallest Number is : %d\n" , smallest) ;

	return 0 ;
}

