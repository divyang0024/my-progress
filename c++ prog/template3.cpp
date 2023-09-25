#include <iostream>
using namespace std;
template <class q>
class a
{
public:
    a()
    {
        cout << "default constructor was called !!!!" << endl;
    }
    a(a &s)
    {
        cout << "constructor was called here !!!!" << endl;
    }
};
int main()
{
    a<float> obl;
    a<float> obj(obl);
    return 0;
}