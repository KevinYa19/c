#include <stdio.h>
#include <stdlib.h>
#include"c.h"


void main()
{
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.  #define 範例\n");
		printf("2.  指標變數的使用範例\n");
		printf("3.  指標變數所佔的位元組\n");
		printf("4.  指標變數的練習\n");
		printf("5.  當指標指向錯誤的型態時\n");
		printf("6.  傳遞指標到函數\n");
		printf("7.  變數值的互換(一)\n");
		printf("8.  變數值的互換(二)\n");
		printf("9.  傳回多個數值的函數\n");
		printf("10. 陣列名稱的值即陣列的位址\n");
		printf("11. 指標的算數運算\n");
		printf("------------------\n");
		printf("請輸入要執行的範例?　1~11， 按'0'即可結束執行!  ?");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ex7_1();
			break;
		case 2:
			ex7_2();
			break;
		case 3:
			ex7_3();
			break;
		case 4:
			ex7_4();
			break;
		case 5:
			ex7_5();
			break;
		case 6:
			ex7_6();
			break;
		case 7:
			ex7_7();
			break;
		case 8:
			ex7_8();
			break;
		case 9:
			ex7_9();
			break;
		case 10:
			ex7_10();
			break;
		case 11:
			ex7_11();
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