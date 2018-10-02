#include"key.h"
#include"time.h"
extern unsigned int target;//设置全局变量
void keyscan()//按键检测程序
{

	if(key1 == 0)//减小旋转角度
	{
	     delay(3); //消抖
	     if(key1 == 0)
    	{
		     if(target >= 7)
		     {
		    	target -= 2;
		     }
    		while(!key1);
    	}
	}

	if(key2 == 0)//增大旋转角度
	{
		delay(3);
		if(key2 == 0)
		{
			if(target <= 26)
			{
				target += 2;
			}
			while(!key2);
		}
	}

}

 
 void initial()

{

	key1 = 1;

	key2 = 1;
	initial_Timer();

}
