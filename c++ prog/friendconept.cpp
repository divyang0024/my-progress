#include <iostream>

using namespace std;
class b;
class a
{
private:
    int x, y;

public:
    void sum()
    {
        cout << x + y;
    }
    friend class b;
};
class b
{
    int x;

public:
    void check(a obj)
    {
        obj.x = 12;
        obj.y = 23;
    }
    void check(b obj)
    {
        x = 12;
    }
};
int main()
{
    a obj2;
    b obj1;
    obj1.check(obj2);
    obj1.check(obj1);
    return 0;
}