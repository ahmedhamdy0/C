/*(6) Write C Function that converts the any letter from lowercase to uppercase.*/

#include <stdio.h>
char Upper(char );
int main(void)
{
	char s = 'm' ;
	printf("before : %c\n" , s);
	s = Upper(s);
	printf("after : %c\n" , s);

	while(1);
	return 0 ;
}

char Upper(char c)
{
	return c-32 ; // ASCII Table
}
