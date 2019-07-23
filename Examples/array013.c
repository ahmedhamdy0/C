#include <stdio.h>

int main()
{
   int a[2][2];
   int b[2][2];
   int c[2][2];

   int i,j;

   printf("Enter the elements of 1st matrix\n");

   for(i=0;i<2;++i)
   {
       for(j=0;j<2;++j)
       {
            printf("Enter a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
       }
   }

   printf("Enter the elements of 2nd matrix\n");
   for(i=0;i<2;++i)
   {
       for(j=0;j<2;++j)
       {
            printf("Enter b[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
       }
   }

   //--------------------
   for(i=0;i<2;++i)
   {
       for(j=0;j<2;++j)
       {
            /* Writing the elements of multidimensional array using loop. */
            c[i][j]=a[i][j]+b[i][j];  /* Sum of corresponding elements of two arrays. */
       }
   }

    printf("\nSum Of Matrix:\n");
    for(i=0;i<2;++i)
    {
        for(j=0;j<2;++j)
        {
            printf("%d\t",c[i][j]);
            if(j==1)             /* To display matrix sum in order. */
            {
                printf("\n");
            }
        }
    return 0;
}
