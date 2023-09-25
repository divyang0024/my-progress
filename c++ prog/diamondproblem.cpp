#include <iostream>
#include <conio.h>

using namespace std;

class player
{
    char name[20], type_of_sports[20];

public:
    void Input()
    {
        cout << "Enter player name ";
        cin >> name;

        cout << "Enter type of sports ";
        cin >> type_of_sports;
    }
    void display()
    {
        cout << "Name : " << name << "Type of sports " << type_of_sports;
    }
};

class Zone : virtual public player
{
    int z_rank;

public:
    int getZoneRank()
    {
        return z_rank;
    }

    void setZoneRank(int rank)
    {
        z_rank = rank;
    }
};

class National : virtual public player
{
    int n_rank;

public:
    int getNationalRank()
    {
        return n_rank;
    }

    void setNationalRank(int rank)
    {
        n_rank = rank;
    }
};
class International : public Zone, public National
{
    int i_rank;

public:
    void Calaculate(int n_rank, int z_rank)
    {
        setNationalRank(n_rank);
        setZoneRank(z_rank);

        cout << "International Rank : " << getNationalRank() + getZoneRank();
    }
};
int main()
{
    int n_rank, z_rank;

    International obj;

    obj.Input();

    cout << "Enter National rank ";
    cin >> n_rank;

    cout << "Enter Zone rank";
    cin >> z_rank;

    obj.Calaculate(n_rank, z_rank);

    obj.display();

    getch();
    return 0;
}