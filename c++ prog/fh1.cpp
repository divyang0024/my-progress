#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    char ch[100];
    ifstream obj("check.txt");
    obj.getline(ch,100);
    cout<<sizeof(ch);
    cout << ch;
    return 0;
}