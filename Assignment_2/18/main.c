/*
 * (18) Given two integers: L and R, Find the maximal value of A xor B
 *      where A and B satisfy the condition L =< A <= B <= R
 *      Constrains: 1 <= L <= R <= 1000
 *      Input format: the input contains two lines first line contains L and next line contains R.
 *      Output format: The maximum value of A xor B
 */

#include <stdio.h>
int Maximal(int A , int B) ;
int main(void)
{
	int L , R ;
	printf("Enter L : ");
	scanf("%d" , &L);

	printf("Enter R : ");
	scanf("%d" , &R);

	printf("%d\n" , Maximal(L , R));
	while(1);
	return 0 ;
}

int Maximal(int A , int B)
{
	int max ;
	max = ( A^B ) ;

	for(int i = A ; i<=B ; i++)
	{
		for(int j = i ; j<=B ; j++)
		{
			if( ( i^j)>max)
			{
				max = (i^j);
			}
			else
			{

			}
		}
	}
	return max ;
}
