#include <conio.h>
#include <iostream>

using namespace std;

//scope of the variable is define in the namespace
namespace first
{
    class Student
    {
        int rollno;

    public:
        Student()
        {
            rollno = 12;
        }
        void display()
        {
            cout << rollno;
        }
        ~Student()
        {
            cout << "Address : " << this << endl;
        }
    };

}

namespace second
{
    class Student
    {
        int rollno;

    public:
        Student()
        {
            rollno = 10;
        }
        void display()
        {
            cout << rollno;
        }
        ~Student()
        {
            cout << "Address : " << this << endl;
        }
    };
}
int main()
{
    first::Student objF;
    second::Student objS;

    objF.display();
    objS.display();

    getch();
    return 0;
}