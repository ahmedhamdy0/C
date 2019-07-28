/*(10) Write a c function two SWAP two pointers.
 *     Hint: use pointer to pointer as a function argument.
 */

#include <stdio.h>
void SwapPointers(int **ptr1 , int **ptr2) ;

int main(void)
{
	int x = 5 ;
	int y = 3 ;

	int *xPtr = &x ;
	int *yPtr = &y ;

	printf("x = %d\t y = %d\n" , x , y );
	printf("x address : %p\ty address : %p\n\n" , xPtr , yPtr );

	SwapPointers(&xPtr , &yPtr);

	printf("x = %d\t y = %d\n" , x , y );
	printf("x address : %p\ty address : %p\n\n" , xPtr , yPtr );

	while(1);
	return 0 ;
}

void SwapPointers(int **ptr1 , int **ptr2)
{
	int *tempPtr = *ptr1 ;
	*ptr1 = *ptr2 ;
	*ptr2 = tempPtr ;

}
