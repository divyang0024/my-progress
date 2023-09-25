//unary operator
//++ --
//++a
//a--

//binary operator
//+ - * / %
//a+b
// == < > <= >= !=
//a==b
//a>b
//a<b

//tenary operator
// expression1?expression2:expresson3

//binary operator overloading using friend function
//==

//2 arguments will given when function is called

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

class Student
{
    char name[20];

public:
    Student(char name[20])
    {
        strcpy(this->name, name);
    }
    friend int operator==(Student obj1, Student obj2);
};
int operator==(Student obj1, Student obj2)
{
    return !strcmp(obj1.name, obj2.name);
}

int main()
{
    Student obj1("RAM"), obj2("RAM");

    if (obj1 == obj2) //operator(obj1,obj2)
    {
        cout << "Both are equal";
    }
    else
    {
        cout << "Both are not equal";
    }
    getch();
    return 0;
}