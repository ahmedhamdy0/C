// Arrays 003
#include <stdio.h>
void Increament( int num )
{
    num++ ;
    printf("%d\n" , num) ;
}
int main(void)
{
    // passing array element to a function by value
    int c[] = {2 , 3 , 4 };
    Increament( c[2] ) ;
    printf("%d\n" , c[2]);
    return 0 ;
}
