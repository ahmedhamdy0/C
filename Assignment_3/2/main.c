/*
 * (2) Write a function which, given a string,
 *     return TRUE if all characters are distinct and FALSE if any character is repeated
 */
#include <stdio.h>
#include <string.h>

char HasDistinct( char arr[] );
int main(void)
{
	if( HasDistinct("caat") )
		printf("Yes");
	else
		printf("No");
	while(1);
	return 0 ;
}

char HasDistinct( char arr[] )
{
	int i ,j ;
	for( i=0 ; i<strlen(arr) ; i++)
	{
		for(j=0 ;j<strlen(arr); j++)
		{
			if(j==i)
			{
				continue ;
			}
			if(arr[i]==arr[j])
			{
				return 0 ;
			}
		}
	}
	return 1 ;
}

