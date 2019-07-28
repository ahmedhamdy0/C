/* 4. Write a C Function to calculate the difference between two time periods using structures. */
#include <stdio.h>

struct Time{
	int hours ;
	int minutes ;
	int seconds ;
};

void CalcPeriod( struct Time *period , struct Time t1 , struct Time t2) ;

int main(void)
{
	struct Time t1 ;
	struct Time t2 ;
	struct Time period ;

	t1.hours = 5 ;
	t1.minutes = 13 ;
	t1.seconds = 25 ;

	t2.hours = 9 ;
	t2.minutes = 24 ;
	t2.seconds = 30 ;

	CalcPeriod( &period , t1 , t2);
	printf("%d : %d : %d\n" , period.hours , period.minutes , period.seconds );


	while(1);
	return 0 ;
}
//-----------------------------------------------------------------------
void CalcPeriod( struct Time *period , struct Time t1 , struct Time t2)
{
	if(t2.seconds > t1.seconds)
	{
		--t1.minutes;
		t1.seconds +=60 ;
	}

	period->seconds = t1.seconds - t2.seconds ;

	if(t2.minutes > t1.minutes )
	{
		--t1.hours;
		t1.minutes +=60 ;
	}

	period->minutes = t1.minutes - t2.minutes ;
	period->hours = t1.hours - t2.hours ;

}
