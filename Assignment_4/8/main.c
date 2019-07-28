/*(8) Write a C function to swap the contents of two arrays with the same length using pointers.*/
#define SIZE 5

#include <stdio.h>
void SwapContents(int *ptrArr1 , int *ptrArr2 , int size ) ;
void DisplayContents(int *ptrArr1 , int *ptrArr2 , int size) ;
void SwapInt(int *num1 , int *num2);

int main(void)
{
	int arr1[SIZE] = { 1 , 2 , 3 , 4 , 5 } ;
	int arr2[SIZE] = { 15 , 25 , 35 , 45 , 55 } ;
	DisplayContents(arr1 , arr2 , SIZE) ;
	SwapContents(arr1 , arr2 , SIZE );
	DisplayContents(arr1 , arr2 , SIZE) ;

	while(1) ;
	return 0 ;
}


void SwapInt(int *num1 , int *num2)
{
	int temp ;
	temp = *num1 ;
	*num1 = *num2 ;
	*num2 = temp ;
}

void SwapContents(int *ptrArr1 , int *ptrArr2 , int size )
{
	int i ;
	for(i = 0 ; i<size ; i++)
	{
		SwapInt(ptrArr1 , ptrArr2) ;
		ptrArr1++ ;
		ptrArr2++ ;
	}
}

void DisplayContents(int *ptrArr1 , int *ptrArr2 , int size)
{
	int i ;
	printf("Array One : ") ;
	for(i = 0 ; i<size ; i++)
	{
		printf("%d  " , *ptrArr1) ;
		ptrArr1++ ;
	}
	printf("\n");

	printf("Array Two : ") ;
	for(i = 0 ; i<size ; i++)
	{
		printf("%d  " , *ptrArr2) ;
		ptrArr2++ ;
	}
	printf("\n\n");
}

