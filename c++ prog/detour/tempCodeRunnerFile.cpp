#include <iostream>
using namespace std;
class a
{
public:
};
class b
{
public:
    b() {}
   b(int x,int y){
    
   }
};
class c : public a, public b
{
public:
   
};
int main()
{
    c obj;
    return 0;
}