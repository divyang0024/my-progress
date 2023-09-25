#include <iostream>

using namespace std;

class code
{
    int id;

public:
    code(int a) //parameterized constructor
    {
        id = a;
    }
    /*code(code &x) //copy constructor
    {
        id = x.id;
    }*/
    void display()
    {
        cout <<" obj b id is : "<< id;
    }
};
int main()
{
    code a(100);
    code b(a); //refrence call is made
    b.display();
    return 0;
}