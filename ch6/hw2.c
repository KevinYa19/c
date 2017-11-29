#include<stdio.h>
#include<stdlib.h>

int num1, num2, rem=0;
int gcd2(int num1,int num2);

void hw2(void)
{
	printf("請輸入兩數:");
	scanf("%d %d", &num1, &num2);
	gcd2(num1,num2);
	printf("gcd=%d\n", gcd2(num1, num2));
}

int gcd2(int num1, int num2)
{
	while ( num2!=0)
	{
		rem = num1%num2;		
		num1 = num2; 
		num2 = rem;
	}
	return num1;
}