#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

using namespace std;

int main()
{

    system("color 0A");

    // Background color and Foreground

    int hour, min, sec;

    cout << setw(70)

         << "Enter Current time\n";

    // Use of manipulator for taking

    // input from the user

    cout << "HH- ";

    cin >> hour;

    cout << "MM- ";

    cin >> min;

    sec = time(0) % 60;

    // Background color and the

    // Foreground for 2nd screen

    // Cases for the Wrong Time Input

    if (hour > 23)
    {

        cout << "Wrong Time input";
    }

    else if (min > 60)
    {

        cout << "Wrong Time Input";
    }

    else if (sec > 60)
    {

        cout << "Wrong Time Input";
    }

    // Otherwise

    else
    {

        while (1)

        // Run Block infinitely

        {

            system("cls");

            // Clear the console

            // Code for Showing Time

            for (hour; hour < 24; hour++)
            {

                for (min; min < 60; min++)
                {

                    for (sec; sec < 60; sec++)
                    {

                        system("cls");

                        cout << "\n\n\n\n~~~"

                                "~~~"

                                "~~"

                                "Current Time = "

                             << hour << ":" << min << ":"

                             << sec

                             << "Hrs~~~~"

                                "~~~"

                                "~";

                        // HH:MM:SS columns in output

                        Sleep(1000);

                        // Pause for 1 sec
                    }

                    sec = 0;
                }

                min = 0;
            }
            hour = 0;
        }
    }
}