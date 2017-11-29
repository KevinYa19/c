

#include <stdio.h>
#include <stdlib.h>


hw1(void)
{
	int x, y;
	printf("叫块俱计=");
	scanf("%d", &x);
	y = x % 2;
	if (y == 1)
	{
		printf("%d琌计\n", x);
	}
	else if (y == 0)
	{
		printf("%d琌案计\n", x);
	}
}