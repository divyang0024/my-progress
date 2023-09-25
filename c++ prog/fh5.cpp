#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i;
    char *ptr = new char[100];
    int count = 0;
    ofstream fout;
    fout.open("hello.docx");
    cout << "enter the content inside the file : ";
    for (i = 0; ptr[i - 1] != '\n'; i++)
    {
        ++count;
        cin.get(ptr[i]);
        fout << ptr[i];
    }
    fout.close();
    cout << "iteration happened " << count << " times." << endl;
    ifstream fin;
    fin.open("hello.docx");
    cout << "checking the content inside the file.....\n";
    while (fin.eof() == 0)
    {
        fin.getline(ptr, 100);
        cout << ptr;
    }
    fout.close();
    return 0;
}