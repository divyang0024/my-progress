#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    for (;;)
    {
        cout << n;
        n += n; 
        if (n >= 11)
        {
            break;
        }
    }
    return 0;
}