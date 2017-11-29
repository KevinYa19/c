#include<stdio.h>
#include<stdlib.h>

int n, i, sum1;
void seq();
int F0 = 1, F1 = 1;

int hw5(void)
{
	printf("請輸入項數: ");
	scanf("%d", &n);
	printf("%d,%d",F0, F1);
	seq();
}

void seq()
{
	if (n == 2)
	{
		F0 = 1, F1 = 1;
		return 0;
	}
	else
	{
		sum1 = F0 + F1;
		F0 = F1;
		F1 = sum1;
		printf(",%d", sum1);
		n--;
		seq();
	}
}