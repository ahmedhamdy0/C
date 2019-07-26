/*
(22) Write a c function that removes the repeated number of an input sorted array
     and return a new array without the repeated numbers.

     The function shall return error if the size of the input array is ZERO.
     The function takes four inputs:

	  a. Old array.
      b. Old array size.
      c. New array (empty array).
      d. The size of the new array after fill it in the function.

      int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new)
      Example:
      arr1 = {1,2,3,3,3,4,4,5,5,5}  arr2 = {1,2,3,4,5}
*/
#define SUCCESS 1
#define ERROR 0

#include <stdio.h>
int RemoveDuplicates(int arr_old[] , int n_old , int arr_new[] , int *n_new);

int main(void)
{
	int arr2UsedSize = 0 ;
	int arr1[10] = {1,2,3,3,3,4,4,5,5,5};
	int arr2[10];
	int ret,i;

	/* the function shall remove the repeated numbers in arr1 and create a new array arr2 with size equals to arr2_usedSize */

	ret = RemoveDuplicates(arr1,10,arr2,&arr2UsedSize);

	if(ret == SUCCESS)
	{
		for(i=0;i<arr2UsedSize;i++)
		{
			printf("%d \t",arr2[i]);
		}
	}
	while(1);
	return 0 ;
}

//--------------------------------------------------------------
int RemoveDuplicates(int arr_old[] , int n_old , int arr_new[] , int *n_new)
{
	int i ;

	if(n_old==0)
	{
		return ERROR ;
	}

	for(i=0 ; i<n_old-1 ;++i)
	{
		if(arr_old[i] != arr_old[i+1])
		{
			arr_new[*n_new] = arr_old[i];
			(*n_new)++ ;
		}
	}
	arr_new[*n_new] = arr_old[i];
	(*n_new)++ ;
	return SUCCESS ;
}


