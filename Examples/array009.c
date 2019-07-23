/* Program get 5 numbers from the user and print the the sum and the Average */
#define SIZE 5
#include<stdio.h>
int main(void)
{
    int numbers[SIZE] ;
    int sum = 0 ;
    float average ;
    int i ;
    /* get numbers from user */
    for(i = 0 ; i<SIZE ; i++)
    {
        printf("Enter Element %d : " , i ) ;
        scanf("%d" , &numbers[i]) ;
        sum += numbers[i] ;
    }
    average = (float)sum / SIZE ;
    printf("Sum = %d\n" , sum ) ;
    printf("Average = %f\n" , average );
    return 0 ;
}
