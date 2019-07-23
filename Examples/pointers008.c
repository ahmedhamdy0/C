#include <stdio.h>
int main(void)
{
    /* what will be the output ? */
    int arr[] = {1 , 2 , 3 } ;
    *arr = 5 ; // *( &arr[0] ) = 5 == a[0] = 5
    printf("arr[0] = %d , arr[1] = %d , arr[2] = %d\n" , arr[0] , arr[1] , arr[2]);
    *(arr+1) = 10 ;
    printf("arr[0] = %d , arr[1] = %d , arr[2] = %d\n" , arr[0] , arr[1] , arr[2]);
    2[arr] = 15 ; // == arr[2] = 2[arr] = 15
    printf("arr[0] = %d , arr[1] = %d , arr[2] = %d\n" , arr[0] , arr[1] , arr[2]);
    return 0 ;
}
