#include<iostream>
#include<conio.h>
using namespace std;
void seek()
{
static int a=0;
cout<<"the value of a : "<<a++;
}
int main()
{
 seek();
 cout<<endl;
 seek();
 cout<<endl;
 seek();
 cout<<endl;
 seek();
 cout<<endl;
 seek();
 cout<<endl;
 seek();
 cout<<endl;
 cout<<"programn finished"<<endl;
 return 0;
}