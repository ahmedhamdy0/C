#include <stdio.h>
int main(void)
{
    /* What will be the output ? */
    unsigned long int a = 5 ;
    unsigned long int *b = &a ;
    unsigned long int c = *b ; // 5
    a = 7 ;
    printf("%lu\t%lu\n" , *b , c);
    return 0 ;
}
