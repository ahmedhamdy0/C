#include <stdio.h>
int main(void)
{
    /* Conside 32-Bit Processor , What Will Be the Output ? */
    char Array[][10] ={"Apple" , "Orange" , "Banana" };

    const char *ptrArray = &Array[0] ;  // Address First Element ("Apple")
    printf("%d\n" , sizeof(Array[1]) ) ;// 10 Static Allocation each element [10] bytes
    printf("%c\n" , Array[1][11]) ;     // a .. they all are contiguously allocated in Data Memory
    printf("%d\n" , sizeof(ptrArray)) ; // 4 .. Address Bus size 4-Bytes
    ptrArray++ ;                        // ptrArray points to 'A' in Apple ... ptr++ Points to "pple"
    printf("%s\n" , ptrArray);          // pple

    return 0 ;
}
