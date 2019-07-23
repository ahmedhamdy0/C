/*
Null Pointer : Pointer to Nothing
Null = 0 casted to be pointer to void ( so we can assign NULL to any pointer type )
*/
#define NULL (void*)0
#include<stdio.h>
int main(void)
{
    int x = 5 ;
    int *ptr=NULL ;
    printf("%p\n" , ptr);
    // good practice
    if(ptr==NULL)
    {
        ptr = &x ;
    }
    printf("%p\n" , ptr);
    return 0 ;
}
