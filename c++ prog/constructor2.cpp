#include <iostream>

using namespace std;
class x
{
    int a, b, c;

public:
    x() //default arguments
    {
        a = 23;
        cout << a << endl;
    }
    x(int q) //parameterized with single argument
    {
        b = q;
        cout << b << endl;
    }
    x(int q, int r) //parameterized with two argument
    {
        c = q + r;
        cout << c << endl;
    }
    /*note:same constructor is called several times which shows that
     the constructer also follow the rules of polymorphism.*/
};
int main()
{
    x e1, e2(12), e3(23, 44);
    return 0;
}