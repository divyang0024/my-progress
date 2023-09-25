#include <conio.h>
#include <fstream>
#include <iostream>
//fstream mode : in out app
//ofstream mode : app
//ifstream no mode

using namespace std;

int main()
{
    fstream obj("Demo123.txt", ios::in | ios::out);// "|" is "OR bitwise operator"

    char name[20];
    float marks;

    cout << "Enter your name";
    cin >> name;

    cout << "Enter marks ";
    cin >> marks;

    //insertion operator
    obj << "Name " << name << "Marks " << marks;
    obj.close();

    getch();
    return 0;
}