#include <iostream>
using namespace std;

int main()
{
    int i, nun;
    try
    {
        for (i = 0; i < 10; i++)
        {
            if (i == 5)
                throw " condition is true !!!!";
            else
                cout << i << endl;
        }
    }
    catch (char const *ptr)
    {
        cout << ptr << endl;
    }

    return 0;
}