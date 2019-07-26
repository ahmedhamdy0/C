#include <stdio.h>
/*
   (17) Write a C Program for swapping two arrays “A & B” with different lengths.
        B will be always the smallest array.
        int * Swap (int a_size,int *a,int b_size,int *b)
 */

void SwapTwoNumbers(int *num1 , int*num2 )
{
	int temp ;
	temp = *num1 ;
	*num1 = *num2 ;
	*num2 = temp ;
}
//----------------------------------------------------------
int* SwapTwoArrays(int aSize , int *a , int bSize , int *b )
{
	int i = 0 ;
	for(i = 0 ; i<bSize ; ++i )
	{
		SwapTwoNumbers(&b[i] , &a[i]) ;
	}
	return a ;
}
//---------------------------------------------------------
int main(void)
{
	int i ;
	int a[7] = {1 , 2 , 3 , 4 , 5 , 6 , 7 } ;
	int b[5] = {9 , 10, 11 ,12 , 13 } ;

	printf("A (before swapping) : ") ;
	for(i=0 ; i<7 ; i++)
	{
		printf("  %d  " , a[i]);
	}
	printf("\n");

	printf("B (before swapping) : ") ;
	for(i=0 ; i<7 ; i++)
	{
		printf("  %d  " , b[i]);
	}
	printf("\n");
	printf("\n");

	SwapTwoArrays(7 , a , 5 , b );
	printf("A (after swapping) : ") ;
	for(i=0 ; i<7 ; i++)
	{
		printf("  %d  " , a[i]);
	}
	printf("\n");

	printf("B (after swapping) : ") ;
	for(i=0 ; i<7 ; i++)
	{
		printf("  %d  " , b[i]);
	}
	printf("\n");
	printf("\n");

	while(1);
	return 0 ;
}
