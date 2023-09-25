#include <iostream>

using namespace std;
main()
{
    cout<<"divyang\n";
    char a;
    cout << "Enter a single character: " ;
    cin >> a;
    switch ((a >= 65 && a <= 90) || (a >= 97 && a <= 122)) //ASCII Value 65-90 (capital letters), 97-122 (small letters)
    {
        case 1:
            cout << "You entered a letter!";
            break;
        case 0:
            if (a >= 48 && a <= 57 )    //ASCII Value 48-57 (num 0-9)
            {
                cout << "You entered a number!" << endl;
            }
            else
            {
                cout << "You entered a symbol!" << endl;
            }
            break;
    }
    return 0;
}