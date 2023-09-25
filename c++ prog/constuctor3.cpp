#include <iostream>

using namespace std;
class q
{
private:
  int a, b;

public:
  q(int e = 12, int f = 10) /*default argument in constructor,and when we put default argument inside 
a constructor then that constructor turns into default constructor*/
  {
    cout << e;
    cout << f;
  }
  /*q()
{
cout<<"yes it works!!!!";//this constructor cant work along with previously declared constructer
}*/
};
int main()
{
  q emp;
  q emp1(1, 23);
  return 0;
}