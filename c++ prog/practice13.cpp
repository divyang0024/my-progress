#include <iostream>
using namespace std;
class b;
class a
{
public:
    int sum(b);
};
class b
{
    friend int a::sum(b);
    int x = 12, y = 12;
};
int a::sum(b obj1)
{
    cout << obj1.x + obj1.y;
}
int main()
{
    b objb;
    a obja;
    obja.sum(objb);
    return 0;
}