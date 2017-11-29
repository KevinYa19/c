#include <stdio.h>
#include <stdlib.h>

int swap(int, int); /* swap()函數的原型 */

int ex7_7() {
	int a = 5, b = 20;
	printf("Before swap...");
	printf("a=%d,b=%d\n", a, b);
	printf("%p\n", &a);
	printf("%p\n", &b);

	
	swap(a, b);
	printf("After swap...");
	printf("a=%d,b=%d\n", a, b);
	return 0;
}


int swap(int x, int y) /* 定義swap()函數 */
{
	int temp = x;
	x = y;
	y = temp;
	printf("%p\n", &x);
	printf("%p\n", &y);
	printf("%d\n", x);
	printf("%d\n", y);
}