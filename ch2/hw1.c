

#include <stdio.h>
#include <stdlib.h>


hw1(void)
{
	int x, y;
	printf("請輸入一個整數=");
	scanf("%d", &x);
	y = x % 2;
	if (y == 1)
	{
		printf("%d是奇數\n", x);
	}
	else if (y == 0)
	{
		printf("%d是偶數\n", x);
	}
}