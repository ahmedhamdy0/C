#include <stdio.h>
int main(void)
{
    /*
    If there are fewer initializers than the elements in the array
    the remaining elements are initialized to ZERO
    */
    int x[5] = {3};
    for(int i = 0 ;i<5 ;i++)
        printf("%d\t" , x[i]); // 3 0 0 0 0
    return 0 ;
}
