#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
struct order
{
	char product[5];	/*���~�W��*/
	double price;		/*���~���*/
	int quantity;		/*���~�ƶq */
};
struct order  A[5];   /* �H�]�w�覡������� */

	
    void create1();
    void list1();

void ex9_10()
{
	create1();
	list1();
}

void create1()
{
	for (int i = 0; i<5 ; i++)
	{	
		printf("�п�J���~�W��: ");
		scanf("%s", A[i].product);

		printf("�п�J���~����: ");
		scanf("%lf", &A[i].price);

		printf("�п�J���~�ƶq: ");
		scanf("%d", &A[i].quantity);
	}
}

void list1()
{
	int j;
	printf("\n<<<<<<<<�q��C��>>>>>>>>>\n");
	for ( j= 0; j <5; j++)
	{
		printf("���~�W��:%s\n", A[j].product); 
		printf("���~����:%.lf\n", A[j].price);
		printf("���~�ƶq:%d\n", A[j].quantity);
		printf("���B: %.lf\n\n", A[j].price * A[j].quantity);
	}
}
