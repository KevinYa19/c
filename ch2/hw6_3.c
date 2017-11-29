#include<stdio.h>
#include<stdlib.h>
void hw6_3(void)
{
	int a, b, c;
	printf("請輸入星星行數:");
	scanf("%d", &a);
	for (b = 1; b <= a; b++)
	{
		for (c = a; c >= b; c--)
		{
			printf("*");
		}
		printf("\n");
	}
}