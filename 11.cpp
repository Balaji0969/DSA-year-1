// Problem ID: 011 | Difficulty: Easy
// Title: Print Numbers from 1 to N
// Category: While Loop

#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 1;

    cout << "Enter the input number to print: ";
    cin >> n;

    while (i <= n)
    {
        cout << i << endl;
        i++;
    }

    return 0;
}