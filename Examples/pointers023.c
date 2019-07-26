#include <stdio.h>

const int MAX = 3 ;

int main(void)
{
    /* Array Of Pointers */
    int var[] = {10,100,200};
    int *ptr[MAX]; // array of pointers to 3 integers
    int i ;
    for(i=0 ; i<MAX ; i++)
    {
        ptr[i] = &var[i];
    }
    for(i = 0 ; i<MAX ; i++)
    {
        printf("var[%d] = %d\n" , i , *ptr[i]) ;
    }
    return 0 ;
}
