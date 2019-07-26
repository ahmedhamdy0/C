/*(15) Write a function to concatenate two strings without using strcat function.*/
#include <stdio.h>
void concatinateStr( char str1[] , char str2[] );

int main(void)
{
	char firstName[20]="ahmed ";
	char lastName[20] = "hamey";

	concatinateStr(firstName , lastName) ;

	printf("My Name Is : %s\n", firstName) ;
	while(1);
	return 0 ;
}

void concatinateStr( char str1[] , char str2[] )
{
	/*at first we need to calculate last index at str1 ( length of str1) */
	int i ;
	int j ;
	/* get length of str1 stored in i */
	for(i=0 ; str1[i]!='\0'; ++i )
	{

	}

	/* concatination process */
	for(j=0 ; str2[j]!='\0' ;  j++ , i++ )
	{
		str1[i] = str2[j];
	}
	str2[j]='\0';
}
