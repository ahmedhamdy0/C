/* 6. Create Union type called family_name it shall have two members first_name and last_name.
 *    The two members are array of characters with same size 30.
 *    Try to write string in the first member first_name then print the second member last_name
 *    plus print the size of the union.
 */
#include <stdio.h>
#include <string.h>

union family_name{
	char first_name[30] ;
	char last_name[30] ;
};


int main(void)
{
	union family_name family ;

	strcpy(family.first_name , "Hamdy") ;

	printf("First Name : %s\n" , family.first_name );
	printf("Last Name : %s\n" , family.last_name);

	printf("Size Of family_name union : %d Bytes\n" , sizeof(family) ) ;
	while(1);
	return 0 ;
}
