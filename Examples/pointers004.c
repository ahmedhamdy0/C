/* Pointer Arithmetic */
#include <stdio.h>
int main(void)
{
    int x[5]={0};
    int *ptr = x ;

    /*
        pointer is add or subtracted by a position (data type size)
        suppose ptr = 3000 ; then ptr +=2 ; === (3000 +2*4) = 3008
    */
    printf("x = %p\n" , x);
    printf("ptr = %p\n" , ptr);
    printf("ptr+1 = %p\n" , ptr+1);
    printf("ptr+3 = %p\n" , ptr+3);
    printf("ptr-- = %p\n" , ptr--);

    return 0 ;
}
