#include <iostream>

using namespace std;

class student
{
private:
    string name;
    int rollno;
    char section;

public:
    void no_of_student(string name, int rollno, char section)
    {
        this->name = name;
        this->rollno = rollno;
        this->section = section;
    }
    void display(float result)
    {
        cout << name << " of section-" << section << " has obtained " << (float)result << "%" << endl;
    }
};
class subject_marks : virtual public student
{
public:
    int set_submarks()
    {
        int total = 0;
        int *arr = new int[5];
        cout << "-----> enter the marks of all subjects <------ " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "enter subject " << i + 1 << " marks : ";
            cin >> arr[i];
            total += arr[i];
        }
        return total;
    }
};
class activity_marks : virtual public student
{
public:
    int set_actamarks()
    {
        int actmarks;
        cout << "enter marks obtained extra activity : ";
        cin >> actmarks;
        return actmarks;
    }
};
class result : public subject_marks, public activity_marks
{
public:
    void student_result()
    {
        int performance = (float)set_submarks() + set_actamarks();
        float result = (float)performance / 500 * 100;
        display(result);
    }
};
int main()
{
    int no_of_student;
    cout << "enter the number of students : ";
    cin >> no_of_student;
    result *student = new result[no_of_student];
    for (int i = 0; i < no_of_student; i++)
    {
        cout << "--------> enter the details of " << i + 1 << " student <-------" << endl;
        string name;
        int rollno;
        char section;
        cout << " enter the name : ";
        cin >> name;
        cout << " enter the roll number : ";
        cin >> rollno;
        cout << " enter the section : ";
        cin >> section;
        student[i].no_of_student(name, rollno, section);
        student[i].student_result();
    }
    return 0;
}