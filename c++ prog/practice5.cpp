#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("hello.docx", ios::out | ios::trunc);
    char ch[100];
    int count = 0;
    for (int i = 0; ch[i - 1] != '\n'; i++)
    {
        ++count;
        ch[i] = cin.get(); //|cin.get(ch[i]);
        if (ch[i] != '\n')
        {
            fout << ch[i];
        }
    }
    fout.close();
    cout << count << endl;
    ifstream fin("hello.docx", ios::in);
    while (fin.eof() == 0)
    {
        fin.getline(ch, 100);
        cout << ch;
    }
    fin.close();
    return 0;
}