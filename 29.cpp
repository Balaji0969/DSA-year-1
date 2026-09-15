// Problem ID: 029 | Difficulty: Easy
// Title: Count the Number of Digits
// Category: User-Defined Function + While Loop + Return

#include <iostream>
using namespace std;

int countDigits(int n)
{
    int count = 0;

    if(n == 0)
    {
        return 1;
    }

    if(n < 0)
    {
        n = -n;
    }

    while(n > 0)
    {
        n = n / 10;
        count++;
    }

    return count;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int result = countDigits(n);

    cout << "Number of digits = " << result;

    return 0;
}