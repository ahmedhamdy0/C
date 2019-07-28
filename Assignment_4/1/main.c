/*(1) C Program to compute sum of the array elements using pointers.*/
#define SIZE 5
#include <stdio.h>
int main(void)
{
	int sum = 0 ;
	int numbers[SIZE] = {1, 2 , 3 , 4 , 5 } ;
	int *ptr = numbers ;

	int i = 0 ;

	for(i = 0  ; i<SIZE ; i++)
	{
		sum +=*(ptr+i);
	}
	printf("Sum = %d\n" , sum );

	while(1);
	return 0 ;
}
