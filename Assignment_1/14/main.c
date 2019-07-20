/*(14) Write a program to display English alphabets from A to Z.*/
#include <stdio.h>
int main(void)
{
	/* ASCII A = 65 */
	for(int i = 65 ; i<=90 ; i++)
	{
		printf("%c\t" , i);
	}
	printf("\n");
	return 0 ;
}
