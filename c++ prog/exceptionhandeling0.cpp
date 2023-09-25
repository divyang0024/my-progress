#include <iostream>
using namespace std;

int main()
{
    string name;
    int flag;
    int count = 0;
    do
    {
        flag = 0;
        if (count == 0)
        {
            cout << "please enter your name : ";
            cin >> name;
        }
        else
        {
            cout << "please enter your name again correctly : ";
            cin >> name;
        }
        try
        {
            for (int i = 0; i < name.length(); i++)
            {
                if (name[i] >= 'a' && name[i] <= 'z' || name[i] >= 'A' && name[i] <= 'Z')
                {
                    if (i == 0)
                    {
                        cout << "your name is " << name[i];
                    }
                    else
                    {
                        cout << name[i];
                    }
                }
                else
                {
                    cout << name;
                    flag = 1;
                    throw " is invalid input!!!!, please enter your name correctly ";
                }
            }
        }
        catch (char const *warning)
        {
            cout << warning << endl;
        }
        ++count;
    } while (flag == 1);

    return 0;
}