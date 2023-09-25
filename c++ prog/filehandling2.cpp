#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{
    char name[] = "Hello I am fine ";
    ofstream obj("Demo123.txt");

    int i = 0;

    while (name[i] != '\0')
    {
        obj.put(name[i]);
        i++;
    }

    obj.close();

    getch();
    return 0;
}