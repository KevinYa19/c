#include <stdio.h>
#include <stdlib.h>
ex4_4(void)
{
	/*輸出陣列每一元素的位置*/
	int num[10], i;
	for (i = 0; i < 10; i++)
	{
		printf("&num[%d]=%p,num+%d=%p\n", i, &num[i], i, num + i);
	}
}