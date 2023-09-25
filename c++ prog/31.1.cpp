#include <iostream>
using namespace std;
class house
{
protected:
	int len, bre;
	int No_door;
	int No_wind;

public:
	house()
	{
		len = 0;
		bre = 0;
		No_door = 0;
		No_wind = 0;
	}
	house(int len, int bre)
	{
		this->len = len;
		this->bre = bre;
	}
	void dimension();
	int get_door();
	int get_win();
};

class door : public house
{
public:
	door(int len, int bre) : house(len, bre)
	{
	}

	int total_cost()
	{
		cout << "\nEnter the cost of 1 door:";
		int cost;
		cin >> cost;
		return cost * get_door();
	}
};

class window : public house
{
public:
	window(int len, int bre) : house(len, bre)
	{
	}
	int total_cost()
	{
		cout << "\nEnter the cost of 1 window:";
		int cost;
		cin >> cost;
		return cost * get_win();
	}
};

void house::dimension()
{
	cout << "\nEnter the length of house:";
	cin >> len;
	cout << "\nEnter the breadth of house:";
	cin >> bre;
}
int house::get_door()
{
	cout << "\nEnter the no of door:";
	cin >> No_door;
	return No_door;
}
int house::get_win()
{
	cout << "\nEnter the no of win:";
	cin >> No_wind;
	return No_wind;
}

int main()
{
	cout << "divyang\n";
	window W1(12, 45);
	cout << "\nTotal Cost of window is:" << W1.total_cost();
	door D1(3, 7);
	cout << "\nTotal Cost of door is :" << D1.total_cost();
	return 0;
}
