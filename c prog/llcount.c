#include <stdio.h>
// linked list node structure
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void insert(int data)
{
    /* Allocate memory*/
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head;
    head = temp;
}
void print()
{
    struct node *temp = head;
    int count = 0;
    /* Traverse the linked list and maintain the count. */
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    printf("\n Total no. of nodes is %d", count);
}
void main()
{
    head = NULL;
    insert(2);
    insert(4);
    /* calling print function to print the count of node. */
    print();
}