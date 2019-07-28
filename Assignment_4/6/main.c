/*(6) write a C Program to print all the array elements and the maximum number in array using array of pointers.*/

#define SIZE 7
#include <stdio.h>
void PrintAndGetMax(int *arr , int size) ;
int main(void)
{

	int Numbers[SIZE] = { 1 , 3 ,4 ,0 ,-8 ,54,13};

	PrintAndGetMax(Numbers , SIZE) ;
	while(1) ;
	return 0 ;
}

void PrintAndGetMax(int *arr , int size)
{
	int *ptr = arr ; // address first element
	int *ptrArray[size] ; // array of pointers
	int i ;
	int max = arr[0] ;
	// initialize array of pointers
	for(i = 0 ; i<size ; i++)
	{
		ptrArray[i] = ptr ;
		ptr++ ;
	}

	ptr = arr ;
	// print array elements
	printf("Array Elements : ") ;
	for(i = 0 ; i<size ; i++)
	{
		printf("%d " , *ptr) ;
		ptr++ ;
	}
	printf("\n");
	// get max
	for(i = 1 ; i<size ; i++)
	{
		if(*ptrArray[i] > max )
		{
			max = *ptrArray[i];
		}
	}
	printf("Maximum Number : %d\n" , max) ;

}
