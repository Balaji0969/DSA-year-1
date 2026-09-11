//Problem ID: 019 | Difficulty: Easy
// Title: Skip Odd Numbers
// Category: For Loop + Continue + Break

#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {

        if(i == 20) {
            break;
        }

        if(i % 2 != 0) {
            continue;
        }

        cout << i << endl;
    }

    return 0;
}