#include <stdio.h>
int main(void)
{
    /* String = 1D Array of Characters .
       Terminated by the NULL Char '\0' .
       we MUST Keep a place for the NULL character
     */

     char string[6] = {'H' , 'E', 'L','L','O','\0' } ; // if we don't pust '\0' = it will not a string
     char string1[6] = "HELLO"; // Null will be automatically added at the end
     char string2[] = "HELLO" ;

    return 0 ;
}
