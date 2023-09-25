#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("hello.docx");
    fout << "hello my name is divyang";
    fout.close();
    return 0;
}