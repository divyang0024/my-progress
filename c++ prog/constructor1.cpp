#include <iostream>

using namespace std;
class integer
{
private:
    int a;

public:
    explicit integer(int b)
    {
        cout << b << endl;
        this->a = b;
        cout << "the value of a : " << a << endl;
    }
};
int main()
{
    integer v = integer(12); //explicit call
    integer w=23;           //implicit call
    return 0;
}