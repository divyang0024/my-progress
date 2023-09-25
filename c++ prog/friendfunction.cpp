#include <iostream>

using namespace std;

class B;
class C;
class A
{
    int a;

public:
    A()
    {
        a = 10;
    }
    friend void Add(A objA, B objB, C objC);
};
class B
{
    int b;
    friend void Add(A objA, B objB, C objC);

public:
    B()
    {
        b = 10;
    }
};
class C
{
    int c;
    friend void Add(A objA, B objB, C objC);

public:
    C()
    {
        c = 10;
    }
};
void Add(A objA, B objB, C objC)
{
    cout << objA.a + objB.b + objC.c;
}
int main()
{
    A objA;
    B objB;
    C objC;
    Add(objA, objB, objC);
    return 0;
}