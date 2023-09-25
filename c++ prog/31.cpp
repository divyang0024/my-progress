#include <iostream>
#include <conio.h>
//1 base class and multiple child class

using namespace std;

class house
{
	int len, breadth, no_of_windows, no_of_doors;

public:
	house(int len, int breadth, int no_of_doors, int no_of_windows)
	{
		this->len = len;
		this->breadth = breadth;
		this->no_of_doors = no_of_doors;
		this->no_of_windows = no_of_windows;
	}
	int get_door()
	{
		return no_of_doors;
	}
	int get_windows()
	{
		return no_of_windows;
	}
};
class Window : public house
{
	int cost_of_window, len, breadth, no_of_doors, no_of_windows;

public:
	Window(int cost_of_window, int len, int breadth, int no_of_doors, int no_of_widows) : house(len, breadth, no_of_doors, no_of_windows)
	{
		this->cost_of_window = cost_of_window;
	}
	void cost_Window()
	{
		cout << "Total cost of windows in house" << get_door() * cost_of_window;
	}
};

class Door : public house
{
	int cost_of_door, len, breadth, no_of_doors, no_of_windows;
	;

public:
	Door(int cost_of_door, int len, int breadth, int no_of_doors, int no_of_windows) : house(len, breadth, no_of_doors, no_of_windows)
	{
		this->cost_of_door = cost_of_door;
	}
	void cost_Doors()
	{
		cout << endl
			 << "Total cost of doors in house" << get_door() * cost_of_door;
	}
};
int main()
{
	cout << "divyang\n";
	int len, breadth, no_of_doors, no_of_windows, cost_of_door, cost_of_window;

	cout << "Enter len " << endl;
	cin >> len;

	cout << "Enter breadth" << endl;
	cin >> breadth;

	cout << "Enter no of door" << endl;
	cin >> no_of_doors;

	cout << "Enter no of windows" << endl;
	cin >> no_of_windows;

	cout << "Enter cost of one doors" << endl;
	cin >> cost_of_door;

	cout << "Enter cost of one window" << endl;
	cin >> cost_of_window;

	Window objW(cost_of_window, len, breadth, no_of_doors, no_of_windows);

	Door obj(cost_of_door, len, breadth, no_of_doors, no_of_windows);

	objW.cost_Window();
	obj.cost_Doors();

	getch();
	return 0;
}