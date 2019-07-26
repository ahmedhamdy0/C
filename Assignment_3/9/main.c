/* (9) The sequence of numbers 0,1,1,2,3,5,8,13, … is called Fibonacci numbers;
 *     each is the sum of the preceding 2.
 *     Write a program which given n, returns the nth Fibonacci number.
 *     - with for/while - with recursion
 */

#include <stdio.h>
// using recursion method ... base case 0 and 1
int Fibonacci(int n)
{
	if(n==0 || n==1)
	{
		return n ;
	}
	else
	{
		return Fibonacci(n-1)+Fibonacci(n-2);
	}
}
// ------------------------------------------------
int main(void)
{
	int num ;
	printf("enter a number : ");
	scanf("%d" , &num);
	printf("%d\n" , Fibonacci(num)) ;
	printf("==============================\n");
	/* using loops */
	const int SIZE = 100 ;
	int arr[SIZE];
	arr[0] = 0 ;
	arr[1] = 1 ;
	for(int i = 2 ; i<SIZE ; i++)
	{
		arr[i] = arr[i-1] + arr[i-2] ;
	}
	printf("%d\n" , arr[num]) ;

	while(1);
	return 0 ;
}
