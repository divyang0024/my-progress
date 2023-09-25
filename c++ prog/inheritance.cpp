#include <iostream>

using namespace std;
class student
{
private:
    int a;
    void pv()
    {
    }

protected:
    int b;

public:
    int c;
    void check2()
    {
        pv();
    }
};
class player : protected student
{

public:
    void check()
    {
        b = 12;
        c = 23;
        check2();
    }
    void display()
    {
        cout << b << endl
             << c << endl;
    }
    void display(student a)
    {
        cout << b << endl
             << c << a.c << endl;
    }
};
int main()
{
    player r;
    student q;
    r.check();
    r.display();
    q.c = 14;
    r.display(q);
    return 0;
}