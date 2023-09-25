#include <iostream>

using namespace std;
class base1; // in friend class we do not need to declare foeward declartion
class base
{
private:
    int a;
    void display()
    {
        cout << "enter the value of a :";
        cin >> a;
        cout << a;
        cout << endl;
        check();
    }
    void double_check()
    {
        cout << "double check function was called" << endl;
    }

public:
    void check() // member function
    {
        cout << "check function was called" << endl;
        double_check(); // only member functions are allowed to access the private members
    }
    friend class base1; // friend class can access both private and public members
    class c
    {
        // c is nested class of class base
    };
};
class base1
{
public:
    void show(base b)
    {
        b.display();
        base::c;
    }
};
int main()
{
    base1 obj;
    base obj1;
    obj.show(obj1);
    return 0;
}