#include<stdio.h>
#include<stdlib.h>

int number;  /* number是一個全域變數 */
void output_2(); /* output( )的原型宣告 */

int ex6_12()
{
	printf("Printf input a number: ");
	scanf("%d", &number);
	output_2();
	return 0;
}

/*  定義output() */
void output_2()
{
	printf("Number is %d\n", number);
}