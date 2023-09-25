#include <iostream>

using namespace std;

class grandfather
{
private:
    int skintype;

protected:
    int height;
    int health;

public:
    int complexion;

    void sk()
    {
        skintype = 1;
    }
};
class father : public grandfather
{
public:
    void complexion()
    {
        sk();
    }
    void handh()
    {
        health = 1;
        height = 3;
    }
};
class child : public father
{
};
int main()
{
    child boruto;
    boruto.complexion();
    boruto.sk();
    boruto.handh();
    return 0;
}