#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    int size;
    int *arr;
};
typedef struct stack st;
int isfull(st *v)
{
    if (v->top == v->size - 1)
    {
        printf("stack is full no place left to push\n");
        return 0;
    }
    else
    {
        printf("stack is empty better push some element inside the stack\n");
        return 0;
    }
}
int isempty(st *v)
{
    if (v->top == -1)
    {
        printf("stack is empty better insert some element inside the stack\n");
        return 1;
    }
    else
    {
        printf("stack is not empty\n");
    }
}
void push(st *v)
{
    if (isfull(v))
    {
        printf("the stack is full!!!!");
    }
    else
    {
        for (int i = 0; i < v->size; i++)
        {
            printf("please enter the %d element :", i + 1);
            v->top++;
            scanf("%d", &v->arr[i]);
            printf("your %d element is : %d\n", i + 1, v->arr[i]);
        }
    }
}
int main()
{
    st *s = (st *)malloc(sizeof(st));
    s->top = -1;
    s->size;
    printf("enter the size of array you want\n");
    scanf("%d", &s->size);
    s->arr = (int *)malloc(s->size * sizeof(int));

    push(s);
    pop(s);
}