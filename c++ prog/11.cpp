#include <iostream>

using namespace std;

int main()
{
     cout<<"divyang\n";
    int choice, temp;

    while (1)
    {
        cout << "Menu " << endl;
        cout << "Press 1 : Eligible for Voting " << endl;
        cout << "Press 2 : couting for even Odd " << endl;
        cout << "Press 3 : Exit" << endl;

        cin >> choice;

        switch (choice) //integer or char
        {
        case 1:
        {
            int age;

            cout << "Enter your age " << endl;
            cin >> age;

            if (age < 18)
            {
                cout << "You are not eligible for voting";
            }
            else
            {
                cout << "You age : " << age << " and you are eligible for voting";
            }
        }
        break;
        case 2:
        {
            int i, num, countE = 0, countOdd = 0;

            for (i = 1; i <= 10; i++)
            {
                cout << "Enter any number " << endl;
                cin >> num;

                (num % 2 == 0) ? (countE++) : (countOdd++);
            }
            cout << endl
                 << "Count of Even " << countE << endl
                 << "Count of Odd" << countOdd;
        }
        break;
        case 3:
        {
            exit(0);
        }
        default:
        {
            cout << "Wrong choice entered " << endl;
        }
        break;
        }

        cout << endl
             << "Do you want to continue (1/0)" << endl;
        cin >> temp;

        if (temp == 0)
            break;
    }

    return 0;
}