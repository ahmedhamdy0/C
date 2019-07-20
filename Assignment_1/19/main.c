/*
	    Write a program to display inverted half pyramid using stars pattern.
		* * * * *
		* * * *
		* * *
		* *
		*
*/
#include <stdio.h>
int main(void)
{
	int rows ;

	printf("Enter Number of Rows : ");
	scanf("%d" , &rows) ;

	for(int i = rows ; i>=1 ; i--)
	{
		for(int j = 1 ; j<=i ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	while(1);
	return 0 ;
}
