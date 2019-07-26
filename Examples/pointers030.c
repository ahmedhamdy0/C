#include <stdio.h>
void my_init_func(int x )
{
        printf("%d\n" , x);
}

int main(void)
{
    /*Pointer to Functions*/
    void (*ptr)(int) = my_init_func ; // pointer to function
    my_init_func(1); // normal function call
    ptr(2); // function call through a pointer
    (*ptr)(3); // second method to call a function through a pointer

    return 0 ;
}
