#include <stdio.h>
#include <stdlib.h>

ex2_9(void)
{
	int a, b;
	char oper;
	printf("Please 輸入加數: ");    scanf("%d", &a);
	printf("Please 輸入被加數: ");  scanf("%d", &b);
	printf("Please 輸入運算符號 +,-,*,/: ");  scanf(" %c", &oper);

	switch (oper)
	{
	case '+':
		printf("%d+%d=%d\n", a, b, a + b);    /* 印出a+b */
		break;
	case '-':
		printf("%d-%d=%d\n", a, b, a - b);    /* 印出a-b */
		break;
	case '*':
		printf("%d*%d=%d\n", a, b, a*b);      /* 印出a*b */
		break;
	case '/':
		printf("%d/%d=%d\n", a, b, a / b);  /* 印出a%b */
		break;
	default:
		printf("input error!!\n");            /* 印出字串 */
	}
}