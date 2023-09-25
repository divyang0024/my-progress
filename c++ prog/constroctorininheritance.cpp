#include <iostream>
#include <conio.h>

using namespace std;

class Base
{
    int a;

public:
    Base()
    {
        cout << "I am called first " << endl;
        a = 10;
    }
    void Display()
    {
        cout << "a : " << a << endl;
    }
};

class Derived : public Base
{
    int b;

public:
    Derived()
    {
        cout << "I am called second " << endl;
        b = 10;
    }
    void Write()
    {
        cout << "b : " << b << endl;
    }
};

int main()
{
    Derived obj;

    obj.Write();
    obj.Display();

    getch();
    return 0;
}