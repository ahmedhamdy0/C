/*(2) Write a C Function that takes one character and checks if it alphabet or not.*/
#include <stdio.h>

char IsAlpha(char );

int main(void)
{
	char x ;
	printf("Enter a Character : ");
	fflush(stdin);
	scanf("%c" , &x);

	if(IsAlpha(x))
		printf("True ");
	else
		printf("False") ;
	return 0 ;
}

char IsAlpha(char c)
{
	if( (c>=65 && c<=90) || (c>=97&&c<=122) )
	{
		return 1 ;
	}
	else
	{
		return 0 ;
	}
}
