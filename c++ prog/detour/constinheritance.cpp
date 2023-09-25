#include <iostream>
using namespace std;
class a
{
public:
    a() {}
    a(int x, int y)
    {
        cout << "a class constructor was called : ";
        cout << x << " " << y << endl;
    }
};
class b
{
public:
    b() {}
    b(int m, int n)
    {
        cout << "b class constructor was called : ";
        cout << m << " " << n << endl;
    }
};
class c : public a, public b
{
public:
    c() {}
    c(int j, int k, int x, int y, int m, int n) : a(x, y), b(m, n) // this syntax works only in multiple inheritance
    {
        cout << "c class constructor was called : ";
        cout << j << " " << k << endl;
    }
};
int main()
{
    c obj(1, 2, 3, 4, 5, 6);
    return 0;
}