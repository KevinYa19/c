#include<stdio.h>
#include<stdlib.h>

void printstar(int);
int ex6_9()
{
	int num;
	printf("你要多少星星: ");
	scanf("%d", &num);
	printstar(num);
	return 0;
}

void printstar(int n)
{
	int i;
	for (i = 1; i <= n; i++)
		printf("*");
     	printf("\n");
}