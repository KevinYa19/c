void main()
{
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.  �r����X�J�d��\n");
		printf("2.  �ѨM�s��ϥ�scanf()�����D\n");
		printf("3.  getch(),getche(),getchar,putchar() ���ϥ�\n");
		printf("4.  getch() ���ϥ�\n");
		printf("5.  ��getchar() ��g1d�d��\n");
		printf("6.  isalnum() �d��\n");
		printf("7.  isalpha()  isdigit() �d��\n");
		printf("8.  isupper()  islower() �d��\n");
		printf("9.  toupper()  tolower() �d��\n");
		printf("10.  �g�@�Ө�Ƽ��� toupper()\n");
		printf("11.  �g�@�Ө�Ƽ��� tolower()\n");
		printf("12.  hw()\n");


		printf("------------------\n");
		printf("�п�J�n���檺�d��?�@1~10�A ��'0'�Y�i��������!  ? ");
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
			printf("��J���A�d��\n");
			flag = 0;
			break;
		}

		system("pause");
		system("cls");
	}
}