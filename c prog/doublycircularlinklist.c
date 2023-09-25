#include<stdio.h>  
#include<stdlib.h>
typedef struct node
{
	struct node *pre;
	int data;
	struct node *next;
}node;
node *insert();
void display(node*);

int main()
{
	node *head;
	head=insert();
	display(head);
}

node *insert()
{
	int i,num;
	node *h,*p,*nd;
	printf("Enter the number of element:");
	scanf("%d",&num);
	printf("\nEnter the %d element:",i+1);
	h=(node *)malloc(sizeof(node));
	scanf("%d",&h->data);
	h->pre=h;
	h->next=h;
	p=h;
	for(i=1;i<num;i++)
	{
		printf("\nEnter the %d element:",i+1);
		nd=(node *)malloc(sizeof(node));
	    scanf("%d",&nd->data);
	    nd->next=h;
	    nd->pre=p;
	    p->next=nd;
	    p=nd;
	}
	return h;
	
}

void display(node* p)
{
	node *s=p;
	do{
		printf("%d\n",p->data);
		p=p->next;
	}while(p!=s);
}
