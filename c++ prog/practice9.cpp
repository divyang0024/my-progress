#include <iostream>
using namespace std;
class a
{
    int fun()
    {
        cout << "class a was called.";
        return 1;
    }
};
class b : public a
{
public:
    void fun()
    {
        cout << "class a was called.";
    }
};
int main()
{
    b obj;
    obj.fun();
}