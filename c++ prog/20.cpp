//123
//1+2+3=6
#include <iostream>
#include <conio.h>

using namespace std;

int FindSum(int n) //formal argument
{
    if (n != 0)
        return n % 10 + FindSum(n / 10);
}
int main()
{
    cout << "divyang\n";
    int num;
    cout << "Enter any number " << endl;
    cin >> num;
    cout << FindSum(num); //actual argument
    return 0;
}