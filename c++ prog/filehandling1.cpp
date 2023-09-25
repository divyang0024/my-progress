#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

// fstream is a parent class
// ifstream and ofstream are the child class

// fstream for read and write
// ifstream for read
// ofstrea for write

// 2 ways to open the file
// 1 constructor method
// 2 open function

// get function for reading a single char and returns the ascii of each char
// put function for writing a single char

int main()
{
    ifstream obj("check.txt");
    // eof is flag it can be 0 or 1
    char name[100];
    int count = 0;
    while (obj.eof() != 1)
    {
        obj.getline(name, 80);
        cout << name << endl;
        ++count;
    }
    obj.close();
    cout << count;
    return 0;
} // specify the path of the file