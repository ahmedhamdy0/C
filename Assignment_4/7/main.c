/*(7) C function to swap two numbers using bitwise operation and call it using pointer to function.*/

#include <stdio.h>
void Swap( int *ptrNum1  , int *ptrNum2 ) ;

int main(void)
{
	void(*func_ptr)(int* , int*) = &Swap;
	int x = 3 ;
	int y = 5 ;
	printf("X = %d\ty = %d\n" , x , y ) ;
	func_ptr(&x , &y);
	printf("X = %d\ty = %d\n" , x , y ) ;

	while(1) ;
	return 0 ;
}

void Swap( int *ptrNum1  , int *ptrNum2 )
{
	// we can perform swap using XOR
	*ptrNum1 = *ptrNum1 ^ *ptrNum2 ;
	*ptrNum2 = *ptrNum1 ^ *ptrNum2 ;
	*ptrNum1 = *ptrNum1 ^ *ptrNum2 ;
}
