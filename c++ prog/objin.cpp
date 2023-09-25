#include <iostream>
using namespace std;
class a
{
public:
    void fun()
    {
        cout << "the funtion was called!!!!";
    }
};
int main()
{
    a *obj = new a[2], *objp[2], obj1;
    (*obj).fun();
    objp[0] = &obj1;
    (*objp[0]).fun();
}