/*Write a program that reads a positive integer and computes the factorial.*/
#include <stdio.h>
int main(void)
{
	int num ;
	int fact = 1 ;

	printf("Enter a Positive Number : ") ;
	scanf("%d" , &num) ;

	for(int i = num ; i>0; i--)
	{
		fact *=i ;
	}
	printf("Factorial %d = %d\n" , num , fact) ;

	return 0 ;
}
