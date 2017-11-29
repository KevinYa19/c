#include<stdio.h>
#include<stdlib.h>
void output_1();
void dash();

int ex6_2()
{
	printf("呼叫output函數!!\n");
	dash();
	output_1();
	dash();
	printf("呼叫結束，over!!\n");
	return 0;
}
/*  output()函數的定義  */
void output_1()
{
	printf("我喜歡iPhone 6s\n");
	printf("我也喜歡 Apple watch\n");
}

void dash()
{
	int i;
	for (i = 1; i <= 50; i++)
	{
		printf("-");
	}
	printf("\n");
}