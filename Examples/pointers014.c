/* Void Pointer ( Generic Pointer ) */
#include <stdio.h>
int main(void)
{
    /* Pointer Can Be Assigned to another pointer if they have the same type
       - void pointer can't be dereferenced
       - arithmetic operations is not like normal pointers ( void points to unknowns data types )
    */
    void *ptr ; // void pointer .. can store any address
    char cnum = 'a' ;
    int inum = 10 ;
    float fnum = 55.5 ;
    ptr = &cnum;   // valid
    ptr = &inum ;  // valid
    ptr = &fnum ;  // also valid

    printf("%f\n" , *ptr) ; // ERROR ... we need casting before dereferencing

    return 0 ;
}
