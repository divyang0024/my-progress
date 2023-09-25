#include <conio.h>
#include <iostream>
//binary operator overloading using member function
//> realtional operator

using namespace std;

class Distance
{
    int feet, inches;

public:
    Distance(int feet, int inches)
    {
        this->feet = feet;
        this->inches = inches;
    }
    int operator>(Distance d2)
    {
        if (feet > d2.feet)
            return 1;
        return 0;
    }
};

int main()
{
    int feet1, feet2, inches1, inches2;

    cout << "Enter details for distance 1" << endl;

    cout << "Enter feet";
    cin >> feet1;

    cout << "Enter inches";
    cin >> inches1;

    cout << "Enter details for distance 2" << endl;

    cout << "Enter feet";
    cin >> feet2;

    cout << "Enter inches;";
    cin >> inches2;

    Distance obj1(10, 20);
    Distance obj2(30, 50);

    if (obj1 > obj2)
    {
        cout << "Obj1 is greater than obj2";
    }
    else
    {
        cout << "Obj2 is greater than obj1";
    }
    getch();
    return 0;
}