#include <iostream>
using namespace std;
class a
{
public:
    int x;
};
class b : virtual public a
{
};
class c : virtual public a
{
};
class d : public b, public c
{
};

int main()
{
    a obj1;
    b obj2;
    c obj3;
    d obj4;
    cout << &obj1.x << endl;
    cout << &obj2.x << endl;
    cout << &obj3.x << endl;
    cout << &obj4.x;
    return 0;
}