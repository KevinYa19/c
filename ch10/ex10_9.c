#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

void ex10_9()
{
	char ch;
	printf("�п�J�@�ӭ^��r��:");
	ch = _getche();
	/*����toupper*/
	printf("\n���r�����j�g�O %c \n", toupper(ch));
	/* ����tolower */
	printf("���r�����p�g�O %c\n", tolower(ch));

}