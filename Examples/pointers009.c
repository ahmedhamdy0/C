//* what will be the output */
#include<stdio.h>
int main(void)
{
    long arr[20] ;
    printf("%d\n" , sizeof(arr)) ;    // 20 * 4Bytes = 80
    printf("%d\n" , sizeof(*arr)) ;   // address bus size = 4
    printf("%d\n" , sizeof(arr)/sizeof(*arr) ) ; // num of elements = 20

    return 0 ;
}
