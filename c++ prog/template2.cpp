#include <iostream>
using namespace std;
template <class q = int, class w = int>
class a
{
private:
    q info1;
    w info2;

public:
    a()
    {
        cout << "constructor is called\n";
    }
    w check(q var1, w var2)
    {
        w var3;
        var3 = var1 + var2;
        return var3;
    }
};
int main()
{
    a<int, float> *obj;
    a<float> obj1;
    cout << obj[0].check(23, 45.656) << endl;
    cout << obj1.check(21.21, 345) << endl;
    cout << sizeof(*obj);
}