#include <conio.h>
#include <iostream>

using namespace std;

// scope of the variable is define in the namespace
namespace first
{
    int a = 10;
}

namespace second
{
    int a = 20;
}

int main()
{
    int a = 10;
    cout << a;
    cout << first::a;
    cout << second::a;

    getch();
    return 0;
}
