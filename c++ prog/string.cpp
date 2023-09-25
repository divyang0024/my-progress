#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // c style string
    char str1[] = "divyang";
    char str2[] = {'d', 'i', 'v', 'y', 'a', 'n', 'g', '\0'};
    cout << "my name is " << str1 << endl;
    //char *ptr=new char('1');//represts a character type variiable inside heap memory where '*ptr' is holding the address of that character type variabe
    char *ptr = new char[100]; //represts a character type variiable inside heap memory where '*ptr' is holding the address of that character type variabe
    cin.getline(str1, 100);
    cout << sizeof(str1) << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << ptr[i]<< endl;
    }
    cout<<"size :"<<sizeof(ptr);
   // cout<<""<<str1.lenght(); will not work because str1 is not declared under c++ string class
    return 0;
}