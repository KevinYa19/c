#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex1_1();
void ex1_2();
void ex1_3();
void ex1_4();
void hw1();
void hw2();
void hw3();
void hw4();

void main() {

	int input;
	_Bool flag = 1;

	while (flag) {
		printf("1. 第一個C程式語言\n");
		printf("2. 程式區塊與本體的範圍\n");
		printf("3. 控制輸出欄位的寬度\n");
		printf("4. 輸入函數scanf()\n");
		printf("5.hw1:請列印出 'Hello Every One, Welcome to the C World!'\n");
		printf("6.hw2:設x1=a, x2=b, x3=n請用x1, x2, x3列印出banana\n");
		printf("7.hw3:請運用for迴圈, 計算1+3+5+…+99\n");
		printf("8.hw4:請運用for迴圈, 計算1^2+2^2+3^2+…+10^2\n");
		printf("----------------------------------------------------\n");
		printf("請輸入要執行的範例?  1~8 ，按'0' 則結束執行!   ?    ");
		scanf("%d", &input);


		switch (input)
		{
		case 1:
			ex1_1();
			break;
		case 2:
			ex1_2();
			break;
		case 3:
			ex1_3();
			break;
		case 4:
			ex1_4();
			break;
		case 5:
			hw1();
			break;
		case 6:
			hw2();
			break;
		case 7:
			hw3();
			break;
		case 8:
			hw4();
			break;
		case 0:
			flag = 0;
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