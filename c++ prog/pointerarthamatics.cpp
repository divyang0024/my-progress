#include <iostream>

using namespace std;

int main()
{
    int a[10];
    int *ptr = &a[0];
    for (int i = 0; i < 10; i++)
    {
        cin >> *(ptr + i);
        cout << *(ptr + i);
    }
    return 0;
}