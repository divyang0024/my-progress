#include <iostream>
#include <conio.h>

using namespace std;
typedef struct employee
{
    int EID;
    int postal_code;
} ep;
int main()
{
    ep employee1;
    employee1.EID = 24;
    employee1.postal_code = 110005;
    cout << "the employee id is = " << employee1.EID << endl;
    cout << "the postal code is = " << employee1.postal_code;
    return 0;
    enum meal
    {
        breakfast,
        lunch,
        dinner
    };
}