#include <iostream>

using namespace std;
class a;
class b
{
public:
    void check(a obj);
};
class a
{
int x;
public:
    friend void b::check(a obj);
};
void b::check(a obj)/*defination was excuted here because x was defined after decaraltion
of function*/
{
    obj.x = 12;
}
int main()
{
    b obj1, obj;
    a o;
    obj1.check(o);
    return 0;
}