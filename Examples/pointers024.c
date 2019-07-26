#include <stdio.h>
int main(void)
{
    /* Common Use for Array of Pointers */
    char *suit[4] = {"Hearts" , "Diamonds" , "Cubs" , "Spades" };
    for(int i = 0 ; i<4 ; i++)
        printf("%s\n" ,suit[i]);
    return 0 ;
}
