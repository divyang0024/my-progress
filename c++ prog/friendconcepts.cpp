#include <iostream>

using namespace std;

class A_company
{
private:
    int salary;
    friend void addsal();
};
class B_company
{
private:
    int salary;
    friend void addsal();
};
void addsal()
{
    A_company a;
    B_company b;
    a.salary = 120000;
    b.salary = 120000;
    int sumsalary = a.salary + b.salary;
    cout << "sum of both the salary is " << sumsalary;
}
int main()
{
    addsal();
    return 0;
}