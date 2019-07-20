/*
	Write a program that reads the radius of a circle
	and calculates the area and circumference then prints the results.
*/

#define PI 3.14
#include <stdio.h>
int main(void)
{
	float r ;
	float area ;
	float circum ;

	printf("Enter Circle Radius : ") ;
	scanf("%f" , &r);

	area = PI*r*r ;
	circum = 2*PI*r ;

	printf("Circle Area = %f\tCircle Circumference = %f\n" , area , circum ) ;
	while(1);
	return 0 ;
}
