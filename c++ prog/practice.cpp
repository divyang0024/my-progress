#include<iostream>

using namespace std;

int main()
{
    int a=24,b=5;
    float c;
    c=(float)a/b;
    cout<<" division = "<<c<<endl;
    c=a%b;
    cout<<" reminder = "<<c<<endl;
    cout<<" pre increment = "<<++a<<endl;
    cout<<"  increment = "<<a++<<endl;
    cout<<"size of  "<<sizeof(c)<<endl;
    cout<<"size of "<<sizeof(24.45)<<endl;
    cout<<"size of "<<sizeof(float)<<endl;
    return 0;
}