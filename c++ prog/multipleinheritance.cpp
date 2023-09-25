#include <conio.h>
#include <iostream>

using namespace std;

class A
{
public:
    void show()
    {
        cout << "From class A" << endl;
    }
};
class B
{
public:
    void show()
    {
        cout << "From class B" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C objC;

    objC.A::show();
    objC.B::show();

    getch();
    return 0;
}