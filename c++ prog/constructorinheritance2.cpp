#include <iostream>
using namespace std;
class base_1
{
private:
    int b1, b3;

public:
    base_1(int x, int y)
    {
        cout << "base 1 constructor was called " << endl;
        b1 = x;
        b3 = y;
        cout << "the value of b1 is : " << b1 << b3 << endl;
        cout << "           |            " << endl;
        cout << "           v            " << endl;
    }
};
class base_2
{
private:
    int b2;

public:
    base_2(int y)
    {
        cout << "base 2 constructor was called " << endl;
        b2 = y;
        cout << "the value of b2 is : " << b2 << endl;
        cout << "           |            " << endl;
        cout << "           v            " << endl;
    }
};
class derived_1 : public base_1, virtual public base_2
{
private:
    int d1, d2;

public:
    derived_1(int a, int b, int c, int d) : base_1(a, c), base_2(b)
    {
        cout << "derived constructor was called" << endl;
        d1 = c;
        d2 = d;
        cout << "the value of d1 and d2 is : " << d1 << " and " << d2 << " respectively" << endl;
        cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    }
};
int main()
{
    int b1, b2, d1, d2;
    cout << "enter the value b1 : ";
    cin >> b1;
    cout << "enter the value b2 : ";
    cin >> b2;
    cout << "enter the value of d1 : ";
    cin >> d1;
    cout << "enter the value of d2 : ";
    cin >> d2;
    derived_1 obj(b1, b2, d1, d2);
    return 0;
}