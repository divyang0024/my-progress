#include <iostream>
using namespace std;
int main()
{
     cout<<"divyang\n";
    int i, n;
    float *marks_arr, sum = 0.0f, avg = 0.0f;
    cout << "Enter no of students in the class";
    cin >> n;
    marks_arr = new float[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter marks for student in subject maths " << i + 1 << endl;
        cin >> marks_arr[i];
        sum += marks_arr[i];
        //sum=sum+marks_arr[i];
    }
    avg = sum / n;
    cout << endl
         << "Sum of marks of " << n << "Students in maths subject" << sum;
    cout << endl
         << "Avg marks of students in maths subject " << avg;
    delete marks_arr;
    return 0;
}