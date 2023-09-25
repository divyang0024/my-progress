#include <iostream>
#include <conio.h>

using namespace std;

class Base
{
    int a;

public:
    Base()
    {
        a = 12;
    }
    void Write()
    {
        cout << a;
    }
    ~Base()
    {
        cout << "I am in base class destructor ";
    }
};

class Derived : public Base
{
    int b;

public:
    Derived()
    {
        b = 10;
    }
    void display()
    {
        Write();
        cout << b;
    }
    ~Derived()
    {
        cout << "I am in child class " << endl;
    }
};

int main()
{
    Derived obj;

    obj.display();

    getch();
    return 0;
}