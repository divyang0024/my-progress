#include <iostream>
using namespace std;
class shape;
class dimension
{
	float length;
	float breadth;
	float radius;

public:
	dimension()
	{
		length = 0;
		breadth = 0;
		radius = 0;
	}

	void setdimension()
	{
		cout << "\nEnter Rectangle length and breadth:" << endl;
		cin >> length >> breadth;
		cout << "\nEnter circle radius:";
		cin >> radius;
	}

	friend class shape;
};
class shape
{
	dimension D;

public:
	shape()
	{
		D.setdimension();
	}
	void rect_area()
	{
		float area = D.length * D.breadth;
		cout << "\nRectangle area is=" << area << endl;
	}
	void circle_area()
	{
		float area = 3.14 * D.radius * D.radius;
		cout << "\nCircle area is=" << area << endl;
	}
};

int main()
{
	cout << "divyang";
	shape S1;
	S1.rect_area();
	S1.circle_area();

	return 0;
}
