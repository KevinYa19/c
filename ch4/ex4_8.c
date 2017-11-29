#include<stdio.h>
#include<stdlib.h>
void ex4_8(void) {
	int num[2][3], i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("請輸入num[%d][%d]的資料: ", i, j);
			scanf("%d", &num[i][j]);
		}
	}
	printf("\n此二維陣列的資料如下: \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%3d ", num[i][j]);
		}
		printf("\n");
	}
}