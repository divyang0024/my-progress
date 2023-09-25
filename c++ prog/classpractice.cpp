#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

class employee
{
    int password,card_pin,address,user_id;//private data members are accessible on through member functions

    public:

    int eid,deptno;//public data members are accesible anywere

    int insert()
{
    cout<<"insert password detail here :"<<endl;
    cin>>password;
    cout<<"insert card_pin detail here :"<<endl;
    cin>>card_pin;
    cout<<"insert address detail here :"<<endl;
    cin>>address;
    cout<<"insert user_id detail here :"<<endl;
    cin>>user_id;
    return 0;
}
  void display()
{
    cout<<setw(20)<<"your user1 password is :"<<password<<endl;
    cout<<setw(20)<<"your user1 card pin is :"<<card_pin<<endl;
    cout<<setw(20)<<"your user1 address is :"<<address<<endl;
    cout<<setw(20)<<"your user1 uid  is :"<<user_id<<endl;
    cout<<setw(20)<<"your user1 eid is :"<<eid<<endl;
    cout<<setw(20)<<"your user1  dept no is :"<<deptno<<endl;
}
};
int main()
{
employee user1;
user1.insert();
cout<<setw(20)<<"enter your employee id :"<<endl;
cin>>user1.eid;//eid is accesible only because it is public data member 
cout<<setw(20)<<"enter your department : "<<endl;
cin>>user1.deptno;// it is the same with deptno because it is also a public data member
user1.display();
return 0;
}