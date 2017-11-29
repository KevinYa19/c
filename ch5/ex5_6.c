#include <stdio.h>
#include <stdlib.h>
ex5_6(void)
{
	int hight[10][2] = { { 1,165 },{ 2,155 },{ 3,175 },{ 4,163 },{ 5,176 },{ 6,195 },{ 7,152 },{ 8,176 },{ 9,180 },{ 10,200 } };
	int i, j;
	for (i = 0; i <10; i++)
	{
		for (j = 0; j < 1; j++)
		{
			printf("%d¸¹%d¤½¤À", hight[i][j], hight[i][j + 1]);
		}
		printf("\n");
	}
}