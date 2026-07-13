// Problem ID: 003 | Difficulty: Easy 
// Title: Simple Intrest Calculator
// Category: Finace

#include <iostream>
using namespace std;

int main() {

    double amount;
    double interest;
    double years;

    cout << "Welcome" << endl;

    cout << "Enter Principal Amount: ";
    cin >> amount;

    cout << "Enter Interest Rate: ";
    cin >> interest;

    cout << "Enter Time (Years): ";
    cin >> years;

    double simpleInterest = (amount * interest * years) / 100;

    double totalAmount = amount + simpleInterest;

    cout << "\nPrincipal Amount: " << amount << endl;
    cout << "Interest Rate: " << interest << "%" << endl;
    cout << "Time: " << years << " Years" << endl;
    cout << "Simple Interest: " << simpleInterest << endl;
    cout << "Total Amount: " << totalAmount << endl;

    return 0;
}