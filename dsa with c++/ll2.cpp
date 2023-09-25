#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node()
    {
        data = 0;
        next = 0;
    }
};
class SLL
{
public:
    node *head;
    SLL()
    {
        head = NULL;
    }
    node *node_CREATE();
    void node_DATAUP(node *ptr);
    void node_INS(node *head);
    void node_DEL(node *head);
    void node_DISPLAY(node *head);
    node *node_TRAVERSAl(node *head, int pos);
};
node *SLL::node_CREATE()
{
    node *ptr, *temp;
    int number;
    cout << "enter the number of nodes yuo want inside the linked list : ";
    cin >> number;
    node *n = new node();
    n->next = NULL;
    ptr = n;
    temp = ptr;
    for (int i = 0; i < number - 1; i++)
    {
        node *nn = new node;
        nn->next = NULL;
        ptr->next = nn;
        ptr = nn;
    }
    return temp;
}
void SLL::node_DATAUP(node *ptr)
{
    int i = 0;
    int data;
    do
    {
        cout << "Insert data at " << i + 1 << " node : ";
        cin >> data;
        ptr->data = data;
        ptr = ptr->next;
        ++i;
    } while (ptr->next != NULL);
    cout << "Insert data at " << i + 1 << " node : ";
    cin >> data;
    ptr->data = data;
}
void SLL::node_INS(node *head)
{
    int pos;
    cout << "enter the position at which you want to perform node insertion operation : ";
    cin >> pos;
    if (pos == 1)
    {
        node *n = new node;
        n->next = head;
        head = n;
        cout << "enter the data inside of new node : ";
        cin >> n->data;
    }
    else
    {
        node *currentptr = node_TRAVERSAl(head, pos);
        node *n = new node;
        n->next = currentptr->next;
        currentptr->next = n;
        cout << "enter the data inside of new node : ";
        cin >> n->data;
    }
}
void SLL::node_DEL(node *head)
{
    int pos;
    cout << "enter the position at which you want to perform node deletion operation : ";
    cin >> pos;
    if (pos == 1)
    {
        head = head->next;
        head->next = NULL;
    }
    if (pos == 2)
    {
        node *currentptr = node_TRAVERSAl(head, pos);
        head->next = currentptr->next;
        currentptr->next = NULL;
    }
    else
    {
        node *currentptr = node_TRAVERSAl(head, pos);
        node *prevptr = node_TRAVERSAl(head, (pos - 1));
        prevptr->next = currentptr->next;
        currentptr->next = NULL;
    }
}
void SLL::node_DISPLAY(node *head)
{
    cout << "head---->";
    while (head->next != NULL)
    {
        cout << "[" << head->data << "]---->";
        head = head->next;
    }
    cout << "[" << head->data << "]---->NULL";
}
node *SLL::node_TRAVERSAl(node *head, int pos)
{
    node *temp;
    for (int i = 1; i < pos; i++)
    {
        temp = head->next;
        head = head->next;
    }
    return temp;
}

int main()
{
    SLL obj;
    obj.head = obj.node_CREATE();
    obj.node_DATAUP(obj.head);
    obj.node_DEL(obj.head);
    obj.node_DISPLAY(obj.head);
    return 0;
}