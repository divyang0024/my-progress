#include<iostream>
#include<conio.h>
 
using namespace std;
 

class Base
{
    int a;

    public:
        Base()
        {
            cout<<"I am called first "<<endl;
            a=10;        
        }
        void Display()
        {
            cout<<"a : "<<a<<endl;
        }
};
 
class Derived:public Base
{
    int b;

    public:
        Derived(int b)
        {
            cout<<"I am called second "<<endl;
            this->b=b;
        }
        void Write()
        {
            cout<<"b : "<<b<<endl;
        }
};
 
int main()
{
    Derived obj(10);

    obj.Write();
    obj.Display();

    getch();
    return 0;
}