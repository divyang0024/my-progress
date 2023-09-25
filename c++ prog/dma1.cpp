#include <iostream>

using namespace std;

class a
{
private:
    int *a = new int[10];
    int *b= new int(10);
public:
    ~a()
    {
        delete a;
        cout << "destructor was called !!!! \n";
    }
    void display()
    {
        cout<<*b<<endl;
    }
};

int main()
{
    a *obj = new a;
    a b;
    b.display();
    delete obj;
    return 0;
}