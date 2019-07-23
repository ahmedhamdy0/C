// Arrays 007
#define SIZE 6
#include <stdio.h>
int main(void)
{
    /* Multi-Dimensional Array ( Array of Arrays ) */

    // initialization [ 1 ]
    int a[2][2] = { {1,3} , {-2,5} } ;
    // initialization [ 2 ]
    int b[2][2] = {1 , 3 , -2 , 5 } ;
    // initialization [ 3 ]
    int c[][2] = { {1,3} , {-2,5} }; // number of elements MUST be specified
    // initialization [ 4 ]
    int x[2][2] = {1} ; //x[0][0] = 1 ... remaining elements = 0

    return 0 ;
}
