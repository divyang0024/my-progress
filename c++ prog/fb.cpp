#include <iostream>
#include <fstream>
using namespace std;

class identity
{
protected:
    char name[20];
    int age;
    char sex[10];
};
class person : protected identity
{
public:
    void getdata();
    void setdata();
};
void person ::getdata()
{
    static int count = 1;
    cout << "enter the name of " << count << " person : ";
    cin >> name;
    cout << "enter the age of " << count << " person : ";
    cin >> age;
    cout << "enter the gender of " << count << " person : ";
    cin >> sex;
    ++count;
}
void person::setdata()
{
    static int count1 = 1;
    cout << "==================================================================\n";
    cout << "after reading the file the details of " << count1 << " person is :" << endl;
    cout << "name : " << name << endl;
    cout << "age : " << age << endl;
    cout << "gender : " << sex << endl;
    cout << "==================================================================\n";
    ++count1;
}
int main()
{
    int size;
    cout << "please enter the number of person for data insertion : ";
    cin >> size;
    person *pobj;
    ofstream fbout("filebinary.docx", ios::out | ios::binary);
    pobj = new person[size];
    for (int i = 0; i < size; i++)
    {
        cout << "please enter the data of " << i + 1 << " person" << endl;
        pobj[i].getdata();
        fbout.write((char *)&pobj[i], sizeof(pobj[i]));
    }
    fbout.close();
    ifstream fbin("filebinary.docx", ios::in | ios::binary);
    for (int j = 0; j < size; j++)
    {
        cout << "checking details of " << j + 1 << " person \n";
        fbin.read((char *)&pobj[j], sizeof(pobj[j]));
        pobj[j].setdata();
    }
    fbin.close();
    return 0;
}