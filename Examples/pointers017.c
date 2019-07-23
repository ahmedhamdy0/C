/* Wild Pointer : is nothing but a pointer which is not been initialized ( garbage address ) */
#include <stdio.h>
int mian(void)
{
    int *ptr ;
    printf("%d\n" , *ptr) ; // error .. undefined reference
    return 0 ;
}
