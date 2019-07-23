#include <stdio.h>
int main(void)
{
    // Pre Increament and Post Increament
    int arr[]={1 , 2 , 3};
    int *ptr = arr ;
    printf("%d\t %d\t %d %p\t %d\n" , arr[0] , arr[1] , arr[2] , ptr , *ptr );
    *ptr++ = -1 ;
    printf("%d\t %d\t %d %p\t %d\n" , arr[0] , arr[1] , arr[2] , ptr , *ptr );
    *++ptr = -2 ;
    printf("%d\t %d\t %d %p\t %d\n" , arr[0] , arr[1] , arr[2] , ptr , *ptr );
    (*ptr)++ ;
    printf("%d\t %d\t %d %p\t %d\n" , arr[0] , arr[1] , arr[2] , ptr , *ptr );
    return 0 ;
}
