#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>

void ex10_6()
{
	char ch;
	printf("�п�J�@�Ӧr��: ");
	ch = _getche();
	if (isalnum(ch))
		printf("\n %c �O�@�ӭ^��r���μƦr \n", ch);
	else
		printf("\n %c ���O�@�ӭ^��r���μƦr \n", ch);

}