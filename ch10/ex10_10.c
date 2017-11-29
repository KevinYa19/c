#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
char toupper1();
void ex10_10()
{
	    char ch; 
		printf("請輸入一個英文字母 :");
	    ch = _getche();
		toupper1(ch);
}
char toupper1(char ch)
{
	if (isalpha(ch))
	{
		if (ch >= 'a'&& ch <= 'z')
			printf("\n轉成大寫後:%c\n", ch - 32);
	}
	else
		printf("\n%c 這不是一個英文字母\n", ch);
}