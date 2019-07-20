/*Print sum of first 100 integers. (With data validation)*/
#include <stdio.h>
int main(void)
{
	int i ;
	int sum = 0 ;

	for(i=0 ; i<100; i++){
		sum +=i ;
	}

	// check if result is true
	if(sum == 4950)
	{
		printf("Sum Of First 100 Integers Is True !\n");
	}
	else
	{
		printf("Sum Of First 100 Integers Is False !\n");
	}
	while(1) ;
	return 0 ;
}
