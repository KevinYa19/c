#include <stdio.h>
#include <stdlib.h>
hw3(void)
{

	int i, sum = 0;
	for (i = 1; i <= 99; i = i + 2)
	{
		sum = sum + i;

	}
	printf("1+2+3.....+99=%d\n", sum);
}