#include <iostream>
using namespace std;
class a
{
public:
    a() {}
    a(int x, int y)
    {
    }
};
class b
{
public:
   
};
class c : public a, public b
{
public:
   
};
int main()
{
    c obj;
    return 0;
}