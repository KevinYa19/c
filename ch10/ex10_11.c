#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
char tolower1();
void ex10_11()
{
	char ch;

	printf("�п�J�@�ӭ^��r�� :");
	ch = _getche();
	tolower1(ch);
}
char tolower1(char ch)
{
	if (isalpha(ch))
	{
		if (ch >= 'A'&& ch <= 'Z')
			printf("\n�ন�p�g��:%c\n", ch + 32);
	}
	else
		printf("\n%c �o���O�@�ӭ^��r��\n", ch);
	return ch;
}  
