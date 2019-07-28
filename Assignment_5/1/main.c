/* 1. Write a C Program to store information (name, roll and marks) for a student using structure and display it.*/

#include <stdio.h>
#include <string.h>

typedef struct {
	char name[100] ;
	int roll ;
	float marks ;
}Student ;


int main(void)
{
	Student s1 ;
	strcpy(s1.name , "Ahmed Hamdy") ;
	s1.roll = 4 ;
	s1.marks = 96.1 ;

	printf("Name  : %s\n" , s1.name);
	printf("Roll  : %d\n" , s1.roll) ;
	printf("Marks : %f\n" , s1.marks) ;
	while(1);
	return 0 ;
}


