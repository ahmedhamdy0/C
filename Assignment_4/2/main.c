/*(2) C Program to find length of a given string using pointer.*/
#include <stdio.h>
int strLength( char *ptr);

int main(void)
{
	char *str = "ahmed";
	printf("String Length = %d\n" , strLength(str)) ;
	while(1);
	return 0 ;
}

int strLength( char *ptr)
{
	int Length = 0 ;
	while(*ptr !='\0')
	{
		Length++ ;
		ptr++ ;
	}
	return Length ;
}
