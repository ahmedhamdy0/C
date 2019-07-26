/*(11) Write a function that prints the frequency of a certain character in a string*/
#include <stdio.h>

int CountChar(char ch , char *str  );

int main(void)
{
	char str[20] = "Ahmed Hamdy" ;
	int result = CountChar('m' , str);

	printf("%d\n" , result);
	while(1);
	return 0 ;
}

int CountChar(char ch , char *str  )
{
	int i = 0 ;
	int counter = 0 ;
	while(str[i]!='\0')
	{
		if(str[i] == ch )
		{
			counter++ ;
		}
		i++ ;
	}
	return counter ;
}
