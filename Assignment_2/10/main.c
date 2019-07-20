/*
  (10) You are designing a poster which prints out numbers with a unique style applied to each of them.
       The styling is based on the number of closed paths or holes present in a giver number.
       The number of holes that each of the digits from 0 to 9 have are equal to the number of closed paths in the digit.
       Their values are:
	   -> 1, 2, 3, 5 and 7 = 0 holes.
  	   -> 0, 4, 6, and 9 = 1 hole.
	   -> 8 = 2 holes.
	   Given a number, you must determine the sum of the number of holes for all of its digits.
	   For example, the number 819 has 3 holes.
       Function Description :
       Complete the function countHoles.
       The function must return an integer denoting the total number of holes in num.
*/

#include <stdio.h>
int CountHoles(int num );
int main(void)
{
	printf("%d\n", CountHoles(819));
	while(1);
	return 0 ;
}

int CountHoles(int num )
{
	int count = 0 ;
	int data = 0 ;
	if(num == 0)
	{
		count++ ;
	}
	else
	{
		while(num!=0)
		{
			data = num%10 ;
			if(data==0 || data==4 || data==6 || data==9)
			{
				count++ ;
			}
			else  if(data==8)
			{
				count +=2 ;
			}
			num = num/10 ;
		}
	}
	return count ;
}
