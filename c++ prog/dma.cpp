#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int *rollno, len;

    cout << "Enter no of students in the class";
    cin >> len;

    rollno = new int[len];

    int i;

    for (i = 0; i < len; i++)
    {
        cout << "Enter rollno for student " << i + 1 << endl;
        cin >> rollno[i];
    }

    for (i = 0; i < len; i++)
    {
        cout << rollno[i];
    }
    delete rollno;

    getch();
    return 0;
}