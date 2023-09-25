#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node()
    {
        data = 0;
        next = NULL;
        prev = NULL;
    }
};
class DLL
{
public:
    node *head;
    node *node_CREATE()
    {
        node *ptr, *temp;
        int num;
        cout << "enter the number of nodes you want in linked list : ";
        cin >> num;
        node *n = new node;
        ptr = n;
        n->next = NULL;
        n->prev = NULL;
        temp = ptr;
        for (int i = 0; i < (num - 1); i++)
        {
            node *nn = new node;
            nn->next = NULL;
            ptr->next = nn;
            nn->prev = ptr;
            ptr = ptr->next;
        }
        return temp;
    }
    void node_DATAUP(node *ptr)
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
    void node_DISPLAY(node *head)
    {
        cout << "NULL<----head---->";
        while (head->next != NULL)
        {
            cout << "<----[" << head->data << "]---->";
            head = head->next;
        }
        cout << "<----[" << head->data << "]---->NULL";
    }
    node *node_traversal(node *head, int pos, int size)
    {
        node *temp, *tail = NULL;
        while (head->next != NULL)
        {
            tail = head;
            head = head->next;
        }
        for (int i = size; i > (pos); i--)
        {
            temp = tail;
            tail = tail->prev;
        }
        return temp;
    }
};
int main()
{
    DLL obj;
    obj.head = obj.node_CREATE();
    obj.node_DATAUP(obj.head);
    obj.node_DISPLAY(obj.head);
    node *temp = obj.node_traversal(obj.head, 1, 5);
    cout << temp->data;
    return 0;
}