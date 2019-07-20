/*(9)Write a C Function that swaps the value of two integer numbers.*/
#include <stdio.h>

void Swap( int*, int* );

int main(void)
{
	int x = 3 ;
	int y = 5 ;

	printf("x = %d\ty = %d\n" , x , y );
	Swap(&x , &y) ;
	printf("x = %d\ty = %d\n" , x , y );
	printf("x = %d\ty = %d\n" , x , y );

	while(1);
	return 0 ;
}

void Swap( int *num1 , int *num2 )
{
	int temp ;
	temp = *num1 ;
	*num1 = *num2 ;
	*num2 = temp ;
}
