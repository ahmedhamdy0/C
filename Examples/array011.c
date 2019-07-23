#include <stdio.h>
/* Program to display number of * according to the value in each array element */
int main(void)
{
    int arr[5] = { 15 ,2,5,3,20} ;
    int i , j ;

    for(i = 0 ; i<5 ; i++)
    {
        printf("%d\t" , arr[i]);
        for(j = 0 ; j<arr[i] ; j++)
        {
            printf("*");
        }
        printf("\n") ;
    }
    return 0 ;
}
