#include <stdio.h>
int main(void)
{
    /* Pointer to Pointer */

    int var ;
    int *ptr ;
    int **pptr ;

    var = 3000 ;
    ptr = &var ;

    pptr = &ptr ;
    printf("var = %d\n" , var );       // 3000
    printf("*ptr = %d\n" , *ptr );     // 3000
    printf("**pptr = %d\n" , **pptr ); // 3000

    return 0 ;
}
