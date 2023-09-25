#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int front,rear;
    int *arr;
};
void isempty(struct queue q)
{
 if(q.front==q.rear)
 {
  printf("your queue is empty!!!!!!!!!,please enter some elements.\n");  
 }
 int size;
 printf("enter the size of queue\n");
 scanf("%d",&size);
 q.arr=(int *)malloc(size*sizeof(int));
 enq(q,size);
}
void enq(struct queue q,int size)
{
 for(int i=0;i<size;i++)
 {
  printf("enter the %d element in the queue : ",i+1);
  scanf("%d",&q.arr[i]);
  printf("<----------------------------------------------------------------------->\n");
  q.rear++;
 }
 printf("you have entered %d element in your queue!!!!!!\n",q.rear+1);
 printf("v<>^v><^v<>^v><^v<>^v><^v<>^v><^v<>^v><^v<>^v><^v<>^v><^v<>^v><^v<>^v><^\n");
 printf("please wait we are displaying the elemtnt which you have entered earlier\n");
 printf("v<>^v><^v<>^v><^v<>^v><^v<>^v><^v<>^v><^v<>^v><^v<>^v><^v<>^v><^v<>^v><^\n");
  for(int i=0;i<size;i++)
 {
  printf("element which you have entered at %d position in the queue = [%d]\n",i+1,q.arr[i]);
  printf("<----------------------------------------------------------------------->\n");
 }
}
/*void deq(struct queue *q,int size)
{

}*/
int main()
{
struct queue q;
q.front=-1;
q.rear=-1;
isempty(q);
//deq(&q,size);
}