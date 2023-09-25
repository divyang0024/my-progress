#include <iostream>
using namespace std;
class A
{
    int x, y;

public:
    A()
    {
    }
    A(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    A operator+(A &obj);
};

A A::operator+(A &obj)
{
    A o;
    o.x = this->x + obj.x;
    o.y = this->y + obj.y;
    return o;
}
int main()
{
    A obj1(12, 23);
    A obj2(34, 45);
    A obj3;
    obj3 = obj1 + obj2;
    return 0;
}