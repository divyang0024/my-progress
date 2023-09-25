#include <iostream>
#include <conio.h>

using namespace std;

class Employee
{
    mutable int bonus;

public:
    void Input()
    {
        cout << "Enter bonus";
        cin >> bonus;
    }

    void Change() const
    {
        bonus += 500;
        cout << bonus;
    }
    void Display()
    {
        cout << "Updated Bonus" << bonus;
    }
};

int main()
{
    Employee obj;

    obj.Input();
    obj.Change();
    obj.Display();

    getch();
    return 0;
}