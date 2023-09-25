#include <iostream>
using namespace std;
class shape
{
public:
    virtual int area() = 0;
};
class circle : public shape
{
public:
    int area()
    {
        float pi = 3.14;
        int r;
        cout << "enter radius : ";
        cin >> r;
        float area = 3.14 * r * r;
        return area;
    }
};
class square : public shape
{
public:
    int area()
    {
        int s;
        cout << "enter length";
        cin >> s;
        float area = s * s;
    }
};
class rectangle : public shape
{
public:
    int area()
    {
        int l, b;
        cout << "enter length and breadth respectively : ";
        cin >> l;
        cin >> b;
        float area = l * b;
        return area;
    }
};
int main()
{
    shape *sh;
    circle c;
    square s;
    rectangle r;
    cout << c.area() << endl;
    // cout << s.area() << endl;
    // cout << r.area() << endl;
    // sh = &c;
    // cout << sh->area();
    return 0;
}