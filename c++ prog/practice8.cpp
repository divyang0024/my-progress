#include <iostream>
using namespace std;
class a
{
public:
    int v1;
};
int main()
{
    {
        a obj;
        {
            a obj;
        }
    }
}