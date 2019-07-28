/* (11) Write a c program that SWAP the value of the two 16-bits of 32-bits integer number. */

#include <stdio.h>

int main(void)
{
	int num1 = 0xFFFFAAAA ;
	int num2 = 0 ;

	short *ptr1 = (short *) &num1 ; // pointer to 2 bytes of num1
	short *ptr2 = (short *) &num2 ; // pointer to 2 bytes of num2

	// int  = array of two shorts
	ptr2[0] = ptr1[1] ;
	ptr2[1] = ptr1[0] ;

	printf("The Value After swapping : %x\n" , num2) ;

	while(1);
	return 0 ;
}
