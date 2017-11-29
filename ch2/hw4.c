#include <stdio.h>
#include <stdlib.h>
hw4(void)
{
	int x, y, sum, money;
	printf("歡迎光臨\n");
	printf("珍珠紅茶 45元;烏龍拿鐵 55元\n");
	printf("請問客人各需要幾杯\n");
	printf("珍珠奶茶=");
	scanf("%d", &x);
	printf("烏龍拿鐵=");
	scanf("%d", &y);
	sum = x + y;
	money = x * 45 + y * 55;
	if (sum > 15 && money >= 800)
		money *= 0.9;
	printf("總共%d杯\n", sum);
	printf("總金額是%d元\n", money);
}