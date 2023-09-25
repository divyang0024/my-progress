#include <iostream>
using namespace std;
class A
{
    static int count;

public:
    A()
    {
        cout << "object has been contructed." << endl;
        ++count;
        cout << "total number of objects are " << count << endl;
    };
    ~A() { cout << "object has been destructed." << endl; };
};
int A::count = 0;
int main()
{
    int n;
    cout << "enter number of object you want to create : ";
    cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     A *obptr = new A();
    // }
    A *ptr = new A[n];
    delete ptr;
    return 0;
}