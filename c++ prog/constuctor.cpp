#include <iostream>
#include <conio.h>

using namespace std;

class Student
{
    int rollno;

public:
    Student()
    {
        rollno = 12;
    }
    Student(int rollno)
    {
        this->rollno = rollno;
    }
    Student(Student &obj)
    {
        rollno = obj.rollno;
    }
    void Display()
    {
        cout << rollno;
    }
    ~Student()
    {
        cout << "Object : " << this;
    }
};
int main()
{
    Student obj;
    Student obj2(10);

    Student obj3(obj2);

    obj.Display();
    obj2.Display();
    obj3.Display();

    getch();
    return 0;
}