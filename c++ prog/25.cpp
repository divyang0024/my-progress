#include <iostream>
#include <string.h>

using namespace std;

class Wife;

class Husband
{
    char name[20]; //instance variable
    float salary;

public:
    Husband(char name[20], float salary)
    {
        strcpy(this->name, name);
        this->salary = salary;
    }
    friend void Add(Husband objH, Wife objW); //declaration of friend function Add
};
class Wife
{
    char name[20];
    float salary;

public:
    Wife(char name[20], float salary)
    {
        strcpy(this->name, name);
        this->salary = salary;
    }

    friend void Add(Husband objH, Wife objW); //prototype declaration of friend function
};

void Add(Husband objH, Wife objW) //body of friend function
{
    cout << "Total Salary of Husband and Wife " << objH.salary + objW.salary;
}

int main()
{
     cout<<"divyang\n";
     char h[]="RAM";
     char w[]="RANI";
    Husband objH(h, 35000);
    Wife objW(w, 55000);

    Add(objH, objW); //function call

        return 0;
}