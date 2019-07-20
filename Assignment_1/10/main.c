/*
 * Write a program to make a simple calculator using switch-case.
 * The calculator takes the operation (+ or – or * or /) and takes the two input arguments
 * and print the results.
 */
#include <stdio.h>
int main(void)
{
	int num1 , num2 , result ;
	char op ;

	printf("Enter First Number : ");
	scanf("%d" , &num1) ;

	printf("Enter Operation ");
	fflush(stdin);
	scanf("%c" , &op) ;

	printf("Enter Second Number : ");
	scanf("%d" , &num2) ;

	switch(op){
	case '+' :
		result = num1 + num2 ;
		printf("%d %c %d = %d\n" , num1 , op , num2 , result) ;
		break ;
	case '-':
		result = num1 - num2 ;
		printf("%d %c %d = %d\n" , num1 , op , num2 , result) ;
		break ;
	case '*' :
		result = num1 * num2 ;
		printf("%d %c %d = %d\n" , num1 , op , num2 , result) ;
		break ;
	case '/':
		result = num1 / num2 ;
		printf("%d %c %d = %d\n" , num1 , op , num2 , result) ;
		break ;
	default :
		printf("Error !") ;
	}

	return 0 ;
}
