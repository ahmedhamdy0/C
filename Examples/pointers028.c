#include <stdio.h>
int main(void)
{
    /*What will be the output ? */
    char board[3][3] = { {'1','2','3'} , {'4','5','6'}, {'7','8','9'} } ;
    int i ;
    for(i = 0 ; i<9 ; i++)
    {
        printf("board : %c\n" , *(*board+i) );
    }
    return 0 ;
}
