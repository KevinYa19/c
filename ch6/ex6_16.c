#include<stdio.h>
#include<stdlib.h>

int num;
int input_2();

int ex6_16()
{
	int data;
	printf("請輸入一數值: ");
	scanf("%d", &num);
	data = input_2();
	printf("&d\n", data);
	return 0;
}

int input_2()
{
	return(num*num*num) ;
}
