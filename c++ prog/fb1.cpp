#include <iostream>
#include <fstream>
using namespace std;
class identity
{
public:
    char name[20];
    int age;
    char sex[6];
};
int main()
{
    identity obj;
    ifstream fbin("filebinary.docx", ios::binary | ios::in);
    fbin.read((char *)&obj, sizeof(obj));
    cout << obj.name;
    cout << obj.age;
    cout << obj.sex;
    return 0;
}