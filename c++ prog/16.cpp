#include <iostream>

using namespace std;

struct Distance
{
    int feet, inches;

public:
    void Input()
    {
        cout << "Enter feet";
        cin >> feet;

        cout << "Enter inches";
        cin >> inches;
    }
    void Display()
    {
        cout << endl
             << "Feet " << feet << "Inches : " << inches;
    }

    Distance add(Distance obj)
    {
        Distance obj3;

        obj3.feet = feet + obj.feet;
        obj3.inches = inches + obj.inches;

        return obj3;
    }
};
int main()
{
     cout<<"divyang\n";
    struct Distance d1, d2, d3;

    cout << endl
         << "Enter Details for Distance 1 " << endl;

    d1.Input();
    cout << endl
         << "Details for Distance 1 " << endl;

    d1.Display();

    cout << endl
         << "Enter Details for Distance 2 " << endl;

    d2.Input();
    cout << endl
         << "Details for Distance 2 " << endl;

    d2.Display();

    cout << endl
         << "After Addition " << endl;

    d3 = d1.add(d2);

    d3.Display();
    return 0;
}