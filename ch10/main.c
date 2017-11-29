void main()
{
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.  字元輸出入範例\n");
		printf("2.  解決連續使用scanf()的問題\n");
		printf("3.  getch(),getche(),getchar,putchar() 的使用\n");
		printf("4.  getch() 的使用\n");
		printf("5.  用getchar() 改寫1d範例\n");
		printf("6.  isalnum() 範例\n");
		printf("7.  isalpha()  isdigit() 範例\n");
		printf("8.  isupper()  islower() 範例\n");
		printf("9.  toupper()  tolower() 範例\n");
		printf("10.  寫一個函數模擬 toupper()\n");
		printf("11.  寫一個函數模擬 tolower()\n");
		printf("12.  hw()\n");


		printf("------------------\n");
		printf("請輸入要執行的範例?　1~10， 按'0'即可結束執行!  ? ");
		scanf("%d", &input);
		while (getchar() != '\n')
			;

		switch (input)
		{
		case 1:
			ex10_1();
			break;
		case 2:
			ex10_2();
			break;
		case 3:
			ex10_3();
			break;
		case 4:
			ex10_4();
			break;
		case 5:
			ex10_5();
			break;
		case 6:
			ex10_6();
			break;
		case 7:
			ex10_7();
			break;
		case 8:
			ex10_8();
			break;
		case 9:
			ex10_9();
			break;
		case 10:
			ex10_10();
			break;
		case 11:
			ex10_11();
			break;
		case 12:
			hw();
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