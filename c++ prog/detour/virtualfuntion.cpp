#include <iostream>
using namespace std;
class A
{
public:
    int a;

public:
    virtual void check()
    {
        cout << "base class virtual functuiion in invoked";
    }
};
class B : public A
{
public:
    virtual void check()
    {
        cout << " derived class virtual functuiion in invoked";
    }
};
int main()
{
    B obj1;
    A *obj = &obj1;
    // cout << sizeof(obj);
    cout << sizeof(obj1);
    obj1.check();
    obj->check();

    return 0;
}