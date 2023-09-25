#include <iostream>
using namespace std;
class base_class
{
public:
    virtual void display()
    {
        cout << "the base class display function was called " << endl;
    }
};
class derived_class : public base_class
{
public:
    void display()
    {
        cout << "the derived class display function was called " << endl;
    }
};
int main()
{
    derived_class derobj;
    base_class *bptr = &derobj;
    bptr->display();
    bptr->base_class::display();//also legal
    return 0;
}