/* Write a program that reads a positive integer and checks if it is a perfect square.*/
#include <stdio.h>
#include <math.h>

int main(void)
{
	int x ;
	printf("Enter a Number : ") ;
	scanf("%d" , &x) ;
	if(x == ( sqrt(x)*sqrt(x)) )
		printf("%d is a Perfect Square Number" , x) ;
	else
		printf("%d is not a Perfect Square Number" , x) ;

	return 0  ;
}
