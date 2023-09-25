#include <iostream>
using namespace std;
class mybaseclass
{
private:
    int b;
    int a;

public:
    mybaseclass(int x, int y) : b(y), a(x + b)
    {
        cout << a << endl;
        cout << b << endl;
    }
};
int main()
{
    mybaseclass obj(12, 21);
    return 0;
}