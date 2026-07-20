// Problem ID: 010 | Difficulty: Hard
// Title: Electricity Bill Calculator
// Category: Billing System

#include <iostream>
using namespace std;

int main()
{
    int num1;

    cout << "Enter your units consumed: ";
    cin >> num1;

    if (num1 < 0)
    {
        cout << "Invalid Input";
    }
    else if (num1 >= 0 && num1 <= 100)
    {
        num1 = num1 * 2;
        cout << "Billing amount: " << num1;
    }
    else if (num1 >= 101 && num1 <= 200)
    {
        num1 = num1 * 3.5;
        cout << "Billing amount: " << num1;
    }
    else if (num1 >= 201 && num1 <= 300)
    {
        num1 = num1 * 5;
        cout << "Billing amount: " << num1;
    }
    else
    {
        num1 = num1 * 7;
        cout << "Billing amount: " << num1;
    }

    return 0;
}