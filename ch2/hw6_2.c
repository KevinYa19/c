#include<stdio.h>
#include<stdlib.h>
void hw6_2(void)
{
	int a, b, c;
	printf("請輸入星星的行數:");
	scanf("%d", &a);
	for (b = 1; b <= a; b++)
	{
		for (c = 1; c <= b; c++)
		{
			printf("*");
		}
		printf("\n");
	}
}