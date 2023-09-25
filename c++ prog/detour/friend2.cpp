#include <iostream>
// a friend class and friend member function works in the same way as a normal friend function the only difference is that it instead of a normal funtion now a class memeber function is accessing private data members of other class.
using namespace std;
class A;
class B
{
public:
    void B_access_secret();
};
class C
{
public:
    void C_access_secret();
};
class A
{
public:
    friend class C;
    friend void B::B_access_secret();

private:
    int secret_number = 47723;
    int secret_function(char name)
    {
        cout << "secret is revealed by class " << name << " and the secret number is " << secret_number << endl;
    }
};

void B::B_access_secret()
{
    A obj;
    char name = 'A';
    obj.secret_function(name);
}
void C::C_access_secret()
{
    A obj;
    char name = 'B';
    obj.secret_function(name);
}
int main()
{
    B bo1;
    C co1;
    bo1.B_access_secret();
    co1.C_access_secret();
    return 0;
}