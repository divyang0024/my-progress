//unary operator overloading using member function
//++ (pre and post)
//++a pre
//a++ post
//unary member arguments will be 0
//unary friend arguments will be 1
#include <iostream>
#include <conio.h>

using namespace std;

class Student
{
    int rollno;

public:
    Student() {}
    Student(int rollno)
    {
        this->rollno = rollno;
    }
    friend Student operator++(Student obj1);
    friend Student operator++(Student obj1, int);
    void display()
    {
        cout << rollno;
    }
};
Student operator++(Student obj1)
//pre increment
{
    Student obj;

    obj.rollno = ++obj1.rollno; //13

    return obj; // 13
}
Student operator++(Student obj1, int)
//post
{
    Student obj;

    obj.rollno = obj1.rollno++;
    // obj.rollno; 12
    //rollno 13
    return obj; //12
}
int main()
{
    Student obj(12);

    Student objI = obj++; //post increment operator //obj.operator++(int)

    objI.display(); //12

    objI = ++obj; //pre increment operator//13+1=14 //obj.operator++()

    objI.display(); //14

    return 0;
}