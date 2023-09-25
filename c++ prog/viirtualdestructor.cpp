#include <iostream>
using namespace std;
class base
{
private:
    int *bcptr = new int(12);

public:
    virtual ~base()
    {
        cout << *bcptr;
        delete bcptr;
        cout << "base class destructor was called " << endl;
    }
};
class derived : public base
{
public:
    int *dcptr = new int(90);

public:
    ~derived()
    {
        cout << *dcptr;
        delete dcptr;
        cout << "derived class destructor was called" << endl;
    }
};
int main()
{
    base *bptr;
    derived dobj;
    bptr = &dobj;
    delete bptr;
    return 0;
}