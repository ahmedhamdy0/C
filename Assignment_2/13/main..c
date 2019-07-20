/* (13) In this challenge write a function to add two floating numbers.
 *      Determine the integer floor of the sum.
 *      The floor is the truncated float value, anything after the decimal point is dropped.
 *       For instance floor(1.1+3.05)=floor(4.15)=4
 */
#include <stdio.h>
int floor_of_sum(float num1 , float num2 );
int main(void)
{
	printf("%d\n" , floor_of_sum(1.1 , 3.05) ) ;
	while(1);
	return 0 ;
}
int floor_of_sum(float num1 , float num2 )
{
	float sum ;
	sum = num1 + num2 ;
	return (int)sum;
}
