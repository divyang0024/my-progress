#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char ch;
    ch = getchar(); // wait for enter end shows the input
    cout << ch << endl;
    ch = getch(); // neither it shows the input nor it will waits for enter
    cout << ch << endl;
    ch = getche(); // shows the output but do not wait for
    cout << ch << endl;
    return 0;
}