#include<iostream>
#include<conio.h>



using namespace std;



class Distance
{

public:
int feet,inches;



void Input()
{
cout<<"Enter feet"<<endl;
cin>>feet;

cout<<"Enter inches "<<endl;
cin>>inches;
}

Distance add(Distance obj2)
{
Distance objD;

objD.feet=feet+obj2.feet;
objD.inches=inches+obj2.inches;

return objD;
}
};
int main()
{
Distance obj1,obj2,obj3;

obj1.Input();
obj2.Input();

obj3=obj1.add(obj2);

cout<<endl<<"inches"<<obj3.inches<<endl<<"feet"<<obj3.feet;

getch();
return 0;
}