#include<stdio.h>
#include<stdlib.h>

void ex10_2()
{
	/*�B�zscanf() ��J�r�������I*/
	char ch;
	int i;
	for (i = 1; i <= 3; i++)
	{
		printf("#%d ��J����Ƭ�:", i);
		scanf("%c", &ch);
		printf("#%d ����X��Ƭ�: %c \n\n", i, ch);
		while (getchar() != '\n')
			continue;
	}
}