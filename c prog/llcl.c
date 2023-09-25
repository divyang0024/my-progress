#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *create_node();        // used to create many other nodes in the funtion defination
void show_nodes(struct node *ptr); // used to display the nodes created in the fuction defination of create_node function
struct node *insfir(struct node *head, int data)
{
  struct node *new;
  new = (struct node *)malloc(sizeof(struct node));
  new->data = data;
  new->next = head;
  return new;
}
struct node *insaft(struct node *head, int pos, int data)
{
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  struct node *p = head;
  int i;
  for (i = 1; i != pos; i++)
  {
    p = p->next;
  }
  ptr->data = data;
  ptr->next = p->next;
  p->next = ptr;
  return head;
}
struct node *insend(struct node *head, int data)
{
  struct node *s;
  struct node *new;
  s = head;
  while (s->next != head)
  {
    s = s->next;
  }
  new = (struct node *)malloc(sizeof(struct node));
  new->data = data;
  new->next = head;
  s->next = new;
  return head;
}
int main()
{
  struct node *first, *after, *between, *end, *inspect;
  char choice;
  int index;
  int data;
  struct node *head; //* head hold the address of oh
  head = create_node();
  show_nodes(head);
  inspect = head;
  printf("head : %d\n", head);
  printf("&head : %d\n", &head);
  printf("the address of inspect : %d\n", &inspect);
  printf("inspect value : %d\n", inspect);
  printf("please enter f to insert first node, enter a to insert after a certain node, enter b to between two nodes, enter e to insert a node at the end\n");
  scanf(" %c", &choice);
  if (choice == 'f' || choice == 'F')
  {
    printf("insert the value of new node\n");
    scanf("%d", &data);
    first = insfir(head, data);
    printf("linked list after changes\n");
    show_nodes(first);
  }
  else if (choice == 'a' || choice == 'A')
  {
    printf("insert the value of new node\n");
    scanf("%d", &data);
    printf("position after which you want to insert a new node");
    scanf("%d", &index);
    after = insaft(head, index, data);
    show_nodes(after);
  }
  else if (choice == 'e' || choice == 'E')
  {
    printf("plz enter the value which you want to insert in the the new last node");
    scanf("%d", &data);
    end = insend(head, data);
    printf("after inserting at the end");
    show_nodes(head);
  }
  else
  {
    printf("the choice is wrong!!!!!!!!");
  }
  return 0;
}
struct node *create_node()
{
  struct node *oh, *e, *nn;
  oh = (struct node *)malloc(sizeof(struct node *));
  e = oh;
  printf("e : %d\n", e);
  printf("&e : %d\n", &e);
  printf("oh : %d\n", oh);
  printf("&oh : %d\n", &oh);
  int num;
  printf("enter the number of nodes you want : ");
  scanf("%d", &num);
  printf("enter the %d data of %d node : ", 1, 1);
  scanf("%d", &oh->data); // oh->data without '=' opertor is a value at
  for (int i = 1; i < num; i++)
  {
    nn = (struct node *)malloc(sizeof(struct node));
    printf("enter the %d element\n", i + 1);
    scanf("%d", &nn->data);
    nn->next = oh; // when you put '='operator along with '->' operator it becomes into address
    e->next = nn;
    e = nn;
    printf("nn: %d\n", nn);
    printf("&nn : %d\n", &nn);
  }
  return oh;
}
void show_nodes(struct node *head)
{
  int i = 1;
  struct node *ptr = head;
  do
  {
    printf("your %d element in the %d node is : %d \n", i, i, ptr->data);
    ptr = ptr->next;
    i++;
  } while (ptr != head);
}