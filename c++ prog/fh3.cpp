#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int count = 0;
    cout << "please wait checking content inside the file.........." << endl;
    char ch[100];
    ifstream fin;
    fin.open("hello.docx");
    while (fin.eof() == 0)
    {
        ++count;
        cout << "the " << count << " iteration : " << endl;
        fin.getline(ch, 100);
        cout << ch << endl;
    }
    fin.close();
    cout << "number of times iteration happened : " << count << " times";
    return 0;
}