#include <iostream>
using namespace std;
class error_Detect
{
public:
    void display();
};
void error_Detect::display()
{
    cout << "input detected!!!!" << endl;
}
int main()
{
    try
    {
        error_Detect er_obj;
        throw er_obj;
    }
    catch (error_Detect obj)
    {
        obj.display();
    }
    return 0;
}