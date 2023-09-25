#include <iostream>
#include <conio.h>

using namespace std;

class operation
{
    int a, b, sum;

public:
    void Input();

private:
    void Sum();
    void display();
};
void operation::Input()
{
    cout << "Enter a and b" << endl;
    cin >> a >> b;
    Sum();
}
void operation::Sum()
{
    sum = a + b;
    display();
}
void operation::display()
{
    cout << "a : " << a << "b : " << b << endl
         << "sum : " << sum;
}
int main()
{
     cout<<"divyang\n";
    operation obj;
    obj.Input();

    return 0;
}