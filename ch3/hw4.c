#include <stdio.h>
#include <stdlib.h>
hw4(void)
{
	int i = 5, sum = 0, total = 0;
	total = total + sum;
	while (i <= 20)
	{

		sum = i*i;
		printf("%d*%d=%2d\n", i, i, sum);
		total = total + sum;
		i++;
	}

	printf("5^2+....20^2=%d\n", total);
}