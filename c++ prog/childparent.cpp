#include<iostream>
#include<conio.h>

using namespace std;

class Parent
{
public:
void show()//also  called as member function
{
cout<<"I am in parent class";
}
};
//mode of inheritance public private protected
//single inheritance is used
class Child:public Parent
{
public:
void show()
{
cout<<"I am in child class";//function overiding,if this function was not not declared here it still be accesible because this function was declared inside parent class
}
};

int main()
{
Child objC;

objC.show();

getch();
return 0;

}