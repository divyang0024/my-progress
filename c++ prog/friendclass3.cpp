#include <iostream>

using namespace std;
class a;
class c
{
    public:
     void display(a o);
};
class a
{
public:
    int x, y, z;

public:
    void tranferctogf1()
    {
        x = 12;
    }
    friend void c::display(a o);
};
class b : protected a
{
protected:
    int y;

public:
    void tranferctogf()
    {
        tranferctogf1();
    }
};
class c : private b
{
public:
    int q;
    void transfer()
    {
        tranferctogf();
    }
};
void c::display(a o)
{
    cout << o.x;
}
int main()
{
    c obj, obj1;
    a o;
    obj.transfer();
    obj.display(o);
    return 0;
}