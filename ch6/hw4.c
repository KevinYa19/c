#include <stdio.h>
#include <stdlib.h>
int MAX();
int MIN();
int a, b, c;
void hw4(void)
{
	printf("請輸入三個整數: ");
	scanf("%d %d %d", &a, &b, &c);
	MAX();
	MIN();
}
int MAX()
{
	if (a>b)
		if (a>c)
			printf("max=%d\n", a);
		else
			printf("max=%d\n", c);
	else
		if (b>c)
			printf("max=%d\n", b);
		else
			printf("max=%d\n", c);
}
int MIN()
{
	if (a<b)
		if (a<c)
			printf("min=%d\n", a);
		else
			printf("min=%d\n", c);
	else
		if (b<c)
			printf("min=%d\n", b);
		else
			printf("min=%d\n", c);
}
