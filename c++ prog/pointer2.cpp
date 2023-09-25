#include <iostream>

using namespace std;

int main()
{
    int arr[3];
    int *ptr = &arr[0];
    for (int i = 0; i < 3; i++)
    {

        scanf("%d", &arr[i]); /* in c it is important to take input with
        the help of "&"operator*/
        //"cin<<ptr[i];"would also be valid or legal
    }
    cout << "*-*-*-*-*-*-*-*-*-*-";
    cout << "\n";
    for (int i = 0; i < 3; i++)
    {
        printf("%d", *ptr);
        *ptr = ++*ptr; /* "*ptr=*(ptr+1) will produce the same output and
        this process is also called "byte manipulation or "pointer arithmetics"*/
        cout << "\n";
    }
    return 0;
}