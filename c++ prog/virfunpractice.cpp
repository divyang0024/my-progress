#include <iostream>
using namespace std;
class a
{
public:
    void display()
    {
        cout << "the base class member function was called " << endl;/*the base class 
        member function is overidden*/ 
    }
};
class b:public a
{
public:
    void display()
    {
        cout << "the derived class member function was called " << endl;
    }
};
int main()
{
b obj;
obj.display();
    return 0;
}