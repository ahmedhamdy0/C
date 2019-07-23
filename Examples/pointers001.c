#include <stdio.h>
int main(void)
{
    /*What will be the output in case of x86 32Bit Architecture */
    char *c ; // pointer size = Address Bus size
    char y ;

    printf("%d\t%d" , sizeof(c) , sizeof(y));

    return 0 ;
}
