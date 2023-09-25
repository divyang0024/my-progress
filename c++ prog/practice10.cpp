#include <iostream>
using namespace std;
class a
{
    void check1();

protected:
    int x;
    void check()
    {
        cout << "the check function was invoked";
    }
};
class b : protected a
{
public:
    void check2()
    {
        a obj1;
        check();
        x = 12;
    }
};
int main()
{
    b obj;
    obj.check2();
    return 0;
}