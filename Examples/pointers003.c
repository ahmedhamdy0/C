/* Relationship Between pointers and Arrays */
#include <stdio.h>
int main(void)
{
    int arr[3] = { 4 , 5 , 6 } ;
    int *ptr ;
    int *ptr2 ;
    int *ptr3 ;

    ptr = arr ;  // array name is the address of first element
    ptr2 = &arr[0] ;

    printf("ptr = %p\n" , ptr );
    printf("ptr2 = %p\n" , ptr2 );

    return 0 ;
}
