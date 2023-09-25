#include <iostream>

using namespace std;

class account
{
    float bal_amt;
    long long int acc_no;

public:
    //constructor
    account()
    {
        bal_amt = 3000;
        acc_no = 38348347473473;
    }
    void AddMoney(float bal)
    {
        bal_amt += bal;
    }
    void SubMoney(float bal)
    {
        bal_amt -= bal;
    }
    void display()
    {
        cout << "Account No : " << acc_no << "Balance : " << bal_amt;
    }
    //destructor
    ~account()
    {
        cout << endl
             << "Destructor is called !!!!" << endl;
    }
};

int main()
{
     cout<<"divyang\n";
    account obj;
    int temp, choice;

    while (1)
    {
        cout << "Press 1 : Add money" << endl
             << "Press 2 : Sub Money" << endl
             << "Pres 3: Exit" << endl
             << "4 : Dsiplay " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            obj.AddMoney(3400);
            obj.display();
        }
        break;

        case 2:
        {
            obj.SubMoney(200);
            obj.display();
        }
        break;
        case 3:
        {
            exit(0);
        }
        break;
        case 4:
        {
            obj.display();
        }
        }
        cout << endl
             << "Do you want to continue(1/0)" << endl;
        cin >> temp;

        if (temp == 0)
            break;
    }
    return 0;
}