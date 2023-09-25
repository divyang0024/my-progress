#include <iostream>
#include <conio.h>
// try catch different varients
using namespace std;

int main()
{
	int num;

	cout << "Enter any number ";
	cin >> num;
	// 0
	try
	{
		if (num > 0)
			throw "Number is greater than 0";

		else if (num < 0)
			throw num;

		else
			throw num + 0.5f;
	}
	catch (int n1)
	{
		cout << "Integer : " << n1;
	}
	catch (float n1)
	{
		cout << "Float " << n1;
	}
	catch (char *n1)
	{
		cout << "String " << n1;
	}
	getch();
	return 0;
}
