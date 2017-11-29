#include <stdio.h>
#include <stdlib.h>
ex5_2(void)
{
	/*此二維陣列表示-考三天(列柱標)，一天考三科(行註標)*/
	int score[3][3] = { { 74,72,63 },{ 83,91,74 },{ 84,82,65 } }; //{74,72,63,83,92,74,84,82,65};
	int index1, index2, total = 0; /*外圈控制考試日期*/
	for (index1 = 0; index1 < 3; index1++)
	{
		printf("\n第 %d 天的分數分別為：", index1 + 1);
		for (index2 = 0; index2 < 3; index2++)
		{
			printf("%3d", score[index1][index2]);
			total += score[index1][index2];
		}
	}
	printf("\n\n總分: %d\n", total);
	printf("平均分數: %.2f\n", total / 9.0);
}