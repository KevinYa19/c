#include<stdio.h>
#include<stdlib.h>

void ex7_2()
{
	int *ptr, num = 20;
	ptr = &num;
	printf("num=%d,&num=%p\n", num, &num);  /* 將num的位址設給指標ptr存放 */
	printf("*ptr=%d,ptr=%p,&ptr=%p\n", *ptr, ptr, &ptr);
}