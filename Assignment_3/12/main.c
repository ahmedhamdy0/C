/*(12) Write a function to find the length of a string.*/

#include <stdio.h>
int LengthOf(char str[]) ;
int main(void)
{
	char myString[] = "Hello World!";
	int length ;
	length = LengthOf(myString) ;

	printf("Length of My String = %d\n" , length);

	while(1) ;
	return 0 ;
}

int LengthOf(char str[])
{
	int counter = 0 ;
	while(str[counter] !='\0')
	{
		counter++ ;
	}
	return counter ;
}
