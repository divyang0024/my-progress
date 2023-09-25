#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{
    char name[] = "I love india ";
    fstream obj("Demo123.txt", ios::out);

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