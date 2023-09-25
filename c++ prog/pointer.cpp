#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int a=12;
int *b;
// *b-->a;(in this statment "--" is a post-decreament operator and ">" is greather than operator which makes them two diffrent operators working in their own way
b=&a;
cout<<setw(5)<<"b = "<<b<<endl;
cout<<setw(5)<<"a = "<<a<<endl;
cout<<setw(5)<<"&a = "<<&a<<endl;
cout<<setw(5)<<"*b ="<<*b<<endl;
cout<<setw(5)<<"&b ="<<&b<<endl;
return 0;
}