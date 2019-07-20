/*	Write a program to display half pyramid using stars pattern.
			*
			* *
			* * *
			* * * *
			* * * * *
*/
#include <stdio.h>
int main(void)
{
	int rows ;

	printf("Enter Number Of Rows : ");
	scanf("%d" , &rows);

	for(int i = 1 ; i<=rows ; i++)
	{
		for(int j = 1 ; j<=i ; j++ )
		{
			printf("*");
		}
		printf("\n");
	}

	return 0 ;
}
