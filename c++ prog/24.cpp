#include <iostream>

using namespace std;

class Student
{
    int rollno;
    string name;

public:
    Student(int rollno, string name)
    {
        this->rollno = rollno;
        this->name = name;
    }
    void display()
    {
        cout << endl<< "Roll No :"<< rollno<<endl<< "Name :"<< name<<endl;
    }
};

int main()
{
    cout << "divyang\n";
    Student *obj[5];
    int rollno;
    string name;
    int i;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter rollno";
        cin >> rollno;

        cout << "Enter name ";
        cin >> name;

        obj[i] = new Student(rollno, name);

        obj[i]->display();
    }
    return 0;
}