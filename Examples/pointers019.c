#include <stdio.h>
int main(void)
{
    /* Pointer to Char */
    char *str = "ahmed";                    // valid
    printf("%p\t%s\n" , str , str) ;
    str = "hamdy" ;                         // valid
    printf("%p\t%s\n" , str , str) ;
    *str = "osama" ;// Not Valid .. Run But Crashed .. Try To Modify READ ONLY Data
    return 0 ;
}
