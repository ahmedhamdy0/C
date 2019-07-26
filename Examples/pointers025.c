#include <stdio.h>
int main(void)
{
    int i ;
    int j ;

    int Arr2D[2][2] = { {1,2} , {3,4} } ;
    int (*Arr2D_ptr)[2] = Arr2D ; /* pointer to array of two elements */
    for(i=0 ; i<2 ; i++)
    {
        for(j=0 ; j<2 ; j++)
        {
            printf("Arr2D_ptr[%d][%d]=%d\n" , i , j , Arr2D_ptr[i][j]);
        }
    }

    return 0 ;
}
