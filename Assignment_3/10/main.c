/*(10) Write a function which, given a string,
 *     converts all uppercase letters to lowercase, leaving the others unchanged
 */

#include <stdio.h>

void ToLower(char str[]) ;

int main(void)
{
	char name[] = "aHmed HAmDy" ;
	printf("%s\n" , name) ;
	ToLower(name) ;
	printf("%s\n" , name) ;
	while(1);
	return 0 ;
}

void ToLower(char str[])
{
	int i = 0 ;
	while( str[i] != '\0')
	{
		// ASCII Values Between A and Z
		if( ( str[i]>=65 ) && ( str[i]<=90) )
		{
			str[i] +=32 ;
		}
		else
		{

		}
		i++ ;
	}
}
