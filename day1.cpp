// Problem ID: 001 | Difficulty: Easy 
// Title: Bank Account Eligibility System
// Category: Decision Making

#include <iostream>
using namespace std;

int main() {

    string name;
    int age;
    double balance;

    cout << "Welcome to the Bank" << endl;

    cout << "Please enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your account balance: ";
    cin >> balance;

    cout << "\nWelcome to the Bank, " << name << "!" << endl;

    //Acount type
    if (age < 18) {
        cout << "Minor Account" << endl;
    }
    else if (age == 18) {
        cout << "Newly Eligible" << endl;
    }
    else {
        cout << "Adult Account" << endl;
    }

    //Balance
    if (balance < 1000) {
        cout << "Low Balance" << endl;
    }
    else if (balance == 1000) {
        cout << "Minimum Balance Maintained" << endl;
    }
    else {
        cout << "Good Balance" << endl;
    }

    return 0;
}