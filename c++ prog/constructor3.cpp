#include <iostream>
using namespace std;
class myclass1
{
public:
    explicit myclass1(int a)
    {
        cout << a;
    }
};
int main()
{
    myclass1 obj = myclass1('a');
    // to avoid implicit type casting we prefix the explicit keyword before the function declaration
    return 0;
}