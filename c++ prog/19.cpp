#include <iostream>

using namespace std;

void greatest(int a, int b)
{
    a > b ? cout << a << " is greatest " : cout << b << " is greatest" << endl;
    //expression1?epxression2:expression3
}
int main()
{
     cout<<"divyang\n";
    int a, b;

    cout << "Enter a and b";
    cin >> a >> b;

    greatest(a, b);
    return 0;
}