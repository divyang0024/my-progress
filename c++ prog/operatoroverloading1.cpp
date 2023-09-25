#include <iostream>

using namespace std;
class myclass
{
private:
    int a, b;

public:
    void setdata()
    {
        cout << "enter a : ";
        cin >> a;
        cout << "enter b : ";
        cin >> b;
        cout << "*-*-*-*-*-*-*-*-*-" << endl;
    }

    myclass operator +(myclass obj)
    {
        myclass obj1;
        obj1.a = a + obj.a;
        obj1.b = b + obj.b;
        return obj1;
    }
    void display()
    {
        cout << "the value of a is : " << a << endl;
        cout << "the value of b is : " << b << endl;
    }
};
int main()
{
    myclass *obj = new myclass[3];
    obj[0].setdata();
    obj[1].setdata();
    obj[2] = obj[0] + obj[1]; //obj[0].add(obj[1])
    obj[2].display();
    return 0;
}