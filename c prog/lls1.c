#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
	int data;
	struct stack *Next;
}stack;
void display(stack *);
int main()
{
	stack *H=NULL,*N;
	char choice;
	do
	{
		printf("Enter the element to push in stack:");
		N=(stack*)malloc(sizeof(stack));
		scanf("%d",&N->data);
		N->Next=H;
		H=N;//right nto left movement of linked list,head will remaining in at the same place but the node creation is happening right to left
		display(H);
		printf("\nEnter Y to push again:\n");
		scanf(" %c",&choice);
	}while(choice=='Y'||choice=='y');
}
void display(stack *h)
{
	while(h)
	{
		printf("\t[%d]\n",h->data);
		h=h->Next;
	}
}