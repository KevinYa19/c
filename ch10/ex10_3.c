#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void output(char);

void ex10_3()
{
	/*���զr������X�J*/
	char ch;
	printf("\n\n ...�ϥ�getch()...\n");
	printf("�п�J�@�r��");
	ch = _getch(); /* �ϥ�getch( )��J */
	output(ch);
	printf("\n\n...�ϥ�getche()...\n");
	printf("�п�J�@�r��");
	ch = _getche();/*�ϥ�getche( )��J*/
	output(ch);
	printf("\n\n�K�ϥ� getchar()...\n");
	printf("�п�J�@�r��: ");
	ch = getchar();/*�ϥ�getchar( )��J*/
	output(ch);
	printf("\n");
	//system("PAUSE");
	//return 0;
}
/* �w�qoutput( )��ơA�ǻ��ѼƥHc���� */
void output(char c) {
	printf("\n�ϥ� putchar()��X�r��: ");
		putchar(c);  /* �ϥ�putchar( )��X�r�� */
}

