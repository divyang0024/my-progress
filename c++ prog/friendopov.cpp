// unary operators ++(pre and post ) --
// a--//post decrement
//--a//pre decrement
// Student obj
// binary operator + - / * %
// relational operator
//< > <= >= == !=
// a>b
// a==b
// 2 operands
// a+b
// obj1+obj2
// binary operator overloading
//== binary
// a==b
// obj1==obj2

// in case of binary operator ovrloading using friend function
// 2 arguments is given while calling the function

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
    Student obj1("RAM");
    Student obj2("RAM");

    if (obj1 == obj2) // operator==(obj1,obj2)
    {
        cout << "Both are equal ";
    }
    else
    {
        cout << "Both are not equal";
    }
    getch();
    return 0;
}