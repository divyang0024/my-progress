#include <iostream>

using namespace std;
int main()
{
     cout<<"divyang\n";
    char ch = 'a';
    int temp = 10;
    float f = 10.5f;

    float result = ch + temp + f;
    cout << "result of addition " << result << endl;
    cout << endl
         << "result : " << (int)result << endl;

    return 0;
}