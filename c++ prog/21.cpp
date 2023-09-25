#include <iostream>

using namespace std;

class Distance
{
    int feet, inches;

public:
    void Input()
    {
        cout << "Enter feet" << endl;
        cin >> feet;

        cout << "Enter inches " << endl;
        cin >> inches;
    }

    Distance add(Distance obj2)
    {
        Distance objD;

        objD.feet = feet + obj2.feet;
        objD.inches = inches + obj2.inches;

        return objD;
    }
    void display()
    {
        cout << "Inches : " << inches << "Feet : " << feet;
    }
};
int main()
{
     cout<<"divyang\n";
    Distance obj1, obj2, obj3;

    obj1.Input();
    obj2.Input();

    obj3 = obj1.add(obj2);

    obj3.display();

    return 0;
}