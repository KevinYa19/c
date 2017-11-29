#include <stdio.h>
#include <stdlib.h>
int init();
int getans();
int compare();
int t, ans;
void hw3(void)
{
	init();
	getans();
	compare();
}
int init()
{
	printf("歡迎來到猜數字遊戲!!\n");
	printf("請關主設定答案 t= ");
	scanf("%d", &t);
}
int getans()
{
	printf("請輸入您要猜的數字: ");
	scanf("%d", &ans);
	
}
int compare()
{
	if (ans == t)
		printf("恭喜猜對!!\n");
	else
		printf("很抱歉，猜錯了!!!\n");
}
