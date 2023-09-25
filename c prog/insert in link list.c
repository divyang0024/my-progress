#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node* Next;
}node;
node * insert();
void display(node*);
main()
{
	node *head;
	head=insert();
	display(head);
}

node* insert()
{
	node *s,*e,*nc;
	int i,num;
	printf("Enter the number of element:");
	scanf("%d",&num);
	s=(node*)malloc(sizeof(node*));
	printf("Enter the %d element:",1);
	scanf("%d",&s->data);
	s->Next=NULL;
	e=s;
	for(i=1;i<num;i++)
	{
		nc=(node*)malloc(sizeof(node*));
		printf("\nEnter the %d element:",i+1);
		scanf("%d",&nc->data);
		nc->Next=NULL;
		e->Next=nc;
		e=nc;
		
		
		
	}
	return s;
}
void display(node* p)
{
	while(p!=0){
		printf("%d\n",p->data);
		p=p->Next;
	}
}