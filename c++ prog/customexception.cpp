#include <iostream>
#include <conio.h>
#include <exception>

using namespace std;

class Overspeed : public exception
{
    int speed;

public:
    const char *what()
    {
        return "Speed limit exceeded";
    }

    int getSpeed()
    {
        return speed;
    }
    void setSpeed(int speed)
    {
        this->speed = speed;
    }
};
class Car
{
    int speed;

public:
    Car(int speed)
    {
        this->speed = speed;
    }
    void accelration()
    {
        for (;;)
        {
            speed += 10;

            cout << "Speed : " << speed << endl;

            if (speed >= 250)
            {
                Overspeed obj;

                obj.setSpeed(speed);

                throw obj;
            }
        }
    }
};

int main()
{
    Car objC(10);

    try
    {
        objC.accelration();
    }
    catch (Overspeed obj)
    {
        cout << obj.what();
        cout << obj.getSpeed();
    }
    getch();
    return 0;
}