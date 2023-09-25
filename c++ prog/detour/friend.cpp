#include <iostream>
#include <string>
using namespace std;
// friend function is used to give access to a normal function,such access provide normal function to access private data members and function of a class even though such things can be accessed by only class memebers.
class company
{
private:
    static string company_name;
    int background_chk;

public:
    void verify_emp(int);
    friend void FBI(int v);
};
void FBI(int v)
{
    company obj;
    obj.background_chk = v;
    if (obj.background_chk > 0)
    {
        cout << "background check passed";
    }
    else
        cout << "background check failed";
}
void company::verify_emp(int a)
{
    FBI(a);
}
int main()
{
    int flag;
    company *person = new company();
    cout << "enter employee background key : ";
    cin >> flag;
    person->verify_emp(flag);
    return 0;
}