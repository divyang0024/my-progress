#include <iostream>

using namespace std;

int main()
{
    //  char str[2][10]={"divyang"," mundotia"};
    char str[10][10];
    for (int i = 0; i < 10; i++)
    {
        cin >> str[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << str[i] << endl;
    }
    return 0;
}