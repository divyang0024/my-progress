#include <iostream>
#include <conio.h>

using namespace std;

//call by reference
void swap(int &x, int &y)
{
    int t = x;
    x = y;
    y = t;
}
int main()
{
    int a = 12, b = 13;

    swap(a, b);

    cout << "After swap " << endl;
    cout << "A : " << a << "B : " << b;
}