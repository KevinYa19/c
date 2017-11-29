#include<stdio.h>
#include<stdlib.h>

int factorial(int);

int ex6_17()
{
	int num;
	printf("Please input a number: ");
	scanf("%d", &num);
	printf("factorial(%d)=%d\n", num, factorial(num));
	return 0;
}

int factorial(int n)
{
	if (n > 1)
		return (n * factorial(n - 1));
	else
		return 1;
}