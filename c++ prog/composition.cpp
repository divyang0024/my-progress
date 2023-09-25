#include <conio.h>
#include <iostream>
//composition

using namespace std;
//A is the parent
class A
{
    int no_A;

public:
    A()
    {
        no_A = 12;
    }
    void display()
    {
        cout << no_A;
    }
    //child
    class B
    {
        int no_B;

    public:
        B()
        {
            no_B = 12;
        }
        void show()
        {
            cout << no_B;
        }
    };
};

int main()
{
    A obj;

    obj.display();

    A::B objB;

    objB.show();

    getch();
    return 0;
}