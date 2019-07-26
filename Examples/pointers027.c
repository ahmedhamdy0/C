#include <stdio.h>
int main(void)
{
    /*what will be the output ?*/
    char board[3][3] = { {1,2,3},
                         {4,5,6},
                         {7,8,9}
                       };
    printf("Value of board[0][0] : %d\n" , board[0][0] );
    printf("Value of *board[0] : %d\n" , *board[0]);
    printf("Value of **board: %d\n" , **board);

    return 0 ;
}
