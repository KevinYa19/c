#include<stdio.h>
#include<stdlib.h>

int ex8_8()
{
	int i;
	char str[4][20] = { "Department","Of","Information","Management" };
	for (i = 0; i < 4; i++)
	{
		printf("  str+%d =%p\n", i, str + i);
		printf("*(str+%d)=%p\n", i, *(str + i));
		printf("  str[%d]=%p\n", i, str[i]);
	}
}