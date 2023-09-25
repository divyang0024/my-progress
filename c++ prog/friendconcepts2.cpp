#include <iostream>

using namespace std;
class a;
class b;

class b
{
public:
    void sum(a x, a y);
//     void sum(a x, a y)
// {
//     x.ab=12;
// }will not work

};
class a
{
    friend void b ::sum(a x, a y);

private:
    int ab, ba;
};
void b::sum(a x, a y)
{
    x.ab=12;
}
int main()
{
    a q, r;
    b s;
    s.sum(q, r);
    return 0;
}