#include <iostream>
#include <typeinfo>
using namespace std;
template <typename X, typename Y = int>
Y multiply(X x, X y)
{
    cout << typeid(x).name();
    cout << typeid(y).name() << endl;
    return x * y;
}
int main()
{
    cout << multiply<int, float>(12, 12.34f) << endl;
    cout << multiply<double, float>(45.45, 12.34f) << endl;
    cout << multiply<double>(45.45, 12.34) << endl;
    return 0;
}