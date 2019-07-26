/* (7) Write a program that computes the nth term of the arithmetic series:
 *     1, 3, 5, 7, 9, …
 *     Run the program to compute the 100th term of the given series.
 */

#include <stdio.h>

int GetElement(int index) ;

int main(void)
{

	printf("%d\n", GetElement(100));

	while(1);
	return 0 ;
}

int GetElement(int index)
{
	int diff = index - 1 ;
	return index+diff ;
}
