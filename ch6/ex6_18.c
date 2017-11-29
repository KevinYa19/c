#include<stdio.h>
#include<stdlib.h>

int factorial_1(int);

int ex6_18()
{
	int num;
	printf("Please input a number: ");
	scanf("%d", &num);
	printf("factorial(%d)=%d\n", num, factorial_1(num));
	return 0;
}

int factorial_1(int n)
{
	int k, total = 1;
	for (k = 1; k <= n; k++)
		total *= k;
	return total;
}