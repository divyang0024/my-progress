#include <iostream>
using namespace std;
class stack
{
private:
    int top = -1;
    int array[10];

public:
    bool is_FULL()
    {
        if (top == 9)
        {
            return true;
        }
        else
            return false;
    }
    bool is_EMPTY()
    {
        if (top == -1)
        {
            return true;
        }
        else
            return false;
    }
    int PUSH()
    {
        if (is_FULL())
        {
            cout << "stack is full";
        }
        else
        {
            int val;
            cout << "enter the value you want to push inside the stack : ";
            cin >> val;
            ++top;
            array[top] = val;
        }
        return 0;
    }
    int POP()
    {
        if (is_EMPTY())
        {
            cout << "stack is empty";
        }
        else
        {
            array[top] = 0;
            --top;
        }
        return 0;
    }
    int PEEK()
    {
        int pos;
        cout << "enter the position to check the value : ";
        cin >> pos;
        cout << "the value at " << pos << " is " << array[pos - 1];
        return 0;
    }
    int COUNT()
    {
        cout << "the number of elements present inside the stack is : " << top + 1;
    }
    int CHANGE()
    {
        int pos, val;
        cout << "enter the position at which you want to make the changes : ";
        cin >> pos;
        cout << "enter the new value : ";
        cin >> val;
        array[pos - 1] = val;
        return 0;
    }
    int DISPLAY()
    {
        for (int i = 0; i < top + 1; i++)
        {
            cout << "[" << array[i] << "]" << endl;
        }
    }
};
int main()
{
    stack obj;
    char c;

    do
    {
        char choice;
        cout << "enter choice : ";
        cin >> choice;
        switch (choice)
        {
        case 'd':
        {
            obj.POP();
            break;
        }
        case 'i':
        {
            obj.PUSH();
            break;
        }
        case 'e':
        {
            obj.is_EMPTY();
            break;
        }
        case 'f':
        {
            obj.is_FULL();
            break;
        }
        case 'p':
        {
            obj.PEEK();
            break;
        }
        case 'c':
        {
            obj.CHANGE();
            break;
        }
        case 'h':
        {
            obj.DISPLAY();
            break;
        }
        default:
            cout << "invalid input!!!!";
            break;
        }
        cout << "press 'y' or 'n' : ";
        cin >> c;
    } while (c == 'y');
    return 0;
}