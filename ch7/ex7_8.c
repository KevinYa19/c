#include<stdio.h>
#include<stdlib.h>

void swap1(int *, int *);

void ex7_8(void)
{
	int a = 5, b = 20;
	printf("Before swap1...");
	printf("a=%d,b=%d", a, b);
	printf("%p\n", &a);
	printf("%p\n", &b);

	swap1(&a, &b);
	printf("After swap1...");
	printf("a=%d,b=%d\n", a, b);
}

void swap1(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	printf("%p\n", &p1);
	printf("%p\n", &p2);
	printf("%p\n", p1);
	printf("%p\n", p2);
	printf("%d\n", *p1);
	printf("%d\n", *p2);
}