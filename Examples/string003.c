// Array of Strings = Array of Character arrays
#include <stdio.h>
int main(void)
{
    char str[2][20] = {"Embedded" , "Systems"} ;
    printf("Str[0] = %s\n" , str[0]) ;
    printf("Str[1] = %s\n" , str[1]) ;

    printf("Str[1][3] = %c\n" , str[1][3]) ;

    return 0 ;
}
