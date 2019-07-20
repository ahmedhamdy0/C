/*
	Write a program that take two integers from the user and print the results of this equation:
	Result = ((num1 + num2) * 3) – 10
*/
#include <stdio.h>
int main(void)
{
	int num1 ;
	int num2 ;
	int result ;

	printf("Enter First Number : ") ;
	scanf("%d" , &num1) ;

	printf("Enter Second Number : ") ;
	scanf("%d" , &num2) ;

	result = ((num1+num2)*3)-10 ;

	printf("Result = %d\n" , result);

	return 0 ;
}
