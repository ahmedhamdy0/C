/*
 * Write a program that print the relation between two integer numbers
 * if those numbers are equal, not equal and which one contain the higher value.
 */
#include <stdio.h>
int main(void)
{
	int firstNum ;
	int secondNum ;

	printf("Enter First Number : ") ;
	scanf("%d" , &firstNum);

	printf("Enter Second Number : ") ;
	scanf("%d" , &secondNum);

	if(firstNum > secondNum )
	{
		printf("First Number [ %d ] is > Second Number [ %d ]\n" , firstNum , secondNum ) ;
	}
	else if(firstNum < secondNum)
	{
		printf("First Number [ %d ] is < Second Number [ %d ]\n" , firstNum , secondNum ) ;
	}
	else
	{
		printf("First Number [ %d ] = Second Number [ %d ]\n" , firstNum , secondNum ) ;
	}

	while(1);
	return 0 ;
}
