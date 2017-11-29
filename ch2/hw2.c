#include <stdio.h>
#include <stdlib.h>
hw2(void)
{
	int x, y;
	printf("請輸入攝氏溫度=");
	scanf("%d°C", &x);
	y = 1.8*x + 32;
	printf("華氏溫度=%d°F\n", y);
}