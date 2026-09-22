// Problem ID: 039 | Difficulty: Medium
// Title: Matrix Search
// Project Type: 2D Array + Row/Column

#include <iostream>
using namespace std;

int main() {

    int numbers[3][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };

    int searchNumber;

    cout << "Enter a number to search: ";
    cin >> searchNumber;

    bool found = false;

    for (int row = 0; row < 3; row++) {

        for (int column = 0; column < 4; column++) {

            if (numbers[row][column] == searchNumber) {

                cout << "Number found!" << endl;
                cout << "Row: " << row << endl;
                cout << "Column: " << column << endl;

                found = true;
            }
        }
    }

    if (!found) {
        cout << "Number not found!" << endl;
    }

    return 0;
}