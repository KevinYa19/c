#include<stdio.h>
#include<stdlib.h>

int num;
void cube();

int ex6_15()
{
	printf("請輸入一將其三次方的整數值: ");
	scanf("%d", &num);
	cube();
	return 0;
}

void cube()
{
	int sum;
	sum = num*num*num;
	printf("三次方後的值為: %d\n", sum);
	return 0;
}