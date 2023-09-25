#include <iostream>
using namespace std;
class call_by_reference
{
public:
    int x, y;
    int copy(call_by_reference &b)
    {
        x = b.x;
        y = b.y;
    }
};
int main()
{
    int a = 10, b = 10;
    call_by_reference obj1, obj2;
    obj1.x = a;
    obj1.y = b;
    obj2.copy(obj1);
    cout << obj2.x << " " << obj2.y;
    return 0;
}