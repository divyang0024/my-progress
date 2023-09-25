#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
//append data in the file
int main()
{
    char name[] = "I love canada";
    fstream obj("Demo123.txt", ios::app);
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