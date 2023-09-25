#include <iostream>
using namespace std;
void check()
{
    cout << "inside check() function\n";
    try
    {
        throw 0;
    }
    catch (int e)
    {
        cout << "inside check() catch block" << endl;
        throw "rethrow!!!!";
    }
}
int main()
{
    cout << "inside int main() function\n";
    try
    {
        check();
        // throw 12.2345;nested catch will not detect this statment
        /* catch (float)
         {
         }not appplicable*/
    }
    catch (int)
    {
        cout << "inside int main() catch block" << endl;
    }
    catch (char const *ptr)
    {
        cout << ptr << endl;
    }
    return 0;
}