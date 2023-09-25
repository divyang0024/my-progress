#include <iostream>

using namespace std;

int check()
{
    int *ch = new int;
    int verify;
    cout << "enter ch:\n ";
    cin >> *ch;
    cout << " &ch : " << &ch << endl;
    switch (*ch)
    {
    case 1:
    {
        cout << "enter number : ";
        cin >> verify;
        cout << verify << endl;
        check();
        break;
    }
    case 2:
    {
        cout << verify << endl;
        break;
    }
    default:
        cout << "input invalid\n";
    }
    return 0;
}

int hheck()
{
    int *ch = new int;
    int verify;
    cout << "enter ch:\n ";
    cin >> *ch;
    cout << " &ch : " << &ch << endl;
    switch (*ch)
    {
    case 1:
    {
        cout << "enter number : ";
        cin >> verify;
        cout << verify << endl;
        break;
    }
    case 2:
    {
        cout << verify << endl;
        break;
    }
    default:
        cout << "input invalid\n";
    }
    return 0;
}

int main()
{
    check();

    //    hheck();
    return 0;
}