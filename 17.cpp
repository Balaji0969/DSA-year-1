//Problem ID: 017 | Difficulty: Easy
// Title: Count Even Numbers
// Category: For Loop + Conditional Statements

#include <iostream>
using namespace std;

int main() {

    int n;
    int count = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        if (i % 2 != 0) {
            continue;
        }

        count++;
    }

    cout << count << endl;

    return 0;
}