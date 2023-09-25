#include <iostream>

using namespace std;
class a
{
public:
    int x;
};
class b : virtual public a
{
};
class c : virtual public a
{
};
class d : public b, public c
{
};
int main()
{
    d obj;
    obj.x;
    b obj1;
    obj1.x;
    return 0;
}