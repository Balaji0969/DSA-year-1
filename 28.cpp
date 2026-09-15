// Problem ID: 028 | Difficulty: Easy
// Title: Factorial Calculator
// Category: User-Defined Function + Loop + Return

#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int result = factorial(n);

    cout << "Factorial = " << result;

    return 0;
}