// Arrays 006
#define SIZE 6
#include <stdio.h>
// a[] is the actual original passed array
void Increament_Array(int a[] , int size )
{
    for(int i = 0 ; i<size ; i++)
    {
        a[i]++ ;
    }
}
int main(void)
{
    /*
    Pass One Dimension Array to a Function
    */
    int array[SIZE] = {10 , 20 , 30 , 40 , 50 , 60 } ;
    // we must pass array size because there were a specific terminator like char arrays
    Increament_Array(array , SIZE); // we pass array name only ( first element address )
    for(int i = 0 ; i<SIZE ; i++)
    {
        printf("array[%d] = %d\n" , i , array[i]);
    }
    return 0 ;
}
