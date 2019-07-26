#include<stdio.h>
int x = 10 , y = 20 ; // global variables

void func_ex(int **ptr2ptr )
{
    *ptr2ptr = &y ;
    **ptr2ptr = 50 ;
}

int main(void)
{
    int *ptr = &x ;
    printf("Value of x = %d\n" , x) ;
    printf("Address of x = %p\n" , &x) ;

    printf("Value of y = %d\n" , y) ;
    printf("Address of y = %p\n" , &y) ;

    printf("Value of *ptr = %d\n" , *ptr) ;
    printf("Address of ptr = %p\n" , ptr) ;

    func_ex(&ptr);
    printf("Value of *ptr = %d\n" , *ptr) ;
    printf("Address of ptr = %p\n" , ptr) ;
}
