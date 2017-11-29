#include<stdio.h>
#include<stdlib.h>

double squAdd_1(double, double,double);
void printstar_2();

int ex6_11()
{
	double num1, num2,num3, sum;
	int i;
	printf("此程式在計算三浮點數的立方和\n\n");
	printf("請輸入三個浮點數:\n ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);
	printf("請輸入要印出的星星數: ");
	scanf("%d", &i);
	sum = squAdd_1(num1, num2, num3);
	printstar_2(i);
	printf("%lf 的立方 + %lf 的立方 + %lf 的立方為:  %lf\n", num1, num2,num3, sum);
	printstar_2(i);
	return 0;
}


double squAdd_1(double a, double b,double c)
{
	double ans;
	ans = a*a*a + b*b*b + c*c*c;
	return ans;
}

void printstar_2(i)
{
	int j;
	for (j = 1; j <= i; j++)
		printf("*");
	printf("\n");
}