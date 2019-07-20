/*
 * (11) Write a C function that returns 1 if the input number is a power of 2
 *                           and return 0 if the input number is power of 2.
 *      For example: 2 and 16 are power of 2. 1, 10 and 30 are not power of 2.
 */
#include<stdio.h>
char IsPowerOfTwo(char num) ;
int main(void)
{

	if( IsPowerOfTwo(16))
		printf("Yes\n");
	else
		printf("No\n") ;

	while(1);
	return 0 ;
}

char IsPowerOfTwo(char num)
{
	if(num==1)
		return 1 ;
	else if(num==0)
		return 0 ;
	else
	{
		while(1)
		{
			if( (num%2) == 0)
			{
				if(num==2)
				{
					return 1 ;
				}
				else
				{
					num = num/2 ;
				}
			}
			else
			{
				return 0 ;
			}
		}
	}
}
