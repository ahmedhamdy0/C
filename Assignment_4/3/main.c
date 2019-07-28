/*(3)C Program to read 10 integers into an array from user and print them in reversing order using pointers.*/
#define SIZE 10
#include <stdio.h>

int main(void)
{
	int numbers[SIZE];
	int i ;
	int *ptr = numbers ; // points to first element

	for(i = 0 ; i<SIZE ; i++)
	{
		printf("Enter Element numbers[%d] : " , i ) ;
		scanf("%d" , ptr) ;
		ptr++ ;
	}

	ptr = &numbers[SIZE-1] ; // points to last element
	for(i = 0 ; i<SIZE ; i++)
	{
		printf(" %d " , *ptr );
		ptr-- ;
	}

	while(1);
	return 0 ;
}

