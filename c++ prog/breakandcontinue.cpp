#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
int n=10,i;
for(i=0;i<=n;i++)
{
    if(i==5)
    {
        cout<<"the number you have selected has been skipped!!!!"<<endl;
        continue;
    }
    if (i==8)
    {
        cout<<"the statement has been breaked!!!!"<<endl;
    }
    
    cout<<i<<endl;
}
cout<<"the loop has ended"<<endl;
return 0;
}