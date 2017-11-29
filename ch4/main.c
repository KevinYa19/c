#include <stdio.h>
#include <stdlib.h>
#include"c.h"

void ex4_1();
void ex4_2();
void ex4_3();
void ex4_4();
void ex4_5();
void ex4_6();
void ex4_7();
void ex4_8();


void main()
{
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.do while迴圈\n");
		printf("2.陣列的範例\n");
		printf("3.輸入10個整數存入陣列，再從陣列讀出\n");
		printf("4.輸出陣列每一元素的位址\n");
		printf("5.輸出陣列佔幾bytes\n");
		printf("6.陣列的應用－最大與最小值\n");
		printf("7.陣列界線的檢查\n");
		printf("8.顯示陣列指標位置\n");
		printf("------------------\n");
		printf("請輸入要執行的範例?  1~8， 按'0'即可結束執行!  ?");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ex4_1();
			break;
		case 2:
			ex4_2();
			break;
		case 3:
			ex4_3();
			break;
		case 4:
			ex4_4();
			break;
		case 5:
			ex4_5();
			break;
		case 6:
			ex4_6();
			break;
		case 7:
			ex4_7();
			break;
		case 8:
			ex4_8();
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