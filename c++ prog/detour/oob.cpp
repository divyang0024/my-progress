#include <iostream>
using namespace std;
class A
{
private:
    int a;
    int b;

public:
    A()
    {
        cout << "default constructor was invoked!!!!\n";
    }
    A(int x, int y)
    {
        cout << "parameterized constructor was invoked!!!!\n";
        this->a = x;
        this->b = y;
    }
    A operator+(A &obj) // this is binary operator overloading
    {
        A ref;
        ref.a = a + obj.a;
        ref.b = b + obj.b;
        return ref;
    }

    void display();
};
void A::display()
{
    cout << "sum of a : " << a << endl;
    cout << "sum of b : " << b << endl;
}
int main()
{
    A obj1(12, 34);
    A obj2(23, 45);
    A obj3 = obj1 + obj2; // obj1 will call the function and obj2 reference will be send.
    obj3.display();
    return 0;
}