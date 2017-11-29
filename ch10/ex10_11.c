#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
char tolower1();
void ex10_11()
{
	char ch;

	printf("請輸入一個英文字母 :");
	ch = _getche();
	tolower1(ch);
}
char tolower1(char ch)
{
	if (isalpha(ch))
	{
		if (ch >= 'A'&& ch <= 'Z')
			printf("\n轉成小寫後:%c\n", ch + 32);
	}
	else
		printf("\n%c 這不是一個英文字母\n", ch);
	return ch;
}  
