#include<stdio.h>
struct stack{
	int ar[10];
	int top;
};
typedef struct stack stack;
void push(stack *);
void pop(stack*);
int main()
{
	stack s1;
	char choice;
	s1.top=-1;
	int op;
	ret :printf("Enter 1 to push enter 2 to pop an element otherwise press 3:");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			{
				
				do
				{
					if(s1.top<9){
					
					push(&s1);
					printf("\nIF you want to push more element press Y otherwise press N:");
					scanf(" %c",&choice);}
					else{
						printf("\nstack overflow:");
						choice='N';
					}
				}while(choice=='Y'||choice=='y');
				goto ret;
			
			}
		case 2:{
			do
				{
					if(s1.top>-1){
					
					pop(&s1);
					printf("\nIF you want to pop more element press Y otherwise press N:");
					scanf(" %c",&choice);}
					else
					{
						printf("\nstack is under flow:\n");
						choice='N';
					}
			}while(choice=='Y'||choice=='y');
		    goto ret;
		}	
		default :
		{
			printf("\n Thank you for using this program See you soon:");
			break;
		}
	}
}

void push (stack *p)
{
	p->top++;
	int elem,i;
	printf("\nEnter the element you want to push:");
	scanf("%d",&elem);
	p->ar[p->top]=elem;
	printf("\nElement succefully Push:\n\n");
	for(i=p->top;i>=0;i--)
	{
		printf("\t[%d]\n",p->ar[i]);
	}
	return;
}

void pop(stack *p)
{
	int i;
	p->ar[p->top]=0;
	p->top--;
	for(i=p->top;i>=0;i--)
	{
		printf("\t[%d]\n",p->ar[i]);
	}
	return;
}
