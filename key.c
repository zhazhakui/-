#include"key.h"
#include"time.h"
extern unsigned int target;//����ȫ�ֱ���
void keyscan()//����������
{

	if(key1 == 0)//��С��ת�Ƕ�
	{
	     delay(3); //����
	     if(key1 == 0)
    	{
		     if(target >= 7)
		     {
		    	target -= 2;
		     }
    		while(!key1);
    	}
	}

	if(key2 == 0)//������ת�Ƕ�
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
