#include"interrput.h"
#include"time.h"
unsigned int percent=0;//percent表示时间
unsigned int target=6;//target表示维持高电平的时间     

void Timer0() interrupt 1 using 0
{

	percent += 1;

	if(percent == 200)

	{

		percent = 0;

		pwm1 = 1;//拉高电平的引脚，来维持50hz的频率

	}

	if(percent == target)

	{

		pwm1 = 0;

	}

	Timer0Initial();

 

}

