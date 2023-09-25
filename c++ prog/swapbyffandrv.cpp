#include <iostream>

using namespace std;

class she;
class he
{
    friend void swapname(he &obj, she &obj1);

private:
    string nameh;

public:
    void writename()
    {
        cout << "write the name of boy : ";
        cin >> nameh;
    }
    void display()
    {
        cout << "the boy name has been swaped to girl : " << nameh << endl;
    }
};

class she
{
    friend void swapname(he &obj, she &obj1);

private:
    string names;

public:
    void writename()
    {
        cout << "write the name of girl : ";
        cin >> names;
    }
    void display()
    {
        cout << "the girl name has been swaped to boy : " << names << endl;
    }
};

void swapname(he &obj, she &obj1)
{
    string swap;
    swap = obj.nameh;
    obj.nameh = obj1.names;
    obj1.names = swap;
}

int main()
{
    he emp;
    she emp1;
    emp.writename();
    emp1.writename();
    swapname(emp, emp1);
    emp.display();
    emp1.display();
    return 0;
}