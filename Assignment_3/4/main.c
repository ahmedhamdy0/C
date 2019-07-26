/*   (4) Write a C function that use the selection sort algorithm
 *       to sort an integer array in ascending order (search for the selection sorting algorithm).
 */

#define SIZE 5
#include <stdio.h>

void Swap(int *num1 , int *num2);
void SelectionSort(int arr[] , int size);
void DisplayArray(int arr[] , int size);

int main(void)
{

	int arr[SIZE] = { 5 , 3 , 9 , 1 , 4 } ;
	DisplayArray(arr , SIZE);
	SelectionSort(arr , SIZE) ;
	DisplayArray(arr , SIZE);
	while(1);
	return 0 ;
}

void SelectionSort(int arr[] , int size)
{
	int min_index ;
	int i ;
	int j ;

	for(i=0 ; i<size-1 ; i++)
	{
		min_index = i ;

		for(j=i+1 ; j<size ; j++)
		{
			if(arr[j]<arr[min_index])
			{
				min_index = j ;
			}
		}
		Swap(&arr[min_index], &arr[i]);
	}
}

void Swap(int *num1 , int *num2)
{
	int temp ;
	temp = *num1 ;
	*num1 = *num2 ;
	*num2 = temp ;
}

void DisplayArray(int arr[] , int size)
{
	int i ;
	for(i =0 ; i<size ; i++)
	{
		printf(" %d " , arr[i]);
	}
	printf("\n");
}
