#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i = 0;
    char ch, c;
    fstream finout("hello.docx");
    cout << finout.tellp();
    finout << "hello world";
    cout << "the position of output pointer is : " << finout.tellp() << endl;
    finout.close();
    ifstream fin("hello.docx");
    fin.seekg(0);
    while (fin.eof() == 0)
    {
        cout << " tellg : " << fin.tellg() << endl;
        ch = fin.get();
        cout << "character at " << i << " index is : " << ch << endl;
        ++i;
    }
    cout << "VV" << endl;
    cout << '\0';
    cout << "\n^^";
    return 0;
}