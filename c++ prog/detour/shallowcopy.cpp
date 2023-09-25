#include <iostream>
#include <string>
using namespace std;
class student
{
public:
    int grade;
};
class person
{
    string name;
    int age;
    student p1;

public:
    person() {}
    person(person &obj)
    {
        cout << "copy constructor is called";
        p1.grade = obj.p1.grade;
    }
    void set_grade()
    {
        int g;
        cout << "enter student grade : ";
        cin >> g;
        p1.grade = g;
    };
    void get_grade()
    {
        cout << "grade : " << p1.grade;
    };
};
int main()
{
    person *p2 = new person();
    p2->set_grade();
    person *p3 = new person(*p2);
    // shallow pointer : it works well with primitive data types but it cant deal with user defined data types,if there is a user defined data types then it will perform a shallow copy of the user defined obj and copy its reference instead;
    p3->set_grade();
    p2->get_grade();
    return 0;
}