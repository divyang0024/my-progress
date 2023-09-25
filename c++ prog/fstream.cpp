#include <iostream>
#include <fstream>
#include <conio.h>

//ifstream and ofstream are the parent class of fstream
//fstream
using namespace std;

int main()
{
    ifstream objF("Hello.txt");

    while (objF.eof() != 1)
    {
        cout << (char)objF.get();
    }

    objF.close();

    getch();
    return 0;
}