#include<stdio.h>
#include<stdlib.h>

float Area();
int  ex6_6()
{
	float area;
	printf("請輸入長和寬\n");
	area = Area();
	printf("面積為: %f \n", area);
	return 0;
}


float Area()
{
	float i, j;
	printf("請輸入長: ");
	scanf("%f",&i);
	printf("請輸入寬: ");
	scanf("%f",&j);
	return(i*j);
}