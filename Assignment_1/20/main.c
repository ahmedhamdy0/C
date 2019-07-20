/*

 Write a program to display a full pyramid using stars pattern.
 	 *
    ***
   *****
  *******
 *********

*/
#include <stdio.h>
int main(void)
{
	int rows ;

	printf("Enter Number Of Rows : ") ;
	scanf("%d" , &rows);

	for(int i = 1 ; i<=rows ;i++)
	{
		for(int s = i ; s<rows ;s++)
		{
			printf(" ");
		}
		for(int j = 1 ; j<=2*i-1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0 ;
}
