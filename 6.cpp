// Problem ID: 006 | Difficulty: Medium
// Title: Maximum of Three Numbers
// Category: Conditional Statements

#include <iostream>
#include <string>
using namespace std;

int main(){

    string name;
    int num1;
    int num2;
    int num3;

cout << "Enter your name: ";
    cin >> name;

    cout << "Welcome, " << name << "!" << endl;

    cout << "Enter the three numbers: ";
    cin >> num1 >> num2 >> num3;

    
    if (num1 == num2 && num2 == num3)
    {
        cout << "All numbers are equal!";
    }
   
    else if (num1 >= num2 && num1 >= num3)
    {
        cout << "Largest Number = " << num1;
    }
    
    else if (num2 >= num1 && num2 >= num3)
    {
        cout << "Largest Number = " << num2;
    }
    
    else
    {
        cout << "Largest Number = " << num3;
    }

    return 0;
}