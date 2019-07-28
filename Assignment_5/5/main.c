/*  5.Write a C Function to store information (name, id and grade) for 10 students
 *    in array of structures using pointers and another function to print all the structures using pointers.
 */
#define NUMBER_OF_STUDENTS 10

#include <stdio.h>

typedef struct {
	char name[50] ;
	int id ;
	float grade ;
}Student;

void GetStudentsInfos(Student students[]) ;
int main(void)
{
	Student students[NUMBER_OF_STUDENTS] ;
	GetStudentsInfos(students) ;

	while(1);
	return 0 ;
}

void GetStudentsInfos(Student students[])
{
	int i ;
	Student *ptr = students ;

	for(i = 0 ; i<NUMBER_OF_STUDENTS ; i++)
	{
		printf("Name : ") ;
		scanf("%s" , ptr->name );

		printf("Id : ") ;
		scanf("%d" , &(ptr->id) );

		printf("Grade : ") ;
		scanf("%f" , &(ptr->grade) );
		ptr++ ;
		printf("\n\n") ;
	}

	// print students
	ptr = students ;
	for(i = 0 ; i<NUMBER_OF_STUDENTS ; i++)
	{
		printf("Name : %s\n" , ptr->name ) ;
		printf("Id : %d\n" , ptr->id) ;
		printf("Grade : %f\n" , ptr->grade) ;
		ptr++ ;
		printf("\n\n") ;
	}
}










