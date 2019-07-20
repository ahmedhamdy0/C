/* Write a program to calculate the power of a number. The number and its power are input from user */
#include <stdio.h>
int main(void)
{
	int num ;
	int power ;
	int result=1;

	printf("Enter a Number : ");
	scanf("%d" , &num) ;

	printf("Enter Power : ");
	scanf("%d" , &power);


	for(int i = 1 ; i<=power ;i++)
	{
		result *=num ;
	}

	printf("%d Power %d = %d\n" , num , power , result) ;

	return 0 ;
}




