#include <stdio.h>

void string_copy( char distString[] , char sourceString[])
{

    int i = 0 ;
    while(sourceString[i]!='\0')
    {
        distString[i]=sourceString[i];
        i++  ;
    }
    distString[i] = sourceString[i];
}

void main(void)
{
    /* Function to Copy a Sting to Another String */
    char str1[15], str2[15] = "Embedded C" ;
    string_copy(str1 , str2);
    printf("str1 = %s\n" , str1 );
}
