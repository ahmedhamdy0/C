/*
(21) Write a program to display cross or X-shape using stars pattern.

  *		  *
   *     *
    *   *
     * *
     * *
    *   *
   *     *
  *       *

*/
#include <stdio.h>
int main(void)
{
	int rows = 20 ;
	int i , j ;

    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows;j++)
        {
            if( (j==i) || (j==rows-i-1) )
            {
                printf(" *");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

	while(1);
	return 0 ;
}
