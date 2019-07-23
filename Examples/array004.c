// Arrays 004
#include <stdio.h>
void Increament( int *num )
{
    *num = *num + 1 ;
    printf("%d\n" , *num) ;
}
int main(void)
{
    // passing array element to a function by reference
    int c[] = {2 , 3 , 4 };
    Increament( &c[2] ) ;
    printf("%d\n" , c[2]);
    return 0 ;
}
