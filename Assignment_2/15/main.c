/*
 * (15) Write a C function to reverse the binary of an 8-bits number.
 *      For example if the input number is 10001101 the output number should be 10110001.
 */

#include <stdio.h>
void BinaryReversed( unsigned char num);
int main(void)
{
	BinaryReversed(3);
	while(1);
	return 0 ;
}

void BinaryReversed( unsigned char num)
{
	unsigned char mask = 0x01 ;
	for(unsigned char bit = 0 ; bit<8; bit++)
	{
		if( ( mask<<bit ) & num )
			printf("1");
		else
			printf("0");
	}
}
