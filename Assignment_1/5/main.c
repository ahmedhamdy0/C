/*
	Write a program to print the ASCII value of a character input by the user.
*/
#include <stdio.h>
int main(void)
{
	char c ;
	printf("Enter a Character : ");
	fflush(stdin) ; // clear input buffer
	scanf("%c" , &c) ;
	printf("ASCII for %c = %d\n" , c , c ) ;
	return 0 ;
}
