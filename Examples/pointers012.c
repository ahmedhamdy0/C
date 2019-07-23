/*
    Constent Pointer To Non-Constant Data
    ( we points to a specific location and can't assign to another location )
*/
#include <stdio.h>
int main(void)
{
    int x = 10 ;
    int y = 15 ;
    int *const ptr = &x ; // constant pointer to x address
    *ptr = 50 ; // valid .. we can modify data ( pointer to non-constant data)
    ptr = &y ;  // ERROR ... Constant Pointer .. Pointer to Only One Specific Location
    return 0 ;
}

