#include <iostream>
using namespace std;
class A
{
public:
    int a;
    int b;
    // A() {}
    A(int x, int y) : a(x), b(y + a)
    {
        cout << "value of a is : " << a << endl;
        cout << "value of b is : " << b << endl;
    }
};
int main()
{
    A obj(34, 45);
    return 0;
}