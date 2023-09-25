#include <iostream>

using namespace std;
class grade_12th
{
public:
    string student_name;
    string subject_name;
    int t_id;
    int rollno;
    char section;
};
class subject_marks : protected grade_12th
{
public:
    int phy;
    int chem;
    int maths;
    int prog;
    int eng;
    int total;
    int set_marks()
    {
        cout << endl;
        static int count = 1;
        cout << "----------->student " << count << " forum<------------" << endl;
        cout << "name of the student : ";
        cin >> student_name;
        cout << "student section : ";
        cin >> section;
        cout << "student roll no : ";
        cin >> rollno;
        cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
        cout << "please enter subject phy marks : ";
        cin >> phy;
        cout << "please enter subject chem marks : ";
        cin >> chem;
        cout << "please enter subject maths marks : ";
        cin >> maths;
        cout << "please enter subject prog marks : ";
        cin >> prog;
        cout << "please enter subject eng marks : ";
        cin >> eng;
        total = phy + chem + maths + prog + eng;
        cout << "----------->student " << count << " forum<-------------" << endl;
        ++count;
        return total;
    }
    void display(float result)
    {
        static int count = 1;
        cout << "------------report-card of student " << count << "-----------------" << endl;
        cout << "student name : " << student_name << endl;
        cout << "student section : " << section << endl;
        cout << "student roll no : " << rollno << endl;
        if (result < 40)
        {
            cout << student_name << " of "
                 << " section-" << section << " is fail!!!!. ";
        }
        else
        {
            cout << student_name << " of "
                 << " section-" << section << " is pass by " << result << "%";
        }
        cout << endl;
        cout << "------------report-card of student " << count << "-----------------" << endl;
        ++count;
    }
};
class exam_result : public subject_marks
{
public:
    int report_card()
    {
        int performance = set_marks();
        float result = (float)performance / 500 * 100;
        display(result);
        return 0;
    }
};
int main()
{
    int no_of_student;
    char choice;
    do
    {
        cout << "welcome to student performance report" << endl;
        cout << "enter the no of students : ";
        cin >> no_of_student;
        exam_result *obj = new exam_result[no_of_student];
        for (int i = 0; i < no_of_student; i++)
        {
            obj[i].report_card();
        }
        cout << "do you want to use this application again ?,enter y or Y to accept" << endl;
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "thank you!!!!";
    return 0;
}