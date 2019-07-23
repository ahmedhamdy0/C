/* Constant Pointer To Constant Data */
#include <stdio.h>
int main(void)
{
    /*
        ptr is such a pointer always points to the same memory location
        and the data at this location can't be modified by the pointer
    */
    int x = 5 ;
    const int *const ptr = &x ; // constant pointer to constant data
    x = 30 ; // valid
    x = 10 ; // valid
    *ptr = 45 ; // Error .. Data (x) is READ ONLY to the Pointer
    int y = 6 ;
    ptr =  &y ; // Error .. Pointer Value is READ ONLY  ( constant pointer )
    return 0 ;
}
