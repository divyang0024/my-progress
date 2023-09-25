#include <iostream>
#include <conio.h>

using namespace std;

template <class T>
class Stack
{
    T *arr;
    int top;

public:
    Stack(int n)
    {
        arr = new T[n];
        top = -1;
    }
    void Push(T obj)
    {
        top++;

        arr[top] = obj;
    }
    T pop()
    {
        return arr[top--];
    }
};
int main()
{
    int n, i, temp, m;

    cout << "Enter size of the array MAX is 10";
    cin >> n;

    Stack<int> obj(n);

    cout << "Total elements to be inserted in the stack ";
    cin >> m;

    for (i = 0; i < m; i++)
    {
        cout << "Enter element to be inserted ";
        cin >> temp;

        obj.Push(temp);
    }

    cout << endl
         << "how many elements you want to pop MAX pop " << m << "is only allowed";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << obj.pop();
    }
    getch();
    return 0;
}