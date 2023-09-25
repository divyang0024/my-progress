#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *create_node()
{
    struct node *on, *e, *c;
    int i;
    int num;
    printf("please enter the number of nodes you want\n");
    scanf("%d", &num);
    on = (struct node *)malloc(sizeof(struct node));
    printf("enter the %d element of %d node : ", 1, 1);
    scanf("%d", &on->data);
    e = on;
    for (i = 1; i < num; i++)
    {
        c = (struct node *)malloc(sizeof(struct node));
        printf("enter the %d element of %d node : ", i + 1, i + 1);
        scanf("%d", &c->data);
        c->next = NULL;
        e->next = c;
        e = c;
    }
    return on;
}
void display(struct node *head)
{
    int i = 1;
    while (head != NULL)
    {
        printf("your %d element of %d node is = %d \n", i, i, head->data);
        head = head->next;
        i++;
    }
}
struct node *delfir(struct node *head)
{
    struct node *ptr;
    ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct node *delaft(struct node *head, int num)
{
    struct node *ptr, *p;
    ptr = head;
    p = head->next;
    int i;
    for (i = 0; i != num - 1; i++)
    {
        ptr = ptr->next;
        p = p->next;
    }
    ptr->next = p->next;
    free(p);
    return head;
}
struct node *delend(struct node *head)
{
    struct node *ptr, *p;
    ptr = head;
    p = head->next;
    while (p->next != NULL)
    {
        ptr = ptr->next;
        p = p->next;
    }
    ptr->next = NULL;
    free(p);
    return head;
}
int main()
{
    int index;
    struct node *head, *afir, *bet, *end;
    head = create_node();
    display(head);
    char choice;
    printf("press 1 to delete the element residing at first\n");
    printf("press 2 to delete the element after a node\n");
    printf("press 3 to delete the element residing at end\n");
    scanf(" %c", &choice);
    switch (choice)
    {
    case '1':
    {
        afir = delfir(head);
        display(afir);
        break;
    }
    case '2':
    {
        printf("please enter position after which you want to delete a node");
        scanf("%d", &index);
        bet = delaft(head, index);
        display(bet);
        break;
    }
    case '3':
    {
        end = delend(head);
        display(end);
        break;
    }
    default:
        printf("the choice is not valid please write a correct choice\n");
        break;
    }
}