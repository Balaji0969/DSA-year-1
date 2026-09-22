// Problem ID: 037 | Difficulty: Easy
// Title: Number Search
// Project Type: 1D Array + Searching

#include <iostream>
using namespace std;

int main() {

    int numbers[] = {10, 25, 30, 45, 50, 65, 80};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    int searchNumber;

    cout << "Enter a number to search: ";
    cin >> searchNumber;

    bool found = false;

    for (int i = 0; i < size; i++) {

        if (numbers[i] == searchNumber) {
            cout << "Number found at index: " << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Number not found!" << endl;
    }

    return 0;
}