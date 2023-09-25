#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));
    int i;
    struct stack *s;
    struct stack r;
    s=(struct stack *)malloc(sizeof(struct stack));
    s->size;
    printf("enter the size\n");
    scanf("%d",&s->size);
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    for(i=0;i< s->size;i++)
    {
        printf("enter %d element in stack : ",i+1);
        scanf("%d",&s->arr[i]);
        s->top++;
    }
    for(i=0;i< s->size;i++)
    {
        printf("your %d element in stack : %d\n",i+1,s->arr[i]);
    }
    // Pushing an element manually
    // s->arr[0] = 7;
    // s->top++;
    // Check if stack is empty
    if(isEmpty(s)){
        printf("The stack is empty\n");
    }
    else{
        printf("The stack is not empty\n");
    }
    if(isFull(s)){
        printf("The stack is full\n");
    }
    else{
        printf("The stack is not full\n");
    }
    return 0;
}