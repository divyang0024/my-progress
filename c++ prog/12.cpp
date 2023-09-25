#include <iostream>

using namespace std;

int main()
{
     cout<<"divyang\n";
    int i, j, n, k, count = 1;

    cout << "Enter number of lines to be printed " << endl;
    cin >> n;

    for (i = 1; i <= n; i++) //no of rows
    {
        for (j = 1; j <= n - i; j++) //for space
        {
            cout << " ";
        }
        for (k = j; k <= n; k++) //number
        {
            cout << count++;
        }
        cout << endl;
    }

    return 0;
}