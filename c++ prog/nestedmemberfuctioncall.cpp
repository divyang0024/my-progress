#include <iostream>
#include <conio.h>

using namespace std;

class Employee
{
    float salary, incr;

public:
    void input();

private:
    void update();
    void display();
};

void Employee::input()
{
    cout << "Enter salary of the employee" << endl;
    cin >> salary;

    cout << "Enter the increment ";
    cin >> incr;

    update();
}
void Employee::update()
{
    salary += incr;
    display();
}
void Employee::display()
{
    cout << "Updated Salary : " << salary;
}
int main()
{
    Employee objE;

    objE.input();

    getch();
    return 0;
}