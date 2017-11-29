#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
struct order
{
	char product[5];	/*產品名稱*/
	double price;		/*產品單價*/
	int quantity;		/*產品數量 */
};
struct order  A[5];   /* 以設定方式給予初值 */

	
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
		printf("請輸入產品名稱: ");
		scanf("%s", A[i].product);

		printf("請輸入產品價格: ");
		scanf("%lf", &A[i].price);

		printf("請輸入產品數量: ");
		scanf("%d", &A[i].quantity);
	}
}

void list1()
{
	int j;
	printf("\n<<<<<<<<訂單列表>>>>>>>>>\n");
	for ( j= 0; j <5; j++)
	{
		printf("產品名稱:%s\n", A[j].product); 
		printf("產品價格:%.lf\n", A[j].price);
		printf("產品數量:%d\n", A[j].quantity);
		printf("金額: %.lf\n\n", A[j].price * A[j].quantity);
	}
}
