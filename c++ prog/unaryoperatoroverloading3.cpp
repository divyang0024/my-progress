#include <iostream>
#include <conio.h>
//<<//insertion
//>>//extraction
//only friend function
//not with the memeber function

using namespace std;

class Student
{
    int rollno;
    char name[20];

    friend void operator<<(ostream &objO, Student &obj);
    friend void operator>>(istream &objI, Student &obj);
};
void operator<<(ostream &objO, Student &obj) //output
{
    objO << "Name : " << obj.name << "Roll no " << obj.rollno;
}
void operator>>(istream &objI, Student &obj) //input
{
    cout << "Enter name and rollno ";
    objI >> obj.name >> obj.rollno;
}
int main()
{
    Student obj;

    cin >> obj;

    cout << obj;

    getch();
    return 0;
}