// Problem ID: 030 | Difficulty: Medium
// Title: Bank Management System
// Project Type: Interactive Banking Simulation

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void sbalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    srand(time(0));

    double balance = 1000 + rand() % 100000;
    int choice = 0;

    do
    {
        cout << "\nEnter your Choice:\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";

        cin >> choice;


        if (cin.fail())
    {
         cin.clear();
         cin.ignore(1000, '\n');

         cout << "Invalid input!\n";
         countinue;
     }
 
        switch(choice)
        {
            case 1:
                sbalance(balance);
                break;

            case 2:
                balance = balance + deposit();
                break;

            case 3:
                balance = withdraw(balance);
                break;

            case 4:
                cout << "Thanks for visiting!\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 4);

    return 0;
}

void sbalance(double balance)
{
    cout << "Your balance amount is: " << balance << "\n";
}

double deposit()
{
    double amount = 0;

    cout << "Enter your deposit amount: ";
    cin >> amount;

    if(amount <= 0)
    {
        cout << "Enter a valid amount.\n";
        return 0;
    }

    return amount;
}

double withdraw(double balance)
{
    double amount = 0;

    cout << "Enter your amount to be withdrawn: ";
    cin >> amount;

    if(amount <= 0)
    {
        cout << "Enter a valid amount.\n";
        return balance;
    }
    else if(amount > balance)
    {
        cout << "Insufficient funds.\n";
        return balance;
    }
    else
    {
        balance = balance - amount;

        cout << "Withdrawal successful!\n";

        return balance;
    }
}