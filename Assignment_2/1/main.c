/*(1) Write a C Function that prints the cube of any number.*/

#include <stdio.h>

long long Cube( int );

int main(void)
{
	int x ;
	int cubedX ;

	printf("Enter a Number : ");
	scanf("%d" , &x);

	cubedX = Cube(x);
	printf("cube %d = %d\n" , x , cubedX ) ;
	while(1);
	return 0 ;
}

long long Cube( int num )
{
	long long result ;
	result = num*num*num ;
	return result ;
}
