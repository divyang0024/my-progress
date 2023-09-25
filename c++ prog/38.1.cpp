#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ifstream input("Studentdata.txt");
	ofstream output("Studentdatacopy.txt");
	char s[100];
	while (input)
	{
		input.getline(s, 99, '\n');
		output << s << "\n";
	}
}
