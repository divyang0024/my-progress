#include <iostream>
#define pi 3.14
using namespace std;
class Dimension
{
    int side, radius, len, breadth;

public:
    Dimension(int side, int radius, int len, int breadth)
    {
        this->side = side;
        this->radius = radius;
        this->len = len;
        this->breadth = breadth;
    }
    void display();
    friend class Shape;
};
class Shape
{
public:
    void CircleArea(Dimension obj)
    {
        cout << "Area of circle " << pi * obj.radius * obj.radius;
    }
    void SquareArea(Dimension obj)
    {
        cout << "Area of square " << obj.side * obj.side;
    }
    void rectangleArea(Dimension obj)
    {
        cout << "Area of rectangle " << obj.len * obj.len;
    }
};
void Dimension::display()
{
    cout << "the programn has ended";
}
int main()
{
    Dimension obj(10, 20, 10, 10);
    Shape objS;
    objS.CircleArea(obj);
    objS.rectangleArea(obj);
    objS.SquareArea(obj);
    obj.display();
    return 0;
}