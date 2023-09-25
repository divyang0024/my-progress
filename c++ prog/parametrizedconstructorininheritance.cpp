#include <iostream>
#include <conio.h>

using namespace std;

class Base
{
    int a;

public:
    Base(int a)
    {
        cout << "I am called first " << endl;
        this->a = a;
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
    Derived(int a, int b) : Base(a)
    {
        cout << "I am called second " << endl;
        this->b = b;
    }
    void Write()
    {
        cout << "b : " << b << endl;
    }
};

int main()
{
    int a, b;

    cout << "Enter a and b";
    cin >> a >> b;

    Derived obj(a, b);

    obj.Write();
    obj.Display();

    getch();
    return 0;
}