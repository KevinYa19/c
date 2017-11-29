#include <stdio.h>
#include <stdlib.h>
hw1(void)
{
	int i, j, n = 5;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d", j);
		printf("\n");
	}
}