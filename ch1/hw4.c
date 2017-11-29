#include <stdio.h>
#include <stdlib.h>
hw4(void)
{
	int i, n, sum = 0;
	for (i = 1; i <= 10; i = i + 1)
	{
		n = i*i;
		sum = sum + n;

	}
	printf("1^2+2^2+...10^2=%d\n", sum);
}
