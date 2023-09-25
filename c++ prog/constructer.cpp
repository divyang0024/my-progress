#include <iostream>

using namespace std;

class rectangle
{
private:
	int len;
	int bre;
public:
	rectangle()
	{
		len = 0;
		bre = 0;
	}
	rectangle(int len, int bre)
	{
		this->len = len;
		this->bre = bre;
	}
	void setdata(int len, int bre)
	{
		this->len = len;
		this->bre = bre;
	}
	void setdata()
	{
		int len, bre;
		cout << "Enter len and bre of a rectangle:" << endl;
		cin >> len >> bre;
		this->len = len;
		this->bre = bre;
	}
	int area()
	{
		return len * bre;
	}
	void display()
	{
		cout << "\nlen is=" << len << endl;
		cout << "\nbre is=" << bre << endl;
	}
};
int main()
{
	rectangle a1(2, 4);
	rectangle a2;
	a1.display();
	int area = a1.area();
	cout << "Area=" << area << endl;
	
	a2.setdata();
	a2.display();
	area = a2.area();
	cout << "\nArea 2=" << area;
	return 0;
}