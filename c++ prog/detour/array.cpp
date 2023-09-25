#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of array : ";
    cin >> n;
    int arr[n];
    int *arrptr = arr;
    cout << arrptr;
    for (int i = 0; i < n; i++)
    {
        int a = 0;
        cout << "enter the " << i + 1 << " element in the array : ";
        cin >> a;
        *arrptr = a;
        arrptr = arrptr + sizeof(a);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}