#include <iostream>

using namespace std;

struct employee
{
    int emp_no;
    float emp_cmp;

    void Input()
    {
        cout << "Enter emp_no" << endl;
        cin >> emp_no;

        cout << "Enter emp componsation " << endl;
        cin >> emp_cmp;
    }
    void Display()
    {
        cout << "Employes Details " << endl;
        cout << "EmpNo : " << emp_no << "Emp Comp : " << emp_cmp;
    }
};
int main()
{
    cout << "divyang\n";
    struct employee obj[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        obj[i].Input();
    }

    cout << "First way to display " << endl;
    for (i = 0; i < 3; i++)
    {
        obj[i].Display();
    }
    cout << endl
         << "Second way to display " << endl;

    for (i = 0; i < 3; i++)
    {
        cout << "Emp comp : " << obj[i].emp_cmp << "Emp No " << obj[i].emp_no << endl;
    }

    return 0;
}