/*(3) Write a C Function that check if the number if positive or negative*/
#include <stdio.h>

void IsPositive(int);

int main(void)
{
	int x ;
	printf("Enter a Number : ");
	scanf("%d" , &x);

	IsPositive(x);

	return 0 ;
}

void IsPositive(int num)
{
	if(num>0)
	{
		printf("%d Is a Positive Number\n" , num);
	}
	else if (num<0)
	{
		printf("%d Is a Negative Number\n" , num);
	}
	else
	{
		printf("Number Is ZERO\n");
	}
}
