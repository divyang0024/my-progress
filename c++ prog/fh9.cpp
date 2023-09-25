#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("hello.docx", ios::out);
    cout << fout.tellp();
    fout << "hello world";
    cout << fout.tellp();
    fout.seekp(6);
    fout << "HELLO";
    cout << fout.tellp();
    fout.close();
    char ch[100];
    ifstream fin;
    fin.open("hello.docx");
    fin.seekg(6, ios::cur);
    while (fin.get() != '\0')
    {
        fin.getline(ch, 100);
        cout << ch;
    }
    return 0;
}