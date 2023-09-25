#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char ch[100];
    ofstream fin("hello.docx");
    fin.put(*ch);
    cout << "please wait..........." << endl;
    cout << ch;
    return 0;
}