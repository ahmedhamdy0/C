/*
    Example for non-constant pointer to constant data
   ( when we need to use some data but
    we need to make sure that this data will never be modified )
*/

#include<stdio.h>
void PrintData(const char *ptrString);
int main(void)
{
    char name[20] = "Ahmed Hamdy" ;
    PrintData(name);
    return 0 ;
}

void PrintData( const char *ptrString)
{
    int i = 0 ;
    while( *(ptrString+i) != '\0' )
    {
        printf("%c" , *(ptrString+i));
        i++ ;
    }
}
