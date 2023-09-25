#include <iostream>

using namespace std;
class base
{
    int xyz;

public:
    int a;
    void display();
    void get_xyz()
    {
        xyz = 23;
        cout << xyz << endl;
    }
};
class derived : private base
{
public:
    void show()
    {
        display(); /* accessing private member since display() is public in class base 
        but class derived is under private visibility mode so display() is private to 
        class derived */
    }
};
class derived1 : public base
{
public:
    derived obj12;

    void privatemember()
    {
        get_xyz();/* can't access the base class private members directly
        remember the derived class is only inherting public members of base class */
    }
};
void base::display()
{
    a = 12;
    cout << a << endl;
}
int main()
{
    derived obj;
    obj.show(); //privat visibility mode
    derived1 ob;
    ob.display(); //since derived is in public visibility mode
    base q;
    //q.privatemember cant access class derived member function
    ob.privatemember();
    return 0;
}