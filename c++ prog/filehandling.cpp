#include<iostream>
#include<conio.h>
#include<fstream>
 
using namespace std;
 
//fstream is a parent class
//ifstream and ofstream are the child class 
 
//fstream for read and write
//ifstream for read
//ofstrea for write
 
//2 ways to open the file 
//1 constructor method
//2 open function 
 
//get function for reading a single char  
//put function for writing a single char
 
int main()
{
    ifstream obj("C:\\Users\\DIVYANG\\OneDrive\\Desktop\\Hello.txt");
    //eof is flag it can be 0 or 1

    while(obj.eof()!=1)
    {
        cout<<(char)obj.get();
    }
    obj.close();
    getch();
    return 0;
}