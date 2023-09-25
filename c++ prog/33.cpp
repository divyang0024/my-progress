#include <iostream>
#include <string>
using namespace std;
class player
{
protected:
	string name;
	string Type_sport;
	int experience;

public:
	void setplayerdata()
	{
		cout << "\nEnter the player name:";
		cin >> name;
		cout << "\nEnter the type of sport:";
		cin >> Type_sport;
		cout << "\nEnter the experience in year:";
		cin >> experience;
	}
	void display()
	{
		cout << "\nPlayer Name=" << name;
		cout << "\nSport Name=" << Type_sport;
		cout << "\nExperience=" << experience << " Years";
	}
};
class zone : virtual public player
{
protected:
	int zone_rank;

public:
	void setzonerank()
	{
		cout << "\nEnter zone Rank:";
		cin >> zone_rank;
	}
	int get_zoneRank()
	{
		return zone_rank;
	}
};
class national : virtual player
{
protected:
	int national_rank;

public:
	void setnationalrank()
	{
		cout << "\nEnter national rank:";
		cin >> national_rank;
	}
	int getnationalrank()
	{
		return national_rank;
	}
};

class international : public zone, public national
{
	int international_rank;

public:
	void setinternational_rank()
	{
		setplayerdata();
		setzonerank();
		setnationalrank();
		international_rank = get_zoneRank() + getnationalrank();
	}

	void showinternationalrank()
	{
		display();
		cout << "\nInternational Rank is:\n";
		if (international_rank > 0 && international_rank <= 10)
			cout << "\nRank 1:";
		else if (international_rank > 10 && international_rank <= 50)
			cout << "\nRank 2:";
		else
			cout << "\nRank 3:";
	}
};

int main()
{
	cout<<"divyang\n";
	international I1;
	I1.setinternational_rank();
	I1.showinternationalrank();

	return 0;
}
