#include<stdio.h>
int main(void)
{
    int arr[5] ;
    printf("%p\n%p\n%p\n%p\n" , arr , arr+1 , &arr , &arr+1 ); // &arr+1 = (&arr)+1*numOfElement*emlement size

    return 0 ;
}
