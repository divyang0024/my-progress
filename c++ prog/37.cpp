#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	cout << "divyang\n";
	string name;
	int math, chem, phy;
	cout << "Enter Student Name:";
	cin >> name;
	cout << "\nEnter Math,Physics,Chemistry Marks:" << endl;
	cin >> math >> chem >> phy;
	ofstream output("Studentdata.txt");
	output << "Student Name=" << name << endl;
	output << "Mathematics Marks=" << math << endl;
	output << "Chemistry Marks=" << chem << endl;
	output << "Physics Marks=" << phy << endl;
	output.close();

	cout << "\n\nStudent data is:\n";
	ifstream input("Studentdata.txt");
	char str[100];
	while (!input.eof())
	{
		input.getline(str, 99, '\n');
		cout << str << endl;
	}
	input.close();
}
