#include <iostream>
#include <ios>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("hello.docx", ios::app | ios::out);
    char ch[100];
    for (int i = 0; ch[i - 1] != '\n'; i++)
    {
        cin.get(ch[i]);
        file << ch[i];
    }
    file.close();
    file.open("hello.docx", ios::in);
    while (file.eof() == 0)
    {
        file.getline(ch, 100);
        cout << ch << endl;
    }
    return 0;
}