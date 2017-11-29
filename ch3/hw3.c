#include <stdio.h>
#include <stdlib.h>
hw3(void)
{
	int i;
	printf(" 請輸入1~4的數值範圍 ? ："); scanf(" %d", &i);
	switch (i)
	{
	case 1:
		printf("%d:春天\n,", i);
		break;
	case 2:
		printf("%d:夏天\n", i);
		break;
	case 3:
		printf("%d:秋天\n", i);
		break;
	case 4:
		printf("%d:冬天\n", i);
		break;
	default:
		printf("輸入錯誤\n");
	}

}