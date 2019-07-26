/*
  (6) Write a C function to return the index of LAST occurrence of a number in a given array.
      Array index start from 0.
      If the item is not in the list return -1. (Linear Search Algorithm)
      Example:
      Array = {1,2,3,4,4,4}
      The required number is 4 it should return 5
*/

#define SIZE 6
#include <stdio.h>
char LastOccurrence( int num , int arr[] , int size ) ;

int main(void)
{
	int myArr[SIZE] = { 1 , 2 , 3 , 4 , 4 , 4 } ;
	printf("Last Occurence of 4 at myArr[ %d ]\n" , LastOccurrence(4 , myArr , SIZE)) ;
	while(1);
	return 0 ;
}

char LastOccurrence( int num , int arr[] , int size )
{
	for(int i = size-1 ; i>=0; i--)
	{
		if(arr[i] == num )
		{
			return i ;
		}
	}
	return -1 ;
}
