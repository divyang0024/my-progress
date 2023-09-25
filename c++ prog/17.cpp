#include <iostream>
//+
//3
//+++
using namespace std;

void rep_char(char ch, int n)
{
    if (n != 0)
    {
        cout << ch;
        rep_char(ch, n - 1);
    }
}
int main()
{
     cout<<"divyang\n";
    char ch;
    int n;

    std::cout << "Enter any character " << endl;
    std::cin >> ch;

    std::cout << "Number of times to repeate" << endl;
    std::cin >> n;

    rep_char(ch, n);

    
    return 0;
}