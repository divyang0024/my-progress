#include <iostream>
using namespace std;

template <typename T>
void swap(T *x, T *y)
{
	T temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int x = 12, y = 16;
	float a(10.8f), b(12.6f);
	cout << "Before swapping\n";
	cout << "x=" << x << endl
		 << "y=" << y << endl
		 << endl;
	swap(&x, &y);
	cout << "After swapping\n";
	cout << "x=" << x << endl
		 << "y=" << y << endl
		 << endl;

	cout << "Before swapping\n";
	cout << "a=" << a << endl
		 << "b=" << b << endl
		 << endl;
	swap(&a, &b);
	cout << "After swapping\n";
	cout << "a=" << a << endl
		 << "b=" << b << endl
		 << endl;

	return 0;
}
