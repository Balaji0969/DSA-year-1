// Problem ID: 026 | Difficulty: Easy
// Title: Even or Odd Checker
// Category: User-Defined Function + Return + Modulus Operator

#include <iostream>
using namespace std;

bool isEven(int n)
{
    if(n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(isEven(n))
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }

    return 0;
}