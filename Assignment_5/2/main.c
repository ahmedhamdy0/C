/*2. Write a C Program to add two distances (inch-feet) using structure and display the result.*/

#include <stdio.h>

struct distance {
	int feet ;
	float inches ;
}d1 , d2 , sum_distance ;
//-----------------------------------
int main(void)
{
	printf("Enter Distance One( Feet ) : ") ;
	scanf("%d" , &d1.feet) ;

	printf("Enter Distance One( Inches ) : ") ;
	scanf("%f" , &d1.inches) ;

	printf("Enter Distance Two( Feet ) : ") ;
	scanf("%d" , &d2.feet) ;

	printf("Enter Distance Two( Inches ) : ") ;
	scanf("%f" , &d2.inches) ;

	sum_distance.feet = d1.feet + d2.feet ;
	sum_distance.inches = d1.inches + d2.inches ;

	if(sum_distance.inches > 12 )
	{
		sum_distance.inches = sum_distance.inches - 12 ;
		sum_distance.feet++ ;
	}

    printf("\nSum of distances = %d  , %.1f", sum_distance.feet, sum_distance.inches);

	while(1) ;
	return 0 ;
}
