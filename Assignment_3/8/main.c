/*    (8) Write a program that computes the nth term of the geometric series: 1, 3, 9, 27, …
 *        Run the program to compute the 10th term of the given series.
 */


#include <stdio.h>
#include <math.h>
int GetElement(int index ) ;
int main(void)
{
	printf("%d\n" , GetElement(10));
	while(1);
	return 0 ;
}

int GetElement(int index )
{
	return pow(3 , (index-1)) ;
}


/*
1 = 1
2 = 3
3 = 9
4 = 27

3/1 == 9/3 == 27/3 == 3
(nTh) Term = 3^(n-1)
*/
