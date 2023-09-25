#include <iostream>
#include <conio.h>

using namespace std;

void init(int d, int a = 0, int b = 1, int c = 10)
{
    cout << "a" << a << "b" << b << "c" << c << "d" << d << endl;
}

int main()
{
    init(4, 6, 7);
    init(1, 2);
    init(1);

    getch();
    return 0;
}