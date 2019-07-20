/*
 * (4) Write a C Function that return the addition or subtraction or multiplication or division for two numbers.
 *     The function should take the required operation and two numbers as arguments.
 *     It also should check that the input operation is one of those operation that mentioned before
 *     and if not it should return error.
 *     The function should be implemented using switch case.
 */

#include <stdio.h>
long long Calculate( int , char , int );

int main(void)
{
	int x = 5 ;
	int y = 6 ;
	int resulet = Calculate(x , '+' , y );
	printf("Result : %d\n" , resulet);

	while(1);
	return 0 ;
}

long long Calculate( int num1 , char op , int num2 )
{
	switch(op)
	{
	case '+' :
		return num1+num2 ;
	case '-':
		return num1-num2;
	case '*':
		return num1*num2;
	case '/':
		return (float)num1/num2;
	default:
		printf("Invalid Operation , Please Select Operation from ( + , - , * , / )\n");
		return -1;
	}
}
