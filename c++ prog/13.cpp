// 1900 2000 1800 century years
//1992 1998 2001 non-century year

//1992%4==0 and 1992%100!=0 not a century year but it is leap year
//2000%400==0 is a leap year and century year

//1900 is a century year but not a leap year
//2000%400 =0
//it is a leap year and a century year
#include <iostream>

using namespace std;

int main()
{
     cout<<"divyang\n";
    int choice, year;

    while (1)
    {
        cout << "Enter any year " << endl;
        cin >> year;

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            cout << "Enter year is a leap year ";
        }
        else
        {
            cout << "year is not a leap year";
        }

        cout << endl
             << "Do you want to continue (1/0)" << endl;
        cin >> choice;

        if (choice == 0)
            break;
    }
    return 0;
}