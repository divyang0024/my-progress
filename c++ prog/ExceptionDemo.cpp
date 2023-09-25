#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int num;
	
	cout<<"Enter any number ";
	cin>>num;
	
	try
	{
		if(num<0)
		throw num;
		
		cout<<num;
	}
	catch(int num)
	{
		cout<<"You have entered a nageative value "<<num;
	}
	getch();
	return 0;
}
