/*(17) Write a C function to count the number of 1’s in an unsigned 8-bit integer.*/
#include <stdio.h>

char CountOnes(unsigned char num);

int main(void)
{
	printf("Number Of Ones in 10 = %d\n" , CountOnes(10)) ;
	while(1);
	return 0 ;
}

char CountOnes(unsigned char num)
{
	char count = 0 ;
	unsigned char mask = 0x80 ; //1000 0000
	for(int bit = 1 ; bit<=8; bit++)
	{
		if(((mask>>bit)&num))
		{
			count++ ;
		}

	}
	return count ;
}
