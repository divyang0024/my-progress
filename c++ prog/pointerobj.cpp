#include <iostream>
using namespace std;
class age
{
    int young, adult, mid, old;

public:
    void display(); //function prototype
};
void age::display() //function defination
{
    static int i = 1;
    cout << "" << i << " object" << endl;
    cout << "enter here : ";
    cin >> young;
    cout << "enter here : ";
    cin >> adult;
    cout << "enter here : ";
    cin >> mid;
    cout << "enter here : ";
    cin >> old;
    cout << "----------------------" << endl;
    ++i;
}
int main()
{
    age *person;
    int n;
    cout << "enter the number of object you want : ";
    cin >> n;
    person = new age[n];
    for (int i = 0; i < n; i++)
    {
        person[i].display();
    }
    return 0;
}