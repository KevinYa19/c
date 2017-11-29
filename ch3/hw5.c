#include <stdio.h>
#include <stdlib.h>
hw5(void)
{
	int n = 0, sum = 0;
	while (sum<1000)
	{
		n++;
		sum = (n*(n + 1)) / 2;

	}
	printf("n=%d\n", n);
}