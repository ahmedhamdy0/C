/*
 * Write a program that reads a student grade percentage
 * and prints "Excellent" if his grade is greater than or equal 85,
 *            "Very Good" for 75 or greater
 *            "Good" for 65,
 *            "Pass" for 50,
 *            "Fail" for less than 50
 */
#include <stdio.h>
int main(void)
{
	float grade ;
	printf("Enter Grade Percentage : ");
	scanf("%f" , &grade) ;

	if(grade<50)
	{
		printf("Fail");
	}
	else if(grade>=50 && grade<65)
	{
		printf("Pass") ;
	}
	else if(grade >=65 && grade <75)
	{
		printf("Good") ;
	}
	else if(grade >= 75 && grade<85)
	{
		printf("Very Good");
	}
	else
	{
		printf("Excellent !") ;
	}
	printf("\n");

	return 0 ;
}
