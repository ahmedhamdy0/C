/*(14) Write a function to reverse a string by passing it to a function.*/
#include <stdio.h>

int LengthOf(char str[]) ;
void Swap(char *c1 , char *c2) ;
void ReverseString( char str[] ) ;

int main(void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char name[] = "ahmed hamdy";
	printf("%s\n" , name) ;
	ReverseString(name);
	printf("%s\n" , name) ;

	while(1);
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

void Swap(char *c1 , char *c2)
{
	char temp ;
	temp = *c1 ;
	*c1 = *c2 ;
	*c2 = temp ;
}

void ReverseString( char str[] )
{
	int string_length ;
	string_length = LengthOf(str);
	for(int i = 0 ; i<string_length/2 ; i++)
	{
		Swap(&str[i] , &str[string_length - i -1  ]);
	}
}


