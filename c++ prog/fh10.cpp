#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("hello.docx", ios::out);
    fout << "hello world";
    fout.seekp(-5, ios::end);
    fout << "checking offset and reference position";
}