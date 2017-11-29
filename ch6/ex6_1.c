#include<stdio.h>
#include<stdlib.h>
void output(void);
int ex6_1()
{
	printf("呼叫output函數!!\n");
	output();
	printf("呼叫結束，over!!\n");
	return 0;
}
/*  output()函數的定義  */
void output(void)
{
	printf("我喜歡iPhone 6s\n");
	printf("我也喜歡 Apple watch\n");
}
