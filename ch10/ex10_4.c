#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int ex10_4()
{
	/*選擇輸出使用getche()*/
	char option;
	do {
		printf("\n");
		printf("1) ipad nano \n");
		printf("2) iphome \n");
		printf("3) iMac \n");
		printf("請選擇您要的商品(1..3)或q結束");
		option = _getche(); /*使用getche()來接受選項*/
	
	switch (option)
	{
	case '1': printf("\n您選擇的商品是 iPod   nano\n");
		break;
	case '2': printf("\n您選擇的商品是iPhone\n");
		break;
	case '3': printf("\n您選擇的商品是iMac\n");
		break;
	case 'q':  exit(0);
	default: printf("\n沒有這樣商品，請重新輸入 !!!\n");
	}
	}while (option != 'q');
} 




