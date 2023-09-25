#include <iostream>
using namespace std;
class student
{
protected:
	string name, course;
	int Rollno;

public:
	void setstudentdata()
	{
		cout << "\nEnter the Student Name:";
		cin >> name;
		cout << "\nEnter the Student RollNo:";
		cin >> Rollno;
		cout << "\nEnter the Student Course:";
		cin >> course;
	}
	void displaystudent()
	{
		cout << "\nStudent Name=" << name;
		cout << "\nStudent RollNo=" << Rollno;
		cout << "\nStudent Course=" << course;
	}
};
class test : protected student
{

	int Math, phy, chem;

public:
	void setmarks()
	{
		cout << "Enter Math,Physics,Chemistry Marks:\n";
		cin >> Math >> phy >> chem;
	}
	int getmath()
	{
		return Math;
	}
	int getphy()
	{
		return phy;
	}
	int getchem()
	{
		return chem;
	}
};
class result : protected test
{
	int totalmarks;

public:
	void setstudentresult()
	{
		setstudentdata();
		setmarks();
		totalmarks = getmath() + getchem() + getphy();
	}
	void displayresult()
	{
		displaystudent();
		cout << "\nTotal Marks=" << totalmarks;
	}
};

int main()
{
	cout << "divyang";
	result R1;
	R1.setstudentresult();
	R1.displayresult();
	return 0;
}
