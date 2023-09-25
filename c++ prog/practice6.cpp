#include<iostream>
using namespace std;
int main()
{
    static int a = 0;
    int b = 12, c = 21;
    a = b + c;
    cout << a;
    return 0;
}