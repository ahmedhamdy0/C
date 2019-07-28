/*
	(9) Given a string, create a new string made up of its last two letters, reversed and separated by a space,
    	the word is “bat”. Return string contains ”t a”
*/
#include <stdio.h>

char result[100] ;

char* LastLetters(char *word ) ;

int main(void)
{
	char str[] = "bat" ;

	printf("%s\n" , LastLetters(str));
	while(1);
	return 0 ;
}

char* LastLetters(char *word )
{
	char *ptr = word ;

	while( *ptr !='\0' )
	{
		ptr++ ;
	}
	result[0] = *(--ptr) ;
	result[1] = ' ' ;
	result[2] = *(--ptr) ;
	result[3] = '\0' ;

	return result ;
}


