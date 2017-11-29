#include<stdio.h>
#include<stdlib.h>

int ex8_10()
{
	char *str[13] = { "ab","cd","ef","gh","ij","kl","mn","op","qr","st","uv","wx","yz" };
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("­È= %c  ¦ì§}= %p \n", *(*(str + i) + j), (*(str + i) + j));
		}
	}
}