// Problem ID: 014 | Difficulty: Medium
// Title: Hollow Rectangle Pattern
// Category: Nested Loops

#include <iostream>
using namespace std;

int main()
{
    int rows, columns;

    cout << "Enter rows and columns: ";
    cin >> rows >> columns;

    for (int row = 1; row <= rows; row++)
    {
        for (int col = 1; col <= columns; col++)
        {
            if (row == 1 || row == rows || col == 1 || col == columns)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}