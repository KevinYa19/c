#include <stdio.h>
#include <stdlib.h>
#include"c.h"

void ex5_1();
void ex5_2();
void ex5_3();
void ex5_4();
void ex5_5();
void ex5_6();
void ex5_7();
void ex5_8();
void ex5_9();
void ex5_10();


void main()
{
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.二維陣列元素的存取\n");
		printf("2.此二維陣列表示-考三天(列註標)，一天考三科(行註標)\n");
		printf("3.少一個元素補0\n");
		printf("4.另一種少一個元素補0\n");
		printf("5.除錯\n");
		printf("6.練習題一\n");
		printf("7.三維陣列的應用－最大與最小值\n");
		printf("8.氣泡排序法\n");
		printf("9.二分搜尋法\n");
		printf("10.練習題二\n");
		printf("------------------\n");
		printf("請輸入要執行的範例?　1~10， 按'0'即可結束執行!  ?");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ex5_1();
			break;
		case 2:
			ex5_2();
			break;
		case 3:
			ex5_3();
			break;
		case 4:
			ex5_4();
			break;
		case 5:
			ex5_5();
			break;
		case 6:
			ex5_6();
			break;
		case 7:
			ex5_7();
			break;
		case 8:
			ex5_8();
			break;
		case 9:
			ex5_9();
			break;
		case 10:
			ex5_10();
			break;
		default:
			printf("輸入不再範圍內\n");
			flag = 0;
			break;
		}

		system("pause");
		system("cls");
	}
}