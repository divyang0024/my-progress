#include <iostream>

using namespace std;
class cfo;
class b;
class manager
{
private:
    int bonus;

public:
    class b
    {
        friend void add(cfo a1, manager a2, int x, manager::b a3);

    private:
        int a;
    };
    friend void add(cfo a1, manager a2);
    friend void add(cfo a1, manager a2, int x, manager::b a3);
};
class cfo
{
    friend void add(cfo a1, manager a2);
    friend void add(cfo a1, manager a2, int x, manager::b a3);
    int bonus;
};
void add(cfo a1, manager a2)
{
    a1.bonus = 120000000;
    a2.bonus = 1200000;
    cout << a1.bonus + a2.bonus << endl;
}
void add(cfo a1, manager a2, int x, manager::b a3)
{
    a1.bonus = 120000000;
    a2.bonus = 1200000;
    a3.a = 12345;
    cout << a1.bonus + a2.bonus + a3.a + x;
}
int main()
{
    manager q;
    cfo r;
    manager::b s;
    add(r, q);
    add(r, q, 2, s);
    return 0;
    return 0;
}