#include <iostream>
#include <conio.h>
#define PI 3.14

using namespace std;

class A
{
    int radius, side, len, breadth;

public:
    A(int radius, int side, int len, int breadth)
    {
        this->len = len;
        this->side = side;
        this->radius = radius;
        this->breadth = breadth;
    }

private:
    void Display()
    {
        cout << "Len " << len << "Side " << side << "Radius" << radius << "Breadth " << breadth;
    }
    friend class B;
};
class B
{
public:
    void FindCircleArea(A obj)
    {
        cout << "Area of circle " << obj.radius * obj.radius * PI;
    }

    void FindSqaureArea(A obj)
    {
        cout << "Area of Sqaure " << obj.side * obj.side;
    }
    void Show(A obj)
    {
        obj.Display();
    }
};

int main()
{
    A objA(10, 20, 100, 200);

    B objB;

    objB.FindCircleArea(objA);
    objB.FindSqaureArea(objA);

    objB.Show(objA);

    getch();
    return 0;
}