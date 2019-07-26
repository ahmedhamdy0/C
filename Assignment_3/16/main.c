/*(16) Write a C function that takes an array as input and reverse it.
 *     Example: Input : 1,2,3,4,5
 *              Output: 5,4,3,2,1
 */

#include <stdio.h>

void Swap( int *x , int *y);
void ReverseArray(int *numbers , int array_size ) ;

int main(void)
{
	int arr[5];
	printf("Enter Array Elements : \n");
	for(int i = 0 ; i<5 ; ++i)
	{
		scanf("%d" , &arr[i]);
	}
	printf("------------------------\n");
	printf("Array  : ");
	for(int i = 0 ; i<5 ; ++i)
	{
		printf("%d  " , arr[i]);
	}
	printf("\n");

	ReverseArray(arr , 5 ) ;

	printf("Array  : ");
	for(int i = 0 ; i<5 ; ++i)
	{
		printf("%d  " , arr[i]);
	}
	printf("\n");


	while(1);
	return 0 ;
}

void ReverseArray(int *numbers , int array_size )
{
	int i ;
	for(i = 0 ; i<array_size/2 ; i++ )
	{
		Swap(&numbers[i] , &numbers[array_size - i - 1]  ) ;
	}
}

void Swap( int *x ,  int *y)
{
	int temp ;
	temp = *x ;
	*x = *y ;
	*y = temp ;
}
