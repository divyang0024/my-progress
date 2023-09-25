#include<stdio.h>
#include<stdlib.h>
 typedef struct queue
{
	int front,rear;
	int *arr;
	
}queue;
void enque(queue *);
void deque(queue *);
int main()
{
	int s;
	queue q1;
	printf("enter the size of the queue : ");
	scanf("%d",&s);
	q1.arr=(int*)malloc(s*sizeof(int));
	q1.front=q1.rear=-1;
	int choice;
	ret :puts("Enter 1 to enter element in queue 2 to delete element otherwise press 3");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: {
			enque(&q1);
			goto ret;
			break;
		}
		case 2:{
			deque(&q1);
			goto ret;
			break;
		}
		default :{
			puts("Thank You");
			break;
		}
	}
	
	
}

void enque(queue *qptr)
{
	char c;
	do{
	
	if(qptr->rear==9){
	
	printf("Queue is Full\n");
    break; 
	}
	else
	{
		int ele;
		qptr->rear++;
		printf("Enter a element:");
		scanf("%d",&ele);
		qptr->arr[qptr->rear]=ele;
		
	}
	int i;
	printf("\n");
	for(i=0;i<=(qptr->rear);i++)
	{   
		printf(" ____\n");
		printf("|[%d]|\n",qptr->arr[i]);
		printf(" ____");
	}
	printf("\nif you want to enter more elemnt enter Y else press N:");
	scanf(" %c",&c);
}while(c=='y'||c=='Y');
}

void deque(queue *qptr)
{
	char c;
	do{
	
	if(qptr->rear==qptr->front)
	{
	printf("Queue empty\n");
	break;
	}
	else
	{

		qptr->front++;
		qptr->arr[qptr->front]=0;

		
	}
	int i;
	printf("\n");
	for(i=qptr->front+1;i<=(qptr->rear);i++)
	{
		printf(" ____\n");
		printf("|[%d]|\n",qptr->arr[i]);
		printf(" ____");
	}
	printf("\nif you want to delete more elemnt enter Y else press N:");
	scanf(" %c",&c);
}while(c=='y'||c=='Y');
}
