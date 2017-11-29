#include<stdio.h>
#include<stdlib.h>

void input();
void output_3();

int ex6_13()
{
	printf("此程式在測試全域變數\n");
	input();
	output_3();
	return 0;
}

int array[5];  /* 定義全域變數array陣列*/

void input()
{
	int index;
	for (index = 0; index < 5; index++)
	{
		printf("請輸入 #%d 整數 ", index + 1);
		scanf("%d", &array[index]);
		/* 使用全域變數做輸入 */
	}
}

void output_3()
{
	int index;  /*定義output( )的區域變數*/
	printf("\n");
	for (index = 0; index < 5; index++)
		/* 使用全域變數做輸出 */
		printf("array[%d] is %d\n", index, array[index]);

}