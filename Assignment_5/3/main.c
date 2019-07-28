/*3. Write a C function to add two complex numbers by passing two structure to a function and display the results.*/


#include <stdio.h>

typedef struct{
	float real ;
	float img ;
}ComplexNumber;
//----------------------------------------

void addComplex(ComplexNumber* resultPtr , ComplexNumber n1 , ComplexNumber n2 ) ;

int main(void)
{
	ComplexNumber n1 ;
	ComplexNumber n2 ;
	ComplexNumber result ;

	n1.real = 3.0 ;
	n1.img = 5.0 ;

	n2.real = 9.0 ;
	n2.img = 2.0 ;

	addComplex(&result , n1 , n2) ;
	if(result.img<0)
	{
		printf("%f -i%f\n" , result.real , (-1*result.img) );
	}
	else
	{
		printf("%f +i%f\n" , result.real , result.img );
	}

	while(1);
	return 0 ;
}
//-----------------------------------------
void addComplex(ComplexNumber* resultPtr , ComplexNumber n1 , ComplexNumber n2 )
{
	resultPtr->real = n1.real + n2.real ;
	resultPtr->img = n1.img + n2.img ;
}

