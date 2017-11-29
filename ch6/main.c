#include<stdio.h>
#include<stdlib.h>
#include"c.h"

void ex6_1();
void ex6_2();
void ex6_3();
void ex6_4();
void ex6_5();
void ex6_6();
void ex6_7();
void ex6_8();
void ex6_9();
void ex6_10();
void ex6_11();
void ex6_12();
void ex6_13();
void ex6_14();
void ex6_15();
void ex6_16();
void ex6_17();
void ex6_18();
void ex6_19();
void ex6_20();
void ex6_21();
void ex6_22();
void hw1();
void hw2();
void hw3();
void hw4();
void hw5();
void hw6();
void hw7();

void main()
{
	int  input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.   呼叫function  \n");
		printf("2.   練習題1: 改寫範例function \n");
	    printf("3.   練習題2: 定義一函數 calculate(),要求使用者輸入整數資料,再判斷此資料是否大於或等於 60,以便印出 “pass” 或 “down”\n");
		printf("4.   利用函數計算一整數的平方值\n");
		printf("5.   測試 return 的作用測試開始!! \n");
		printf("6.   練習題3: 要求使用者輸入長和寬, 並計算其面積後回傳給主程式 \n");
		printf("7.   練習題4: 定義一函數要求使用者輸入一個值, 並將其絕對值回傳後輸出 \n");
		printf("8.   範例function-3a\n");
		printf("9.   利用函數輸入要印出的星星 \n");
		printf("10.  綜合8和9例題\n");
		printf("11.  練習題5: 參照範例3輸入三個 double 浮點數, 計算其立方和並加以輸出\n");
		printf("12.  定義一個全域變數\n");
		printf("13.  測試全域變數\n");
		printf("14.  測試函數在區域變數與全域變數間的取捨 \n");
		printf("15.  定義一全域變數 num, 於main 函數中輸入 num 的值, 再呼叫 cube 函數計算其三次方後回傳  \n");
		printf("16.  定義一全域變數, 並定義一 input 函數, 於函數中輸入該變數的值, 再回到 main 函數輸出  \n");
		printf("17.  遞回函數運算n!\n");
		printf("18.  一般函數運算n!\n");
		printf("19.  測試auto儲存類別的生命週期  \n");
		printf("20.  測試static儲存類別的生命週期  \n");
		printf("21.  測試register儲存類別  \n");
		printf("22.  測試extern儲存類別 \n");
		printf("23.  HW1: 遞迴函數求兩數的 gcd(最大公因數)\n");
		printf("24.  HW2: 非遞迴函數求兩數的 gcd(最大公因數)\n");
		printf("25.  HW3: 設計一猜數字遊戲, 先定義 init 函數 t 取得答案, 再定義 getans 函數, 取得使用者輸入的答案,                                最後再定義 compare 函數, 比較答案是否正確\n");
		printf("26.  HW4: 使定義二個函數, 一為印出三個整數的最大值, 二為印出三個整數的最小值\n");
		printf("27.  HW5: 以遞迴函數執行之,費氏數列的規則為某一項的值為其前二項的和, 假設 F0=1, F1=1,                                             則費氏數列為: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...\n");
		printf("28.  HW6: 以非遞迴函數執行之,費氏數列的規則為某一項的值為其前二項的和, 假設 F0=1, F1=1,                                           則費氏數列為: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...\n");
		printf("29.  HW7: 瀏覽一網頁時, 皆會提供到目前為止網頁被瀏覽的人數, 試以 static 儲存類別於函數中設計一計數器,                             每當呼叫該函數, 計數器的值都要自動累加, 最後輸出該函數被呼叫的次數\n");
		printf("-----------------------------------------------------------------------------------------------------------------------\n");
		printf("請輸入要執行的範例?　1~29， 按'0'即可結束執行!  ? ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ex6_1();
			break;
		case 2:
			ex6_2();
			break;
		case 3:
			ex6_3();
			break;
	    case 4:
			ex6_4();
			break;
		case 5:
			ex6_5();
			break;
		case 6:
			ex6_6();
			break;
		case 7:
			ex6_7();
			break;
		case 8:
			ex6_8();
			break;
		case 9:
			ex6_9();
			break;
		case 10:
			ex6_10();
			break;
		case 11:
			ex6_11();
			break;
		case 12:
			ex6_12();
			break;
		case 13:
			ex6_13();
			break;
		case 14:
			ex6_14();
			break;
		case 15:
			ex6_15();
			break;
		case 16:
			ex6_16();
			break;
		case 17:
			ex6_17();
			break;
		case 18:
			ex6_18();
			break;
		case 19:
			ex6_19();
			break;
		case 20:
			ex6_20();
			break;
		case 21:
			ex6_21();
			break;
		case 22:
			ex6_22();
			break;
		case 23:
			hw1();
			break;
		case 24:
			hw2();
			break;
		case 25:
			hw3();
			break;
		case 26:
			hw4();
			break;
		case 27:
			hw5();
			break;
		case 28:
			hw6();
			break;
		case 29:
			hw7();
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
