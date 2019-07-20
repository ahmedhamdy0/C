/* (12) Write a C function that calculates the required heater activation time according to the input temperature of water.
 *     - if input temperature is from 0 to 30, then required heating time = 7 mins.
 *     - if input temperature is from 30 to 60, then required heating time = 5 mins.
 *     - if input temperature is from 60 to 90, then required heating time = 3 mins.
 *     - if input temperature is more than 90, then required heating time = 1 mins.
 *     - if temperature is invalid (more than 100), return 0
 *
 *	 	Example: Input = 10  output = 7 Input = 35  output = 5
 */
#include <stdio.h>
int TimeRequired( float );

int main(void)
{
	printf("Time Required For 95 Degs = %d\n", TimeRequired(95));
	while(1);
	return 0 ;
}

int TimeRequired( float water_temprature )
{
	int required_time ;

	if( water_temprature>=0 && water_temprature<30 )
		required_time = 7 ;
	else if( water_temprature>=30 && water_temprature<60 )
		required_time = 5 ;
	else if( water_temprature>=60 && water_temprature<90 )
		required_time = 3 ;
	else if( water_temprature>=90 && water_temprature<=100 )
		required_time = 1 ;
	else if(water_temprature>100)
		required_time = 0 ;
	return required_time ;
}
