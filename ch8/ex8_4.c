#include<stdio.h>
#include<stdlib.h>

void ex8_4(void)
{
	int x = 100;
	int *p1 = &x;
	int **p2 = &p1;
	int ***p3 = &p2;
	printf("&x=%p,x=%d\n", &x, x);
	printf("&p1=%p\,p1=%p\n", &p1, p1);
	printf("&p2=%p\,p2=%p\n", &p2, p2);
	printf("&p3=%p\,p3=%p\n", &p3, p3);
	printf("*p1=%d\,**p2=%d,***p3=%d\n", *p1, **p2,***p3);
	printf("p1¦û %d byte\,p2¦û %d byte ,p3¦û %d byte\n", sizeof(p1), sizeof(p2),sizeof(p3));

}