#include<stdio.h>
#include<stdlib.h>


int ex10_5()
{
	/*��ܿ�X�ϥ�getche()*/
	char option;
	do {
		printf("\n");
		printf("1) ipad nano \n");
		printf("2) iphome \n");
		printf("3) iMac \n");
		printf("�п�ܱz�n���ӫ~(1..3)��q����");
		option = getchar(); /*�ϥ�getche()�ӱ����ﶵ*/
		while (getchar() != '\n')
			;
		switch (option)
		{
		case '1': printf("\n�z��ܪ��ӫ~�O iPod   nano\n");
			break;
		case '2': printf("\n�z��ܪ��ӫ~�OiPhone\n");
			break;
		case '3': printf("\n�z��ܪ��ӫ~�OiMac\n");
			break;
		case 'q':  exit(0);
		default: printf("\n�S���o�˰ӫ~�A�Э��s��J !!!\n");
		}
	} while (option != 'q');
}



