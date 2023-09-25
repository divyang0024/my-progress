#include <iostream>
using namespace std;
void check(int x) throw(char) /*only these data types are
 supposed to be thrown*/
{
    if (x == 0)
        throw(12);
    else if (x == 1)
        throw(12.34234);
    else
        throw 'x';
}
int main()
{
    int a;
    try
    {
        cout << "enter a number to test exception list : ";
        cin >> a;
        check(a);
    }
    catch (int)
    {
        cout << "integer is caught!!!!";
    }
    catch (double)
    {
        cout << "double is caught!!!!";
    }
    catch (char)
    {
        cout << "character is caught!!!!";
    }
    return 0;
}