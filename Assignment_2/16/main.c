#include <stdio.h>

int CountOnes(unsigned int );

int main(void)
{
	printf("Number of Ones in 255 = %d\n" , CountOnes(255));
	while(1);
	return 0;
}


int CountOnes(unsigned int num)
{
	int count = 0 ;
	unsigned int mask = 0x80000000  ;
	for(int bit = 1 ; bit<=32; bit++)
	{
		if(((mask>>bit)&num))
		{
			count++ ;
		}
	}
	return count ;
}
