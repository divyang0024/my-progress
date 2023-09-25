#include <iostream>
using namespace std;
class A
{
public:
    int a = 12;
};
class B
{
public:
    int a = 23;
};
class c : public A, public B
{
};
int main()
{
    c obj;
    cout << &(obj.B::a) << endl;
    cout << &(obj.A::a);
    return 0;
}