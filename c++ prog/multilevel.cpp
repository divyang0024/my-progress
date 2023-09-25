#include <iostream>

using namespace std;
class c;
class a
{
private:
    int x, y, z, p;

public:
    void tranferctogf1()
    {
        x = 12;
    }
};
class b : protected a
{
protected:
    int y;

public:
    void tranferctogf()
    {
        tranferctogf1();
    }
};
class c : private b
{
public:
    int q;
    void transfer()
    {
        tranferctogf();
    }
};
int main()
{
    c obj, obj1;
    cout << "size of c object : " <<sizeof(obj)<<endl;//size would be 24 bytes
    a o;
    c *ptr=&obj;
    for(int i=0;i<20;i++)
    {
        ptr=(ptr+1);
        cout<<(int)ptr<<endl;
    }
    obj.transfer();
    return 0;
}