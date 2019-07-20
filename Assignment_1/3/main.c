/*
	Write a program for converting temperature from degrees Celsius to degrees Fahrenheit,
	given the formula: F = C x 9/5 + 32
*/

#include <stdio.h>
int main(void)
{
	float deg_f ;
	float deg_c ;

	printf("Enter Degree in Celsius : ") ;
	scanf("%f" , &deg_c) ;

	deg_f = deg_c * 9/5 + 32 ;

	printf("%f In Celsisus = %f in Fahrenheit\n" , deg_c , deg_f ) ;

	return 0 ;
}
