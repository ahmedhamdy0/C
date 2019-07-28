/*   (5) C function to copy all elements of an array into another array using pointers.
         The two arrays have the same length and types.
 */

#define SIZE 5
#include <stdio.h>
void CopyArr( int *src , int *dist , int size ) ;

int main(void)
{
	int arr1[SIZE] = { 10 , 20 , 30 , 40 , 50 } ;
	int arr2[SIZE] = { 0 } ;
	printf("arr1 : ") ;
	for(int i = 0 ; i<SIZE ; i++ )
	{
		printf("%d " , arr1[i]);
	}
	printf("\n");

	printf("arr2 : ") ;
	for(int i = 0 ; i<SIZE ; i++ )
	{
		printf("%d " , arr2[i]);
	}
	printf("\n\n");

	CopyArr(arr1 , arr2 , SIZE) ;
	printf("arr2 : ") ;
	for(int i = 0 ; i<SIZE ; i++ )
	{
		printf("%d " , arr2[i]);
	}
	printf("\n");

	while(1) ;
	return 0 ;
}

void CopyArr( int *src , int *dist , int size )
{
	for(int i = 0 ; i<size ; i++)
	{
		*dist= *src;
		dist++ ;
		src++ ;
	}
}
