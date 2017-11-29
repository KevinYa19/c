#include <stdio.h>
#include <stdlib.h>
#include"c.h"


void main()
{
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.  驗證陣列名稱是一個指標常數\n");
		printf("2.  利用指標存取陣列的內容\n");
		printf("3.  雙重指標變數的範例\n");
		printf("4.  三重指標變數的範例\n");
		printf("5.  ex: 指標變數 除錯(一)\n");
		printf("6.  ex: 指標變數 除錯(二)\n");
		printf("7.  ex: 修改第一題，並判斷雙重指標變數佔多少byte\n");
		printf("8.  指標陣列與二維陣列(一)\n");
		printf("9.  指標陣列與二維陣列(二)\n");
		printf("10. hw\n");

		printf("------------------\n");
		printf("請輸入要執行的範例?　1~10， 按'0'即可結束執行!  ?");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ex8_1();
			break;
		case 2:
			ex8_2();
			break;
		case 3:
			ex8_3();
			break;
		case 4:
			ex8_4();
			break;
		case 5:
			ex8_5();
			break;
		case 6:
			ex8_6();
			break;
		case 7:
			ex8_7();
			break;
		case 8:
			ex8_8();
			break;
		case 9:
			ex8_9();
			break;
		case 10:
			ex8_10();
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