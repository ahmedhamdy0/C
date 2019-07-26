/* (19) Write a C function that compare between 2 arrays with the same length.
 *      It shall return 0 if the two arrays are identical and 1 if not.
 */

#define SIZE 5
#include <stdio.h>

char CompareArrays( int arr1[] , int arr2[] , int size ) ;

int main(void)
{
	int a1[SIZE] = { 3 , 2 , 3 , 4 , 5} ;
	int a2[SIZE] = { 1 , 2 , 3 , 4 , 5} ;

	if(CompareArrays(a1 , a2 , SIZE))
		printf("Not Identical");
	else
		printf("Identical") ;

	while(1);
	return 0 ;
}

char CompareArrays( int arr1[] , int arr2[] , int size )
{
	int i ;
	for(i = 0 ; i <size ; i++ )
	{
		if(arr1[i]!=arr2[i])
		{
			return 1 ;
		}
	}
	return 0 ;
}
