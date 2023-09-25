#include <iostream>
using namespace std;
class person
{
public:
    virtual void name() = 0;
    void age()
    {
        int age;
        cout << "enter age : ";
        cin >> age;
        cout << age;
        cout << endl;
    }
};
class student : public person
{
public:
    void name()
    {
        string name;
        cout << "enter the student name : ";
        cin >> name;
        cout << name;
        cout << endl;
    }
};
class faculty : public person
{
public:
    void name()
    {
        string name;
        cout << "enter the name : ";
        cin >> name;
        cout << name;
        cout << endl;
    }
};
int main()
{
    student stobj;
    faculty faobj;
    stobj.name();
    faobj.name();
    stobj.age();
    faobj.age();
    person *refobj = new student();
    refobj->age();
    return 0;
}