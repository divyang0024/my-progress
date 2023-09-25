#include <iostream>

using namespace std;

class student
{
private:
    int prevmarks;
    int curmarks;
    int result;
    int result1;

public:
    void entermarks()
    {
        static int objcount = 1;
        cout << "enter the marks of student " << objcount << endl;
        cout << "enter the previous year marks of student " << objcount << " :";
        cin >> prevmarks;
        cout << "enter the current year marks of student " << objcount << " :";
        cin >> curmarks;
        ++objcount;
    }

    student performance(student obj2);

    void display();
};
student student::performance(student obj2)
{
    student ob;
    ob.result = prevmarks + curmarks;
    ob.result1 = obj2.prevmarks + obj2.curmarks;
    return ob;
}
void student::display() //return type,class name::userdefiened function name(e)
{
    cout << "the performance of student 1 is : " << result;
    cout<<endl;
    cout << "the performance of student 2 is : " << result1;
    cout<<endl;
}
int main()
{
    student s[2], performance;
    for (int i = 0; i < 2; i++)
    {
        s[i].entermarks();
    }
    performance = s[0].performance(s[1]);
    performance.display();
    return 0;
}