/*
   (18) Write a C function that return the count of the longest consecutive occurrence of a given number in an array.
        Example:
        Array={1,2,2,3,3,3,3,4,4,4,4,3,3,3} and searching for 3  result = 4
*/

#define SIZE 14
#include <stdio.h>
int CountLongestOccurrence( int n , int array[] , int array_size ) ;
int main(void)
{
	int numbers[SIZE] = {1,2,2,3,3,3,3,4,4,4,4,3,3,3} ;
	int result = CountLongestOccurrence(3 , numbers , SIZE );
	printf("%d\n" , result);
	while(1);
	return 0 ;
}
//-----------------------------------------------------------------------
int CountLongestOccurrence( int n , int array[] , int array_size )
{
	int i ;
	int counter = 0 ;
	int longest_occurrence = 0 ;


	for(i=0 ; i<array_size ; i++)
	{
		if(n == array[i])
		{
			counter++ ;
			if(counter > longest_occurrence )
			{
				longest_occurrence = counter ;
			}
		}
		else
		{
			counter = 0 ;
		}
	}
	return longest_occurrence ;
}
