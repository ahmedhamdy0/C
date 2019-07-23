// Arrays 008
#include <stdio.h>
void display_array(int array[2][2])
{
    int i , j ;
    for(i=0 ; i<2 ; i++)
    {
        for(j = 0 ; j<2; j++)
        {
            printf("%d\t" , array[i][j]) ;
        }
    }
}
int main(void)
{
    // Passing Multi-Dimensional Array To a function
    int c[2][2] ;
    int i , j ;

    printf("Enter Four Numbers :\n");
    for(i = 0 ; i<2 ; i++)
    {
        for(j = 0 ; j<2 ; j++)
        {
            scanf("%d" , &c[i][j]);
        }
    }

    display_array(c); // call by address
    return 0 ;
}
    /* Note : 
        int x[3][5] == int x[15] ; 
    */ 

