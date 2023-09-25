#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a=5,b=0;
	
	try
	{
		if(b==0)
		throw b;
		
		cout<<a/b;
	}
	catch(int ch)
	{
		cout<<ch;
		cout<<"Bye";
	}
	
	getch();
	return 0;
}
