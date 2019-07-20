/*(7) Write a C Function that reads two integers and checks if the first is multiple of the second*/
#include <stdio.h>

char IsMultiple( int firstNum , int secondNum );

int main(void)
{
	int x ;
	int y ;

	printf("Enter x : ") ;
	scanf("%d" , &x) ;

	printf("Enter y : ") ;
	scanf("%d" , &y) ;

	if(IsMultiple(x,y))
		printf("x is multiple of y\n");
	else
		printf("x is not multiple of y\n");

	return 0 ;
}

char IsMultiple( int firstNum , int secondNum )
{
	if(firstNum%secondNum == 0 )
		return 1 ;
	return 0 ;
}
