#include <iostream>
using namespace std;
class A
{
private:
    int x;

public:
    A() {}
    A(int x)
    {
        this->x = x;
    }
    void operator+()
    {
        cout << "function is invoked";
    }
    void operator++()
    {
        cout << "pre-increment is invoked\n";
        cout << ++this->x << endl; // 14
    }
    void operator++(int)
    {
        cout << "post-increment is invoked\n";
        this->x++;         // 12
        cout << x << endl; // 13
    }
};
int main()
{
    A obj(12);
    obj++;
    ++obj;
    A obj1(45);
    return 0;
}