#include <iostream>

using namespace std;

class Student
{
    int rollno; // instance variable

public:
    void function()
    {
        cout << " student class function was invoked";
    }
    Student(int rollno)
    {
        this->rollno = rollno;
        this->function();
    }
    void display()
    {
        cout << rollno;
    }
    ~Student()
    {
        cout << endl
             << "Roll No : " << this->rollno;
        cout << endl
             << "Same :" << this;
    }
};

int main()
{
    {
        Student *obj = new Student(18);

        cout << "Address : " << obj << endl;
        (*obj).display();
        delete obj;
    }
    return 0;
}