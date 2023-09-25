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

//binary operator overloading using member function
//==

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
    int operator==(Student obj)
    {
        if (strcmp(name, obj.name) == 0)
            return 1;

        return 0;
    }
};

int main()
{
     cout<<"divyang\n";
     
    Student obj1("RAM"), obj2("SHAM");

    if (obj1 == obj2) //obj1.operator==(obj2)
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