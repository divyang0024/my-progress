#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
     cout << "divyang\n";
     int choice, temp;

     while (1)
     {
          cout << "Enter any number " << endl;
          cin >> temp;

          switch (temp)
          {
          case 0:
          {
               cout << "Zero" << endl;
          }
          break;

          case 1:
          {
               cout << "One" << endl;
          }
          break;

          case 2:
          {
               cout << "Two" << endl;
          }
          break;

          case 3:
          {
               cout << "Three" << endl;
          }
          break;

          case 4:
          {
               cout << "Four" << endl;
          }
          break;

          case 5:
          {
               cout << "Five" << endl;
          }
          break;

          case 6:
          {
               cout << "Six" << endl;
          }
          break;

          case 7:
          {
               cout << "Seven" << endl;
          }
          break;

          case 8:
          {
               cout << "Eight" << endl;
          }
          break;

          case 9:
          {
               cout << "Nine" << endl;
          }
          break;
          }
          cout << "Do you want to continue (1/0)" << endl;
          cin >> choice;

          if (choice == 0)
               break;
     }
     getch();
     return 0;
}