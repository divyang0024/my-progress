#include <iostream>
using namespace std;
class mybaseclass
{
public:
    virtual ~mybaseclass() // virtual constructor
    {
        cout << "base class destructor was called!!!!" << endl;
    }
};
class myderivedclass : public mybaseclass
{
public:
    ~myderivedclass()
    {
        cout << "derived class destructor was called!!!!" << endl;
    }
};
int main()
{
    mybaseclass *objb;
    myderivedclass objd;
    objb = &objd;
    delete objb;
    return 0;
}