#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;   // 0 to infinite
    int inches; // 0 to 12

public:
    // required constructors
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }

    // method to display distance
    void displayDistance()
    {
        cout << "F: " << feet << " I:" << inches << endl;
    }

    // overloaded minus (-) operator
    Distance operator-()
    {
        feet = -feet;
        inches = -inches;
        return Distance(feet, inches);
    }

    // overloaded < operator
    bool operator<(const Distance &d)
    {
        if (feet < d.feet)
        {
            return true;
        }
        if (feet == d.feet && inches < d.inches)
        {
            return true;
        }

        return false;
    }
};

int main()
{
     cout<<"divyang\n";
    int feet1, inch1, feet2, inch2;
    cout << "d1 feet : ";
    cin >> feet1;
    cout << "d1 inch : ";
    cin >> inch1;
    cout << "d2 feet : ";
    cin >> feet2;
    cout << "d2 inch : ";
    cin >> inch2;
    Distance D1(feet1, inch1), D2(feet2, inch2);

    if (D1 < D2)
    {
        cout << "Distance 1 is less than Distance 2 " << endl;
    }
    else
    {
        cout << "Distance 2 is less than Distance 1 " << endl;
    }

    return 0;
}