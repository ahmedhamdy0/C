#include<stdio.h>
int main(void)
{
    /*What will be the output ? */
    int a = 3 , b = 5 ;
    int *p1 = &a ;
    int *p2 = &b ;
    int c = p1-p2 ;
    printf("%d\n" , p1-p2) ; // 1
    return 0 ;
}
