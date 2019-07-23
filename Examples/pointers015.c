/* Void Pointer ( Generic Pointer ) */
#include <stdio.h>
int main(void)
{
    void *ptr ; // void pointer .. can store any address
    char cnum = 'a' ;
    int inum = 10 ;
    float fnum = 55.5 ;
    ptr = &cnum;   // valid
    ptr = &inum ;  // valid
    ptr = &fnum ;  // also valid

    printf("%f\n" , *(float*)ptr) ; // 55.5 pointer has been casted to points to be a pointer to float 

    return 0 ;
}
