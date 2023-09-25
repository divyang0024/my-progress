#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;

int main()
{
    char st;
    int count = 0;
    ofstream fout("check.txt");
    while (st != '\n')
    {
        ++count;
        cin.get(st);
        fout << st;
    }
    fout.close();
    ifstream fin("check.txt");
    int i = 0;
    char st1;
    while (fin.eof() == 0)
    {
        ++i;
        fin >> st1;
        cout << st1;
    }
    cout << "\n";
    cout << count;
    cout << "\n";
    cout << i;
    return 0;
}