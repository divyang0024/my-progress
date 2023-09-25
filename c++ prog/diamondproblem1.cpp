#include <iostream>
using namespace std;
class a
{
public:
    int x = 12;
};
class b : virtual public a
{
};
class c : virtual private a
{
    void check1()
    {
        x = 24;
    }
};
class d : public b, public c
{
public:
    void check()
    {
        cout << x;
    }
};
int main()
{

    return 0;
}