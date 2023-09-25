#include <iostream>
using namespace std;
class a
{
public:
    a()
    {
        cout << "base class constructor was called " << endl;
    }
    ~a()
    {
        cout << "base class destructor was called " << endl;
    }
};
class c
{
    public:
   c()
    {
        cout << "base1 class constructor was called " << endl;
    }
    ~c()
    {
        cout << "base1 class destructor was called " << endl;
    } 
};
class b : public a,public c
{
public:
    b()
    {
        cout << "derived class constructor was called " << endl;
    }
    ~b()
    {
        cout << "derived class destructor was called " << endl;
    }
};
int main()
{
    b obj;
    return 0;
}