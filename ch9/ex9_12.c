#include<stdio.h>
#include<stdlib.h>
int ex9_12()
{
	/* �ŧi���c���A */
	struct node
	{
		char name[20];
		int score;
		struct node *next;
	};
	struct node *ptr1, *ptr2, *ptr3, *current;
	/* �ϥ�malloc��ưt�m�O���� */
	ptr1 = (struct node *)malloc(sizeof(struct node));
	printf("�п�Jptr1�`�I���m�W: ");
	scanf("%s", &ptr1->name);
	printf("�п�Jptr1�`�I������: ");
	scanf("%d", &ptr1->score);
	
	ptr2 = (struct node *)malloc(sizeof(struct node));
	printf("\n�п�Jptr2�`�I���m�W: ");
	scanf("%s", &ptr2->name);
	printf("�п�Jptr2�`�I������: ");
	scanf("%d", &ptr2->score);
	/* �N ptr1 �� next ���Ы��V ptr2 */
	ptr1->next = ptr2;

	ptr3 = (struct node *)malloc(sizeof(struct node));
	printf("\n�п�Jptr3�`�I���m�W: ");
	scanf("%s", &ptr3->name);
	printf("�п�Jptr3�`�I������: ");
	scanf("%d", &ptr3->score);
	ptr3->next = NULL;;/*ptr3 �� next ���г]�� NULL*/


	ptr2->next = ptr3;

	current = ptr1;
	printf("\n\n�嵲��C����Ʀp�U:\n");

	while (current != NULL)
	{
		printf("%10s", current->name);
		printf("%5d\n", current->score);

		current = current->next;
	}
}
