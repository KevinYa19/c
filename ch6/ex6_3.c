#include<stdio.h>
#include<stdlib.h>

void calculate();
int ex6_3()
{
	calculate();
}
void calculate()
{
	int i;
	printf("Please input am integet: ");
	scanf("%d", &i);
	
	if (i >= 60)
		printf("Pass\n");
	else
		printf("Down\n");
}