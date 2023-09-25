#include <iostream>
using namespace std;
class a
{
public:
    a()
    {
        cout << "the constuctor was called "; // not called
    }
};
int main()
{
    a *obj; // the object call will not be made since *obj is object pointer of class a
    return 0;
}