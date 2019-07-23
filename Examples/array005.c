// Arrays 005
#include <stdio.h>
int main(void)
{
    /*
     Important Note :
        Array Name is a Constant Pointer holds the First Element Address
        (virtual : not actually stored ).
     */
    char array[5] ;
    // all are the same ( address of first element )
    printf("&array[0]=%p\n" , &array[0]) ;
    printf("array=%p\n" , array );
    printf("&array=%p\n" , &array) ;
    return 0 ;
}
