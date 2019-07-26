/* (1) The sum of an array is the sum of its individual elements.
 *     For example :
 *     if an array is numbers = {1, 2, 3, 4},
 *     the sum of the array is 1+2+3+4 = 10
 *     Function Description: Complete the function summation.
 *     The function must return the integer sum of the numbers array.
 *     int summation(int numbers_size, int* numbers)
 */


#define SIZE 4
#include <stdio.h>
int summation( int numbers_size , int *numbers)
{
	int sum = 0 ;
	int i ;
	for(i = 0 ; i<numbers_size ; i++)
	{
		sum +=numbers[i];
	}
	return sum ;
}

int main(void)
{
	int nums[SIZE]={1,2,3,4};
	int result ;
	result = summation(SIZE , nums);
	printf("sum = %d\n", result);
	while(1);
	return 0 ;
}

