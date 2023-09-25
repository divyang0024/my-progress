#include <conio.h>
#include <iostream>
using namespace std;
int a = 10;
int main()
{
    int a = 4;
    int b = 12;
    cout << a;
    cout << ::a;
    {
        cout << b;
    }
    // cout<<b;
    getch();
    return 0;
}
