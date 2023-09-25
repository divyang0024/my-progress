#include <iostream>
#include <conio.h>
#include <exception>

using namespace std;

class Age : public exception
{
    int age;

public:
    const char *what()
    {
        return "age is less than 18 so you are not eligible";
    }

    int getAge()
    {
        return age;
    }
    void setAge(int age)
    {
        this->age = age;
    }
};
class Voting
{
    int age;

public:
    Voting(int age)
    {
        this->age = age;
    }
    void CheckAge()
    {
        if (age < 18)
        {
            Age obj;
            obj.setAge(age);

            throw obj;
        }
        else
        {
            cout << endl
                 << "You are eligible for voting " << age << endl;
        }
    }
};

int main()
{
    Voting objV(19);

    try
    {
        objV.CheckAge();
    }
    catch (Age obj)
    {
        cout << obj.what();
        cout << endl
             << "You Age is : " << obj.getAge();
    }
    getch();
    return 0;
}