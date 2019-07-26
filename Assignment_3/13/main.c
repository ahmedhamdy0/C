/*(13) Write a function to remove all characters in a string expect alphabet.*/

#include <stdio.h>

void Remove_All_Except_Alphabets(char *str) ;

int main(void)
{
	char name[20] = "a7med 72mdy" ;
	printf("%s\n" , name)  ;
	Remove_All_Except_Alphabets(name) ;
	printf("%s\n" , name)  ;

	while(1);
	return 0 ;
}

void Remove_All_Except_Alphabets(char *str)
{
	int i = 0 ;
	int j = 0 ;
	for( i=0 ; str[i]!='\0' ; ++i )
	{
		while(!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) &&  (str[i] != '\0') )
		{
			/*we need to shift all characters if not alphapet founded */
			/*remove this not alphabet character by making each element equals to the value of the next element */
			for(j = i ; str[j]!='\0' ; ++j )
			{
				str[j] = str[j+1] ;
			}
		}
	}
}
