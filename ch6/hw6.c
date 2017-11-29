#include<stdio.h>
#include<stdlib.h>

int n,i,sum1;
void seq2();

void hw6(void)
{
	printf("請輸入項數: ");
	scanf("%d", &n);
	seq2();
	
}

void seq2()
{
	int F0 = 1,F1=1;	
	printf("%d,%d", F0, F1);
	for (i = 1; i <= (n-2); i++)
	{		
		sum1 = F0 + F1;
		F0 = F1;
		F1 = sum1;
		printf(",%d", sum1);
	}
	printf("\n");
}