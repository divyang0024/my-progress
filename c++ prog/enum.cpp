#include <iostream>

using namespace std;
enum subject
{
    english
};
int main()
{
    enum subject code = english;
    if (code == subject::english)
    {
        cout << "english is selcted!!!!";
    }
    return 0;
}