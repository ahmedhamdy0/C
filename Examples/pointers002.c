/* Call By Value and Call By Reference */
#include <stdio.h>

void CubeByRef(int *numPtr);
int CubeByVal(int num );

int main(void)
{
    int x = 5 ;
    printf("x = %d\n" , x );
    int c = CubeByVal(x) ;
    printf("x = %d\n" , x );
    CubeByRef(&x);
    printf("x = %d\n" , x );

    return 0 ;
}

int CubeByVal(int num )
{
    return num*num*num ;
}

void CubeByRef(int *numPtr)
{
    *numPtr = *numPtr * *numPtr * *numPtr ;
}
