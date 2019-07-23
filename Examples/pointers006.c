#include<stdio.h>
int main(void)
{
    int v[5] = {3} ;
    int *ptr1 = &v[0] ; // 1st element address
    int *ptr2 = &v[2] ; // 3d element address
    /*
    subtracting two pointers will give us
    The NUMBER OF ELEMENTS Between these locations
    */
    printf("ptr1 - ptr2 = %d\n" , ptr1-ptr2 ) ; // -2
    /*
     Negative Value ?
     because v[0] pushed first in the stack ( having low address )
    */
    return 0 ;
}
