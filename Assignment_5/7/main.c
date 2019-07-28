/* 7. Create enum type called fan_level it shall have three values Level1, Level2 and Level3.
 *    This enum shall be used to control the level of the fan.
 */
#include <stdio.h>

enum fan_level{
	Level1 , Level2 , Level3
};

int main(void)
{
	enum fan_level fan1 = Level1 ;

	printf("Level1 = %d\n" , fan1 );
	if(fan1 == Level1 )
	{
		fan1 = Level2 ;
	}

	printf("Level2 = %d\n",fan1);

	if(fan1 == Level2)
	{
		fan1 = Level3 ;
	}
	printf("Level3 = %d\n",fan1);

	while(1);
	return 0 ;
}
