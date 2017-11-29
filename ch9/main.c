void main()
{
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.  結構體的測試\n");
		printf("2.  結構體的成員存取\n");
		printf("3.  結構變數的初始化\n");
		printf("4.  練習(一)\n");
		printf("5.  練習(二)\n");
		printf("6.  結構與指標\n");
		printf("7.  結構指標變數作為方法傳遞的引數\n");
		printf("8.  利用結構陣列存取資料\n");
		printf("9.  定義一結構陣列，此陣列可存取10筆資料\n");
		printf("10. 練習(三)\n");
		printf("11.  malloc( )  練習\n");
		printf("12.  鏈結串列  練習\n");
		printf("13.  改寫 ex9_1 用鏈結串列練習\n");
		printf("14.  改寫 ex9_1 用鏈結串列練習 加上Del()功能\n");

		printf("------------------\n");
		printf("請輸入要執行的範例?　1~10， 按'0'即可結束執行!  ? ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ex9_1();
			break;
		case 2:
			ex9_2();
			break;
		case 3:
			ex9_3();
			break;
		case 4:
			ex9_4();
			break;
		case 5:
			ex9_5();
			break;
		case 6:
			ex9_6();
			break;
		case 7:
			ex9_7();
			break;
		case 8:
			ex9_8();
			break;
		case 9:
			ex9_9();
			break;
		case 10:
			ex9_10();
		    break;
		case 11:
			ex9_11();
			break;
		case 12:
			ex9_12();
			break;
		case 13:
			ex9_13();
			break;
		case 14:
			ex9_14();
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