// Arrays 001
#include <stdio.h>
int main(void)
{
    int n[10] ; // array of 10 Integers
    // initialize array with loop
    for(int i = 0 ; i<10 ; i++)
    {
        n[i] = 100 + i ;
    }
    // printing array elements
    for(int i = 0 ; i<10 ; i++)
    {
        printf("Element[%d] = %d\n" , i , n[i]);
    }
    return 0 ;
}
