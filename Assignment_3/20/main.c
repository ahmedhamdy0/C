/*
 	 (20) Write a C function to return an array containing the values between two 8-bits unsigned integers
 	      IN DESCENDING ORDER EXCLUSIVE.
 	      The function takes 2 values (LowerValue and UpperValue),
 	      it shall determine the values in between, and then arrange the sequence in descending order excluding the upper and lower values.
 	      If the LowerValue is greater than or equal the UpperValue, return an array of 2 elements, both containing value = 0xFF
		  Example: Input: LowerValue=2 and UpperValue=5 Output: Output Array=4,3 Output Array Size=2
*/

#include <stdio.h>
int OutputArray[256]  ;
int* CreateArray(int LowerValue , int UpperValue , int* resultSize)
{
	int i ;
	if(LowerValue >= UpperValue)
	{
		OutputArray[0] =  0xFF ;
		OutputArray[1] = 0xFF ;
		*resultSize = 2 ;
	}
	else
	{
		for(i = UpperValue-1 ; i>LowerValue ; i-- )
		{
			OutputArray[*resultSize] = i ;
			(*resultSize)++ ;
		}
	}
	return OutputArray ; // pointer to global array
}

int main(void)
{
	int count ;
	int output_array_size = 0 ;
	int *ptr = CreateArray(2, 5 , &output_array_size) ;

	printf("Output Array = ");

	/* start looping from 0 to the last used element in the array */
	for(count=0 ; count<output_array_size ; count++)
	{
		/* access the global array using the ptr */
		printf("%d ",ptr[count]);
	}
	printf("\nOutput Array Size = %d",output_array_size);

	while(1);
	return 0 ;
}
