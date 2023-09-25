#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* Next;
};
struct node* insert();
void display(struct node*);
int main()
{
	
	int num;
	char choice;
	struct node* head=insert();
	display(head);
}

struct node* insert()
{
	char choice;
struct node* head,*last,*create;
head=(struct node*)malloc(sizeof(struct node));
head->Next=NULL;
last=head;


printf("Enter the number you want to insert in Link List:");
scanf("%d",&head->data);
printf("If you want to enter again press Y else Press N:");
scanf(" %c",&choice);
while(choice=='Y'||choice=='y')
{
	create=(struct node*)malloc(sizeof(struct node));
	printf("Enter the number you want to insert:");
	scanf("%d",&create->data);
	create->Next=NULL;
	last->Next=create;
	last=create;
	printf("If you want to insert More element press Y otherwise press N:");
	scanf(" %c",&choice);
}

return head;
}

void display(struct node *p)

{
	while(p)
	{
		printf("%d\n",p->data);
		p=p->Next;
	}
	
}
