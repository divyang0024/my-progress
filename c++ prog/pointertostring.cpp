#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char *ptr = "micheal scott";
    for (int i = 0; i <= strlen(ptr); i++)
    {
        cout <<ptr[i];
    }
    return 0;
}