/* (20) Write a C function that return 0 if a given number is a power of 3, otherwise return 1.*/

#include <stdio.h>
char IsPowerOfThree(int num );
int main(void)
{
	if(!IsPowerOfThree(9))
		printf("Yes\n");
	else
		printf("No\n");

	while(1);
	return 0 ;
}

char IsPowerOfThree(int num )
{
	if(num == 1)
	{
		return 0 ;
	}
	else
	{
		while(1)
		{
			if(num%3 == 0 )
			{
				if(num==3)
				{
					return 0 ;
				}
				else
				{
					num = num/3 ;
				}

			}
			else
			{
				return 1 ;
			}
		}
	}
}
