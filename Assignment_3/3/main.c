/*
 * (3) Write a C function that use the bubble sort algorithm to sort an integer array in ascending order
 *     (search for the bubble sorting algorithm).
 */

#define SIZE 5
#include <stdio.h>

void DisplayArray(int arr[] , int size );
void BubbleSort(int arr[] , int size );
void Swap(int *num1 , int *num2);

int main(void)
{
	int myArray[SIZE] = {3 , 2 ,7 ,0 ,9};
	DisplayArray(myArray , SIZE);
	BubbleSort(myArray , SIZE) ;
	DisplayArray(myArray , SIZE);
	while(1);
	return 0 ;
}

void BubbleSort(int arr[] , int size )
{
	int outer ;
	int inner ;
	for(outer = 0 ; outer<size-1 ; outer++)
	{
		for(inner = outer+1 ; inner<size ; inner++)
		{
			if(arr[inner]<arr[outer])
			{
				Swap(&arr[inner] , &arr[outer]);
			}
		}
	}
}

void Swap(int *num1 , int *num2)
{
	int temp ;
	temp = *num1 ;
	*num1 = *num2 ;
	*num2 = temp ;
}

void DisplayArray(int arr[] , int size )
{
	for(int i = 0 ; i<size ; i++)
	{
		printf(" %d " , arr[i]);
	}
	printf("\n");
}

