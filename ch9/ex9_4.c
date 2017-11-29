
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int ex9_4()
{

	struct square
	{
		float length;
		double area;
	};
	struct square squ;
	printf("請輸入正方形的邊長: ");
	scanf("%f", &squ.length);
	squ.area = pow(squ.length, 2);
	printf("正方形的面積為: %.2lf\n", squ.area);
	return 0;
}