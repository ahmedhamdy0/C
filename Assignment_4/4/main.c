/*(4) write a  C function to get the value of the smallest element in array using pointers.*/

#include <stdio.h>
int GetMin( int *arr , int arraySize ) ;

int main(void)
{
	int arr[5] = { 1 , 3 , 7 ,-4 , 6 } ;
	int result = GetMin(arr , 5);
	printf("Minimum Number = %d\n" , result );
	while(1);
	return 0 ;
}

int GetMin( int *arr , int arraySize )
{
	int i ;
	int min = arr[0] ;
	int *ptr = arr+1 ; // address second element
	for(i=1 ; i<arraySize ; i++)
	{
		if(*ptr < min)
		{
			min = *ptr ;
		}
		ptr++ ;
	}
	return min ;
}
