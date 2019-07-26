/*
	(5) Write a C function to return the index of FIRST occurrence of a number in a given array.
	    Array index start from 0.
	    If the item is not in the list return -1.
	    (Linear Search Algorithm)
	    Example:
	    Array = {1,2,3,4,4,4}
	    The required number is 4 it should return 3
*/

#define SIZE 6
#include <stdio.h>

char FirstOccurrence(int num , int arr[] , int size) ;

int main(void)
{
	int arr[SIZE] = {1 , 2 , 3 , 4 , 4 , 4 } ;

	printf("First Occurrence For 4 at a[ %d ]\n" , FirstOccurrence(4 , arr , SIZE ) );
	while(1);
	return 0 ;
}

char FirstOccurrence(int num , int arr[] , int size)
{
	for(int i = 0 ; i<size ; i++)
	{
		if(num == arr[i])
		{
			return i ;
		}
	}
	return -1 ;
}
