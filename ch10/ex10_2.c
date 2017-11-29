#include<stdio.h>
#include<stdlib.h>

void ex10_2()
{
	/*處理scanf() 輸入字元的缺點*/
	char ch;
	int i;
	for (i = 1; i <= 3; i++)
	{
		printf("#%d 輸入的資料為:", i);
		scanf("%c", &ch);
		printf("#%d 的輸出資料為: %c \n\n", i, ch);
		while (getchar() != '\n')
			continue;
	}
}