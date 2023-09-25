#include<iostream>
#include<fstream>
#include<conio.h>
 
//ifstream and ofstream are the parent class of fstream
//fstream 
using namespace std;
 
int main()
{
    fstream objF("Hello.txt",ios::in);
    char name[80];

    while(objF.eof()!=1)
    {
            objF.getline(name,70);
            cout<<name<<endl;    
    }

    objF.close();

    getch();
    return 0;
}