#include <iostream>
#include <string>
using namespace std;
class base
{
public:
    string x = "PUBLIC";
    void check();

protected:
    string y = "PROTECTED";

private:
    string z = "PRIVATE";
};
class public_derived : public base
{
    // public variables will be inherited,also accessible through second derived class
    // private variable is not inherited,
    // protected variable is inherited,also accessible through second derived class
};
class protected_derived : private base
{
    // public variables will be inherited,also accessible through second derived class
    // private variable is not inherited,
    // protected variable is inherited,also acceessible through second derived class
};
class private_derived : protected base
{
    // public variables will be inherited,but not accessible through second derived class
    // private variable is not inherited,
    // protected variable is inherited,but not accessible through second derived class
};

void base::check()
{
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
}
int main()
{

    public_derived obj;

    private_derived obj1;

    protected_derived obj2;

    obj.x;
    return 0;
}