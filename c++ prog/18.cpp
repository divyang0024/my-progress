#include <iostream>

using namespace std;

void init(char course[20], int id = 1, char name[20] = "abc") //formal arguments
{
    cout << "Course : " << course << "Name " << name << "Id " << id << endl;
}
int main()
{
    cout << "divyang\n";
    char name[20], course[20];
    int id;

    cout << "Enter name " << endl;
    cin >> name;

    cout << "Enter course " << endl;
    cin >> course;

    cout << "Enter id " << endl;
    cin >> id;

    // cout<<"Default value of id and name is used "<<endl;
    init(course); ////default value for name and id is provided in the formal arguments

    //cout<<"Default value name is used "<<endl;
    init(course, id); //default value for name is provided in the formal arguments

    //cout<<"No Default value is used "<<endl;

    init(course, id, name); //no default value is used

    return 0;
}