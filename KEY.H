#ifndef _KEY_H_
#define _KEY_H_

#include<reg52.h>

sbit key1 = P2^5;  // ¶ÀÁ¢°´¼üÒı½Å
sbit key2 = P2^4;  

void keyscan();
void initial();

#endif