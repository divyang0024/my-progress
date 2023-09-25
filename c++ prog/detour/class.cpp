#include <iostream>
#include <string>
using namespace std;
class player
{
    string name;
    int health;
    int id;

public:
    player(int a)
    {
        cout << "hey there!!!!";
    }
    int get_health()
    {
        return health;
    }
    int set_health()
    {
        health = 100;
    }
};
int main()
{
    player *p1 = new player(100);

    return 0;
}