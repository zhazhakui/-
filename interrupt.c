#include"interrput.h"
#include"time.h"
unsigned int percent=0;//percent��ʾʱ��
unsigned int target=6;//target��ʾά�ָߵ�ƽ��ʱ��     

void Timer0() interrupt 1 using 0
{

	percent += 1;

	if(percent == 200)

	{

		percent = 0;

		pwm1 = 1;//���ߵ�ƽ�����ţ���ά��50hz��Ƶ��

	}

	if(percent == target)

	{

		pwm1 = 0;

	}

	Timer0Initial();

 

}

