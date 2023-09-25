#include <iostream>
using namespace std;
template <class t>
t add(t v1, t v2, t v3 = 0)
{
    t sum = 0;
    sum = v1 + v2 + v3;
    return sum;
}
int main()
{
    cout << add(56.87, 67.09);
    return 0;
}