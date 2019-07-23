/*
    Non-Constant Pointer to Constant Data
    ( when we need to points to a READ ONLY Data )
    the pointer can be assigned to any location
    but can't modify ( write ) this location
*/
#include<stdio.h>
int main(void)
{
    int x = 10 , y = 15 ;
    const int *ptr ; // Pointer to Constant Data
    ptr = &x ;  // valid
    ptr = &y ;  // also valid
    y = 20 ;
    *ptr = 5 ; // Error ... y is READ ONLY ( CONSTANT DATA )
    return 0 ;
}
