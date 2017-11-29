#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

char charconvert(ch);
int c;
int hw()
{
	char ch;
	printf("請輸入一個英文字母 :");
	ch = _getche();
	charconvert(ch);
	printf("\n轉換後:%c\n", c);
}
char charconvert(char ch)
{
	
	if (ch >= 97 && ch <= 122)
	{
		c = ch - 32;
		return c;
	}
	else if (ch >= 65 && ch <= 90)
	{
		c = ch + 32;
		return c;
	}
	else
	{
		c = ch;
		return c;
	}
		
}
