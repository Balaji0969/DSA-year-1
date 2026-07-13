// Problem ID: 005 | Difficulty: Medium
// Title: Salary Bonus Calculator
// Category: Finace

#include<iostream>
#include<string>
using namespace std;

int main() {

    string name;
    double salary;
    double bonus;
    double totalSalary;
    int exp;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your salary: ";
    cin >> salary;

    cout << "Enter your years of experience: ";
    cin >> exp;

    // Calculate bonus
    if (exp < 2) {
        bonus = salary * 0.05;
    }
    else if (exp == 2) {
        bonus = salary * 0.10;
    }
    else {
        bonus = salary * 0.20;
    }

    // Calculate total salary
    totalSalary = salary + bonus;

    // Display employee details
    cout << "\nEmployee Name: " << name << endl;
    cout << "Basic Salary: rp" << salary << endl;
    cout << "Experience: " << exp << " years" << endl;
    cout << "Bonus: rp" << bonus << endl;
    cout << "Total Salary: rp" << totalSalary << endl;

    // Employee classification
    if (totalSalary < 30000) {
        cout << "Junior Employee" << endl;
    }
    else if (totalSalary == 30000) {
        cout << "Mid-Level Employee" << endl;
    }
    else {
        cout << "Senior Employee" << endl;
    }

    return 0;
}