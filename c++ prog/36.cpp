#include <iostream>
using namespace std;
class shape
{
public:
	virtual void draw() = 0;
};

class circle : public shape
{
public:
	void draw()
	{
		cout << "\nIn circle class function:" << endl;
	}
};
class square : public shape
{
public:
	void draw()
	{
		cout << "\nIn square class function:" << endl;
	}
};
class triangle : public shape
{
public:
	void draw()
	{
		cout << "\nIn triangle class function:" << endl;
	}
};

int main()
{
	cout << "divyang";
	shape *p[3];
	p[0] = new circle;
	p[1] = new square;
	p[2] = new triangle;
	int i;
	for (i = 0; i < 3; i++)
	{
		p[i]->draw();
	}
	return 0;
}
