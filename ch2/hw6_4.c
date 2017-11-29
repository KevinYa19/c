#include<stdio.h>
#include<stdlib.h>
void hw6_4(void)
{
	int a, b, c, d;
	printf("請輸入星星行數:");
	scanf("%d", &a);
	for (b = 1; b <= a; b++)
	{
		for (d = a; d >= (a - b + 2); d--)
		{
			printf(" ");
		}
		for (c = a; c >= b; c--)
		{
			printf("*");
		}

		printf("\n");
	}
}