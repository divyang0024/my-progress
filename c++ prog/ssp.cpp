#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
class User
{
    int user_choice;

public:
    User(int ch)
    {
        user_choice = ch;
    }
    void setchoice(int ch)
    {
        user_choice = ch;
    }
    int getchoice()
    {
        return user_choice;
    }
};
class computer
{
    int com_choice;

public:
    computer()
    {
        srand(time(0));
        com_choice = (rand() % 2) + 1;
    }
    int getcomchoice()
    {
        return com_choice;
    }
};

int winner_result(int, int); // return true if user win return false if computer win
int main()
{
    system("color 0A");

    while (1)
    {
        system("cls");
        cout << "                       Welcome to Rock,Paper and Scissor\n\n";
    restart:
        cout << "Enter 1 For Rock:\n";
        cout << "Enter 2 For Paper:\n";
        cout << "Enter 3 For Scissor:\n";
        int userchoice;
        fflush(stdin);
        scanf("%d", &userchoice);

        if (userchoice < 1 || userchoice > 3)
        {
            cout << "\nWrong choice ! \nEnter correct choice:\a\n\n";
            goto restart;
        }
        User U1(userchoice);
        computer C1;

        int result = winner_result(U1.getchoice(), C1.getcomchoice());

        if (result == 1)
        {
            cout << "\nHurray! You have won: ";
            cout << "\nComputer choose:" << C1.getcomchoice();
        }
        else if (result == 2)
        {
            cout << "\nYou have lost:";
            cout << "\nComputer choose:" << C1.getcomchoice();
        }
        else
        {
            cout << "\nMatch Draw:";
            cout << "\nComputer choose:" << C1.getcomchoice();
        }
        cout << "\n\nYou want to continue press Y Or N:\n";
        char choice;
        cin >> choice;
        if (choice == 'Y' || choice == 'y')
        {
        }
        else
            break;
    }
    return 0;
}
int winner_result(int user, int comp)
{
    //1=rock,2=paper,3=sicssor
    if (user == 1 && comp == 3)
        return 1;
    else if (user == 2 && comp == 1)
        return 1;
    else if (user == 3 && comp == 2)
        return 1;
    else if (user == comp)
        return 3;
    else
        return 2;
}