#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
char toupper1();
void ex10_10()
{
	    char ch; 
		printf("�п�J�@�ӭ^��r�� :");
	    ch = _getche();
		toupper1(ch);
}
char toupper1(char ch)
{
	if (isalpha(ch))
	{
		if (ch >= 'a'&& ch <= 'z')
			printf("\n�ন�j�g��:%c\n", ch - 32);
	}
	else
		printf("\n%c �o���O�@�ӭ^��r��\n", ch);
}