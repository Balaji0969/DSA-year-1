// Problem ID: 025 | Difficulty: Easy
// Title: Find Maximum of Two Numbers
// Category: User-Defined Function + Parameters + Return + If/Else

#include <iostream>
using namespace std;

int maximum(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int result = maximum(a, b);

    cout << "Maximum = " << result;

    return 0;
}