//Problem ID: 020 | Difficulty: Easy
// Title: Count Positive Numbers
// Category: For Loop + Continue + Conditional Statements

#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter how many numbers: ";
    cin >> n;

    int count = 0;

    for(int i = 1; i <= n; i++) {

        int num;

        cout << "Enter a number: ";
        cin >> num;

        if(num <= 0) {
            continue;
        }

        count++;
    }

    cout << "Positive numbers: " << count << endl;

    return 0;
}