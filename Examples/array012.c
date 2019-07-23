#define SIZE 5
#include <stdio.h>

void ModifyArray(int arr[] , int s) ;
void ModifyElementByValue(int num) ;
void ModifyElementByAddress(int *num) ;

int main(void)
{
    int array[SIZE] = {5,3,2,8,13} ;
    int i ;
    // displaying array elements
    printf("Values Of Original Array are :  ");
    for(i = 0 ; i<SIZE ; i++)
    {
        printf("%d\t" , array[i]) ;
    }
    printf("\n");

    ModifyArray(array , SIZE) ;
    // displaying modified array elements
    printf("Values Of Modified Array are :  ");
    for(i = 0 ; i<SIZE ; i++)
    {
        printf("%d\t" , array[i]) ;
    }
    printf("\n");

    printf("Value of array[ 3 ] = %d\n" , array[3] ) ;
    ModifyElementByAddress(&array[3]) ;
    printf("Value of array[ 3 ] = %d\n" , array[3] ) ;
    ModifyElementByValue(array[3]) ;
    printf("Value of array[ 3 ] = %d\n" , array[3] ) ;

    return 0 ;
}


void ModifyArray(int arr[] , int s)
{
    /* multiply each element by 2 */
    int i ;
    for(i=0 ; i<s ; i++)
    {
        arr[i] *=2 ;
    }
}

void ModifyElementByAddress(int *num)
{
    *num *=2 ;
    printf("Value in ModifyElementByAddress = %d\n" , *num) ;
}

void ModifyElementByValue(int num)
{
    num *=2 ;
    printf("Value in ModifyElementByValue = %d\n" , num) ;
}