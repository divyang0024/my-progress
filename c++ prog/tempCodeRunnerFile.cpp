#include <iostream>
using namespace std;
class myclass1
{
public:
    myclass1(int a)
    {
        cout << "constructor is called!!!!" << endl;
    }
};
int main()
{
    myclass1 obj('a');
    return 0;
}