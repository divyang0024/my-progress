#include <iostream>
using namespace std;
template <class X, class Y, class Z = int>
class A
{
public:
    Z average(Y a, X b)
    {
        return a + b / 2;
    }
};
int main()
{
    A<float, double> obj;
    cout << obj.average(45.5678, 45.67);
    return 0;
}