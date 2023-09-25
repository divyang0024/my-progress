#include <iostream>

using namespace std;
int main()
{
    string ch;
    cout << "enter string : ";
    cin >> ch;
    for (int i = 0; i < ch.length(); i++)
    {
        cout << ch[i] << endl; //accessing value through array
        ch.at(i);              //string "at" function predefined
    }
    cout << "-----------------------------" << endl;
    for (int i = ch.length(); i > 0; i--)
    {
        cout << ch[(i - 1)] << endl; //accessing value through array
    }
    cout << "-----------------------------" << endl;
    cout << "the length of string is : " << ch.length() << " and total indexes are : " << (ch.length() + 1);
    return 0;
}