#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int count = 0;
    char ch[100];
    ifstream fin("this.cpp");
    while (fin.eof() == 0)
    {
        ++count;
        fin.getline(ch, 100);
        cout << ch << endl;
    }
    cout << count;
    return 0;
}