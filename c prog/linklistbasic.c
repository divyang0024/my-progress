#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void display(struct node *);
main()
{
	struct node *First, *Second, *Third;
	First = (struct node *)malloc(sizeof(struct node));
	First->next = NULL;
	First->data = 12;

	Second = (struct node *)malloc(sizeof(struct node));
	Second->data = 34;
	First->next = Second;
	Second->next = NULL;

	Third = (struct node *)malloc(sizeof(struct node));
	Third->data = 72;
	Second->next = Third;
	Third->next = NULL;

	display(First);
}
void display(struct node *p)
{
	while (p != NULL)
	{
		printf("%d\n", p->data);
		p = p->next;
	}
}
