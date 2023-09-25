#include <iostream>

using namespace std;
int a = 1;
class a
{
public:
    int x;
    void setdata()
    {
        x = 12;
        cout << endl;
    }
};
class b
{
protected:
    int x = 90;

public:
    void setdata()
    {
    }
};
class c : public a, public b
{
public:
    void display()
    {
        cout << b::x << endl; /*again specify the scope of data
        member in the case of same name*/
        cout << a::x << endl;
    }
};
namespace variable1
{
    int j = 12;
}
namespace variable2
{
    int j = 14;
    // int j(9);
}
int main()
{
    int a = 2;
    c obj;
    obj.a::setdata(); /*if you will write only setdata(), the comipler will not be able to
recognise the which function has to be called*/
    obj.display();
    obj.a::x = 50000;
    obj.display();
    cout << ::a << endl;

    cout << (float)variable1::j << endl;
    cout << ::variable2::j << endl;
    return 0;
}