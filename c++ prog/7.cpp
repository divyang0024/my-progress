#include<iostream>
using namespace std;
int main()
{
  cout<<"divyang\n";
  // declare variables
  double num1, num2, num3;
  double sum, average;

  // take input from end-user
  cout << "Enter three Numbers :: ";
  cin >> num1 >> num2 >> num3;

  // calculate sum value
  sum = num1 + num2 + num3;
  
  // calculate average value
  average = sum / 3;

  // display result
  cout << "Sum = " << sum << endl;
  cout << "Average = " << average << endl;

  return 0;
}