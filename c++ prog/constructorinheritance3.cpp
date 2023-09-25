#include <iostream>
using namespace std;
class a
{
    int q, w; //intialization happens in the same order of declaration
public:
    a(int x, int y) : 
    q(x)//initialization list
    {
        w = y;
        cout<<q<<endl;
        cout<<w<<endl;
    }
};
int main()
{
    a obj(12, 23);
    return 0;
}