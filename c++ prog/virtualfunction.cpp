#include <iostream>

using namespace std;
class a
{
    int x;

public:
    virtual void check()
    {
        cout << "the base class function was called" << endl;
    }
};
class b : public a
{
};
int main()
{
    a *baseobj;
    b derobj;
    baseobj = &derobj;
    baseobj->check();
    return 0;
}