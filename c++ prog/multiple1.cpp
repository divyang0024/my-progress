#include <iostream>

using namespace std;
class a
{
public:
    int x;
};
class b
{
private:
    int x;
};
class c : public a, private b
{
public:
    void check()
    {
        c obj;
        // cout<<x;//compiler will still consider private members of b
        cout << sizeof(obj) << endl;
        cout << sizeof(a::x);
    }
};
int main()
{
    c obj;
    obj.check();
    return 0;
}