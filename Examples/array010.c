/* Program to get and display the maximum number of the array */
#define size 5
#include <stdio.h>
int main(void)
{
    int arr[size] ;
    int i ;
    int max ;

    /* get array elements */
    printf("Enter Array Elements :\n");
    for(i=0 ; i<size ; i++)
    {
        scanf("%d" , &arr[i]);
    }
    max = arr[0] ;
    for(i = 1 ; i<size ; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i] ;
        }
    }
    printf("Maximum = %d\n" , max );
    return 0 ;
}
