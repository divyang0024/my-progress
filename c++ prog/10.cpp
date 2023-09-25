#include <iostream>

using namespace std;
int main()
{
     cout<<"divyang\n";
    int flag = 0, i, num;
    cout << "enter any number" << endl;
    cin >> num;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "number is number" << endl;
    }
    else
    {
        cout << "number is not prime" << endl;
    }
    return 0;
}