#include<stdio.h>
#include<stdlib.h>

void ex9_5()
{
	struct data
	{
		char name[20];
		int score;
	};
	struct data num = { "邱翊維", 100 };

	printf("學生姓名: %s\n", num.name);
	printf("學生成績: %d\n", num.score);


}