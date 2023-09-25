#include <iostream>
#include <fstream>
using namespace std;
class identity
{
public:
    char name[20];
    int age;
    char sex[6];
    identity(const char name[], int age, const char sex[])
    {
        name = this->name;
        age = this->age;
        sex = this->sex;
    }
};
int main()
{
    identity obj("ram", 34, "male");
    ofstream fbout("filebinary.docx", ios::binary | ios::out);
    fbout.write((char *)&obj, sizeof(obj));
    return 0;
}