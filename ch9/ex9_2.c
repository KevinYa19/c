
#include<stdio.h>
#include<stdlib.h>

int ex9_2()
{
	/* 宣告結構triangle的型態，以成員運算子" . "存取結構成員 */
	struct triangle
	{
		float length, height;	/* 三角形的長與高 */
		double area;		 /* 三角形的面積 */
	};
	struct triangle tri;
	printf("請輸入三角形的長: ");
	scanf("%f", &tri.length);	/* 以tri.length存取結構成員length */
	printf("請輸入三角形的高: ");
	scanf("%f", &tri.height);	/* 以tri.height存取結構成員height */
	tri.area = tri.length*tri.height / 2.0; /*以tri.area 存取結構成員area*/
	printf("三角形的面積為: %.2lf\n", tri.area);
	return 0;
}