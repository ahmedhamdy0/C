/* Dangling Pointer */
#include<stdio.h>

int* Fun(void)
{
    int x = 6 ;
    return &x ;
}

int main(void)
{
    /*
    Dangling Pointer : pointer to a memory location which has been deleted ( not available now )
    ( pointer to deleted object )
    ex : pointer to a function local variable
    */

    int *ptr ;
    ptr = Fun(); // address of x is will be not available after function call
    printf("%d\n" ,*ptr ); // unexpected compiler behaviour
    return 0 ;
}
