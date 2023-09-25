#include <iostream>
using namespace std;
class identity
{
protected:
    string name;
    int age;
    string sex;

public:
    virtual void setdata() = 0;
    virtual void getdata(){};
};
class student : public identity
{
public:
    void setdata()
    {
        cout << "enter student name : ";
        cin >> name;
        cout << "enter the of the age of student : ";
        cin >> age;
        cout << "enter student gender : ";
        cin >> sex;
        getdata();
    }
    void getdata()
    {
        cout << "student name is " << name << ", student age is " << age << ", student gender is " << sex << endl;
    }
};
class teacher : public identity
{
public:
    void setdata()
    {
        cout << "enter teacher name : ";
        cin >> name;
        cout << "enter the of the age of teacher : ";
        cin >> age;
        cout << "enter teacher gender : ";
        cin >> sex;
        getdata();
    }
    void getdata()
    {
        cout << "teacher name is " << name << ", teacher age is " << age << ", teacher gender is " << sex << endl;
    }
};
int main()
{
    identity *bptr[2];
    student objs;
    teacher objt;
    bptr[0] = &objs;
    (*bptr[0]).setdata();
    bptr[1] = &objt;
    bptr[1]->setdata();
    return 0;
}