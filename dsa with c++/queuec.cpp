#include <iostream>
using namespace std;
class queue
{
private:
    int front = -1;
    int rear = -1;
    int size = 0;
    int *array = new int[size];

public:
    queue()
    {
        cout << "enter size of array : ";
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            array[i] = 0;
        }
    }
    bool isempty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
            return false;
    }
    bool isfull()
    {
        if ((rear + 1) % size == front)
        {
            return true;
        }
        else
            return false;
    }
    int enqueue()
    {

        if (isfull())
        {
            cout << "no available space present in queue!!!!\n";
            return 0;
        }
        else if (isempty())
        {
            front = 0;
            rear = 0;
        }
        else
            rear = (rear + 1) % size;

        int val;
        cout << "enter a value : ";
        cin >> val;
        array[rear] = val;
        display();
    }
    int dequeue()
    {
        if (isempty())
        {
            cout << "can't perform dequeue operation as the queue is empty!!!!\n";
            return 0;
        }
        else if (front == rear)
        {
            array[front] = 0;
            front = -1;
            rear = -1;
        }
        else
        {
            array[front] = 0;
            front = (front + 1) % 5;
        }
        display();
        return 0;
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "[" << array[i] << "]" << endl;
        }
    }
};
int main()
{
    queue obj;
    int choice;
    do
    {
        cout << "enter choice : ";
        cin >> choice;
        switch (choice)
        {

        case 0:
            break;
        case 1:
        {
            obj.enqueue();
            break;
        }
        case 2:
        {
            obj.dequeue();
            break;
        }

        default:
        {
            cout << "invalid input!!!!.";
            break;
        }
        }
    } while (choice != 0);

    return 0;
}