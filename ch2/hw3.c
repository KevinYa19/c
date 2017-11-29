#include <stdio.h>
#include <stdlib.h>
hw3(voud)
{
	int x;
	printf("請輸入氣溫=");
	scanf("%d°C", &x);
	if (x >= 20 && x <= 22)
	{
		printf("請加一件薄外套!\n");
	}
	if (x >= 14 && x <= 19)
	{
		printf("天氣冷,請穿上外套!\n");
	}
	if (x >= 23 && x <= 36)
	{
		printf("天氣好,適合外出旅遊!\n");
	}
	if (x >= 37)
	{
		printf("天氣炎熱,小心曬傷\n");
	}
	if (x >= 0 && x <= 13)
	{
		printf("天氣寒冷,注意保暖!\n");
	}
}